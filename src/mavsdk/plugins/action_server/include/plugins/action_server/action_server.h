// WARNING: THIS FILE IS AUTOGENERATED! As such, it should not be edited.
// Edits need to be made to the proto files
// (see https://github.com/mavlink/MAVSDK-Proto/blob/main/protos/action_server/action_server.proto)

#pragma once

#include <array>
#include <cmath>
#include <functional>
#include <limits>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "mavsdk/server_plugin_base.h"

namespace mavsdk {

class ServerComponent;
class ActionServerImpl;

/**
 * @brief Provide vehicle actions (as a server) such as arming, taking off, and landing.
 */
class ActionServer : public ServerPluginBase {
public:
    /**
     * @brief Constructor. Creates the plugin for a ServerComponent instance.
     *
     * The plugin is typically created as shown below:
     *
     *     ```cpp
     *     auto action_server = ActionServer(server_component);
     *     ```
     *
     * @param server_component The ServerComponent instance associated with this server plugin.
     */
    explicit ActionServer(std::shared_ptr<ServerComponent> server_component);

    /**
     * @brief Destructor (internal use only).
     */
    ~ActionServer() override;

    /**
     * @brief Flight modes.
     *
     * For more information about flight modes, check out
     * https://docs.px4.io/master/en/config/flight_mode.html.
     */
    enum class FlightMode {
        Unknown, /**< @brief Mode not known. */
        Ready, /**< @brief Armed and ready to take off. */
        Takeoff, /**< @brief Taking off. */
        Hold, /**< @brief Holding (hovering in place (or circling for fixed-wing vehicles). */
        Mission, /**< @brief In mission. */
        ReturnToLaunch, /**< @brief Returning to launch position (then landing). */
        Land, /**< @brief Landing. */
        Offboard, /**< @brief In 'offboard' mode. */
        FollowMe, /**< @brief In 'follow-me' mode. */
        Manual, /**< @brief In 'Manual' mode. */
        Altctl, /**< @brief In 'Altitude Control' mode. */
        Posctl, /**< @brief In 'Position Control' mode. */
        Acro, /**< @brief In 'Acro' mode. */
        Stabilized, /**< @brief In 'Stabilize' mode. */
    };

    /**
     * @brief Stream operator to print information about a `ActionServer::FlightMode`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream& operator<<(std::ostream& str, ActionServer::FlightMode const& flight_mode);

    /**
     * @brief State to check if the vehicle can transition to
     * respective flightmodes
     */
    struct AllowableFlightModes {
        bool can_auto_mode{}; /**< @brief Auto/mission mode */
        bool can_guided_mode{}; /**< @brief Guided mode */
        bool can_stabilize_mode{}; /**< @brief Stabilize mode */
    };

    /**
     * @brief Equal operator to compare two `ActionServer::AllowableFlightModes` objects.
     *
     * @return `true` if items are equal.
     */
    friend bool operator==(
        const ActionServer::AllowableFlightModes& lhs,
        const ActionServer::AllowableFlightModes& rhs);

    /**
     * @brief Stream operator to print information about a `ActionServer::AllowableFlightModes`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream&
    operator<<(std::ostream& str, ActionServer::AllowableFlightModes const& allowable_flight_modes);

    /**
     * @brief Arming message type
     */
    struct ArmDisarm {
        bool arm{}; /**< @brief Should vehicle arm */
        bool force{}; /**< @brief Should arm override pre-flight checks */
    };

    /**
     * @brief Equal operator to compare two `ActionServer::ArmDisarm` objects.
     *
     * @return `true` if items are equal.
     */
    friend bool operator==(const ActionServer::ArmDisarm& lhs, const ActionServer::ArmDisarm& rhs);

    /**
     * @brief Stream operator to print information about a `ActionServer::ArmDisarm`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream& operator<<(std::ostream& str, ActionServer::ArmDisarm const& arm_disarm);

    /**
     * @brief Possible results returned for action requests.
     */
    enum class Result {
        Unknown, /**< @brief Unknown result. */
        Success, /**< @brief Request was successful. */
        NoSystem, /**< @brief No system is connected. */
        ConnectionError, /**< @brief Connection error. */
        Busy, /**< @brief Vehicle is busy. */
        CommandDenied, /**< @brief Command refused by vehicle. */
        CommandDeniedLandedStateUnknown, /**< @brief Command refused because landed state is
                                            unknown. */
        CommandDeniedNotLanded, /**< @brief Command refused because vehicle not landed. */
        Timeout, /**< @brief Request timed out. */
        VtolTransitionSupportUnknown, /**< @brief Hybrid/VTOL transition support is unknown. */
        NoVtolTransitionSupport, /**< @brief Vehicle does not support hybrid/VTOL transitions. */
        ParameterError, /**< @brief Error getting or setting parameter. */
        Next, /**< @brief Intermediate message showing progress or instructions on the next steps.
               */
    };

    /**
     * @brief Stream operator to print information about a `ActionServer::Result`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream& operator<<(std::ostream& str, ActionServer::Result const& result);

    /**
     * @brief Callback type for asynchronous ActionServer calls.
     */
    using ResultCallback = std::function<void(Result)>;

    /**
     * @brief Callback type for subscribe_arm_disarm.
     */

    using ArmDisarmCallback = std::function<void(Result, ArmDisarm)>;

    /**
     * @brief Subscribe to ARM/DISARM commands
     */
    void subscribe_arm_disarm(ArmDisarmCallback callback);

    /**
     * @brief Callback type for subscribe_flight_mode_change.
     */

    using FlightModeChangeCallback = std::function<void(Result, FlightMode)>;

    /**
     * @brief Subscribe to DO_SET_MODE
     */
    void subscribe_flight_mode_change(FlightModeChangeCallback callback);

    /**
     * @brief Callback type for subscribe_takeoff.
     */

    using TakeoffCallback = std::function<void(Result, bool)>;

    /**
     * @brief Subscribe to takeoff command
     */
    void subscribe_takeoff(TakeoffCallback callback);

    /**
     * @brief Callback type for subscribe_land.
     */

    using LandCallback = std::function<void(Result, bool)>;

    /**
     * @brief Subscribe to land command
     */
    void subscribe_land(LandCallback callback);

    /**
     * @brief Callback type for subscribe_reboot.
     */

    using RebootCallback = std::function<void(Result, bool)>;

    /**
     * @brief Subscribe to reboot command
     */
    void subscribe_reboot(RebootCallback callback);

    /**
     * @brief Callback type for subscribe_shutdown.
     */

    using ShutdownCallback = std::function<void(Result, bool)>;

    /**
     * @brief Subscribe to shutdown command
     */
    void subscribe_shutdown(ShutdownCallback callback);

    /**
     * @brief Callback type for subscribe_terminate.
     */

    using TerminateCallback = std::function<void(Result, bool)>;

    /**
     * @brief Subscribe to terminate command
     */
    void subscribe_terminate(TerminateCallback callback);

    /**
     * @brief Can the vehicle takeoff
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    Result set_allow_takeoff(bool allow_takeoff) const;

    /**
     * @brief Can the vehicle arm when requested
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    Result set_armable(bool armable, bool force_armable) const;

    /**
     * @brief Can the vehicle disarm when requested
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    Result set_disarmable(bool disarmable, bool force_disarmable) const;

    /**
     * @brief Set which modes the vehicle can transition to (Manual always allowed)
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    Result set_allowable_flight_modes(AllowableFlightModes flight_modes) const;

    /**
     * @brief Get which modes the vehicle can transition to (Manual always allowed)
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    ActionServer::AllowableFlightModes get_allowable_flight_modes() const;

    /**
     * @brief Copy constructor.
     */
    ActionServer(const ActionServer& other);

    /**
     * @brief Equality operator (object is not copyable).
     */
    const ActionServer& operator=(const ActionServer&) = delete;

private:
    /** @private Underlying implementation, set at instantiation */
    std::unique_ptr<ActionServerImpl> _impl;
};

} // namespace mavsdk
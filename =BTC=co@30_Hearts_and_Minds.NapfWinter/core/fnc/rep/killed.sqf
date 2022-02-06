
/* ----------------------------------------------------------------------------
Function: btc_rep_fnc_killed

Description:
    Change reputation when a player kill a unit.

Parameters:
    _unit - Unit killed. [Object]
    _killer - Killer. [Object]

Returns:

Examples:
    (begin example)
        [cursorObject, player] call btc_rep_fnc_killed;
    (end)

Author:
    Giallustio

---------------------------------------------------------------------------- */

params ["_unit", "_causeOfDeath", "_killer", "_instigator"];

if (
    (side group _unit isNotEqualTo civilian) &&
    {!isAgent teamMember _unit}
) exitWith {};

if (isPlayer _instigator) then {
    private _isAgent = isAgent teamMember _unit;
    [
        [btc_rep_malus_civ_killed, btc_rep_malus_animal_killed] select _isAgent,
        _instigator
    ] call btc_rep_fnc_change;
    if (btc_global_reputation < 600) then {
        [getPos _unit] call btc_rep_fnc_eh_effects;
    };

    if (btc_p_respawn_ticketsShare) then {
        [btc_player_side, -1] call btc_respawn_fnc_addTicket;
    } else {
        [_killer, -1, getPlayerUID _killer] call btc_respawn_fnc_addTicket;
    };

    if !(_isAgent) then {
        private _city = (group _unit) getVariable ["btc_city", objNull];
        if !(isNull _city) then {
            private _civKilled = _city getVariable ["btc_rep_civKilled", []];
            _civKilled pushBack [getPosASL _unit, getDir _unit];
            _city setVariable ["btc_rep_civKilled", _civKilled];
        };
    };

    if (btc_debug_log) then {
        [format ["GREP %1 THIS = %2", btc_global_reputation, _this], __FILE__, [false]] call btc_debug_fnc_message;
    };
};

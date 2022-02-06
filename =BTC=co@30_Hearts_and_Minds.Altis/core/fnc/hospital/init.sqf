
/* ----------------------------------------------------------------------------
Function: btc_hospital_fnc_init

Description:
    Init object as hospital

Parameters:
    _box - element used to heal players [Object]
   
Returns:

Examples:
    (begin example)
        [_box] call btc_fnc_hospital_init
    (end)

Author:
    ZartaK40

---------------------------------------------------------------------------- */

params[
	["_box", objNull, [objNull]]
];

[_box, false] call ace_dragging_fnc_setDraggable;
[_box, false] call ace_dragging_fnc_setCarryable;
[_box, -1] call ace_cargo_fnc_setSize;
[_box, -1] call ace_cargo_fnc_setSpace;

_action = ["Heal", localize "STR_BTC_HAM_ACTION_HOSPITAL_HEAL", "\A3\ui_f\data\igui\cfg\simpleTasks\types\heal_ca.paa", {[_target, 50] call btc_hospital_fnc_heal}, {true}] call ace_interact_menu_fnc_createAction;
[_box, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

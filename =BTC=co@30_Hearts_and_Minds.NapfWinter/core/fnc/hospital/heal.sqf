
/* ----------------------------------------------------------------------------
Function: btc_fnc_hospital_heal

Description:
    Heal players around

Parameters:
    _box - element used to heal players [Object]
    _area - size of the area to heal players inside [Number]

Returns:

Examples:
    (begin example)
        [btc_hospital, 50] call btc_fnc_hospital_heal
    (end)

Author:
    ZartaK40

---------------------------------------------------------------------------- */

params [
    ["_box", btc_hospital, [objNull]],
    ["_area", 100, [0]]
];


private _nearestPlayer = ([allPlayers,[],{_box distance _x},"ASCEND"]call BIS_fnc_sortBy);
{ [objNull, _x] call ace_medical_treatment_fnc_fullHeal } forEach _nearestPlayer;

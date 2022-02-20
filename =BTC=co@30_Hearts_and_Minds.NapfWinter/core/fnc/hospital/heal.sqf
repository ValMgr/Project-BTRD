
/* ----------------------------------------------------------------------------
Function: btc_hospital_fnc_heal

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
    ["_box", objNull, [objNull]],
    ["_area", 5, [0]]
];


private _nearestPlayer = ([allPlayers,[],{(_box distance _x) < _area},"ASCEND"] call BIS_fnc_sortBy);
{ [objNull, _x] call ace_medical_treatment_fnc_fullHeal } forEach _nearestPlayer;

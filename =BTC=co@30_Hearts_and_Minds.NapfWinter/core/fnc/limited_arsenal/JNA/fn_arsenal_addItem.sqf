#include "defineCommon.inc"

params["_object"];

private "_array";

if(typeName (_this select 1) isEqualTo "SCALAR")then{//[_index, _item] and [_index, _item, _amount];
	params["","_index","_item",["_amount",1]];
	_array = EMPTY_ARRAY;
	_array set [_index,[[_item,_amount]]];
}else{
	_array = _this select 1;
};

{
	private _index = _forEachIndex;
	{
		private _item = _x select 0;
		private _amount = _x select 1;


		if!(_item isEqualTo "" || {_item isEqualTo "ACE_PreloadedMissileDummy"}) then{

			if(_index == -1)exitWith{["ERROR in additemarsenal: %1", _this] call BIS_fnc_error};
			if(_index == IDC_RSCDISPLAYARSENAL_TAB_CARGOMAG)then{_index = IDC_RSCDISPLAYARSENAL_TAB_CARGOMAGALL};

			//TFAR fix
			private _radioName = getText(configfile >> "CfgWeapons" >> _item >> "tf_parent");
			if!(_radioName isEqualTo "")then{_item = _radioName};

			//fix for hosted sp
			private _playersInArsenal = +(_object getVariable ["jna_inUseBy",[]]);
			if!(0 in _playersInArsenal)then{_playersInArsenal pushBackUnique 2;};
			
			//update
			["UpdateItemAdd",[_index, _item, _amount, _object]] remoteExecCall ["jn_fnc_arsenal",_playersInArsenal];

		};
	} forEach _x;
}foreach _array;






/*
File: fn_seizePlayerWeapon.sqf
    Author: Skalicon
    
    Description:
    Preforms the seizePlayerWeaponAction script on the cursorTarget
	updated by: Dexter
*/
[[],"life_fnc_seizePlayerWeaponAction",cursorTarget,false] spawn life_fnc_MP;
titleText format["Took weapons from: %1",name player,_message];
[0,"STR_Cop_WeaponSeized"] remoteExecCall ["life_fnc_broadcast",west];
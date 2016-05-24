#include <macro.h>
/*
	File: fn_buyLicense.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Called when purchasing a license. May need to be revised.
*/
private["_type","_varName","_displayName","_sideFlag","_price"];
_type = SEL(_this,3);

if(!isClass (missionConfigFile >> "Licenses" >> _type)) exitWith {}; //Bad entry?
_varName = M_CONFIG(getText,"Licenses",_type,"variable");
_displayName = M_CONFIG(getText,"Licenses",_type,"displayName");
_price = M_CONFIG(getNumber,"Licenses",_type,"price");
_sideFlag = M_CONFIG(getText,"Licenses",_type,"side");
_varName = LICENSE_VARNAME(_varName,_sideFlag);

// Check to see if you are in a gang
if ( ( !isNil {(group player) getVariable "gang_owner"} ) && (_type == "corporation" || _type == "rebel") ) exitWith { 
	["You are currently in a Gang for your current faction? <BR/>Leave this gang before switching factions","Relinquish Error","OK"] call BIS_fnc_guiMessage; 
};

// Only allow corp to buy these licenses
if ( ((_type == "platinum")) && !(GVAR_MNS LICENSE_VARNAME("corporation","civ")) ) exitWith
{
	hint "You need a Corporation License before I can issue you with a Processing License.";
};

if ( ( 	(_type == "heroin") or 
		(_type == "marijuana") or 
		(_type == "cocaine") or 
		(_type == "meth")) && GVAR_MNS LICENSE_VARNAME("corporation","civ") ) exitWith
{
	hint "I refuse to teach a corporate stooge my processing secrets!";
};

if(CASH < _price) exitWith {hint format[localize "STR_NOTF_NE_1",[_price] call life_fnc_numberText,localize _displayName];};
[_price, 1, 0] call life_fnc_HandleMoney;

titleText[format[localize "STR_NOTF_B_1", localize _displayName,[_price] call life_fnc_numberText],"PLAIN"];
SVAR_MNS [_varName,true];

if( _type == "rebel") then
{
	[6] call life_fnc_removeLicenses;
};

if( _type == "corporation") then
{
	[4] call life_fnc_removeLicenses;
};

player setVariable["IsRebel", GVAR_MNS LICENSE_VARNAME("rebel","civ"),true];

[2] call SOCK_fnc_updatePartial;

[[player,GVAR_MNS LICENSE_VARNAME("corporation","civ"),playerSide],"life_fnc_CorpRadio",hc_1,false] spawn life_fnc_MP;
[[player,GVAR_MNS LICENSE_VARNAME("rebel","civ"),playerSide],"life_fnc_RebelRadio",hc_1,false] spawn life_fnc_MP;

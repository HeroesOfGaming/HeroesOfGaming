StartProgress = false;
enableSaving[false,false];

life_versionInfo = "Altis Life RPG v4.0";
[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] spawn life_fnc_fatigueReset;
[] Spawn life_fnc_autoMessages; // Auto News

StartProgress = true;

[] spawn 
{
	while{true} do 
	{
		uiSleep 10;
		200 setFog 0;
		uiSleep 590;
	};
};

[] spawn 
{
	while{true} do {
		uiSleep 10;
		200 setRain 0;
		uiSleep 590;
	};
};
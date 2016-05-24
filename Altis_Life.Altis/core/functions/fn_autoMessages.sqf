/* 
File: fn_autoMessages.sqf 
Author: BenjaminSansNom 
Description: Auto messages in game every X seconds
*/
[] spawn { 
// Add a line in this array to add a message 
_messages = [ 
"Server Peace Mode: <t size='1.5'>START 19/19/19 - END 19/19/19, this means DO NOT kill anyone or rob anyone whatsoever for the first week.</t>", 
"Our TeamSpeak:<br/><t color='#e32828' size='1.5'></t>" 
];
_refreshTime = 100; // Time between each message (in seconds) 
_i = 0; while {true} do { 
_count = count _messages; 
_message = _messages select _i; hint parseText format["<t color='#ffffff' size='2'>Heroes </t><t color='#c45454' size='2'>Of Gaming</t><br/><br/><img shadown='false' size='6' image='hoglife.jpg'/><br/><br/>%1", _message]; sleep _refreshTime; if (_i == (_count - 1)) then { _i = 0; } else { _i = _i + 1; }; };};
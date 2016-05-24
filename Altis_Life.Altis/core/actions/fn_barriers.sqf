/*
		File: fn_barrier.sqf
		Author: Warnerm14
		Desc: Everytime this is ran, it will open the menu.
	*/
	
		//Incase you run the menu again, this removes the old entrys so it doesnt double.
		player removeAction placebarrier;
		player removeAction placecone;
		player removeAction dropitem;
		player removeAction remove;	
		player removeaction cancelBarrier;
		player removeAction headerBarrier;
	
	//The header so make the list stand out.
	headerBarrier = player addaction [("<t color=""#FF3300"">" + ("### BARRIERS ###") +"</t>"),""];
	
	placebarrier = player addaction [("<t color=""#00ced1"">" + ("Place Barrier") +"</t>"),{ //SAME AS THE TOP
		detach placeable; 
		placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]);
		
		placeable = "Land_CncBarrier_F" createVehicle position player; 
		placeable attachTo [player, [0, 3, 0.4]]; 
	}];
	
	placecone = player addaction [("<t color=""#00ced1"">" + ("Place Cone") +"</t>"),{ //SAME AS THE TOP
		detach placeable; 
		placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]);
		
		placeable = "RoadCone_L_F" createVehicle position player; 
		placeable attachTo [player, [0, 2, 0.4]];
	}];
	
	dropitem = player addaction [("<t color=""#00ced1"">" + ("Drop") +"</t>"),{ //The drop item entry.
		detach placeable; //Detaches the object from the player.
		placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]); //Makes it level with the ground.
		placeable = apple; //Clears the varible to prevent bugs.
	}]; 
	
	remove = player addaction [("<t color=""#00ced1"">" + ("Remove") +"</t>"),{ //The remove item entry.
		_barrier = position player nearObjects ["Land_CncBarrier_F", 2]; //Detects concrete barriers within 2 meters.
		_cone = position player nearObjects ["RoadCone_L_F", 1]; //Detects cones within 1 meters.

		_remove = (_barrier select 0); //Selects barrier
		deleteVehicle _remove; //Deletes barrier
		
		_remove1 = (_cone select 0); //Selects cone
		deleteVehicle _remove1; //Deletes cone
		
		
		barrier = apple;
		
	}];
	
	// When ran this entry will remove all the barrier options from the action menu.
	cancelBarrier = player addaction [("<t color=""#FF3300"">" + ("### Close ###") +"</t>"),{
		player removeAction placebarrier;
		player removeAction placecone;
		player removeAction dropitem;
		player removeAction remove;	
		player removeaction cancelBarrier;
		player removeAction headerBarrier;
		placeable = apple;
	}];
	
	//Thanks for downloading :]
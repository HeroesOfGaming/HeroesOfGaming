class WeaponShops {
    //Armory Shops
    class gun {
        name = "International Firearms";
        side = "civ";
        license = "gun";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 16500 },
            { "hgun_Pistol_heavy_02_F", "", 19850 },
            { "hgun_ACPC2_F", "", 21500 },
            { "hgun_PDW2000_F", "", 30000 },
            { "optic_ACO_grn_smg", "", 1000 },
            { "V_Rangemaster_belt", "", 7500 },
            { "16Rnd_9x21_Mag", "", 800 },
            { "9Rnd_45ACP_Mag", "", 800 },
            { "6Rnd_45ACP_Cylinder", "", 800 },
            { "30Rnd_9x21_Mag", "", 800 }
        };
    };
    class rebel {
        name = "International Rebel Firearms";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
			//MK
			{ "srifle_DMR_01_F", "", 500000, "" },
			{ "10Rnd_762x54_Mag", "", 2500, "" },
			
			//MX Series
			{ "arifle_MX_SW_F", "", 400000, "" },
			{ "100Rnd_65x39_caseless_mag", "", 4000, "" },
			{ "arifle_MXM_F", "", 250000, "" },
			{ "arifle_MX_GL_F", "", 200000, "" },
			{ "arifle_MXC_F", "", 150000, "" },
			{ "30Rnd_65x39_caseless_mag", "", 2500, "" },
			
			//5 56
			{ "arifle_Katiba_GL_F", "", 200000, "" },
			{ "arifle_TRG21_F", "", 135000, "" },
			{ "arifle_Mk20_F", "", 135000, "" },
			{ "30Rnd_556x45_Stanag", "", 1000, "" },
			
			//SDAR
			{ "arifle_SDAR_F", "", 60000, "" },
			{ "30Rnd_556x45_Stanag", "", 350000, "" },
			
			//Pistols
		    { "hgun_Rook40_F", "", 16500 },
            { "hgun_Pistol_heavy_02_F", "", 10850 },
            { "hgun_ACPC2_F", "", 21500 },
            { "hgun_PDW2000_F", "", 30000 },
			
			//Pistol Mags
            { "16Rnd_9x21_Mag", "", 800 },
            { "9Rnd_45ACP_Mag", "", 800 },
            { "6Rnd_45ACP_Cylinder", "", 800 },
            { "30Rnd_9x21_Mag", "", 800 },
			
			//Attachments
			{ "optic_Arco", "", 2500 },
            { "optic_Hamr", "", 2500 },
            { "optic_AMS", "", 10000 },
            { "optic_Holosight", "", 2500 },
			{ "optic_Aco", "", 2500 },
			
			//Silencers
            { "muzzle_snds_M", "", 100000 },
			{ "muzzle_snds_H", "", 150000 },
            { "muzzle_snds_B", "", 250000 },
            
			
			//Bipods
			{ "bipod_01_F_blk", "", 1000 },
            { "bipod_01_F_mtp", "", 1000 }
        };
    };
	
	  class advanced_rebel {
        name = "International Advanced Rebel Firearms";
        side = "civ";
        license = "advanced_rebel";
        level = -1;
        msg = "";
        items[] = {
			//7 62
			{ "srifle_DMR_01_F", "", 500000, "" },
			{ "10Rnd_762x54_Mag", "", 2500, "" },
			{ "srifle_EBR_F", "", 600000, "" },
			{ "srifle_DMR_03_F", "", 600000, "" },
			{ "srifle_DMR_06_camo_F", "", 600000, "" },
			{ "20Rnd_762x51_Mag", "", 5000, "" },
			{ "LMG_Zafir_F", "", 1400000, "" },
			{ "150Rnd_762x54_Box", "", 10500, "" },
			
			//6 5
			{ "arifle_MX_SW_F", "", 400000, "" },
			{ "100Rnd_65x39_caseless_mag", "", 4000, "" },
			{ "arifle_MXM_F", "", 250000, "" },
			{ "arifle_MX_GL_F", "", 200000, "" },
			{ "arifle_MXC_F", "", 150000, "" },
			{ "30Rnd_65x39_caseless_mag", "", 2500, "" },
			{ "LMG_Mk200_F", "", 900000, "" },
			{ "200Rnd_65x39_cased_Box", "", 10000, "" },
			
			//5 56
			{ "arifle_Katiba_GL_F", "", 200000, "" },
			{ "arifle_TRG21_F", "", 135000, "" },
			{ "arifle_Mk20_F", "", 135000, "" },
			{ "30Rnd_556x45_Stanag", "", 1000, "" },
			
			//SDAR
			{ "arifle_SDAR_F", "", 60000, "" },
			{ "30Rnd_556x45_Stanag", "", 350000, "" },
			
			//Pistols
		    { "hgun_Rook40_F", "", 16500 },
            { "hgun_Pistol_heavy_02_F", "", 10850 },
            { "hgun_ACPC2_F", "", 21500 },
            { "hgun_PDW2000_F", "", 30000 },
			
			//Pistol Mags
            { "16Rnd_9x21_Mag", "", 800 },
            { "9Rnd_45ACP_Mag", "", 800 },
            { "6Rnd_45ACP_Cylinder", "", 800 },
            { "30Rnd_9x21_Mag", "", 800 },
			
			//Attachments
			{ "optic_Arco", "", 2500 },
            { "optic_Hamr", "", 2500 },
            { "optic_AMS", "", 10000 },
            { "optic_Holosight", "", 2500 },
			{ "optic_Aco", "", 2500 },
			
			//Silencers
			{ "muzzle_snds_H", "", 150000 },
            { "muzzle_snds_M", "", 100000 },
            { "muzzle_snds_B", "", 250000 },
            
			
			//Bipods
			{ "bipod_01_F_blk", "", 1000 },
            { "bipod_01_F_mtp", "", 1000 }
        };
    };
	
	class corporation {
        name = "International Corporation Firearms";
        side = "civ";
        license = "corporation";
        level = -1;
        msg = "";
        items[] = {
			//7 62
			{ "srifle_DMR_01_F", "", 500000, "" },
			{ "10Rnd_762x54_Mag", "", 2500, "" },
			{ "srifle_EBR_F", "", 600000, "" },
			{ "srifle_DMR_03_F", "", 600000, "" },
			{ "srifle_DMR_06_camo_F", "", 600000, "" },
			{ "20Rnd_762x51_Mag", "", 5000, "" },
			{ "LMG_Zafir_F", "", 1400000, "" },
			{ "150Rnd_762x54_Box", "", 10500, "" },
			
			//6 5
			{ "arifle_MX_SW_F", "", 400000, "" },
			{ "100Rnd_65x39_caseless_mag", "", 4000, "" },
			{ "arifle_MXM_F", "", 250000, "" },
			{ "arifle_MX_GL_F", "", 200000, "" },
			{ "arifle_MXC_F", "", 150000, "" },
			{ "30Rnd_65x39_caseless_mag", "", 2500, "" },
			{ "LMG_Mk200_F", "", 900000, "" },
			{ "200Rnd_65x39_cased_Box", "", 10000, "" },
			
			//5 56
			{ "arifle_Katiba_GL_F", "", 200000, "" },
			{ "arifle_TRG21_F", "", 135000, "" },
			{ "arifle_Mk20_F", "", 135000, "" },
			{ "30Rnd_556x45_Stanag", "", 1000, "" },
			
			//SDAR
			{ "arifle_SDAR_F", "", 60000, "" },
			{ "30Rnd_556x45_Stanag", "", 350000, "" },
			
			//Pistols
		    { "hgun_Rook40_F", "", 16500 },
            { "hgun_Pistol_heavy_02_F", "", 10850 },
            { "hgun_ACPC2_F", "", 21500 },
            { "hgun_PDW2000_F", "", 30000 },
			
			//Pistol Mags
            { "16Rnd_9x21_Mag", "", 800 },
            { "9Rnd_45ACP_Mag", "", 800 },
            { "6Rnd_45ACP_Cylinder", "", 800 },
            { "30Rnd_9x21_Mag", "", 800 },
			
			//Attachments
			{ "optic_Arco", "", 2500 },
            { "optic_Hamr", "", 2500 },
            { "optic_AMS", "", 10000 },
            { "optic_Holosight", "", 2500 },
			{ "optic_Aco", "", 2500 },
			
			//Silencers
			{ "muzzle_snds_H", "", 150000 },
            { "muzzle_snds_M", "", 100000 },
            { "muzzle_snds_B", "", 250000 },
            
			
			//Bipods
			{ "bipod_01_F_blk", "", 1000 },
            { "bipod_01_F_mtp", "", 1000 }
        };
    };
	
	class advanced_corporation {
        name = "International Advanced Corporation Firearms";
        side = "civ";
        license = "advanced_corporation";
        level = -1;
        msg = "";
        items[] = {
			//7 62
			{ "srifle_DMR_01_F", "", 500000, "" },
			{ "10Rnd_762x54_Mag", "", 2500, "" },
			{ "srifle_EBR_F", "", 600000, "" },
			{ "srifle_DMR_03_F", "", 600000, "" },
			{ "srifle_DMR_06_camo_F", "", 600000, "" },
			{ "20Rnd_762x51_Mag", "", 5000, "" },
			{ "LMG_Zafir_F", "", 1400000, "" },
			{ "150Rnd_762x54_Box", "", 10500, "" },
			
			//6 5
			{ "arifle_MX_SW_F", "", 400000, "" },
			{ "100Rnd_65x39_caseless_mag", "", 4000, "" },
			{ "arifle_MXM_F", "", 250000, "" },
			{ "arifle_MX_GL_F", "", 200000, "" },
			{ "arifle_MXC_F", "", 150000, "" },
			{ "30Rnd_65x39_caseless_mag", "", 2500, "" },
			{ "LMG_Mk200_F", "", 900000, "" },
			{ "200Rnd_65x39_cased_Box", "", 10000, "" },
			
			//5 56
			{ "arifle_Katiba_GL_F", "", 200000, "" },
			{ "arifle_TRG21_F", "", 135000, "" },
			{ "arifle_Mk20_F", "", 135000, "" },
			{ "30Rnd_556x45_Stanag", "", 1000, "" },
			
			//SDAR
			{ "arifle_SDAR_F", "", 60000, "" },
			{ "30Rnd_556x45_Stanag", "", 350000, "" },
			
			//Pistols
		    { "hgun_Rook40_F", "", 16500 },
            { "hgun_Pistol_heavy_02_F", "", 10850 },
            { "hgun_ACPC2_F", "", 21500 },
            { "hgun_PDW2000_F", "", 30000 },
			
			//Pistol Mags
            { "16Rnd_9x21_Mag", "", 800 },
            { "9Rnd_45ACP_Mag", "", 800 },
            { "6Rnd_45ACP_Cylinder", "", 800 },
            { "30Rnd_9x21_Mag", "", 800 },
			
			//Attachments
			{ "optic_Arco", "", 2500 },
            { "optic_Hamr", "", 2500 },
            { "optic_AMS", "", 10000 },
            { "optic_Holosight", "", 2500 },
			{ "optic_Aco", "", 2500 },
			
			//Silencers
			{ "muzzle_snds_H", "", 150000 },
            { "muzzle_snds_M", "", 100000 },
            { "muzzle_snds_B", "", 250000 },
            
			
			//Bipods
			{ "bipod_01_F_blk", "", 1000 },
            { "bipod_01_F_mtp", "", 1000 }
        };
    };
	
    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500 },
            { "hgun_Pistol_heavy_02_F", "", 2500 },
            { "hgun_ACPC2_F", "", 4500 },
            { "hgun_PDW2000_F", "", 9500 },
            { "optic_ACO_grn_smg", "", 950 },
            { "V_Rangemaster_belt", "", 1900 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };
    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
        	{ "Binocular", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "NVGoggles", "", 2000 },
			{ "Chemlight_red", "", 300 },
			{ "Chemlight_yellow", "", 300 },
			{ "Chemlight_green", "", 300 },
			{ "Chemlight_blue", "", 300 }
        };
    };
    //Cop Shops
    class cop_basic {
        name = "PCSO Equipment";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
			//Weapons
			{ "hgun_P07_snds_F", "Taser Pistol", 0 },
			
			//Mags
			{ "16Rnd_9x21_Mag", "", 0 },
			
			//Items
			{ "Binocular", "", 0 },
			{ "ItemGPS", "", 0 },
			{ "ToolKit", "", 0 },
			{ "FirstAidKit", "", 0 },
			{ "NVGoggles", "", 0 }
        };
    };
    class cop_patrol {
        name = "Police Constable Equipment";
        side = "cop";
        license = "";
        level = 2;
        msg = "You must be a Police Constable Rank!";
        items[] = {
			//Weapons
			{ "hgun_P07_snds_F", "Taser Pistol", 0 },
			{ "SMG_01_F", "", 0 },
			{ "SMG_02_F", "", 0 },
			
			//Mags
			{ "16Rnd_9x21_Mag", "", 0 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 0 },
			{ "30Rnd_9x21_Mag", "", 0 },
			
			//Attachments
			{ "optic_Arco", "", 0 },
			{ "optic_Hamr", "", 0 },
			{ "optic_MRCO", "", 0 },
			{ "acc_flashlight", "", 0 },
			
			
			//Items
			{ "Binocular", "", 0 },
			{ "ItemGPS", "", 0 },
			{ "ToolKit", "", 0 },
			{ "FirstAidKit", "", 0 },
			{ "NVGoggles", "", 0 }
        };
    };
	
	class cop_spc {
        name = "SPC Equipment";
        side = "cop";
        license = "";
        level = 3;
      msg = "You must be a Senior Police Constable Rank!";
        items[] = {
			//Weapons
			{ "hgun_P07_snds_F", "Taser Pistol", 0 },
			{ "SMG_01_F", "", 0 },
			{ "SMG_02_F", "", 0 },
			{ "arifle_MX_F", "", 0 },
			
			//Mags
			{ "16Rnd_9x21_Mag", "", 0 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 0 },
			{ "30Rnd_9x21_Mag", "", 0 },
			{ "30Rnd_65x39_caseless_mag", "", 0 },
			
			//Attachments
			{ "optic_Arco", "", 0 },
			{ "optic_Hamr", "", 0 },
			{ "optic_MRCO", "", 0 },
			{ "acc_flashlight", "", 0 },
			
			//Bipods
			{ "bipod_01_F_blk", "", 0 },
			
			//Items
			{ "Binocular", "", 0 },
			{ "ItemGPS", "", 0 },
			{ "ToolKit", "", 0 },
			{ "FirstAidKit", "", 0 },
			{ "NVGoggles", "", 0 }
        };
    };
	
    class cop_sergeant {
        name = "Sergeant Equipment";
        side = "cop";
        license = "";
        level = 4;
      msg = "You must be a Sergeant Rank!";
        items[] = {
            //Weapons
			{ "hgun_P07_snds_F", "Taser Pistol", 0 },
			{ "SMG_01_F", "", 0 },
			{ "SMG_02_F", "", 0 },
			{ "arifle_MX_F", "", 0 },
			{ "arifle_MXC_F", "", 0 },
			{ "arifle_MX_SW_F", "", 0 },
			
			//Mags
			{ "16Rnd_9x21_Mag", "", 0 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 0 },
			{ "30Rnd_9x21_Mag", "", 0 },
			{ "30Rnd_65x39_caseless_mag", "", 0 },
			{ "100Rnd_65x39_caseless_mag", "", 0 },
			
			//Attachments
			{ "optic_Arco", "", 0 },
			{ "optic_Hamr", "", 0 },
			{ "optic_MRCO", "", 0 },
			{ "optic_DMS", "", 0 },
			{ "acc_flashlight", "", 0 },
			
			//Bipods
			{ "bipod_01_F_blk", "", 0 },
			
			//Items
			{ "Binocular", "", 0 },
			{ "ItemGPS", "", 0 },
			{ "ToolKit", "", 0 },
			{ "FirstAidKit", "", 0 },
			{ "NVGoggles", "", 0 }
        };
    };
	
	class cop_insp {
        name = "Inspector Equipment";
        side = "cop";
        license = "";
        level = 5;
      msg = "You must be an Inspector Rank!";
        items[] = {
            //Weapons
			{ "hgun_P07_snds_F", "Taser Pistol", 0 },
			{ "SMG_01_F", "", 0 },
			{ "SMG_02_F", "", 0 },
			{ "arifle_MX_F", "", 0 },
			{ "arifle_MXM_F", "", 0 },
			{ "arifle_MXC_F", "", 0 },
			{ "arifle_MX_SW_F", "", 0 },
			
			//Mags
			{ "16Rnd_9x21_Mag", "", 0 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 0 },
			{ "30Rnd_9x21_Mag", "", 0 },
			{ "30Rnd_65x39_caseless_mag", "", 0 },
			{ "100Rnd_65x39_caseless_mag", "", 0 },
			
			//Attachments
			{ "optic_Arco", "", 0 },
			{ "optic_Hamr", "", 0 },
			{ "optic_MRCO", "", 0 },
			{ "optic_DMS", "", 0 },
			{ "optic_AMS", "", 0 },
			{ "acc_flashlight", "", 0 },
			{ "muzzle_snds_H", "", 0 },
			{ "muzzle_snds_L", "", 0 },
			{ "muzzle_snds_acp", "", 0 },
			
			//Bipods
			{ "bipod_01_F_blk", "", 0 },
			
			//Items
			{ "Binocular", "", 0 },
			{ "ItemGPS", "", 0 },
			{ "ToolKit", "", 0 },
			{ "FirstAidKit", "", 0 },
			{ "NVGoggles", "", 0 }
        };
    };
	
	class cop_cinsp {
        name = "Chief Inspector Equipment";
        side = "cop";
        license = "";
        level = 6;
      msg = "You must be a Chief Inspector Rank!";
        items[] = {
			//Weapons
			{ "hgun_P07_snds_F", "Taser Pistol", 0 },
			{ "SMG_01_F", "", 0 },
			{ "SMG_02_F", "", 0 },
			{ "arifle_MX_F", "", 0 },
			{ "arifle_MXM_F", "", 0 },
			{ "arifle_MXC_F", "", 0 },
			{ "arifle_MX_SW_F", "", 0 },
			{ "srifle_EBR_F", "", 0 },
			
			//Mags
			{ "16Rnd_9x21_Mag", "", 0 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 0 },
			{ "30Rnd_9x21_Mag", "", 0 },
			{ "30Rnd_65x39_caseless_mag", "", 0 },
			{ "100Rnd_65x39_caseless_mag", "", 0 },
			{ "20Rnd_762x51_Mag", "", 0 },
			
			//Attachments
			{ "optic_Arco", "", 0 },
			{ "optic_Hamr", "", 0 },
			{ "optic_MRCO", "", 0 },
			{ "optic_DMS", "", 0 },
			{ "optic_AMS", "", 0 },
			{ "optic_LRPS", "", 0 },
			{ "acc_flashlight", "", 0 },
			{ "muzzle_snds_H", "", 0 },
			{ "muzzle_snds_L", "", 0 },
			{ "muzzle_snds_B", "", 0 },
			{ "muzzle_snds_acp", "", 0 },
			
			//Bipods
			{ "bipod_01_F_blk", "", 0 },
			
			//Items
			{ "Binocular", "", 0 },
			{ "ItemGPS", "", 0 },
			{ "ToolKit", "", 0 },
			{ "FirstAidKit", "", 0 },
			{ "NVGoggles", "", 0 }
        };
    };
	
	class cop_supt {
        name = "Superintendent Equipment";
        side = "cop";
        license = "";
        level = 7;
      msg = "You must be a Superintendent Rank!";
        items[] = {
			//Weapons
			{ "hgun_P07_snds_F", "Taser Pistol", 0 },
			{ "SMG_01_F", "", 0 },
			{ "SMG_02_F", "", 0 },
			{ "arifle_MX_F", "", 0 },
			{ "arifle_MXM_F", "", 0 },
			{ "arifle_MXC_F", "", 0 },
			{ "arifle_MX_SW_F", "", 0 },
			{ "srifle_EBR_F", "", 0 },
			{ "srifle_DMR_06_olive_F", "", 0 },
			
			//Flashbang
			{ "HandGrenade_Stone", "", 0 },
			
			//Mags
			{ "16Rnd_9x21_Mag", "", 0 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 0 },
			{ "30Rnd_9x21_Mag", "", 0 },
			{ "30Rnd_65x39_caseless_mag", "", 0 },
			{ "100Rnd_65x39_caseless_mag", "", 0 },
			{ "20Rnd_762x51_Mag", "", 0 },
			
			//Attachments
			{ "optic_Arco", "", 0 },
			{ "optic_Hamr", "", 0 },
			{ "optic_MRCO", "", 0 },
			{ "optic_DMS", "", 0 },
			{ "optic_AMS", "", 0 },
			{ "optic_LRPS", "", 0 },
			{ "acc_flashlight", "", 0 },
			{ "muzzle_snds_H", "", 0 },
			{ "muzzle_snds_L", "", 0 },
			{ "muzzle_snds_B", "", 0 },
			{ "muzzle_snds_acp", "", 0 },
			
			//Bipods
			{ "bipod_01_F_blk", "", 0 },
			
			//Items
			{ "Binocular", "", 0 },
			{ "ItemGPS", "", 0 },
			{ "ToolKit", "", 0 },
			{ "FirstAidKit", "", 0 },
			{ "NVGoggles", "", 0 }
        };
    };
	
	class cop_csupt {
        name = "Chief Supt Equipment";
        side = "cop";
        license = "";
        level = 8;
      msg = "You must be a Chief Superintendent Rank!";
        items[] = {
			//Weapons
			{ "hgun_P07_snds_F", "Taser Pistol", 0 },
			{ "SMG_01_F", "", 0 },
			{ "SMG_02_F", "", 0 },
			{ "arifle_MX_F", "", 0 },
			{ "arifle_MXM_F", "", 0 },
			{ "arifle_MXC_F", "", 0 },
			{ "arifle_MX_SW_F", "", 0 },
			{ "srifle_EBR_F", "", 0 },
			{ "srifle_DMR_06_olive_F", "", 0 },
			
			//Flashbang
			{ "HandGrenade_Stone", "", 0 },
			
			//Mags
			{ "16Rnd_9x21_Mag", "", 0 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 0 },
			{ "30Rnd_9x21_Mag", "", 0 },
			{ "30Rnd_65x39_caseless_mag", "", 0 },
			{ "100Rnd_65x39_caseless_mag", "", 0 },
			{ "20Rnd_762x51_Mag", "", 0 },
			
			//Attachments
			{ "optic_Arco", "", 0 },
			{ "optic_Hamr", "", 0 },
			{ "optic_MRCO", "", 0 },
			{ "optic_DMS", "", 0 },
			{ "optic_AMS", "", 0 },
			{ "optic_LRPS", "", 0 },
			{ "acc_flashlight", "", 0 },
			{ "muzzle_snds_H", "", 0 },
			{ "muzzle_snds_L", "", 0 },
			{ "muzzle_snds_B", "", 0 },
			{ "muzzle_snds_acp", "", 0 },
			
			//Bipods
			{ "bipod_01_F_blk", "", 0 },
			
			//Items
			{ "Binocular", "", 0 },
			{ "ItemGPS", "", 0 },
			{ "ToolKit", "", 0 },
			{ "FirstAidKit", "", 0 },
			{ "NVGoggles", "", 0 }
        };
    };
	
	class cop_cc {
        name = "Chief Constable Equipment";
        side = "cop";
        license = "";
        level = 9;
      msg = "You must be a Chief Constable Rank!";
        items[] = {
			//Weapons
			{ "hgun_P07_snds_F", "Taser Pistol", 0 },
			{ "SMG_01_F", "", 0 },
			{ "SMG_02_F", "", 0 },
			{ "arifle_MX_F", "", 0 },
			{ "arifle_MXM_F", "", 0 },
			{ "arifle_MXC_F", "", 0 },
			{ "arifle_MX_SW_F", "", 0 },
			{ "srifle_EBR_F", "", 0 },
			{ "srifle_DMR_06_olive_F", "", 0 },
			{ "LMG_Mk200_F", "", 0 },
			
			//Flashbang
			{ "HandGrenade_Stone", "", 0 },
			
			//Mags
			{ "16Rnd_9x21_Mag", "", 0 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 0 },
			{ "30Rnd_9x21_Mag", "", 0 },
			{ "30Rnd_65x39_caseless_mag", "", 0 },
			{ "100Rnd_65x39_caseless_mag", "", 0 },
			{ "20Rnd_762x51_Mag", "", 0 },
			{ "200Rnd_65x39_cased_Box", "", 0 },
			
			//Attachments
			{ "optic_Arco", "", 0 },
			{ "optic_Hamr", "", 0 },
			{ "optic_MRCO", "", 0 },
			{ "optic_DMS", "", 0 },
			{ "optic_AMS", "", 0 },
			{ "optic_LRPS", "", 0 },
			{ "acc_flashlight", "", 0 },
			{ "muzzle_snds_H", "", 0 },
			{ "muzzle_snds_L", "", 0 },
			{ "muzzle_snds_B", "", 0 },
			{ "muzzle_snds_acp", "", 0 },
			
			//Bipods
			{ "bipod_01_F_blk", "", 0 },
			
			//Items
			{ "Binocular", "", 0 },
			{ "ItemGPS", "", 0 },
			{ "ToolKit", "", 0 },
			{ "FirstAidKit", "", 0 },
			{ "NVGoggles", "", 0 }
        };
    };
	
	class cop_sco19 {
        name = "SCO19 Equipment";
        side = "cop";
        license = "sco19";
        level = 9;
      msg = "You must be a Chief Constable Rank!";
        items[] = {
			//Weapons
			{ "hgun_P07_snds_F", "Taser Pistol", 0 },
			{ "SMG_01_F", "", 0 },
			{ "SMG_02_F", "", 0 },
			{ "arifle_MX_F", "", 0 },
			{ "arifle_MXM_F", "", 0 },
			{ "arifle_MXC_F", "", 0 },
			{ "arifle_MX_SW_F", "", 0 },
			{ "srifle_EBR_F", "", 0 },
			{ "srifle_DMR_06_olive_F", "", 0 },
			{ "LMG_Mk200_F", "", 0 },
			
			//Flashbang
			{ "HandGrenade_Stone", "", 0 },
			
			//Mags
			{ "16Rnd_9x21_Mag", "", 0 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 0 },
			{ "30Rnd_9x21_Mag", "", 0 },
			{ "30Rnd_65x39_caseless_mag", "", 0 },
			{ "100Rnd_65x39_caseless_mag", "", 0 },
			{ "20Rnd_762x51_Mag", "", 0 },
			{ "200Rnd_65x39_cased_Box", "", 0 },
			
			//Attachments
			{ "optic_Arco", "", 0 },
			{ "optic_Hamr", "", 0 },
			{ "optic_MRCO", "", 0 },
			{ "optic_DMS", "", 0 },
			{ "optic_AMS", "", 0 },
			{ "optic_LRPS", "", 0 },
			{ "acc_flashlight", "", 0 },
			{ "muzzle_snds_H", "", 0 },
			{ "muzzle_snds_L", "", 0 },
			{ "muzzle_snds_B", "", 0 },
			{ "muzzle_snds_acp", "", 0 },
			
			//Bipods
			{ "bipod_01_F_blk", "", 0 },
			
			//Items
			{ "Binocular", "", 0 },
			{ "ItemGPS", "", 0 },
			{ "ToolKit", "", 0 },
			{ "FirstAidKit", "", 0 },
			{ "NVGoggles", "", 0 }
        };
    };
	
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level = -1;
        items[] = {
            { "ItemGPS", "", 0 },
			{ "Binocular", "", 0 },
			{ "ToolKit", "", 0 },
			{ "FirstAidKit", "", 0 },
			{ "Medikit", "", 0 },
			{ "NVGoggles", "", 0 },
			{ "B_FieldPack_ocamo", "", 0 }
        };
    };
};

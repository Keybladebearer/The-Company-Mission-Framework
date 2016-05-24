class RUS {
			// Example: [this,"RUS","PL"] call tb3_fLoadout; [this, class, loadout]	
			// Russian Ground Forces Gear Script by Keyblade
			// Info:
			// - If it is crashing ARMA, check for a missing comma, or " (it will tell you the line number to look at)
			// - For multi line definitions use \
			// - All loadouts listed are customised to correct equipment, so have fun with them
			
			//		Infantry Loadouts
			//		PC			- Platoon Commander 
			//		RTO 		- Platoon Sgt. (as Radio Operator)
			//		SL 			- Squad leader
			//      FO          - Forward Observer
			//		MOL			- Mortar Leader 
			//		MED 		- Medic
			//		FTL			- Fire team leader
			//		RIF 		- Rifleman 
			//		AR 			- Automatic rifleman
			//		ARR			- Assistant automatic rifleman 
			//		RAT			- Rifleman (AT)
			//      MMG         - Medium MG
			//      MMGA        - Mediem MG assistant
			//		MAT			- Medium AT
			//		MATA		- Medium AT assistant
			//		MARK		- Marksman
			//		SN			- Sniper
			//		SP			- Spotter (for sniper) 
			//		VC			- Vehicle crew 
			//		PIL		    - Pilot
			//		ENG			- Engineer
			//
			//		Vehicle Cargo Loadouts
			//		V_CAR		- car/4x4/jeep
			//		V_TR		- truck
			//		V_IFV		- ifv
			
			
			//========================Equipment Definitions========================
			//=== Weapons ===
			
			//Attachments
			#define rifle_sup "CUP_muzzle_PBS4"
			#define ar_sup "hlc_muzzle_762SUP_AK"
			#define aim_scope "CUP_optic_Kobra"
			#define ar_scope "CUP_optic_PechenegScope"
			#define marksman_scope "CUP_optic_PSO_1"
			#define mat_scope "CUP_optic_PGO7V3"
			
			// Standard Riflemen (Assistants, Rifleman)
			#define rifle "CUP_arifle_AK74M"
			#define riflemag "CUP_30Rnd_545x39_AK_M"
			#define riflemag_tr "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M" 
			
			//Auto-Rifleman
			#define ar "CUP_arifle_RPK74_45"
			#define armag "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M" // Green Tracer 45 Round
			
			//Rifleman AT
			#define rat "CUP_launch_RPG18"
			#define ratmag "ACE_PreloadedMissileDummy_RPG18_CUP"
			
			//Medium MG
			#define mmg "CUP_lmg_Pecheneg"
			#define mmgmag "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
			
			//Medium AT
			#define mat "CUP_launch_RPG7V"
			#define matmag "CUP_PG7VL_M"
			
			// Rifle with GL and HE grenades - CO, DC, FTLs
			#define glrifle "CUP_arifle_AK74M_GL"
			#define glriflemag "CUP_30Rnd_545x39_AK_M"
			#define glriflemag_tr "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"
			#define glmag {"CUP_1Rnd_HE_GP25_M",15}
			
			//Marksman/Sniper
			#define dmr "CUP_srifle_SVD"
			#define sniper "CUP_srifle_SVD_des" // has camo skin
			#define dmrMag "CUP_10Rnd_762x54_SVD_M"
			
			// Standard Sub-machine Gun/Personal Defence Weapon (Aircraft Pilot, Sub-machine-gunner, Vehicle Crew) 
			#define smg "CUP_arifle_AKS74U" 
			#define smgmag "CUP_30Rnd_545x39_AK_M"
			#define smgmag_tr "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"
			
			// Smoke for FTLs, Squad Leaders, etc //use with HLC AK's only
			#define glsmoke {"CUP_1Rnd_SMOKE_GP25_M",6},  \
								{"CUP_1Rnd_SmokeGreen_GP25_M",3}, \
								{"CUP_1Rnd_SmokeRed_GP25_M",3},  \
								{"CUP_1Rnd_SmokeYellow_GP25_M",3}

			// Flare gl grenades - CO, DC, FTLs        //Dont use with HLC AK's at all
			#define glflare 	{"CUP_FlareWhite_GP25_M",3}, \
									{"CUP_FlareRed_GP25_M",2}, \
									{"CUP_FlareGreen_GP25_M",2}
									
			// Grenades
			#define grenade "CUP_HandGrenade_RGD5"
			#define smokegrenadewhite "SmokeShell"
			#define handFlareRed "ACE_HandFlare_Red"
			#define handFlareGreen "ACE_HandFlare_Green"
			#define handFlareWhite "ACE_HandFlare_White"
			#define handFlareYellow "ACE_HandFlare_Yellow"
			
			//=== MISC ===
			
			//Chemical lights
			#define chemred "Chemlight_red"
			
			// ace equipment - what everyone should have
			#define ace_default	{"ACE_fieldDressing",10}, \
								{"ACE_morphine",1}, \
								{"ACE_EarPlugs",1},\
								{ACE_bodyBag,1},\
								{"ACE_Flashlight_XL50",1}


			//Override for a Medic					
			#define ace_medic	{"ACE_fieldDressing",30}, \
								{"ACE_morphine",15}, \
								{"ACE_epinephrine",10}, \
								{"ACE_bloodIV_500",6}, \
								{"ACE_EarPlugs",1}, \
								{"ACE_Flashlight_XL50",1}
			
			//Other ace
			#define ace_epipen "ACE_epinephrine" // For PC, SL, FTL
			#define ace_sparebarrel "ACE_SpareBarrel"
			#define ace_defuse "ACE_DefusalKit"   
			#define ace_firing_device "ACE_Clacker"
			#define ace_mrangetable "ACE_RangeTable_82mm"
			
			//Double Misc
			#define toolkit "ToolKit"
			#define explosive "DemoCharge_Remote_Mag"
			#define at_mine "CUP_MineE_M"
			#define ap_mine "APERSMine_Range_Mag"
			#define minedetector "MineDetector"
			#define binoculars "Binocular"
			#define range_finder "ACE_MX2A"
			#define laserd "Laserdesignator"
			#define battery "Laserbatteries"
			
			//Radio 
			#define long_range "ACRE_PRC148" //Long range - Short-wave
			#define short_range "ACRE_PRC343" //Short range -Short-wave
					
			//=== Clothes ===

			//Uniform		
			#define default_uniform "CUP_U_O_RUS_EMR_1", "CUP_U_O_RUS_EMR_2"
			#define pilot_uniform "CUP_U_O_RUS_EMR_1"
			#define sniper_uniform "CUP_U_O_RUS_Ghillie"
				
			//Headgear
			#define leader_headgear "CUP_H_RUS_Bandana_HS"
			#define default_headgear "CUP_H_RUS_6B27"
			#define vcrew_headgear "CUP_H_RUS_TSH_4_Brown"
			#define pilot_headgear "CUP_H_RUS_ZSH_Shield_Down"
			#define aircrew_headgear "CUP_H_RUS_ZSH_Shield_Up"
			#define sniper_headgear ""
			
			//Backpack
			#define default_backpack "CUP_B_HikingPack_Civ"
			#define rpg_backpack "CUP_B_RPGPack_Khaki"
			#define pilot_backpack "CUP_B_AssaultPack_Coyote"
			#define engineer_backpack "CUP_B_RUS_Backpack"
			#define mortg_backpack "CUP_B_Podnos_Gun_Bag"
			#define morta_backpack "CUP_B_Podnos_Bipod_Bag"
			
			
			//Vests
			#define vest_default "CUP_V_RUS_6B3_2"
			#define vest_medic "CUP_V_RUS_6B3_3"
			#define vest_engineer "CUP_V_RUS_6B3_1"
			#define vest_sniper "CUP_V_RUS_Smersh_1"
			#define vest_vehiclecrew "CUP_V_RUS_6B3_3"
			#define vest_pilot "CUP_V_I_Carrier_Belt"
			#define vest_leader "CUP_V_RUS_6B3_1"
			
			//Face
			#define facecover ""
			
			//=== EQUIPMENT ===
			//MUST BE ONE LINE
			#define leader_equipment "ItemWatch","ItemMap","ItemGPS","ItemCompass"//With GPS
			#define default_equipment "ItemWatch","ItemMap","ItemCompass"
			#define crew_equipment "ItemWatch","ItemMap","ItemGPS","ItemCompass","ace_NVG_Gen4" //With GPs and NVG for vic crews
			//========================Class Loadouts Definitions========================
			//================Platoon Leader==================
			class PC {
				weapons[] = {glrifle,binoculars};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
					};
					backpackItems[] = {
						ace_default,
						{ace_epipen,1},
						{glriflemag_tr,2},
						glmag,
						glsmoke
					};
				headgear[] = {leader_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_leader};
					vestMagazines[] = {
						{glriflemag,8}
					};
				assignedItems[] = {leader_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Platoon Sgt. (RTO)==================
			class RTO {
				weapons[] = {glrifle,binoculars};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
					};
					backpackItems[] = {
						ace_default,
						{ace_epipen,1},
						{glriflemag_tr,2},
						glsmoke,
						glmag
					};
				headgear[] = {leader_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_leader};
					vestMagazines[] = {
						{glriflemag,8}
					};
				assignedItems[] = {leader_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Squad Leader (deputy leader)==================
			class SL {
				weapons[] = {glrifle,binoculars};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
					};
					backpackItems[] = {
						ace_default,
						{ace_epipen,1},
						{glriflemag_tr,2},
						glsmoke,
						glmag
					};
				headgear[] = {leader_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_leader};
					vestMagazines[] = {
						{glriflemag,8}
					};
				assignedItems[] = {leader_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Forward Observer==================
			class FO {
				weapons[] = {smg,laserd};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
					    {battery,1}
					};
					backpackItems[] = {
						ace_default,
					    {ace_epipen,1}
					};
				headgear[] = {default_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_default};
					vestMagazines[] = {
						{riflemag,8}
					};
				assignedItems[] = {default_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			
						//================Mortar Leader==================
			class MOLG {
				weapons[] = {rifle,binoculars};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {mortg_backpack};
					backpackMagazines[] = {
					};
					backpackItems[] = {
					};
				headgear[] = {leader_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{grenade,2},
						{long_range,1},
						{short_range,1},					
						ace_default,
						{ACE_epinephrine,1},
						{ace_mrangetable, 1}
					};
				goggles[] = {};
				vest[] = {vest_ftl_leader};
					vestMagazines[] = {
						{riflemag,7}
					};
				assignedItems[] = {leader_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Mortar Assist==================
			class MOLA {
				weapons[] = {rifle,binoculars};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {morta_backpack};
					backpackMagazines[] = {
					};
					backpackItems[] = {	
					};
				headgear[] = {leader_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{grenade,2},
						{long_range,1},
						{short_range,1},						
						ace_default,
						{ACE_epinephrine,1},
						{ace_mrangetable, 1}
					};
				goggles[] = {};
				vest[] = {vest_ftl_leader};
					vestMagazines[] = {
						{riflemag,7}
					};
				assignedItems[] = {leader_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Medic==================
			class MED {
				weapons[] = {smg};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
					};
					backpackItems[] = {
						ace_medic,
						
					};
				headgear[] = {default_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {					    
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_medic};
					vestMagazines[] = {
						{smgmag,5},
						{smokegrenadewhite,8}
					};
				assignedItems[] = {default_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Team Leader==================
			class FTL {
				weapons[] = {glrifle,binoculars};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
					};
					backpackItems[] = {
						ace_default,
						{ace_epipen,1},
						{glriflemag_tr,2},
						glsmoke,
						glmag
					};
				headgear[] = {leader_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{grnade,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_leader};
					vestMagazines[] = {
						{glriflemag,8}
					};
				assignedItems[] = {leader_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Rifleman==================
			class RIF {
				weapons[] = {rifle};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
					};
					backpackItems[] = {
						ace_default,
						{riflemag,2}
					};
				headgear[] = {default_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{grenade,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_default};
					vestMagazines[] = {
						{riflemag,8}
					};
				assignedItems[] = {default_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Auto-Rifleman (Machine Gunner)==================
			class AR {
				weapons[] = {ar};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
						{armag,3}
					};
					backpackItems[] = {
						ace_default,
						{ace_sparebarrel,1}
					};
				headgear[] = {default_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {short_range,1},
						{smokegrenadewhite,2},
						{grenade,1}
					};
				goggles[] = {};
				vest[] = {vest_default};
					vestMagazines[] = {
						{armag,3}
					};
				assignedItems[] = {default_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Auto-Rifleman Assistant==================
			class ARR {
				weapons[] = {rifle};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
						{armag,3},
						{riflemag,2}
					};
					backpackItems[] = {
						ace_default
					};
				headgear[] = {default_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{grenade,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_default};
					vestMagazines[] = {
						{riflemag,8}
					};
				assignedItems[] = {default_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Rifleman (AT)==================
			class RAT {
				weapons[] = {rifle,rat};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
						{ratmag,1},
						{riflemag,2}
					};
					backpackItems[] = {
						ace_default
					};
				headgear[] = {default_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{grenade,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_default};
					vestMagazines[] = {
						{riflemag,8}
					};
				assignedItems[] = {default_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};//================Medium MG==================
			class MMG {
				weapons[] = {mmg};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
						{mmgmag,2}
					};
					backpackItems[] = {
						ace_default,
						{ace_sparebarrel,1}
					};
				headgear[] = {default_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_default};
					vestMagazines[] = {
						{mmgmag,2}
					};
				assignedItems[] = {leader_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Medium MG assistant==================
			class MMGA {
				weapons[] = {rifle,range_finder};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
					    {mmgmag,3}
					};
					backpackItems[] = {
						ace_default
					};
				headgear[] = {default_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_default};
					vestMagazines[] = {
						{riflemag,8}
					};
				assignedItems[] = {default_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Medium (AT)==================
			class MAT {
				weapons[] = {rifle,mat};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {rpg_backpack};
					backpackMagazines[] = {	
						{matmag,2}
					};
					backpackItems[] = {
						ace_default
					};
				headgear[] = {default_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_default};
					vestMagazines[] = {
						{riflemag,8}
					};
				assignedItems[] = {leader_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {mat_scope};
			};
			//================Medium (AT) Assistant==================
			class MATA {
				weapons[] = {rifle,range_finder};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {rpg_backpack};
					backpackMagazines[] = {	
						{matmag,4}
					};
					backpackItems[] = {
						ace_default,
						{short_range,1}
					};
				headgear[] = {default_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_default};
					vestMagazines[] = {
						{riflemag,8}
					};
				assignedItems[] = {default_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Designated Marksman==================
			class MARK {
				weapons[] = {dmr,binoculars};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
					};
					backpackItems[] = {
						ace_default,
						{dmrMag,2}
					};
				headgear[] = {default_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{grenade,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_sniper};
					vestMagazines[] = {
						{dmrMag,6}
					};
				assignedItems[] = {default_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {marksman_scope};
				secKit[] = {};
			};
			//================Sniper==================
			class SN {
				weapons[] = {sniper};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
					};
					backpackItems[] = {
						ace_default
					};
				headgear[] = {sniper_headgear};
				uniform[] = {sniper_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_sniper};
					vestMagazines[] = {
						{dmrMag,6}
					};
				assignedItems[] = {leader_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {marksman_scope};
				secKit[] = {};
			};
			//================Spotter==================
			class SP {
				weapons[] = {rifle,range_finder};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
					};
					backpackItems[] = {
						ace_default
					};
				headgear[] = {sniper_headgear};
				uniform[] = {sniper_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_default};
					vestMagazines[] = {
						{riflemag,8}
					};
				assignedItems[] = {defualt_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Vehicle Crew==================
			class VC {
				weapons[] = {smg};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
					};
					backpackItems[] = {
						ace_default,
						{ace_epipen,1},
						{toolkit,1}
					};
				headgear[] = {vcrew_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_vehiclecrew};
					vestMagazines[] = {
						{smgmag,5}
					};
				assignedItems[] = {crew_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Pilot==================
			class PIL {
				weapons[] = {smg};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
					};
					backpackItems[] = {
					    ace_default,
						{ace_epipen,1},
						{toolkit,1}
					};
				headgear[] = {aircrew_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_pilot};
					vestMagazines[] = {
					    {smgmag,3}
					};
				assignedItems[] = {crew_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Engineer==================
			class ENG {
				weapons[] = {smg};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {engineer_backpack};
					backpackMagazines[] = {
					};
					backpackItems[] = {
						ace_default,
						{toolkit,1},
						{ace_defuse,1},
						{ace_firing_device,1},
						{explosive,6}
					};
				headgear[] = {default_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_engineer};
					vestMagazines[] = {
						{smgmag,6}
					};
				assignedItems[] = {leader_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Vehicle Loadouts==================
			class V_CAR {
				vehCargoWeapons[] = {
				    {rat,2}
				};
				vehCargoMagazines[] = {
					{riflemag,20},
					{riflemag_tr,10},
					{ratmag,2},
					{mmgmag,5},
					{dmrMag,5},
					{armag,15},
					{matmag,3},
					{glmag,5}
				};
				vehCargoItems[] = { 
				{smokegrenadewhite,5},
				{grenade,5}
				};
				vehCargoRucks[] = { };
			};
			class V_TR {
				vehCargoWeapons[] = { 
				    {rat,2}
				};
				vehCargoMagazines[] = {
					{riflemag,30},
					{riflemag_tr,10},
					{ratmag,2},
					{mmgmag,10},
					{dmrMag,10},
					{armag,20},
					{matmag,4},
					{glmag,10}
				};
				vehCargoItems[] = { 
				{smokegrenadewhite,10},
				{grenade,10},
				ace_medic
				};
				vehCargoRucks[] = { };
			};
			class V_IFV {
				vehCargoWeapons[] = {
				    {rat,2}
				};
				vehCargoMagazines[] = {
					{riflemag,30},
					{riflemag_tr,10},
					{mmgmag,10},
					{dmrMag,10},
					{armag,20},
					{matmag,4},
					{glmag,10},
					{ratmag,2}
					
				};
				vehCargoItems[] = { 
				{smokegrenadewhite,10},
				{grenade,10},
				ace_medic
				};
			};
};

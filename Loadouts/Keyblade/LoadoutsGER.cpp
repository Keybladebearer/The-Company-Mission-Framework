class GER {
			// Example: [this,"USA","PL"] call tb3_fLoadout; [this, class, loadout]	
			// Default German Motorized Gear Script by Keyblade
			// Info:
			// - If it is crashing ARMA, check for a missing comma, or " (it will tell you the line number to look at, if a definition is in front check that)
			// - For multi line definitions use \
			// - All loadouts listed are customised to correct equipment, so have fun with them
			
			//		Infantry Loadouts
			//		PC			- Platoon Commander 
			//		RTO 			- Platoon Sgt. (as Radio Operator)
			//		SL 			- Squad Leader
			//      	FO          		- Forward Observer
			//		MOL			- Mortar Leader
			//		MED 			- Medic
			//		FTL			- Fire team leader
			//		RIF 			- Rifleman 
			//		AR 			- Automatic rifleman
			//		ARR			- Assistant automatic rifleman 
			//		RAT			- Rifleman (AT)
			//      	MMG     	    	- Medium MG
			//		MMGA        		- Medium MG assistant
			//		MAT			- Medium AT
			//		MATA			- Medium AT assistant
			//		MARK			- Marksman
			//		SN			- Sniper
			//		SP			- Spotter (for sniper) 
			//		VC			- Vehicle Crew 
			//		PIL			- Pilot / Aircrew
			//		ENG			- Engineer
			//
			//		Vehicle Cargo Loadouts
			//		V_CAR		- Car/4x4/jeep
			//		V_TR		- Truck
			//		V_IFV		- Ifv
			
			
			//========================Equipment Definitions========================
			//=== Weapons ===
			
			//Attachments
			#define suppressor "CUP_muzzle_snds_M16" // Rifle only
			#define laser_light "CUP_acc_ANPEQ_15" // Rifle only
			
			#define aim_scope "BWA3_optic_EOTech_tan_Mag_Off"
			#define holo_scope "CUP_optic_Eotech533"
			#define rifle_scope "CUP_optic_ACOG"
			#define mg_scope "CUP_optic_ElcanM145"
			#define sniper_scope "CUP_optic_SB_3_12x50_PMII"
			#define marksman_scope "CUP_optic_SB_11_4x20_PM"
			#define bipod "CUP_bipod_Harris_1A2_L"
			
			// Standard Riflemen (Assistants, Rifleman)
			#define rifle "hlc_rifle_G36V"
			#define riflemag "hlc_30rnd_556x45_EPR_G36"
			#define riflemag_tr "hlc_30rnd_556x45_Tracers_G36"
			#define carbine "hlc_rifle_G36CV"
			#define carbinemag "hlc_30rnd_556x45_EPR_G36"
			#define carbinemag_tr "hlc_30rnd_556x45_Tracers_G36"
			
			//Auto-Rifleman
			#define ar "BWA3_MG4"
			#define armag "BWA3_200Rnd_556x45_Tracer" // Red tracer
			
			//Rifleman AT
			#define rat "BWA3_Pzf3"
			#define ratmag "BWA3_Pzf3_IT"
			
			//Medium MG
			#define mmg "BWA3_MG5"
			#define mmgmag "BWA3_120Rnd_762x51_Tracer" // White tracer
			
			//Medium AT
			#define mat "BWA3_RGW90"
			#define matmag "BWA3_RGW90_HH"
			
			// Rifle with GL and HE grenades - CO, DC, FTLs
			#define glrifle "hlc_rifle_G36VAG36"
			#define glriflemag "hlc_30rnd_556x45_EPR_G36"
			#define glriflemag_tr "hlc_30rnd_556x45_Tracers_G36"
			#define glmag {"CUP_1Rnd_HEDP_M203",15}
			
			//Marksman
			#define dmr "BWA3_G28_Assault"
			#define dmrMag "BWA3_20Rnd_762x51_G28_AP"
			
			//Sniper
			#define sniper "hlc_rifle_awmagnum"
			#define snipermag "hlc_5rnd_300WM_FMJ_AWM"
			
			// Standard Sub-machine Gun/Personal Defence Weapon (Aircraft Pilot, Sub-machine-gunner, Vehicle Crew) 
			#define smg "hlc_smg_mp5a3"
			#define smgmag "hlc_30Rnd_9x19_B_MP5"
			
			// Smoke for FTLs, Squad Leaders, etc
			#define glsmoke {"CUP_1Rnd_Smoke_M203",8},  \
								{"CUP_1Rnd_SmokeGreen_M203",4}, \
								{"CUP_1Rnd_SmokeRed_M203",4} , \
								{"CUP_1Rnd_SmokeYellow_M203",4}

			// Flare gl grenades - CO, DC, FTLs - Will need to be added for night missions
			#define glflare 	{"CUP_FlareWhite_M203",3}, \
									{"CUP_FlareRed_M203",2}, \
									{"CUP_FlareGreen_M203",2}
									
			// Grenades
			#define grenade "BWA3_DM51A1"
			#define smokegrenadewhite "BWA3_DM25"
			#define smokegrenadegreen "BWA3_DM32_Orange"
			#define handFlareRed "ACE_HandFlare_Red"
			#define handFlareGreen "ACE_HandFlare_Green"
			#define handFlareWhite "ACE_HandFlare_White"
			#define handFlareYellow "ACE_HandFlare_Yellow"
			
			//=== MISC ===
			
			//Chemical lights
			#define chemblue "Chemlight_blue"
			
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
			#define at_mine "ATMine_Range_Mag"
			#define ap_mine "APERSBoundingMine_Range_Mag"
			#define minedetector "MineDetector"
			#define binoculars "Binocular"
			#define range_finder "lerca_1200_tan"
			#define laserd "Laserdesignator"
			#define battery "Laserbatteries"
			
			//Radio 
			#define long_range "ACRE_PRC148" //Long range - Short-wave
			#define short_range "ACRE_PRC343" //Short range -Short-wave
					
			//=== Clothes ===

			//Uniform		
			#define default_uniform "BWA3_Uniform2_Tropen", "BWA3_Uniform_Tropen"
			#define crew_uniform "BWA3_Uniform_Crew_Tropen"
			
			//Headgear
			#define leader_headgear "BWA3_Beret_PzGren"
			#define default_headgear "BWA3_M92_Tropen"
			#define vcrew_headgear "BWA3_CrewmanKSK_Tropen_Headset"
			#define pilot_headgear "BWA3_Knighthelm"
			#define sniper_headgear "BWA3_Booniehat_Tropen" 
			
			//Backpack
			#define default_backpack "BWA3_PatrolPack_Tropen"
			#define crew_backpack "BWA3_FieldPack_Tropen"
			#define engineer_backpack "BWA3_PatrolPack_Tropen"
			#define mortg_backpack "CUP_B_M252_Gun_Bag"
			#define morta_backpack "CUP_B_M252_Bipod_Bag"
			
			//Vests
			#define vest_default "BWA3_Vest_Rifleman1_Tropen"
			#define vest_medic "BWA3_Vest_Medic_Tropen"
			#define vest_engineer "BWA3_Vest_Rifleman1_Tropen"
			#define vest_sniper "BWA3_Vest_Tropen"
			#define vest_vehiclecrew "BWA3_Vest_Tropen"
			#define vest_leader "BWA3_Vest_Leader_Tropen"
			#define vest_ftl_leader "BWA3_Vest_Leader_Tropen"
			
			//Face
			#define facecover "G_Bandanna_khk"
			#define glasses "G_Aviator", "G_Shades_Black", "G_Shades_Blue", "G_Sport_Blackred", "G_Spectacles_Tinted"
			
			//=== EQUIPMENT ===
			//MUST BE ONE LINE
			#define leader_equipment "ItemMap","ItemGPS","ItemCompass","ItemWatch"//With GPS
			#define default_equipment "ItemMap","ItemCompass","ItemWatch"
			#define crew_equipment "ItemMap","ItemGPS","ItemCompass","ACE_NVG_Gen4","ItemWatch" //With GPs and NVG for vic crews
			#define leader_equipment "ItemWatch","ItemMap","ItemGPS","ItemCompass"//With GPS
			#define default_equipment "ItemWatch","ItemMap","ItemCompass"
			#define crew_equipment "ItemWatch","ItemMap","ItemGPS","ItemCompass","ACE_NVG_Gen4" //With GPs and NVG for vic crews
			
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
						{ACE_epinephrine,1},
						glmag,
						glsmoke
					};
				headgear[] = {leader_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{grenade,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_leader};
					vestMagazines[] = {
						{glriflemag,7},
						{glriflemag_tr,3}
					};
				assignedItems[] = {leader_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {holo_scope};
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
						{ACE_epinephrine,1},
						glmag,
						glsmoke
					};
				headgear[] = {leader_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{grenade,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_leader};
					vestMagazines[] = {
						{glriflemag,7},
						{glriflemag_tr,3}
					};
				assignedItems[] = {leader_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {holo_scope};
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
						{ACE_epinephrine,1},
						glmag,
						glsmoke
					};
				headgear[] = {leader_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{grenade,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_ftl_leader};
					vestMagazines[] = {
						{glriflemag,7},
						{glriflemag_tr,3}
					};
				assignedItems[] = {leader_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {holo_scope};
				secKit[] = {};
			};
			//================Forward Observer==================
			class FO {
				weapons[] = {rifle,laserd};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
					    {battery,1}
					};
					backpackItems[] = {
						ace_default,
					    {ACE_epinephrine,1}
					};
				headgear[] = {default_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,4},
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
				weapons[] = {carbine};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {
					};
					backpackItems[] = {
						ace_medic
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
						{carbinemag,7},
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
						{ACE_epinephrine,1},
						glmag,
						glsmoke
					};
				headgear[] = {default_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{grenade,2},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_default};
					vestMagazines[] = {
						{glriflemag,7},
						{glriflemag_tr,3}
					};
				assignedItems[] = {leader_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {holo_scope};
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
						ace_default
					};
				headgear[] = {default_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{grenade,2},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_default};
					vestMagazines[] = {
						{riflemag,11}
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
						{armag,1}
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
						{grenade,2},
						{short_range,1}
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
						{armag,2}
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
						{grenade,2},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_default};
					vestMagazines[] = {
						{riflemag,11}
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
						{ratmag,1}
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
						{grenade,2},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_default};
					vestMagazines[] = {
						{riflemag,11}
					};
				assignedItems[] = {default_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Medium MG==================
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
						{grenade,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_default};
					vestMagazines[] = {
						{mmgmag,3}
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
						{grenade,2},
						{short_range,1}
					};
				goggles[] = {""};
				vest[] = {vest_default};
					vestMagazines[] = {
						{riflemag,11}
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
				backpack[] = {default_backpack};
					backpackMagazines[] = {	
						{matmag,1}
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
						{grenade,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_default};
					vestMagazines[] = {
						{riflemag,11}
					};
				assignedItems[] = {leader_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Medium (AT) Assistant==================
			class MATA {
				weapons[] = {rifle,range_finder};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {default_backpack};
					backpackMagazines[] = {	
						{matmag,1}
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
						{grenade,2},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_default};
					vestMagazines[] = {
						{riflemag,11}
					};
				assignedItems[] = {defualt_equipment};
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
						ace_default
					};
				headgear[] = {sniper_headgear};
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{grenade,2},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_sniper};
					vestMagazines[] = {
						{dmrMag,8}
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
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{grenade,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_sniper};
					vestMagazines[] = {
						{snipermag,8}
					};
				assignedItems[] = {leader_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {sniper_scope};
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
				uniform[] = {default_uniform};
					uniformMagazines[] = {
					};
					uniformItems[] = {
					    {smokegrenadewhite,2},
						{grenade,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_default};
					vestMagazines[] = {
						{riflemag,11}
					};
				assignedItems[] = {defualt_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Vehicle Crew==================
			class VC {
				weapons[] = {smg,binoculars};
				magazines[] = {	}; //do not use if using specific allocation of magazines
				backpack[] = {crew_backpack};
					backpackMagazines[] = {
					    {smgmag,2}
					};
					backpackItems[] = {
						ace_default,
						{ACE_epinephrine,1},
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
						{smgmag,2},
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
				backpack[] = {crew_backpack};
					backpackMagazines[] = {
					    {smgmag,2}
					};
					backpackItems[] = {
						ace_default,
						{ACE_epinephrine,1},
						{toolkit,1}
					};
				headgear[] = {pilot_headgear};
				uniform[] = {pilot_uniform};
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
						{smgmag,2},
					};
				assignedItems[] = {crew_equipment};
				items[] = {	}; //do not use if using specific allocation of items
				
				priKit[] = {};
				secKit[] = {};
			};
			//================Engineer==================
			class ENG {
				weapons[] = {rifle};
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
						{grenade,2},
						{long_range,1},
						{short_range,1}
					};
				goggles[] = {};
				vest[] = {vest_engineer};
					vestMagazines[] = {
						{riflemag,8}
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
					{riflemag,30},
					{riflemag_tr,8},
					{ratmag,2},
					{dmrMag,5},
					{armag,5},
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
					{riflemag,50},
					{riflemag_tr,10},
					{ratmag,2},
					{dmrMag,20},
					{armag,15},
					{matmag,6},
					{glmag,15}
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
					{ratmag,2},
					{dmrMag,10},
					{armag,10},
					{matmag,4},
					{glmag,10},
					
				};
				vehCargoItems[] = { 
				{smokegrenadewhite,5},
				{grenade,5},
				ace_medic
				};
			};
};

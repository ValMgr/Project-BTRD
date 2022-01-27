class Params {
    class btc_p_time_title { // << Time options >>
        title = $STR_BTC_HAM_PARAM_TIME_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_time { // Set the start time:
        title = __EVAL(format ["      %1", localize "STR_A3_CFGVEHICLES_MODULEDATE_F_ARGUMENTS_HOUR_0"]);
        values[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
        texts[]={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24"};
        default = 12;
    };
    class btc_p_acctime { // Acceleration time multiplier:
        title = __EVAL(format ["      %1", localize "STR_USRACT_TIME_INC"]);
        values[]={1,2,3,4,5,6,7,8,9,10,11,12};
        texts[]={"1","2","3","4","5","6","7","8","9","10","11","12"};
        default = 5;
    };
    class btc_p_load { // Load the savegame (if available)
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_DB_LOAD"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_auto_db { // Auto savegame when all players disconnected
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_DB_ASAVE"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED}; // texts[]={"Off","On"};
        default = 0;
    };
    class btc_p_db_autoRestart { // Auto restart/shutdown server (Must define in server.cfg: serverCommandPassword = "btc_password")
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_DB_ARESTART"]);
        values[]={0,1,2,3,4};
        texts[]={$STR_DISABLED,$STR_DISP_MP_DS_RESTART,$STR_BTC_HAM_PARAM_DB_SHUTDOWN,$STR_BTC_HAM_PARAM_DB_SAVERESTART, $STR_BTC_HAM_PARAM_DB_SAVESHUTDOWN}; // texts[]={"Off","Restart", "Shutdown","Save and restart", "Save and shutdown"};
        default = 0;
    };
    class btc_p_db_autoRestartTime { // Time before auto restart/shutdown server
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_DB_ARESTARTTIME"]);
        values[]={1,2,3,4,5,6,7,8,9,10,11,12,24,48,72};
        texts[]={"1h","2h","3h","4h","5h","6h","7h","8h","9h","10h","11h","12h","24h","48h","72h"};
        default = 72;
    };
    class btc_p_respawn_title { // << Respawn options >>
        title = $STR_BTC_HAM_RESP_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_respawn_location { // Respawn locations available:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_LOCATION"]);
        values[]={0,1,2,3,4};
        texts[]={$STR_BTC_HAM_RESP_FOBRALLY, $STR_BTC_HAM_RESP_FOBRALLYHELO, $STR_BTC_HAM_RESP_FOBRALLYHELI, $STR_BTC_HAM_RESP_FOBRALLYHELIVEHI, $STR_BTC_HAM_RESP_FOBRALLYHELIVEHILEADER};
        default = 4;
    };
    class btc_p_respawn_fromFOBToBase { // Allow respawn from FOB to base:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_FOBTOBASE"]);
        values[]={0,1};
        texts[]={$STR_DISABLED, $STR_ENABLED};
        default = 0;
    };
    class btc_p_rallypointTimer { // Time before rallypoint self-destruction:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_RALLYTIMER"]);
        values[]={0,5,10,30,60};
        texts[]={$STR_DISABLED,"5 min","10 min","30 min","60 min"};
        default = 30;
    };
    class btc_p_respawn_arsenal { // ACE Arsenal available on respawn after been killed:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_ENABLEARSENAL"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_type_title { // << Faction options >>
        title = $STR_BTC_HAM_PARAM_FAC_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_agression { // Agression level
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_EAGRE"]);
        values[]={-1, 0,1,2,3,4,5};
        texts[]={$STR_DISABLED, "0","1","2","3","4","5"};
        default = 0;
    };
    class btc_p_en { // Enemy type:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_ETYPE"]);
        values[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79};
        texts[]= {"0 - Bohemia Interactive: AAF (Side: GUER)","1 - Bohemia Interactive: CSAT (Side: EAST)","2 - Bohemia Interactive: FIA (Side: EAST)","3 - Bohemia Interactive: FIA (Side: GUER)","4 - Bohemia Interactive: FIA (Side: WEST)","5 - Bohemia Interactive: LDF (Side: GUER)","6 - Bohemia Interactive: OTAN (Side: WEST)","7 - Bohemia Interactive: Pillards (Side: GUER)","8 - Bohemia Interactive: Syndikat (Side: GUER)","9 - CHA Chairborne: USMC (Side: WEST)","10 - Enoch Bohemia Interactive: Spetsnaz (Side: EAST)","11 - Expansion Bohemia Interactive: CSAT (Pacifique) (Side: EAST)","12 - Expansion Bohemia Interactive: CTRG (Side: WEST)","13 - Expansion Bohemia Interactive: Gendarmerie (Side: EAST)","14 - Expansion Bohemia Interactive: Gendarmerie (Side: WEST)","15 - Expansion Bohemia Interactive: OTAN (Pacifique) (Side: WEST)","16 - LOP_LeightsOPFOR Project OPFOR: Afghan National Army and Police (Side: WEST)","17 - LOP_LeightsOPFOR Project OPFOR: African Militia (Side: EAST)","18 - LOP_LeightsOPFOR Project OPFOR: African Militia (Side: GUER)","19 - LOP_LeightsOPFOR Project OPFOR: Boko Haram (Side: EAST)","20 - LOP_LeightsOPFOR Project OPFOR: CDF (Project OPFOR) (Side: WEST)","21 - LOP_LeightsOPFOR Project OPFOR: ChDKZ (Project OPFOR) (Side: EAST)","22 - LOP_LeightsOPFOR Project OPFOR: Chernarussian National Insurgents (Side: GUER)","23 - LOP_LeightsOPFOR Project OPFOR: Hellenic Armed Forces (Side: WEST)","24 - LOP_LeightsOPFOR Project OPFOR: Iranian Armed Forces (Side: GUER)","25 - LOP_LeightsOPFOR Project OPFOR: Iraqi Armed Forces (Side: WEST)","26 - LOP_LeightsOPFOR Project OPFOR: Irish Republican Army (Side: EAST)","27 - LOP_LeightsOPFOR Project OPFOR: Islamic State (Side: EAST)","28 - LOP_LeightsOPFOR Project OPFOR: Islamic State (Side: GUER)","29 - LOP_LeightsOPFOR Project OPFOR: Korean People's Army (Side: EAST)","30 - LOP_LeightsOPFOR Project OPFOR: Kurdish Peshmerga Forces (Side: GUER)","31 - LOP_LeightsOPFOR Project OPFOR: Kurdish Peshmerga Forces (Side: WEST)","32 - LOP_LeightsOPFOR Project OPFOR: Middle Eastern Militia (Side: EAST)","33 - LOP_LeightsOPFOR Project OPFOR: Middle Eastern Militia (Side: GUER)","34 - LOP_LeightsOPFOR Project OPFOR: Private Military Company (Side: GUER)","35 - LOP_LeightsOPFOR Project OPFOR: Royal Army Corps of Sahrani (Side: GUER)","36 - LOP_LeightsOPFOR Project OPFOR: Sahrani Liberation Army (Side: EAST)","37 - LOP_LeightsOPFOR Project OPFOR: Syrian Armed Forces (Side: EAST)","38 - LOP_LeightsOPFOR Project OPFOR: Takistani Armed Forces (Side: EAST)","39 - LOP_LeightsOPFOR Project OPFOR: Turkish Armed Forces (Side: GUER)","40 - LOP_LeightsOPFOR Project OPFOR: Ukrainian Armed Forces (Side: GUER)","41 - LOP_LeightsOPFOR Project OPFOR: Ulster Volunteer Force (Side: GUER)","42 - LOP_LeightsOPFOR Project OPFOR: Ultranationalists (Side: GUER)","43 - LOP_LeightsOPFOR Project OPFOR: United Armed Forces of Novorossiya (Side: EAST)","44 - LOP_LeightsOPFOR Project OPFOR: United Nations (Side: GUER)","45 - Mark Bohemia Interactive: OTAN (forÃªt) (Side: WEST)","46 - RHS Red Hammer Studios: Russia (VMF) (Side: EAST)","47 - RHS_AFRF Red Hammer Studios: Russia (MSV) (Side: EAST)","48 - RHS_AFRF Red Hammer Studios: Russia (RVA) (Side: EAST)","49 - RHS_AFRF Red Hammer Studios: Russia (TV) (Side: EAST)","50 - RHS_AFRF Red Hammer Studios: Russia (VDV) (Side: EAST)","51 - RHS_AFRF Red Hammer Studios: Russia (VPVO) (Side: EAST)","52 - RHS_AFRF Red Hammer Studios: Russia (VV) (Side: EAST)","53 - RHS_AFRF Red Hammer Studios: Russia (VVS - Camo) (Side: EAST)","54 - RHS_AFRF Red Hammer Studios: Russia (VVS - Grey) (Side: EAST)","55 - RHS_GREF Red Hammer Studios: CDF (Air Forces) (Side: WEST)","56 - RHS_GREF Red Hammer Studios: CDF (Ground Forces) (Side: GUER)","57 - RHS_GREF Red Hammer Studios: CDF (Ground Forces) (Side: WEST)","58 - RHS_GREF Red Hammer Studios: CDF (National Guard) (Side: GUER)","59 - RHS_GREF Red Hammer Studios: CDF (National Guard) (Side: WEST)","60 - RHS_GREF RHS (A2 port): CDF (Air Forces) (Side: GUER)","61 - RHS_SAF Red Hammer Studios: SAF (KOV) (Side: GUER)","62 - RHS_SAF RHS (A2 port): SAF (Casques Bleus) (Side: GUER)","63 - RHS_SAF RHS (A2 port): SAF (KOV) (Side: EAST)","64 - RHS_SAF RHS (A2 port): SAF (RVIPVO) (Side: EAST)","65 - RHS_SAF RHS (A2 port): SAF (RVIPVO) (Side: GUER)","66 - RHS_USAF Red Hammer Studios: USA (Army - D) (Side: WEST)","67 - RHS_USAF Red Hammer Studios: USA (Army - W) (Side: WEST)","68 - RHS_USAF Red Hammer Studios: USA (Navy) (Side: WEST)","69 - RHS_USAF Red Hammer Studios: USA (SOCOM) (Side: WEST)","70 - RHS_USAF Red Hammer Studios: USA (USAF) (Side: WEST)","71 - RHS_USAF Red Hammer Studios: USA (USMC - D) (Side: WEST)","72 - RHS_USAF Red Hammer Studios: USA (USMC - W) (Side: WEST)","73 - RHSGREF Jester2138 for RHS: Horizon Islands Defence Force (Side: WEST)","74 - RHSGREF Red Hammer Studios: CDF (UN) (Side: GUER)","75 - RHSGREF Red Hammer Studios: ChDKZ (Side: EAST)","76 - RHSGREF Red Hammer Studios: ChDKZ (Side: GUER)","77 - RHSGREF Red Hammer Studios: NAPA (Side: GUER)","78 - RHSGREF Red Hammer Studios: Tanoan Liberation Army (Side: EAST)","79 - RHSGREF Red Hammer Studios: Tanoan Liberation Army (Side: GUER)"};
        default = 43;
    };
    class btc_p_AA { // Anti-Air infantry:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_EAA"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_tank { // Enemy uses Tank:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_ETANK"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_civ { // Civil type:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_CTYPE"]);
        values[]={0,1,2,3,4,5};
        texts[]={"0 - Bohemia Interactive: Autre (Side: CIV)","1 - Bohemia Interactive: Civils (Side: CIV)","2 - LOP_LeightsOPFOR Project OPFOR: Civilians (African) (Side: CIV)","3 - LOP_LeightsOPFOR Project OPFOR: Civilians (Eastern European) (Side: CIV)","4 - LOP_LeightsOPFOR Project OPFOR: Civilians (Middle Eastern) (Side: CIV)","5 - ORANGE Bohemia Interactive: IDAP (Side: CIV)"};
        default = 3;
    };
    class btc_p_civ_veh { // Civil vehicle type:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_CTYPEVEH"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
        texts[]={"0 - Bohemia Interactive: Civilians (Side: CIV)","1 - Bohemia Interactive: Other (Side: CIV)","2 - CFP Drew: Civilians (Afghanistan) (Side: CIV)","3 - CFP Drew: Civilians (African Christian) (Side: CIV)","4 - CFP Drew: Civilians (African Islamic) (Side: CIV)","5 - CFP Drew: Civilians (Asian) (Side: CIV)","6 - CFP Drew: Civilians (Chernarus Winter) (Side: CIV)","7 - CFP Drew: Civilians (Malden) (Side: CIV)","8 - CFP Drew: Civilians (Middle Eastern) (Side: CIV)","9 - CIV joker006 + CUP: IDAP (Side: CIV)","10 - CSLA ÄŒSLA Studio: Civilians [ÄŒSLA] (Side: CIV)","11 - CUP_Units Community Upgrade Project: Civilians (Russian) (Side: CIV)","12 - CUP_Vehicles $CUP_AUTHOR_STRING: Civilians (Chernarus) (Side: CIV)","13 - CUP_Vehicles $CUP_AUTHOR_STRING: Civilians (Sahrani) (Side: CIV)","14 - CUP_Vehicles $CUP_AUTHOR_STRING: Civilians (Takistan) (Side: CIV)","15 - cwr3_dlc CWR III Modification: Civilians (CWR III) (Side: CIV)","16 - gm Global Mobilization: East Germany (Civilians) (Side: CIV)","17 - gm Global Mobilization: West Germany (Civilians) (Side: CIV)","18 - LIB Reyhard & Joarius: 40s Civilians (Side: CIV)","19 - OPTRE Article 2 Studios: Civilians (UEG) (Side: CIV)","20 - RDS_CIV_PACK RDS (BIS A2 Port): Polish (Side: CIV)","21 - RDS_CIV_PACK RDS (BIS A2 Port): Russians (Side: CIV)","22 - Savage Game Design: Vietnamese (Side: CIV)","23 - UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Civilians (Side: CIV)","24 - UK3CB_Factions www.3commandobrigade.com: 3CB Chernarus Civilians (Side: CIV)","25 - UK3CB_Factions www.3commandobrigade.com: 3CB Takistan Civilians (Side: CIV)","26 - UNSUNG Bohemia Interactive: Vietnamese (UNSUNG) (Side: CIV)"};
        default = 6;
    };
    class btc_p_spawn_title { // << Spawn options >>
        title = $STR_BTC_HAM_PARAM_SPAWN_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_is_free_prob { // Probability for a city to be free:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_ISFREE_PROB"]);
        values[]={0,10,20,30,40,45,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","45%","50%","60%","70%","80%","90%","100%"};
        default = 0;
    };
    class btc_p_mil_group_ratio { // Enemy density:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_ENEMY_DENSITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 100;
    };
    class btc_p_mil_static_group_ratio { // Enemy static density:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_ENEMY_STATIC_DENSITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 70;
    };
    class btc_p_civ_group_ratio { // Civilian density:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_CIVILIAN_DENSITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 100;
    };
    class btc_p_animals_group_ratio { // Animal density:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_ANIMALS_DENSITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 50;
    };
    class btc_p_wp_house_probability { // Density of military in house:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_MIL_INHOUSE_DENSITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 40;
    };
    class btc_p_veh_armed_ho { // Add armed vehicles in Hideout:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPAWN_ARMEDHIDEOUT"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_veh_armed_spawn_more { // Add armed vehicles in Side mission/Cache:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPAWN_ARMEDOTHER"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_patrol_max { // Maximum number of military patrol:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_PATROL_MAX"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"1","2","3","4","5","6","7","8","9","10"};
        default = 10;
    };
    class btc_p_civ_max_veh { // Maximum number of civilian patrol:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_CIV_MAX_VEH"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"1","2","3","4","5","6","7","8","9","10"};
        default = 5;
    };
    class btc_p_IED_title { // << IED options >>
        title = $STR_BTC_HAM_PARAM_IED_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_ied { // IEDs ratio:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_RATIO"]);
        values[]={0, 1, 2, 3};
        texts[]={$STR_DISABLED,$STR_A3_TIME_TRIALS_MISCTT_ROF_25,$STR_3DEN_ATTRIBUTES_SPEEDMODE_NORMAL,$STR_A3_TIME_TRIALS_MISCTT_ROF_21}; //texts[]={"Off","Low","Normal","High"};
        default = 3;
    };
    class btc_p_ied_spot { // IEDs spotting difficulty:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_SPOT"]);
        values[]={0, 1, 2};
        texts[]={$STR_BTC_HAM_PARAM_IED_SPOT_VERYEASY,$STR_BTC_HAM_PARAM_IED_SPOT_EASY,$STR_3DEN_ATTRIBUTES_SPEEDMODE_NORMAL}; //texts[]={"Very easy","Easy","Normal"};
        default = 2;
    };
    class btc_p_ied_placement { // IEDs type of placement:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_PLACEMENT"]);
        values[]={2, -1, 3};
        texts[]={$STR_BTC_HAM_PARAM_IED_PLACEMENT_ROADSIDE,$STR_BTC_HAM_PARAM_IED_PLACEMENT_MIDDLE,$STR_3DEN_ATTRIBUTES_OBJECTTEXTURE_RANDOM_TEXT}; //texts[]={"Roadside", "Middle", "Random"};
        default = 2;
    };
    class btc_p_ied_drone { // Drone bomber:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_DRONE"]);
        values[]={0, 1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_hideout_cache_title { // << Hideout/Cache options >>
        title = $STR_BTC_HAM_PARAM_HIDE_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_hideout_n { // Hideout numbers:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_HIDE_NUMBERS"]);
        values[]={99,1,2,3,4,5,6,7};
        texts[]={$STR_3DEN_ATTRIBUTES_OBJECTTEXTURE_RANDOM_TEXT,"1","2","3","4","5","6","7"}; //texts[]={"Random","1","2","3","4","5"};
        default = 7;
    };
    class btc_p_cache_info_def { // Info cache distance:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_CACHE_DISTANCE"]);
        values[]={500,1000,1500,2000,2500,3000,3500,4000,5000};
        texts[]={"500 m","1000 m","1500 m","2000 m","2500 m","3000 m","3500 m","4000 m","5000 m"};
        default = 3000;
    };
    class btc_p_cache_info_ratio { //Cache info ratio:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_CACHE_RATIO"]);
        values[]={50,100};
        texts[]={"50 m","100 m"};
        default = 100;
    };
    class btc_p_info_chance { // Intel from dead bodies chance:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_CACHE_DEADINFO"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"100 %","90 %","80 %","70 %","60 %","50 %","40 %","30 %","20 %","10 %","0 %"};
        default = 50;
    };
    class btc_p_skill_title { // << A3 Skill options >>
        title = $STR_BTC_HAM_PARAM_SKILL_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_set_skill { // Set skill?
        title = __EVAL(format ["      %1?", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_set_skill_general { // Set skill, general
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_3DEN_SCENARIO_TEXTSINGULAR"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 5;
    };
    class btc_p_set_skill_aimingAccuracy { // Set skill, aimingAccuracy
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_AIMACC"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 5;
    };
    class btc_p_set_skill_aimingShake { // Set skill, aimingShake
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_AIMSKILL"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 4;
    };
    class btc_p_set_skill_aimingSpeed { // Set skill, aimingSpeed
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_AIMSPEED"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 2;
    };
    class btc_p_set_skill_endurance { // Set skill, endurance
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_A3_VR_STAMINA"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 4;
    };
    class btc_p_set_skill_spotDistance { // Set skill, spotDistance
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_SPOTDIST"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 5;
    };
    class btc_p_set_skill_spotTime { // Set skill, spotTime
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_SPOTTIME"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 9;
    };
    class btc_p_set_skill_courage { // Set skill, courage
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_COURAGE"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 4;
    };
    class btc_p_set_skill_reloadSpeed { // Set skill, reloadSpeed
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_RELOAD"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 5;
    };
    class btc_p_set_skill_commanding { // Set skill, commanding
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_A3_CFGHINTS0"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_gameplay_title { // << Gameplay options >>
        title = $STR_BTC_HAM_PARAM_GAMEPLAY_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_sea { // Extend battlefield to sea:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_SEA"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_chem { // Chemical warfare
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_CHEM"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_spect { // Spectrum devices
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_SPECT"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_side_mission_cycle { // Side mission cycle:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_SIDEM"]);
        values[] = {0,1,2,3,4};
        texts[] = {$STR_DISABLED,1,2,3,4};
        default = 0;
    };
    class btc_p_arsenal_title { // << Arsenal options >>
        title = $STR_BTC_HAM_PARAM_ARSENAL_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_arsenal_Type { // Type of the arsenal:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE"]);
        values[]={0,1,2,3,4};
        texts[]={$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_BIS,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_BA,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_BA_PLUS,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_ACE,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_ACE_PLUS}; //texts[]={"BIS - Vanilla","BIS - Vanilla and ACE 3","BIS - Vanilla and ACE 3 (scroll wheel action)","ACE 3","ACE 3 (scroll wheel action)"};
        default = 4;
    };
    class btc_p_arsenal_Restrict { // Restricted arsenal (See /define_mod.sqf):
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_ARSENAL_ARSENALRESTR"]);
        values[]={0,1,2,3};
        texts[] = {$STR_DISABLED,$STR_3DEN_ATTRIBUTES_SPEEDMODE_FULL,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALRESTR_REMOVEONLY,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALRESTR_FILTER}; //texts[]={"Off","Full","Remove only (works only with ACE3-Arsenal)","Filter on player role (works only with ACE3-Arsenal)"};
        default = 0;
    };
    class btc_p_autoloadout { // loadout:
        title = __EVAL(format ["      %1:", localize "STR_ACE_Interaction_Equipment"]);
        values[]={0,1,2};
        texts[]={$STR_DISABLED,$STR_BTC_HAM_PARAM_ARSENAL_AUTOLOADOUT, $STR_BTC_HAM_PARAM_ARSENAL_RMVWEAPONS};
        default = 0;
    };
    class btc_p_garage { // Activate garage for admin:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_ARSENAL_GARAGEADMIN"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_main_title { // << Other options >>
        title = $STR_BTC_HAM_PARAM_OTHER_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_rep { // Reputation at start:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_REPSTART"]);
        values[]={-200, 0, 200, 500, 750};
        texts[]={$STR_ACE_ViewDistance_object_verylow,$STR_A3_TIME_TRIALS_MISCTT_ROF_25,$STR_3DEN_ATTRIBUTES_SPEEDMODE_NORMAL,$STR_A3_TIME_TRIALS_MISCTT_ROF_21}; //texts[]={"Very Low","Low","Normal","High"};
        default = -200;
    };
    class btc_p_rep_notify { // Show reputation change:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_SHOWREP"]);
        values[]={0, 1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_city_radius { // Spawn city radius offset:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_SPAWNRAD"]);
        values[]={0,1,2,3,4,5,6,7,8};
        texts[]={"0 m","100 m","200 m",$STR_BTC_HAM_PARAM_OTHER_SPAWNRAD_DEF,"400 m","500 m (Takistan)","600 m","700 m","800 m"}; // texts[]={"0 m","100 m","200 m","300 m","400 m","500 m (Takistan)","600 m","700 m","800 m"};
        default = 4;
    };
    class btc_p_trigger { // Disable city activation when a plane or helicopter (>190Km/h) is flying above:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_DISABLESPAWN"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_auto_headless { // Autodetect Headless client:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_AUTOHEADLESS"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_debug { // Debug:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_DEBUG"]);
        values[]={0,1,2};
        texts[]={$STR_DISABLED,$STR_ENABLED, $STR_BTC_HAM_PARAM_OTHER_DEBUG_LOGONLY}; // texts[]={"Off","On","Log only"};
        default = 0;
    };
};

#ifndef GAME_VARS_H
#define GAME_VARS_H

namespace fallout {

typedef enum GameGlobalVar {
    GVAR_PLAYER_REPUTATION,
    GVAR_CHILDKILLER_REPUTATION,
    GVAR_CHAMPION_REPUTATION,
    GVAR_BERSERKER_REPUTATION,
    GVAR_BAD_MONSTER,
    GVAR_GOOD_MONSTER,
    GVAR_PLAYER_MARRIED,
    GVAR_ENEMY_ARROYO,
    GVAR_KNOWLEDGE_HEALING_POWDER,
    GVAR_KILL_EVIL_PLANTS,
    GVAR_START_ARROYO_TRIAL,
    GVAR_REPUTATION_SLAVER,
    GVAR_REPUTATION_SLAVE_OWNER,
    GVAR_DEN_MOM_STATUS,
    GVAR_ENEMY_DEN,
    GVAR_EXILE_DEN,
    GVAR_DEN_ANNA_STATUS,
    GVAR_DEN_WAREHOUSE_ACCESS,
    GVAR_PLAYER_GOT_CAR,
    GVAR_DEN_VIC_STATUS,
    GVAR_DEN_MAGGIE_STILL,
    GVAR_NUKA_COLA_ADDICT,
    GVAR_BUFF_OUT_ADDICT,
    GVAR_MENTATS_ADDICT,
    GVAR_PSYCHO_ADDICT,
    GVAR_RADAWAY_ADDICT,
    GVAR_ALCOHOL_ADDICT,
    GVAR_LOAD_MAP_INDEX,
    GVAR_RUNNING_BURNING_GUY,
    GVAR_VIC_DEVICE,
    GVAR_SLAVE_RUN,
    GVAR_SLAVES_COUNT,
    GVAR_MAGGIE_STATUS,
    GVAR_SLAVES_LOST,
    GVAR_SLAVERS_LOST,
    GVAR_PIP_BOY_ANNA_DIARY,
    GVAR_FRANKIE_STATUS,
    GVAR_KARMA_HOLY_WARRIOR,
    GVAR_KARMA_GUARDIAN_OF_THE_WASTES,
    GVAR_KARMA_SHIELD_OF_HOPE,
    GVAR_KARMA_DEFENDER,
    GVAR_KARMA_WANDERER,
    GVAR_KARMA_BETRAYER,
    GVAR_KARMA_SWORD_OF_DESPAIR,
    GVAR_KARMA_SCOURGE_OF_THE_WASTE,
    GVAR_KARMA_DEMON_SPAWN,
    GVAR_MAP_EXIT_TILE,
    GVAR_TOWN_REP_ARROYO,
    GVAR_TOWN_REP_KLAMATH,
    GVAR_TOWN_REP_THE_DEN,
    GVAR_TOWN_REP_VAULT_CITY,
    GVAR_TOWN_REP_GECKO,
    GVAR_TOWN_REP_MODOC,
    GVAR_TOWN_REP_SIERRA_BASE,
    GVAR_TOWN_REP_BROKEN_HILLS,
    GVAR_TOWN_REP_NEW_RENO,
    GVAR_TOWN_REP_REDDING,
    GVAR_TOWN_REP_NCR,
    GVAR_TOWN_REP_BURIED_VAULT,
    GVAR_TOWN_REP_VAULT_13,
    GVAR_TOWN_REP_COLUSA,
    GVAR_TOWN_REP_SAN_FRANCISCO,
    GVAR_TOWN_REP_ENCLAVE,
    GVAR_TOWN_REP_ABBEY,
    GVAR_TOWN_REP_EPA,
    GVAR_TOWN_REP_PRIMITIVE_TRIBE,
    GVAR_TOWN_REP_RAIDERS,
    GVAR_MAP_NEXT_TILE,
    GVAR_ENEMY_KLAMATH,
    GVAR_TORR_HARMED,
    GVAR_TORR_DEAD,
    GVAR_TORR_MISSING,
    GVAR_TORR_SEARCH_SUCCESS,
    GVAR_TRAPPER_RETURNED,
    GVAR_DUNTONS_ANGRY,
    GVAR_RUSTLE_FAIL_VIOLENT,
    GVAR_RUSTLE_FAIL,
    GVAR_RUSTLE_SUCCESS,
    GVAR_TORR_GUARD_SUCCESS,
    GVAR_VAULT_CITIZEN,
    GVAR_VAULT_PLOW_PROBLEM,
    GVAR_VAULT_CITIZENSHIP,
    GVAR_VAULT_GECKO_PLANT,
    GVAR_VAULT_PLANT_STATUS,
    GVAR_VAULT_REDDING_PROBLEM,
    GVAR_JET_QUEST,
    GVAR_DAY_PASS_SHOWN,
    GVAR_VAULT_CITIZEN_TEST,
    GVAR_VAULT_RAIDERS,
    GVAR_VAULT_DELIVER_HOLODISK,
    GVAR_VAULT_FIND_THOMAS,
    GVAR_QUEST_VAULT_CITIZEN,
    GVAR_QUEST_PLOW_PROBLEM,
    GVAR_QUEST_GECKO_PLANT,
    GVAR_QUEST_REDDING_PROBLEM,
    GVAR_QUEST_JET_QUEST,
    GVAR_QUEST_RAIDERS,
    GVAR_QUEST_DELIVER_HOLODISK,
    GVAR_QUEST_FIND_THOMAS,
    GVAR_MODOC_KILL_ALL_BRAHMIN_TIME,
    GVAR_QUEST_VIC_DEVICE,
    GVAR_QUEST_MAGGIE_STILL,
    GVAR_QUEST_KILL_EVIL_PLANTS,
    GVAR_QUEST_RUSTLE_CATTLE,
    GVAR_BUST_SKEEVE,
    GVAR_DUDE_STOMACH,
    GVAR_MODOC_FAMILY_FEUD_SEED_ONE,
    GVAR_MODOC_FAMILY_FEUD_SEED_TWO,
    GVAR_MODOC_BRAHMIN_SEED,
    GVAR_MODOC_KARL_PIP,
    GVAR_MODOC_KARL_SEED,
    GVAR_MODOC_VERMIN_HUNTER_SEED,
    GVAR_MODOC_GHOST_FARM_SEED,
    GVAR_SLAG_ATTACK,
    GVAR_JONNY_STATE,
    GVAR_JONNY_TILE,
    GVAR_MODOC_BRAHMIN_ALIVE,
    GVAR_MODOC_DOGS_ALIVE,
    GVAR_MODOC_TOOL_FLAG,
    GVAR_MODOC_SLAUGHTER_BESS_TIME,
    GVAR_KARL_STATE,
    GVAR_MODOC_BODIES,
    GVAR_MODOC_SLAUGHTER_FLAG,
    GVAR_MODOC_ROSE_FLAG,
    GVAR_MODOC_TANNERY_FLAG,
    GVAR_MODOC_POST_FLAG,
    GVAR_HOSTILE_SLAVE_COUNT,
    GVAR_LADDIE_STATE,
    GVAR_LADDIE_TILE,
    GVAR_MODOC_JONNY_HOME,
    GVAR_MODOC_SPOKE_PROTECTOR,
    GVAR_MODOC_MESSAGE,
    GVAR_MUTATE,
    GVAR_MUTATE_WHEN,
    GVAR_SALVATORE_FAMILY_COUNTER,
    GVAR_BISHOP_FAMILY_COUNTER,
    GVAR_MORDINO_FAMILY_COUNTER,
    GVAR_ENEMY_VAULT_CITY,
    GVAR_VAULT_GET_LYNETTE_REWARD,
    GVAR_VAULT_GET_MCCLURE_PART,
    GVAR_VAULT_SERVANT,
    GVAR_VAULT_VILLAGE,
    GVAR_QUEST_VAULT_SERVANT,
    GVAR_QUEST_VAULT_VILLAGE,
    GVAR_VAULT_MONSTER_COUNT,
    GVAR_SERVANT_RAID_DATE,
    GVAR_ENEMY_VAULT_VILLAGE,
    GVAR_BROKEN_HILLS_FRAUD,
    GVAR_VAULT_BEEN_TO_RAIDERS,
    GVAR_SIERRA_BASE_CONTAMINATION_TIMER,
    GVAR_SIERRA_BASE_LEVEL_BREACH,
    GVAR_SIERRA_BASE_ALERT,
    GVAR_SIERRA_BASE_ENEMY,
    GVAR_SIERRA_BASE_POWER,
    GVAR_SIERRA_BASE_SECURITY,
    GVAR_BRAIN_BOT_BRAIN,
    GVAR_SIERRA_LOCKOUT,
    GVAR_SIERRA_PASSWORD,
    GVAR_GECKO_ECON_DISK,
    GVAR_GECKO_REQ_FORM,
    GVAR_GECKO_SKEETER_PART,
    GVAR_GECKO_ANKH,
    GVAR_DEN_SMITTY_PART,
    GVAR_MCCLURE_KNOWN,
    GVAR_HOLODISK_SIERRA_EVACUATION,
    GVAR_HOLODISK_SIERRA_MED_LOG,
    GVAR_HOLODISK_SIERRA_EXP_LOG,
    GVAR_GECKO_SKEETER_STATUS,
    GVAR_NCR_TANDI_WORK,
    GVAR_NCR_TANDI_JOB_ACCEPT,
    GVAR_NCR_BEAT_HOSS,
    GVAR_NCR_SQUAT_DEAL,
    GVAR_NCR_V15_DARION_DEAD,
    GVAR_NCR_V15_DARION_DEAL,
    GVAR_NEWRENO_SNUFF_WESTIN,
    GVAR_NEWRENO_SNUFF_CARLSON,
    GVAR_VAULT13_CLEAR,
    GVAR_NCR_SPY_KNOWN,
    GVAR_NCR_TANDI_WARN_CARLSON,
    GVAR_RUSTLE_ACCEPT,
    GVAR_RUSTLE_REFUSE,
    GVAR_RUSTLE_REWARD,
    GVAR_TORR_GUARD_STATUS,
    GVAR_ARROYO_SPEAR,
    GVAR_RUSTLE_OVER,
    GVAR_NCR_BRAHMIN_PROTECT,
    GVAR_NCR_DEATHCLAW_DEN,
    GVAR_SLAVE_RUN_KILLED,
    GVAR_DUNTON_DEAD,
    GVAR_NCR_CAR_JACKED,
    GVAR_NCR_MERK_WORK,
    GVAR_ARROYO_DOG,
    GVAR_HAVE_MUTATED,
    GVAR_MUTATE_STAGE,
    GVAR_PLAYER_SEX_LEVEL,
    GVAR_NCR_VORTIS_QUEST_STATE,
    GVAR_NCR_RANGERS_KNOWN,
    GVAR_SMILEY_STATUS,
    GVAR_STILL_STATUS,
    GVAR_STILL_FAILURE,
    GVAR_GRAVE_FLAGS_1,
    GVAR_GRAVE_FLAGS_2,
    GVAR_TORR_BRAHMIN_KILLED,
    GVAR_ENEMY_TORR,
    GVAR_ENEMY_DUNTON,
    GVAR_ENEMY_SMILEY,
    GVAR_NCR_SCMERK_HEREBEFORE,
    GVAR_NCR_SCMERK_HOSTILE,
    GVAR_NCR_SCMERK_PERSONAL_ENEMY,
    GVAR_NCR_SCMERK_STATUS,
    GVAR_NCR_SCMERK_SEED_STATUS,
    GVAR_NCR_LENNY_MET,
    GVAR_NCR_ELRON_ADJUST,
    GVAR_NCR_FAKE_VAULT13_MAP,
    GVAR_NCR_FAKE_VAULT13_HOLODISK,
    GVAR_MILITARY_BASE_FLAGS,
    GVAR_WRIGHT_FAMILY_COUNTER,
    GVAR_NCR_MIRA_STATE,
    GVAR_NCR_ROPE_KNOWN,
    GVAR_NEW_RENO_WARNING_TIMER,
    GVAR_HOLODISK_MB_OUTSIDE,
    GVAR_HOLODISK_MB_LEVEL_1,
    GVAR_HOLODISK_MB_LEVEL_2,
    GVAR_HOLODISK_MB_LEVEL_3,
    GVAR_HOLODISK_MB_LEVEL_4,
    GVAR_NCR_GTEGRD_ATTACK,
    GVAR_NCR_GATE_NIGHT,
    GVAR_NCR_ENCLAVE_INFO,
    GVAR_NCR_WESTIN_SEED,
    GVAR_NCR_DOROTHY_SEED,
    GVAR_NEW_RENO_MADE_MAN,
    GVAR_NEW_RENO_PRIZEFIGHTER,
    GVAR_NEW_RENO_PORN_STAR,
    GVAR_VAULT13_FOUND_GECK,
    GVAR_NCR_POWER_ON,
    GVAR_SULIK_FREE,
    GVAR_TORR_SEARCH_ACCEPT,
    GVAR_NCR_HENRY_HYPO,
    GVAR_ENEMY_GECKO,
    GVAR_GECKO_COOLANT,
    GVAR_NCR_POWERPLANT,
    GVAR_NCR_PLAYER_RANGER,
    GVAR_NCR_JACK_STATE,
    GVAR_8_BALL_TOILET_SECRET,
    GVAR_8_BALL_TRASH_SECRET,
    GVAR_NCR_GENERIC_STATE,
    GVAR_NEW_RENO_MCGEE_SEED,
    GVAR_NEW_RENO_MCGEE_KNOWN,
    GVAR_NEW_RENO_MCGEE_ATTACKED,
    GVAR_GECKO_BRAIN_DEAD,
    GVAR_GECKO_BRAIN_FRIEND,
    GVAR_SALVATORE_WARNINGS,
    GVAR_BISHOP_WARNINGS,
    GVAR_MORDINO_WARNINGS,
    GVAR_WRIGHT_WARNINGS,
    GVAR_NEW_RENO_BISHOP,
    GVAR_NCR_SNUFF_BISHOP,
    GVAR_NEW_RENO_CARLSON_PRICE,
    GVAR_NEW_RENO_WESTIN_PRICE,
    GVAR_NEW_RENO_HAS_REP_PRIZEFIGHTER,
    GVAR_NEW_RENO_ANGELA,
    GVAR_PLACEHOLDER_002,
    GVAR_NCR_ELISE_SEED,
    GVAR_NEW_RENO_MRS_BISHOP,
    GVAR_NCR_FELIX_SEED,
    GVAR_NCR_BISHOP_PRICE,
    GVAR_NCR_CATTLE_DRIVE,
    GVAR_NCR_CATTLE_TIME_MIN,
    GVAR_NCR_CATTLE_TIME_MAX,
    GVAR_CARAVAN_STATUS,
    GVAR_CARAVAN_START,
    GVAR_CARAVAN_END,
    GVAR_CARAVAN_DRIVERS,
    GVAR_CARAVAN_GUARDS,
    GVAR_CARAVAN_CARTS,
    GVAR_CARAVAN_ENCOUNTERS,
    GVAR_CARAVAN_BRAHMIN,
    GVAR_CARAVAN_MASTERS,
    GVAR_CARAVAN_DRIVERS_TOTAL,
    GVAR_CARAVAN_GUARDS_TOTAL,
    GVAR_CARAVAN_CARTS_TOTAL,
    GVAR_CARAVAN_BRAHMIN_TOTAL,
    GVAR_CARAVAN_MASTERS_TOTAL,
    GVAR_CARAVAN_ENCOUNTERS_TOTAL,
    GVAR_NEW_RENO_MYRON,
    GVAR_NEW_RENO_WRIGHT_FLAGS,
    GVAR_NEW_RENO_WRIGHT_MYSTERY,
    GVAR_DEN_SLAVER_WARNINGS,
    GVAR_V13_V15_DALIA_STATE,
    GVAR_PARTY_CHILDKILLER,
    GVAR_MODOC_STAGE_TIMER,
    GVAR_MODOC_STAGE_STATE,
    GVAR_REDDING_WHORE_CUT,
    GVAR_V15_SEED_STATUS,
    GVAR_TOWN_REP_VAULT_15,
    GVAR_ADDICT_TRAGIC,
    GVAR_ADDICT_JET,
    GVAR_MODOC_GENERIC_FLAG_1,
    GVAR_DEN_CEASAR_STATUS,
    GVAR_MODOC_BRAHMIN_ESCAPED,
    GVAR_BH_CHAD,
    GVAR_BH_FTM,
    GVAR_BH_MINE,
    GVAR_BH_JAIL,
    GVAR_BH_CONSPIRACY,
    GVAR_BH_MISSING,
    GVAR_BH_MIGHTY_MAN,
    GVAR_BH_MINING,
    GVAR_TOWN_REP_GHOST_FARM,
    GVAR_ENEMY_BROKEN_HILLS,
    GVAR_SLAG_CNT,
    GVAR_NEW_RENO_SALVATORE_RESPECT,
    GVAR_NEW_RENO_TRACK_LLOYD,
    GVAR_NEW_RENO_GUARD_ASSIGNMENT,
    GVAR_NEW_RENO_FLAG_1,
    GVAR_NEW_RENO_SALVATORE,
    GVAR_NEW_RENO_TRIBUTE,
    GVAR_NEW_RENO_SALVATORE_PISTOL,
    GVAR_NEW_RENO_ESCAPE,
    GVAR_GRAVES_UNEARTHED,
    GVAR_MOORE_STATE,
    GVAR_MOORE_ACCEPT_DELIVERY,
    GVAR_MOORE_REFUSE_DELIVERY,
    GVAR_SPECIAL_ENCOUNTER_FLAGS,
    GVAR_BH_BOSS,
    GVAR_BH_HENCH_COUNT,
    GVAR_BH_MALE_NAMES_USED,
    GVAR_BH_FEMALE_NAMES_USED,
    GVAR_BH_HENCH_KILLED,
    GVAR_BH_CHECKED,
    GVAR_BH_CARAVAN,
    GVAR_BH_RANK_KILLED,
    GVAR_REDDING_EXCAVATOR_CHIP,
    GVAR_REDDING_JET_LEVEL,
    GVAR_MAYOR_REDDING_STATUS,
    GVAR_REDDING_MARGE_STATUS,
    GVAR_REDDING_DAN_STATUS,
    GVAR_REDDING_JOHNSON_STATUS,
    GVAR_CATTLE_DRIVE_CARAVAN,
    GVAR_MEDICINE_CARAVAN,
    GVAR_JET_CARAVAN,
    GVAR_GOLD_CARAVAN,
    GVAR_REDDING_CARAVAN_STATUS,
    GVAR_NEW_RENO_SAD,
    GVAR_NEW_RENO_WRIGHT_STILL,
    GVAR_NEW_RENO_FLAG_2,
    GVAR_NEW_RENO_WRIGHT_STILL_MISSION,
    GVAR_NEW_RENO_JULES_KITTY,
    GVAR_NEW_RENO_STOLEN_CAR,
    GVAR_NEW_RENO_JULES_ELDRIDGE,
    GVAR_GRUTHAR_DSTATUS,
    GVAR_WHIRLY,
    GVAR_MYSTERIOUS_STRANGER,
    GVAR_MYSTERIOUS_STRANGER_LEVEL,
    GVAR_NEW_RENO_DELIVERY,
    GVAR_NEW_RENO_EXTORTION_BROS,
    GVAR_NEW_RENO_ASSASSINATION,
    GVAR_NEW_RENO_LIL_JESUS_REFERS,
    GVAR_SEX_COUNTER,
    GVAR_RND_SALES_NAME,
    GVAR_RND_SALES_ENCOUNTER,
    GVAR_SAN_FRAN_FLAGS,
    GVAR_SAN_FRAN_SUB,
    GVAR_SAN_FRAN_TANKER,
    GVAR_SAN_FRAN_SHIHACKED,
    GVAR_SAN_FRAN_BADGER,
    GVAR_SAN_FRAN_ELRON,
    GVAR_SAN_FRAN_SPLEEN,
    GVAR_KNOW_DOC_HOLIDAY,
    GVAR_DUMAR_STATUS,
    GVAR_NEW_RENO_JET_SOURCE,
    GVAR_DEN_BECKY_JOB,
    GVAR_HOLY_GRENADE,
    GVAR_RAIDERS_FLAGS,
    GVAR_DEN_FRED_STATUS,
    GVAR_DEN_DEREK_STATUS,
    GVAR_DEN_ROBBY_STATUS,
    GVAR_RAIDERS_COUNT,
    GVAR_DEN_HEATHER_STATUS,
    GVAR_SUPER_CAR,
    GVAR_BAR_BRAWL,
    GVAR_WADE_STATUS,
    GVAR_STANWELL_STATUS,
    GVAR_SAVINELLI_STATUS,
    GVAR_IMPLANTS_KNOWN,
    GVAR_FROG_MORTON,
    GVAR_REDDING_MORTON_BROTHERS,
    GVAR_REDDING_SHERIFF,
    GVAR_MODOC_ENDINGS,
    GVAR_WANAMINGO_OCCUPADO,
    GVAR_QUEST_RAT_GOD,
    GVAR_QUEST_RESCUE_TORR,
    GVAR_VAULT_JET_SOURCE,
    GVAR_QUEST_SUPER_REPAIR_KIT,
    GVAR_QUEST_PLASMA_TRANSFORMER,
    GVAR_GECKO_MELTDOWN,
    GVAR_QUEST_REPAIR_POWER_PLANT,
    GVAR_QUEST_OPTIMIZE_POWER_PLANT,
    GVAR_PARTY_NO_FOLLOW,
    GVAR_RND_KAGA_STATE,
    GVAR_VAULT_CITY_VENT,
    GVAR_VAULT_PIP,
    GVAR_MODOC_GENERIC_FLAG_2,
    GVAR_SLAUGHTER_SLAG_TIME,
    GVAR_PIPBOY_TOUR_GUIDE,
    GVAR_PIPBOY_CREDITS,
    GVAR_NCR_GRANT_HOSTILE,
    GVAR_NCR_WFIELD_NOTIFY,
    GVAR_ENDGAME_MOVIE_ARROYO,
    GVAR_ENDGAME_MOVIE_MODOC,
    GVAR_ENDGAME_MOVIE_DEN,
    GVAR_ENDGAME_MOVIE_VAULT_CITY,
    GVAR_ENDGAME_MOVIE_RENO,
    GVAR_ENDGAME_MOVIE_RENO_ADD1,
    GVAR_ENDGAME_MOVIE_RENO_ADD2,
    GVAR_ENDGAME_MOVIE_RENO_ADD3,
    GVAR_ENDGAME_MOVIE_RENO_ADD4,
    GVAR_ENDGAME_MOVIE_GECKO,
    GVAR_ENDGAME_MOVIE_REDDING,
    GVAR_ENDGAME_MOVIE_BROKEN_HILLS,
    GVAR_ENDGAME_MOVIE_NCR,
    GVAR_ENDGAME_MOVIE_VAULT_15,
    GVAR_ENDGAME_MOVIE_VAULT_13,
    GVAR_ENDGAME_MOVIE_SAN_FRAN_SHI,
    GVAR_ENDGAME_MOVIE_SAN_FRAN_ELRON,
    GVAR_ENDGAME_MOVIE_SAN_FRAN_PUNKS,
    GVAR_SAN_FRAN_STRUGGLE,
    GVAR_SAN_FRAN_ELRON_WHIRLY,
    GVAR_DR_TROY_STATUS,
    GVAR_V13_STATUS_FLAGS,
    GVAR_GECKO_TIMER_MELTDOWN,
    GVAR_ENCLAVE_POWER_PLANT,
    GVAR_ENCLAVE_GRANITE_JOINED,
    GVAR_ENCLAVE_ALARM,
    GVAR_ENCLAVE_TIMER,
    GVAR_ENCLAVE_REACTOR,
    GVAR_VAULT_LYNETTE_STATUS,
    GVAR_DOC_JOHNSON_STATUS,
    GVAR_NCR_GEN_FLAGS,
    GVAR_CAR_BLOWER,
    GVAR_ENCLAVE_COMPUTER,
    GVAR_ENCLAVE_MARTIN,
    GVAR_ENCLAVE_ELDER,
    GVAR_JAIL_BREAK,
    GVAR_SAN_FRAN_ARMOR,
    GVAR_DEN_FLAG_1,
    GVAR_DEN_FLAG_2,
    GVAR_DEN_FLAG_3,
    GVAR_SAN_FRAN_SPLEEN_TIME,
    GVAR_PLAYER_WAS_MARRIED,
    GVAR_DEN_SMITTY_DELIVER,
    GVAR_SMITTY_DELIVER_TIME,
    GVAR_DEN_VIC_KNOWN,
    GVAR_CAR_UPGRADE_FUEL_CELL_REGULATOR,
    GVAR_DEN_GANGWAR,
    GVAR_NEW_RENO_CAR_UPGRADE,
    GVAR_NEW_RENO_SUPER_CAR,
    GVAR_DEN_SEE_VIC,
    GVAR_STILL_START,
    GVAR_QUEST_JOSHUA,
    GVAR_ARDIN_FREEDOM,
    GVAR_TOTAL_WANAMINGOS,
    GVAR_SAN_FRAN_DAVE,
    GVAR_VC_MET_ED,
    GVAR_FRED_MONEY,
    GVAR_CAN_ASK_ARDIN_ABOUT_SMILEY,
    GVAR_VAULT_USED_TEACHING_SYSTEM,
    GVAR_DEN_GANG_1_COUNT,
    GVAR_DEN_GANG_2_COUNT,
    GVAR_DEN_GANG_D_DAY,
    GVAR_DEN_METZGER_GANG_KILL_TIMER,
    GVAR_DEN_GANG_TRAP,
    GVAR_DEN_GANG_DOOR,
    GVAR_V15_CRISSY_QUEST,
    GVAR_V15_KILL_DARION,
    GVAR_V15_NCR_DEAL,
    GVAR_V15_NCR_SPY,
    GVAR_SAN_FRAN_EG_NOTIFY,
    GVAR_SAN_FRAN_EG_A_OBJ,
    GVAR_ELRON_GUARDS,
    GVAR_ARROYO_RETURN_GECK,
    GVAR_NCR_BRAHMN_QST,
    GVAR_NCR_DRPAPR_QST,
    GVAR_NCR_ELMBISHOP_QST,
    GVAR_NCR_LYNETTE_HOLO_QST,
    GVAR_NCR_ENLONE_LETTER_QST,
    GVAR_NCR_KILL_ELRON_QST,
    GVAR_V13_COMP_QST,
    GVAR_V13_GORIS_QST,
    GVAR_GIMP_FLAG,
    GVAR_GECKO_ASSIGNED,
    GVAR_MODOC_SHITTY_DEATH,
    GVAR_ENEMY_REDDING,
    GVAR_VAL_TOOLS,
    GVAR_FALLOUT_2,
    GVAR_NEW_RENO_FLAG_3,
    GVAR_MR_BISHOP_SAFE,
    GVAR_VAULT_BOOZE_SMUGGLING,
    GVAR_ENCLAVE_COUNTDOWN,
    GVAR_ENCLAVE_FRANK_DEAD,
    GVAR_NCR_BRAHMIN_QST,
    GVAR_NEW_RENO_KITTY_MAGAZINES,
    GVAR_NCR_FREE_SLAVES_QST,
    GVAR_NEW_RENO_STUART_DEAL,
    GVAR_NEW_RENO_FIGHT_LEVEL,
    GVAR_ENEMY_VAULT_COURTYARD,
    GVAR_NEW_RENO_ROUND_NUMBER,
    GVAR_NEW_RENO_ROUND_TIME,
    GVAR_NEW_RENO_DUDE_SCORE,
    GVAR_NEW_RENO_BOXER_SCORE,
    GVAR_NEW_RENO_FIGHT_STATUS,
    GVAR_NAVARRO_BASE_ALERT,
    GVAR_NAVARRO_FOB,
    GVAR_NAVARRO_K9,
    GVAR_NAVARRO_POWER_CENTER,
    GVAR_NAVARRO_VERTIBIRDS,
    GVAR_STANWELL_PAYOUT,
    GVAR_WADE_PAYOUT,
    GVAR_SAVINE_PAYOUT,
    GVAR_SAN_FRAN_SHI_WHIRLY,
    GVAR_SIERRA_GNN_HOLODISK,
    GVAR_SIERRA_MISSION_HOLODISK,
    GVAR_ELRON_HOLODISK,
    GVAR_NEW_RENO_KILL_DADDY_WEAPON,
    GVAR_READ_FRANCIS_NOTE,
    GVAR_ENEMY_CONSPIRATORS,
    GVAR_MARCUS_DEAD,
    GVAR_RAIDER_SECRET_ENTRANCE_KNOWN,
    GVAR_COMING_FROM_INSIDE_RAIDERS,
    GVAR_VAULT_STARK_RECON,
    GVAR_NEW_RENO_MRS_BISHOP_COMBINATION,
    GVAR_TALKED_TO_ELDER,
    GVAR_SAN_FRAN_FUEL_TANK_QST,
    GVAR_SAN_FRAN_NAV_TANK_QST,
    GVAR_SAN_FRAN_FOB_TANK_QST,
    GVAR_SAN_FRAN_ELRON_GAS_QST,
    GVAR_SAN_FRAN_BADGER_GFRIEND_QST,
    GVAR_SAN_FRAN_LOPAN_KDRAGON_QST,
    GVAR_SAN_FRAN_DRAGON_KLOPAN_QST,
    GVAR_SAN_FRAN_ARMOR_QST,
    GVAR_FINISHED_STARK_RECON,
    GVAR_VAULT_CITY_DESIGNER_NOTES,
    GVAR_BH_POWER,
    GVAR_NEW_RENO_SUSPECT_JJJ,
    GVAR_NEW_RENO_SUSPECT_JULES,
    GVAR_NEW_RENO_SUSPECT_LIL_JESUS,
    GVAR_NEW_RENO_SUSPECT_RENESCO,
    GVAR_NEW_RENO_WESTIN_SNUFF_PIP,
    GVAR_NEW_RENO_CARLSON_SNUFF_PIP,
    GVAR_NEW_RENO_ELDRIDGE_PISTOL_QUEST,
    GVAR_DEN_CAR_PART_PIP,
    GVAR_DEN_ANNA_LOCKET_PIP,
    GVAR_NEW_RENO_POISON_STILL_TIME,
    GVAR_SAN_FRAN_WONG_EAT_TIME,
    GVAR_NAVARRO_XARN,
    GVAR_SAN_FRAN_KILL_OZ9_QST,
    GVAR_NEW_RENO_ETHYL_MEETING_TIME,
    GVAR_SAN_FRAN_VERTI_STEAL_SHI_QST,
    GVAR_SAN_FRAN_VERTI_STEAL_ELE_QST,
    GVAR_SAN_FRAN_KILL_EMP_QST,
    GVAR_SAN_FRAN_VERTI_SHI_QST,
    GVAR_SAN_FRAN_VERTI_ELE_QST,
    GVAR_BROKEN_HILLS_CARAVAN_POOCH_SCREW,
    GVAR_CHAD_DEAD,
    GVAR_SAN_FRAN_JASHUA_STATUS,
    GVAR_SAN_FRAN_BOS_QUEST,
    GVAR_NCR_GUARDS_CHECK_OBJ,
    GVAR_ENEMY_BANK_GUARDS,
    GVAR_ENCLAVE_TURRET_GUARD,
    GVAR_ENCLAVE_TURRET_DETENTION,
    GVAR_ENCLAVE_TURRET_SCIENCE,
    GVAR_ENCLAVE_TURRET_PRESIDENT,
    GVAR_ENCLAVE_TURRET_MAIN,
    GVAR_HOLODISK_ENCLAVE_SECURITY,
    GVAR_HOLODISK_ENCLAVE_STATE,
    GVAR_HOLODISK_ENCLAVE_WORD,
    GVAR_HOLODISK_ENCLAVE_CHEMICAL,
    GVAR_HOLODISK_ENCLAVE_ATOMIC,
    GVAR_ENCLAVE_TURRET_HELP_PLAYER,
    GVAR_NEW_RENO_GUARD_MESSAGE_TIMER,
    GVAR_MORTON_GANG,
    GVAR_GECKO_WORKING_ON_PLANT,
    GVAR_VIGNETTE_SEQUENCE,
    GVAR_PLANT_SCHEDULED_FOR_CHANGE,
    GVAR_DROP_PLAYER_BY_VAULT_8,
    GVAR_ENCLAVE_COM_LINE,
    GVAR_LEFT_CAR_AT_RAIDERS,
    GVAR_RAIDERS_CAR_ELEVATION,
    GVAR_SEXPERT,
    GVAR_GIGALO,
    GVAR_DUDE_VIRGIN,
    GVAR_MADE_MAN_SALVATORE,
    GVAR_MADE_MAN_BISHOP,
    GVAR_MADE_MAN_MORDINO,
    GVAR_MADE_MAN_WRIGHT,
    GVAR_NCR_SPY_HOLO_DOWNLOAD,
    GVAR_NCR_HISTORY_HOLO_DOWNLOAD,
    GVAR_NCR_WESTIN_HOLO_DOWNLOAD,
    GVAR_TYPHON_QUEST_STATUS,
    GVAR_8_BALL_VAULT_TERMINAL,
    GVAR_RAIDERS_DEAD,
    GVAR_KLAMATH_GENERATOR,
    GVAR_ENTERED_GUARDIAN,
    GVAR_BATH_HOUSE_REJECT,
    GVAR_SKYNET,
    GVAR_SPECIAL_ENCOUNTER_BRIDGE,
    GVAR_SPECIAL_ENCOUNTER_HOLY2,
    GVAR_SPECIAL_ENCOUNTER_TOXIC,
    GVAR_SPECIAL_ENCOUNTER_PARIAH,
    GVAR_SPECIAL_ENCOUNTER_BRAHMIN,
    GVAR_SPECIAL_ENCOUNTER_WHALE,
    GVAR_SPECIAL_ENCOUNTER_HEAD,
    GVAR_SPECIAL_ENCOUNTER_SHUTTLE,
    GVAR_SPECIAL_ENCOUNTER_GUARDIAN,
    GVAR_SPECIAL_ENCOUNTER_HOLY1,
    GVAR_SPECIAL_ENCOUNTER_WOODSMAN,
    GVAR_GECKO_FIND_WOODY,
    GVAR_SPECIAL_ENCOUNTER_CAFE,
    GVAR_GECKO_DESCENDANT_KNOWN,
    GVAR_FIND_VIC,
    GVAR_SPECIAL_ENCOUNTER_UNWASHED,
    GVAR_KLAMATH_SCORPIONS_KILLED,
    GVAR_KLAMATH_SCORPIONS_TOTAL,
    GVAR_ENCLAVE_ENEMY_GUARD,
    GVAR_ENCLAVE_ENEMY_PRESIDENT,
    GVAR_ENCLAVE_ENEMY_TRAPS,
    GVAR_ENCLAVE_ENEMY_REACTOR,
    GVAR_ENCLAVE_ENEMY_DETENTION,
    GVAR_TOWN_REP_NAVARRO,
    GVAR_GAVE_GECK_EXP,
    GVAR_DUDE_START_SEQ_1,
    GVAR_MODOC_GHOST_SEED_PIP,
    GVAR_PARTY_MEMBERS_HIDDEN,
    GVAR_CAR_PLACED_TILE,
    GVAR_RESERVED_VAR1,
    GVAR_RESERVED_VAR2,
    GVAR_RESERVED_VAR3,
    GVAR_RESERVED_VAR4,
    GVAR_RESERVED_VAR5,
    GVAR_RESERVED_VAR6,
    GVAR_RESERVED_VAR7,
    GVAR_RESERVED_VAR8,
    GVAR_RESERVED_VAR9,
    GVAR_RESERVED_VAR10,
    GVAR_RESERVED_VAR11,
    GVAR_RESERVED_VAR12,
    GVAR_RESERVED_VAR13,
    GVAR_RESERVED_VAR14,
    GVAR_RESERVED_VAR15,
    GVAR_RESERVED_VAR16,
    GVAR_RESERVED_VAR17,
    GVAR_RESERVED_VAR18,
    GVAR_RESERVED_VAR19,
    GVAR_RESERVED_VAR20,
    GVAR_RESERVED_VAR21,
    GVAR_RESERVED_VAR22,
    GVAR_RESERVED_VAR23,
    GVAR_RESERVED_VAR24,
    GVAR_RESERVED_VAR25,
    GVAR_RESERVED_VAR26,
    GVAR_RESERVED_VAR27,
    GVAR_RESERVED_VAR28,
    GVAR_RESERVED_VAR29,
    GVAR_RESERVED_VAR30,
    GVAR_RESERVED_VAR31,
    GVAR_RESERVED_VAR32,
    GVAR_RESERVED_VAR33,
    GVAR_RESERVED_VAR34,
    GVAR_RESERVED_VAR35,
    GVAR_RESERVED_VAR36,
    GVAR_RESERVED_VAR37,
    GVAR_RESERVED_VAR38,
    GVAR_RESERVED_VAR39,
    GVAR_RESERVED_VAR40,
    GVAR_RESERVED_VAR41,
    GVAR_RESERVED_VAR42,
    GVAR_RESERVED_VAR43,
    GVAR_RESERVED_VAR44,
    GVAR_RESERVED_VAR45,
    GVAR_RESERVED_VAR46,
    GVAR_RESERVED_VAR47,
    GVAR_RESERVED_VAR48,
    GVAR_RESERVED_VAR49,
    GVAR_RESERVED_VAR50,
    GVAR_RESERVED_VAR51,
    GVAR_RESERVED_VAR52,
    GVAR_RESERVED_VAR53,
    GVAR_RESERVED_VAR54,
    GVAR_RESERVED_VAR55,
    GVAR_RESERVED_VAR56,
    GVAR_RESERVED_VAR57,
    GVAR_RESERVED_VAR58,
    GVAR_RESERVED_VAR59,
    GVAR_MODOC_JONNY_PIP,
    GVAR_NEW_RENO_FLAG_4,
    GVAR_PATCH_INVAIDITATOR,
} GameGlobalVar;

} // namespace fallout

#endif /* GAME_VARS_H */

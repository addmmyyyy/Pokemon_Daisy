@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Clearcurrent_City/map.json
@

Clearcurrent_City_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PICNICKER, 0, 56, 23, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 2, OBJ_EVENT_GFX_AZUMARILL, 0, 35, 46, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, CleartideCity_EventScript_Azumarill, 0
	object_event 3, OBJ_EVENT_GFX_CAMPER, 0, 40, 51, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, CleartideCity_EventScript_PicnicKid, 0
	object_event 4, OBJ_EVENT_GFX_TUBER_F, 0, 42, 53, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, CleartideCity_EventScript_TuberF, 0
	object_event 5, OBJ_EVENT_GFX_TUBER_M_SWIMMING, 0, 39, 56, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 6, OBJ_EVENT_GFX_GIRL_3, 0, 47, 46, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, CleartideCity_EventScript_Lady, 0
	object_event 7, OBJ_EVENT_GFX_ARTIST, 0, 30, 30, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, CleartideCity_EventScript_Artist, 0
	object_event 8, OBJ_EVENT_GFX_MART_EMPLOYEE, 0, 34, 30, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Script_PokemartStandard, 0
	object_event 9, OBJ_EVENT_GFX_COOK, 0, 45, 30, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Script_PokemartFood, 0
	object_event 10, OBJ_EVENT_GFX_FISHERMAN, 0, 41, 35, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 11, OBJ_EVENT_GFX_MART_EMPLOYEE, 0, 30, 35, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 12, OBJ_EVENT_GFX_SAILOR, 0, 20, 37, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Cleartide_EventScript_Sailor, 0
	object_event 13, OBJ_EVENT_GFX_MAN_2, 0, 28, 18, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Cleartide_EventScript_Gymguide, FLAG_CLEARTIDE_GYM_GUIDE
	object_event 14, OBJ_EVENT_GFX_ITEM_BALL, 0, 54, 42, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Route132_EventScript_ItemRareCandy, 0
	object_event 15, OBJ_EVENT_GFX_LUCY, 0, 29, 18, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_GRAINNE_HIDE

Clearcurrent_City_MapWarps:
	warp_def 41, 13, 0, 0, MAP_SLATEPORT_CITY_POKEMON_CENTER_1F
	warp_def 45, 23, 0, 0, MAP_CLEARTIDE_MUSEUM_1
	warp_def 28, 16, 0, 0, MAP_CLEARTIDE_GYM
	warp_def 52, 32, 0, 0, MAP_CLEARTIDE_BATTLE_RESTAURANT
	warp_def 22, 24, 0, 0, MAP_CLEARTIDE_HOUSE_1
	warp_def 27, 24, 0, 0, MAP_NEW_MAP1
	warp_def 32, 24, 0, 0, MAP_NEW_MAP2

Clearcurrent_City_MapBGEvents:
	bg_sign_event 46, 25, 0, BG_EVENT_PLAYER_FACING_ANY, CleartideCity_EventScript_LabSign
	bg_sign_event 53, 33, 0, BG_EVENT_PLAYER_FACING_ANY, CleartideCity_EventScript_BattleSign
	bg_sign_event 44, 45, 0, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_sign_event 35, 18, 0, BG_EVENT_PLAYER_FACING_ANY, CleartideCity_EventScript_GymSign
	bg_sign_event 36, 17, 0, BG_EVENT_PLAYER_FACING_ANY, CleartideCity_EventScript_GymSign
	bg_sign_event 36, 28, 0, BG_EVENT_PLAYER_FACING_ANY, CleartideCity_EventScript_TownSign

Clearcurrent_City_MapEvents::
	map_events Clearcurrent_City_ObjectEvents, Clearcurrent_City_MapWarps, 0x0, Clearcurrent_City_MapBGEvents


@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/AtkinsTown/map.json
@

AtkinsTown_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_GIRL_2, 0, 47, 18, 0, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, AtkinsTown_EventScript_Girl, 0
	object_event 2, OBJ_EVENT_GFX_MAN_3, 0, 35, 21, 0, MOVEMENT_TYPE_WANDER_AROUND, 3, 2, TRAINER_TYPE_NONE, 0, AtkinsTown_EventScript_Boy, 0
	object_event 3, OBJ_EVENT_GFX_ANABEL, 0, 40, 11, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, AtkinsTown_EventScript_JesseOutside, FLAG_JESSE_OUTSIDE_POYCES
	object_event 4, OBJ_EVENT_GFX_MYSTERY_GIFT_MAN, 0, 27, 23, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, AtkinsTown_EventScript_Guard, 0
	object_event 5, OBJ_EVENT_GFX_MYSTERY_GIFT_MAN, 0, 27, 22, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, AtkinsTown_EventScript_Guard, 0
	object_event 6, OBJ_EVENT_GFX_BERRY_TREE, 0, 38, 19, 0, MOVEMENT_TYPE_BERRY_TREE_GROWTH, 0, 0, TRAINER_TYPE_NONE, BERRY_TREE_ROUTE_111_RAZZ_1, BerryTreeScript, 0
	object_event 7, OBJ_EVENT_GFX_BERRY_TREE, 0, 35, 19, 0, MOVEMENT_TYPE_BERRY_TREE_GROWTH, 0, 0, TRAINER_TYPE_NONE, BERRY_TREE_ROUTE_111_RAZZ_2, BerryTreeScript, 0
	object_event 8, OBJ_EVENT_GFX_BERRY_TREE, 0, 34, 19, 0, MOVEMENT_TYPE_BERRY_TREE_GROWTH, 0, 0, TRAINER_TYPE_NONE, BERRY_TREE_ROUTE_111_ORAN_2, BerryTreeScript, 0
	object_event 9, OBJ_EVENT_GFX_SUDOWOODO, 0, 33, 20, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, AtkinsTown_EventScript_Sudowoodo, 0
	object_event 10, OBJ_EVENT_GFX_SUDOWOODO, 0, 39, 20, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, AtkinsTown_EventScript_Sudowoodo, 0
	object_event 11, OBJ_EVENT_GFX_SUDOWOODO, 0, 32, 33, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, AtkinsTown_EventScript_Sudowoodo, 0
	object_event 12, OBJ_EVENT_GFX_CUTTABLE_TREE, 0, 30, 8, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, AtkinsTown_EventScript_BonslyInteract, FLAG_BONSLY1_HIDDEN
	object_event 13, OBJ_EVENT_GFX_CUTTABLE_TREE, 0, 34, 7, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, AtkinsTown_EventScript_BonslyInteract_2, FLAG_BONSLY2_HIDDEN
	object_event 14, OBJ_EVENT_GFX_MAN_1, 0, 9, 25, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, FLAG_JESSE_OUTSIDE_POYCES, 0

AtkinsTown_MapWarps:
	warp_def 16, 13, 0, 1, MAP_ROUTE_13
	warp_def 40, 10, 0, 3, MAP_JOYCES_DUNGEON_MAIN
	warp_def 46, 13, 0, 0, MAP_ROUTE_4
	warp_def 34, 28, 0, 0, MAP_ATKINS_TOWN_HOUSE_1
	warp_def 39, 28, 0, 0, MAP_ATKINS_TOWN_HOUSE_2
	warp_def 44, 28, 0, 0, MAP_ATKINS_TOWN_HOUSE_3
	warp_def 19, 10, 0, 0, MAP_LILYCOVE_CITY_POKEMON_CENTER_1F
	warp_def 25, 10, 0, 0, MAP_VERDANTURF_TOWN_MART

AtkinsTown_MapCoordEvents:
	coord_event 28, 21, 0, VAR_POYCES_QUEST, 2, AtkinsTown_EventScript_JessseMat
	coord_event 31, 21, 0, VAR_POYCES_QUEST, 2, AtkinsTown_EventScript_JessseMat
	coord_event 30, 21, 0, VAR_POYCES_QUEST, 2, AtkinsTown_EventScript_JessseMat
	coord_event 29, 21, 0, VAR_POYCES_QUEST, 2, AtkinsTown_EventScript_JessseMat

AtkinsTown_MapBGEvents:
	bg_sign_event 32, 10, 0, BG_EVENT_PLAYER_FACING_ANY, AtkinsTown_EventScript_TownSign
	bg_sign_event 19, 24, 0, BG_EVENT_PLAYER_FACING_ANY, AtkinsTown_EventScript_HouseSign
	bg_sign_event 17, 23, 0, BG_EVENT_PLAYER_FACING_ANY, AtkinsTown_EventScript_HouseLocked
	bg_sign_event 44, 10, 0, BG_EVENT_PLAYER_FACING_ANY, AtkinsTown_EventScript_PoycesSign

AtkinsTown_MapEvents::
	map_events AtkinsTown_ObjectEvents, AtkinsTown_MapWarps, AtkinsTown_MapCoordEvents, AtkinsTown_MapBGEvents


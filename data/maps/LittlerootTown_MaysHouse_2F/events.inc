@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LittlerootTown_MaysHouse_2F/map.json
@

LittlerootTown_MaysHouse_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL, 0, 1, 1, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 0, TRAINER_TYPE_NONE, 0, RivalsHouse_2F_EventScript_Rival, FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	object_event 2, OBJ_EVENT_GFX_VAR_0, 0, 0, 6, 0, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_DECORATION_1
	object_event 3, OBJ_EVENT_GFX_VAR_1, 0, 1, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_DECORATION_2
	object_event 4, OBJ_EVENT_GFX_VAR_2, 0, 2, 6, 0, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_DECORATION_3
	object_event 5, OBJ_EVENT_GFX_VAR_3, 0, 3, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_DECORATION_4
	object_event 6, OBJ_EVENT_GFX_VAR_4, 0, 4, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_DECORATION_5
	object_event 7, OBJ_EVENT_GFX_VAR_5, 0, 5, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_DECORATION_6
	object_event 8, OBJ_EVENT_GFX_VAR_6, 0, 0, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_DECORATION_7
	object_event 9, OBJ_EVENT_GFX_VAR_7, 0, 1, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_DECORATION_8
	object_event 10, OBJ_EVENT_GFX_VAR_8, 0, 2, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_DECORATION_9
	object_event 11, OBJ_EVENT_GFX_VAR_9, 0, 3, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_DECORATION_10
	object_event 12, OBJ_EVENT_GFX_VAR_A, 0, 4, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_DECORATION_11
	object_event 13, OBJ_EVENT_GFX_VAR_B, 0, 5, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_DECORATION_12
	object_event 14, OBJ_EVENT_GFX_MOM, 0, 1, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM
	object_event 15, OBJ_EVENT_GFX_PICHU_DOLL, 0, 3, 4, 4, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
	object_event 16, OBJ_EVENT_GFX_ITEM_BALL, 0, 5, 4, 0, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall, FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL

LittlerootTown_MaysHouse_2F_MapWarps:
	warp_def 1, 1, 0, 2, MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F

LittlerootTown_MaysHouse_2F_MapBGEvents:
	bg_sign_event 5, 1, 0, BG_EVENT_PLAYER_FACING_ANY, PlayersHouse_2F_EventScript_GameCube
	bg_sign_event 7, 1, 0, BG_EVENT_PLAYER_FACING_ANY, PlayersHouse_2F_EventScript_Notebook
	bg_sign_event 3, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_MaysHouse_2F_EventScript_WallClock
	bg_sign_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_MaysHouse_2F_EventScript_PC

LittlerootTown_MaysHouse_2F_MapEvents::
	map_events LittlerootTown_MaysHouse_2F_ObjectEvents, LittlerootTown_MaysHouse_2F_MapWarps, 0x0, LittlerootTown_MaysHouse_2F_MapBGEvents

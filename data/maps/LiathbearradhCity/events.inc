@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LiathbearradhCity/map.json
@

LiathbearradhCity_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LASS, 0, 31, 19, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Liabara_EventScript_Lass, 0
	object_event 2, OBJ_EVENT_GFX_ARTIST, 0, 34, 38, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, Liabara_EventScript_Artist, 0
	object_event 3, OBJ_EVENT_GFX_AZURILL, 0, 36, 36, 0, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, TRAINER_TYPE_NONE, 0, Liabara_EventScript_Azurill, 0
	object_event 4, OBJ_EVENT_GFX_MANIAC, 0, 9, 20, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, Liabara_EventScript_Maniac, 0
	object_event 5, OBJ_EVENT_GFX_GENTLEMAN, 0, 11, 38, 0, MOVEMENT_TYPE_WANDER_AROUND, 2, 1, TRAINER_TYPE_NONE, 0, Liabara_EventScript_Gentleman, 0
	object_event 6, OBJ_EVENT_GFX_LITTLE_GIRL, 0, 26, 36, 0, MOVEMENT_TYPE_WANDER_AROUND, 3, 3, TRAINER_TYPE_NONE, 0, Liabara_EventScript_LittleGirl, 0

LiathbearradhCity_MapWarps:
	warp_def 28, 26, 0, 0, MAP_PETALBURG_CITY_MART
	warp_def 35, 26, 0, 0, MAP_PETALBURG_CITY_POKEMON_CENTER_1F
	warp_def 17, 30, 0, 0, MAP_LIABARA_CITY_COTTAGE_2
	warp_def 13, 29, 0, 0, MAP_LIABARA_CITY_COTTAGE_1
	warp_def 9, 31, 0, 0, MAP_LIABARA_CITY_LAB
	warp_def 5, 17, 0, 0, MAP_LIATHBEARRADH_CITY_GYM
	warp_def 23, 13, 0, 0, MAP_LIABARA_CITY_MUSEUM
	warp_def 30, 9, 0, 0, MAP_MINE_HOUSE_1
	warp_def 33, 9, 0, 0, MAP_MINE_HOUSE_2
	warp_def 36, 9, 0, 0, MAP_MINE_HOUSE_3
	warp_def 39, 9, 0, 0, MAP_MINE_HOUSE_4
	warp_def 25, 30, 0, 0, MAP_LIATHBEARRADH_CITY

LiathbearradhCity_MapBGEvents:
	bg_sign_event 8, 18, 0, BG_EVENT_PLAYER_FACING_ANY, Liabara_EventScript_GymSign
	bg_sign_event 22, 28, 0, BG_EVENT_PLAYER_FACING_ANY, Liabara_EventScript_TownSign
	bg_sign_event 12, 31, 0, BG_EVENT_PLAYER_FACING_ANY, Liabara_EventScript_LabSign
	bg_sign_event 24, 14, 0, BG_EVENT_PLAYER_FACING_ANY, Liabara_EventScript_MuseumSign
	bg_sign_event 13, 30, 0, BG_EVENT_PLAYER_FACING_ANY, Route2_EventScript_DoorLocked

LiathbearradhCity_MapEvents::
	map_events LiathbearradhCity_ObjectEvents, LiathbearradhCity_MapWarps, 0x0, LiathbearradhCity_MapBGEvents


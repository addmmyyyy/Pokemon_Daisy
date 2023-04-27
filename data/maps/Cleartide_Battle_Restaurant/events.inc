@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Cleartide_Battle_Restaurant/map.json
@

Cleartide_Battle_Restaurant_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LASS, 0, 4, 7, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 2, OBJ_EVENT_GFX_MANIAC, 0, 17, 4, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 3, OBJ_EVENT_GFX_GIRL_2, 0, 7, 4, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 4, OBJ_EVENT_GFX_HEX_MANIAC, 0, 14, 7, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 5, OBJ_EVENT_GFX_GENTLEMAN, 0, 9, 4, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 6, OBJ_EVENT_GFX_GRETA, 0, 12, 7, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 7, OBJ_EVENT_GFX_EXPERT_F, 0, 1, 2, -1, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Multichoice2_Demo, FLAG_HIDE_HIYORI

Cleartide_Battle_Restaurant_MapWarps:
	warp_def 1, 8, 0, 3, MAP_CLEARCURRENT_CITY
	warp_def 0, 8, 0, 3, MAP_CLEARCURRENT_CITY
	warp_def 5, 1, 0, 0, MAP_CLEARTIDE_BATTLE_RESTAURANT_BACKROOM

Cleartide_Battle_Restaurant_MapCoordEvents:
	coord_event 1, 7, 0, VAR_TEMP_0, 0, CleartideBattleRestaurant_EventScript_EntranceRight
	coord_event 0, 7, 0, VAR_TEMP_0, 0, CleartideBattleRestaurant_EventScript_EntranceLeft

Cleartide_Battle_Restaurant_MapEvents::
	map_events Cleartide_Battle_Restaurant_ObjectEvents, Cleartide_Battle_Restaurant_MapWarps, Cleartide_Battle_Restaurant_MapCoordEvents, 0x0


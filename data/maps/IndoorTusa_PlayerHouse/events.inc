@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/IndoorTusa_PlayerHouse/map.json
@

IndoorTusa_PlayerHouse_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MOM, 0, 9, 7, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, TusaTown_PlayerHouse_InteractMom, 0
	object_event 2, OBJ_EVENT_GFX_MAN_4, 0, 13, 8, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, TusaTown_PlayerHouse_InteractCarraig, FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
	object_event 3, OBJ_EVENT_GFX_BIRCHS_BAG, 0, 12, 7, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Script_TusaTown_PlayerHouse_CarraigsBag, FLAG_HIDE_PETALBURG_CITY_WALLY

IndoorTusa_PlayerHouse_MapWarps:
	warp_def 2, 1, 0, 0, MAP_TUSA_TOWN_PLAYER_ROOM
	warp_def 2, 9, 0, 0, MAP_ROUTE_1
	warp_def 1, 9, 0, 0, MAP_ROUTE_1

IndoorTusa_PlayerHouse_MapCoordEvents:
	coord_event 0, 5, 0, VAR_OPENING_SCENE_COMPLETE, 0, Script_TusaTown_PlayerHouse_OpeningCutscene_1
	coord_event 1, 5, 0, VAR_OPENING_SCENE_COMPLETE, 0, Script_TusaTown_PlayerHouse_OpeningCutscene_2
	coord_event 2, 5, 0, VAR_OPENING_SCENE_COMPLETE, 0, Script_TusaTown_PlayerHouse_OpeningCutscene_3
	coord_event 3, 5, 0, VAR_OPENING_SCENE_COMPLETE, 0, Script_TusaTown_PlayerHouse_OpeningCutscene_4
	coord_event 4, 5, 0, VAR_OPENING_SCENE_COMPLETE, 0, Script_TusaTown_PlayerHouse_OpeningCutscene_5
	coord_event 5, 7, 0, VAR_OPENING_SCENE_COMPLETE, 0, Script_TusaTown_PlayerHouse_CallBack
	coord_event 5, 8, 0, VAR_OPENING_SCENE_COMPLETE, 0, Script_TusaTown_PlayerHouse_CallBack
	coord_event 5, 9, 0, VAR_OPENING_SCENE_COMPLETE, 0, Script_TusaTown_PlayerHouse_CallBack

IndoorTusa_PlayerHouse_MapEvents::
	map_events IndoorTusa_PlayerHouse_ObjectEvents, IndoorTusa_PlayerHouse_MapWarps, IndoorTusa_PlayerHouse_MapCoordEvents, 0x0


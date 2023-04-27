@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route1/map.json
@

Route1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ANABEL, 0, 10, 50, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_VISITED_PETALBURG_CITY
	object_event 2, OBJ_EVENT_GFX_GULPIN_DOLL, 0, 10, 51, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_VISITED_PETALBURG_CITY
	object_event 3, OBJ_EVENT_GFX_ZIGZAGOON_1, 0, 10, 52, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_VISITED_PETALBURG_CITY
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 0, 10, 52, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_VISITED_PETALBURG_CITY
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 0, 42, 9, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Route115_EventScript_ItemGreatBall, 0

Route1_MapWarps:
	warp_def 36, 25, 0, 0, MAP_OLDALE_TOWN_MART

Route1_MapCoordEvents:
	coord_event 7, 56, 0, VAR_PETALBURG_CITY_STATE, 0, Route1_EventScript_JesseTutorial

Route1_MapBGEvents:
	bg_sign_event 32, 26, 0, BG_EVENT_PLAYER_FACING_ANY, Route1_EventScript_RouteSign

Route1_MapEvents::
	map_events Route1_ObjectEvents, Route1_MapWarps, Route1_MapCoordEvents, Route1_MapBGEvents


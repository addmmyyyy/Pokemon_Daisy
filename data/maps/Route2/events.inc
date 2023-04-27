@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route2/map.json
@

Route2_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_YOUNGSTER, 0, 9, 21, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NORMAL, 2, Route2_EventScript_Rory, 0
	object_event 2, OBJ_EVENT_GFX_LASS, 0, 16, 20, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NORMAL, 3, Route2_EventScript_Jane, 0
	object_event 3, OBJ_EVENT_GFX_NINJA_BOY, 0, 21, 13, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NORMAL, 2, Route2_EventScript_Joseph, 0
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 0, 25, 13, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Route111_EventScript_ItemTM37, 0
	object_event 5, OBJ_EVENT_GFX_EXPERT_M, 0, 35, 27, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NORMAL, 3, Route2_EventScript_Bosco, 0
	object_event 6, OBJ_EVENT_GFX_ITEM_BALL, 0, 38, 29, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Route104_EventScript_ItemPotion, 0

Route2_MapWarps:
	warp_def 38, 8, 0, 0, MAP_ROUTE_2_CAVE
	warp_def 32, 7, 0, 1, MAP_ROUTE_2_CAVE

Route2_MapCoordEvents:
	coord_event 14, 31, 0, VAR_TEMP_0, 0, Route2_EventScript_Encounters0
	coord_event 15, 31, 0, VAR_TEMP_0, 0, Route2_EventScript_Encounters0
	coord_event 14, 33, 0, VAR_TEMP_0, 0, Route2_EventScript_Encounters1
	coord_event 15, 33, 0, VAR_TEMP_0, 0, Route2_EventScript_Encounters1
	coord_event 31, 18, 0, VAR_TEMP_0, 0, Route2_EventScript_Encounters1
	coord_event 30, 15, 0, VAR_TEMP_0, 0, Route2_EventScript_Encounters0
	coord_event 31, 15, 0, VAR_TEMP_0, 0, Route2_EventScript_Encounters0
	coord_event 30, 18, 0, VAR_TEMP_0, 0, Route2_EventScript_Encounters1

Route2_MapBGEvents:
	bg_sign_event 8, 10, 0, BG_EVENT_PLAYER_FACING_ANY, Route2_EventScript_GuildSign
	bg_sign_event 9, 9, 0, BG_EVENT_PLAYER_FACING_ANY, Route2_EventScript_DoorLocked

Route2_MapEvents::
	map_events Route2_ObjectEvents, Route2_MapWarps, Route2_MapCoordEvents, Route2_MapBGEvents


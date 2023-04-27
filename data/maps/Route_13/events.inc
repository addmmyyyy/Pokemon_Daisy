@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route_13/map.json
@

Route_13_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MANIAC, 0, 28, 11, 0, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT, 0, 0, TRAINER_TYPE_NORMAL, 4, Route3_EventScript_Anthony, 0
	object_event 2, OBJ_EVENT_GFX_TUBER_M, 0, 31, 19, 0, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NORMAL, 4, Route3_EventScript_Declan, 0
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 0, 33, 9, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Route115_EventScript_ItemSuperPotion, 0
	object_event 4, OBJ_EVENT_GFX_FAT_MAN, 0, 37, 8, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, Route3_EventScript_SudowoodoGuyInteract, 0
	object_event 5, OBJ_EVENT_GFX_SUDOWOODO, 0, 39, 9, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Route3_EventScript_SudowoodoInteract, FLAG_DEFEATED_SUDOWOODO
	object_event 6, OBJ_EVENT_GFX_ITEM_BALL, 0, 35, 18, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Route102_EventScript_ItemPotion, 0

Route_13_MapWarps:
	warp_def 19, 10, 0, 2, MAP_CAVE_OF_ORIGIN_B1F
	warp_def 52, 16, 0, 0, MAP_ATKINS_TOWN

Route_13_MapEvents::
	map_events Route_13_ObjectEvents, Route_13_MapWarps, 0x0, 0x0


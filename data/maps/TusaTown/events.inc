@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/TusaTown/map.json
@

TusaTown_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_FAT_MAN, 0, 14, 24, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, TusaTown_EventScript_Gatekeeper, 0
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 0, 8, 40, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Route111_EventScript_ItemTM37, 0

TusaTown_MapWarps:
	warp_def 22, 37, 0, 0, MAP_CAVE_OF_ORIGIN_ENTRANCE
	warp_def 19, 18, 0, 0, MAP_TUSA_TOWN_HOUSE_2
	warp_def 26, 20, 0, 0, MAP_TUSA_TOWN_HOUSE_3
	warp_def 2, 20, 0, 0, MAP_TUSA_TOWN_HOUSE_1
	warp_def 14, 11, 0, 0, MAP_OLDALE_TOWN_POKEMON_CENTER_1F

TusaTown_MapCoordEvents:
	coord_event 15, 24, 0, VAR_TEMP_0, 0, TusaTown_EventScript_GatekeepTrigger

TusaTown_MapBGEvents:
	bg_sign_event 12, 23, 0, BG_EVENT_PLAYER_FACING_ANY, TusaTown_EventScript_TownSign

TusaTown_MapEvents::
	map_events TusaTown_ObjectEvents, TusaTown_MapWarps, TusaTown_MapCoordEvents, TusaTown_MapBGEvents


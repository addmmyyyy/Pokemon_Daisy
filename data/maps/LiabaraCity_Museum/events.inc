@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LiabaraCity_Museum/map.json
@

LiabaraCity_Museum_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MAN_2, 0, 2, 2, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, LiabaraMuseum_EventScript_Guide, 0

LiabaraCity_Museum_MapWarps:
	warp_def 1, 8, 0, 6, MAP_LIATHBEARRADH_CITY
	warp_def 2, 8, 0, 6, MAP_LIATHBEARRADH_CITY

LiabaraCity_Museum_MapBGEvents:
	bg_sign_event 1, 5, 0, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_sign_event 3, 5, 0, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_sign_event 7, 5, 0, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_sign_event 9, 5, 0, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_sign_event 5, 1, 0, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_sign_event 6, 1, 0, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_sign_event 7, 1, 0, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_sign_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_sign_event 9, 1, 0, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_sign_event 10, 1, 0, BG_EVENT_PLAYER_FACING_ANY, NULL

LiabaraCity_Museum_MapEvents::
	map_events LiabaraCity_Museum_ObjectEvents, LiabaraCity_Museum_MapWarps, 0x0, LiabaraCity_Museum_MapBGEvents


@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route119_WeatherInstitute_2F/map.json
@

Route119_WeatherInstitute_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_AQUA_MEMBER_F, 0, 4, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NORMAL, 0, Route119_WeatherInstitute_2F_EventScript_Shelly, FLAG_HIDE_ROUTE_119_TEAM_AQUA
	object_event 2, OBJ_EVENT_GFX_MAN_4, 0, 0, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
	object_event 3, OBJ_EVENT_GFX_SCIENTIST_1, 0, 18, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 2, 1, TRAINER_TYPE_NONE, 0, Route119_WeatherInstitute_2F_EventScript_WeatherScientist, 0
	object_event 4, OBJ_EVENT_GFX_MAN_4, 0, 1, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
	object_event 5, OBJ_EVENT_GFX_AQUA_MEMBER_M, 0, 16, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
	object_event 6, OBJ_EVENT_GFX_AQUA_MEMBER_F, 0, 19, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, Route119_WeatherInstitute_2F_EventScript_Grunt5, FLAG_HIDE_ROUTE_119_TEAM_AQUA

Route119_WeatherInstitute_2F_MapWarps:
	warp_def 17, 1, 0, 2, MAP_ROUTE119_WEATHER_INSTITUTE_1F

Route119_WeatherInstitute_2F_MapEvents::
	map_events Route119_WeatherInstitute_2F_ObjectEvents, Route119_WeatherInstitute_2F_MapWarps, 0x0, 0x0


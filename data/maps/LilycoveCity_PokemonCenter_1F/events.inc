@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LilycoveCity_PokemonCenter_1F/map.json
@

LilycoveCity_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 0, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_EXPERT_F, 0, 10, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_PokemonCenter_1F_EventScript_Boy, 0
	object_event 3, OBJ_EVENT_GFX_MANIAC, 0, 11, 8, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_PokemonCenter_1F_EventScript_Maniac, 0

LilycoveCity_PokemonCenter_1F_MapWarps:
	warp_def 7, 8, 3, 6, MAP_ATKINS_TOWN
	warp_def 6, 8, 3, 6, MAP_ATKINS_TOWN
	warp_def 1, 6, 4, 0, MAP_LILYCOVE_CITY_POKEMON_CENTER_2F

LilycoveCity_PokemonCenter_1F_MapEvents::
	map_events LilycoveCity_PokemonCenter_1F_ObjectEvents, LilycoveCity_PokemonCenter_1F_MapWarps, 0x0, 0x0


@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PetalburgCity_PokemonCenter_1F/map.json
@

PetalburgCity_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 0, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, PetalburgCity_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_OLD_MAN, 0, 10, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, PetalburgCity_PokemonCenter_1F_EventScript_OldMan, 0
	object_event 3, OBJ_EVENT_GFX_YOUNGSTER, 0, 1, 6, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, PetalburgCity_PokemonCenter_1F_EventScript_Youngster, 0
	object_event 4, OBJ_EVENT_GFX_LASS, 0, 12, 2, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, PetalburgCity_PokemonCenter_1F_EventScript_Woman, 0

PetalburgCity_PokemonCenter_1F_MapWarps:
	warp_def 7, 8, 3, 1, MAP_LIATHBEARRADH_CITY
	warp_def 6, 8, 3, 1, MAP_LIATHBEARRADH_CITY

PetalburgCity_PokemonCenter_1F_MapEvents::
	map_events PetalburgCity_PokemonCenter_1F_ObjectEvents, PetalburgCity_PokemonCenter_1F_MapWarps, 0x0, 0x0


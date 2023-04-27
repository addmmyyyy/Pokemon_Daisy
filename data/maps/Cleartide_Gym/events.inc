@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Cleartide_Gym/map.json
@

Cleartide_Gym_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ARTIST, 0, 10, 40, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NORMAL, 2, CleartideGym_EventScript_MARK, 0
	object_event 2, OBJ_EVENT_GFX_ARTIST, 0, 6, 40, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NORMAL, 2, CleartideGym_EventScript_STEPHEN, 0
	object_event 3, OBJ_EVENT_GFX_ARTIST, 0, 6, 21, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NORMAL, 2, CleartideGym_EventScript_LUKE, 0
	object_event 4, OBJ_EVENT_GFX_ARTIST, 0, 10, 5, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NORMAL, 2, CleartideGym_EventScript_PATRICK, 0
	object_event 5, OBJ_EVENT_GFX_BEAUTY, 0, 6, 5, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NORMAL, 2, CleartideGym_EventScript_MARY, 0
	object_event 6, OBJ_EVENT_GFX_AZURILL_DOLL, 0, 4, 56, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Cleartide_EventScript_Azurill, 0
	object_event 7, OBJ_EVENT_GFX_TOTODILE_DOLL, 0, 8, 56, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Cleartide_EventScript_Totodile, 0
	object_event 8, OBJ_EVENT_GFX_UNUSED_SQUIRTLE_DOLL, 0, 12, 56, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Cleartide_EventScript_Squirtle, 0
	object_event 9, OBJ_EVENT_GFX_UNUSED_PIKACHU_DOLL, 0, 4, 37, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Cleartide_EventScript_Pikachu, 0
	object_event 10, OBJ_EVENT_GFX_UNUSED_WOOPER_DOLL, 0, 8, 37, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Cleartide_EventScript_Wooper, 0
	object_event 11, OBJ_EVENT_GFX_MUDKIP_DOLL, 0, 12, 37, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Cleartide_EventScript_Mudkip, 0
	object_event 12, OBJ_EVENT_GFX_BIG_BLASTOISE_DOLL, 0, 12, 18, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Cleartide_EventScript_Blastoise, 0
	object_event 13, OBJ_EVENT_GFX_BIG_WAILMER_DOLL, 0, 4, 18, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Cleartide_EventScript_Wailmer, 0
	object_event 14, OBJ_EVENT_GFX_BIG_LAPRAS_DOLL, 0, 8, 18, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Cleartide_EventScript_Lapras, 0
	object_event 15, OBJ_EVENT_GFX_ARTIST, 0, 10, 21, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NORMAL, 2, CleartideGym_EventScript_DANIEL, 0

Cleartide_Gym_MapWarps:
	warp_def 9, 60, 0, 2, MAP_CLEARCURRENT_CITY
	warp_def 7, 60, 0, 2, MAP_CLEARCURRENT_CITY
	warp_def 8, 60, 0, 2, MAP_CLEARCURRENT_CITY
	warp_def 8, 2, 0, 0, MAP_CLEARCURRENT_GYM_BATTLE_GROUND

Cleartide_Gym_MapBGEvents:
	bg_sign_event 8, 58, 0, BG_EVENT_PLAYER_FACING_ANY, Cleartide_EventScript_PuzzleOne
	bg_sign_event 3, 39, 0, BG_EVENT_PLAYER_FACING_ANY, Cleartide_EventScript_PuzzleTwo
	bg_sign_event 8, 39, 0, BG_EVENT_PLAYER_FACING_ANY, Cleartide_EventScript_PuzzleTwo
	bg_sign_event 13, 39, 0, BG_EVENT_PLAYER_FACING_ANY, Cleartide_EventScript_PuzzleTwo
	bg_sign_event 8, 20, 0, BG_EVENT_PLAYER_FACING_ANY, Cleartide_EventScript_PuzzleThree
	bg_sign_event 3, 20, 0, BG_EVENT_PLAYER_FACING_ANY, Cleartide_EventScript_PuzzleThree
	bg_sign_event 13, 20, 0, BG_EVENT_PLAYER_FACING_ANY, Cleartide_EventScript_PuzzleThree

Cleartide_Gym_MapEvents::
	map_events Cleartide_Gym_ObjectEvents, Cleartide_Gym_MapWarps, 0x0, Cleartide_Gym_MapBGEvents


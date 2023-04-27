@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MagmaHideout_2F_2R/map.json
@

MagmaHideout_2F_2R_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 0, 21, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, MagmaHideout_2F_2R_EventScript_ItemMaxElixir, FLAG_ITEM_MAGMA_HIDEOUT_2F_2R_MAX_ELIXIR
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 0, 14, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, MagmaHideout_2F_2R_EventScript_ItemFullRestore, FLAG_ITEM_MAGMA_HIDEOUT_2F_2R_FULL_RESTORE

MagmaHideout_2F_2R_MapWarps:
	warp_def 10, 22, 3, 0, MAP_MAGMA_HIDEOUT_2F_1R
	warp_def 36, 4, 0, 2, MAP_MAGMA_HIDEOUT_1F

MagmaHideout_2F_2R_MapEvents::
	map_events MagmaHideout_2F_2R_ObjectEvents, MagmaHideout_2F_2R_MapWarps, 0x0, 0x0


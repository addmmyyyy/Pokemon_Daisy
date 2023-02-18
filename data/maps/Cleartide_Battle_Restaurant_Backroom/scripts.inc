Cleartide_Battle_Restaurant_Backroom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CBR_EventScript_OnFrame
	.byte 0


CBR_EventScript_OnFrame::
	map_script_2 VAR_CBR, 0, CBR_EventScript_BackRoomEnter
	.2byte 0


CBR_EventScript_BackRoomEnter::
	clearflag FLAG_HIDE_HIYORI
	setvar VAR_CBR, 1
	applymovement OBJ_EVENT_ID_PLAYER Movement_To_Arena
	waitmovement 0
	trainerbattle_single TRAINER_D_HIYORI CBR_Text_HSIntro CBR_Text_HSDefeat, CBR_EventScript_BackRoomLeave
	end

CBR_EventScript_BackRoomLeave::
	setvar VAR_CBR, 2
	applymovement 1 Movement_From_Arena_Hiyori
	waitmovement 0
	removeobject 1
	setflag FLAG_HIDE_HIYORI
	applymovement OBJ_EVENT_ID_PLAYER Movement_From_Arena_Player
	waitmovement 0
	warp MAP_CLEARTIDE_BATTLE_RESTAURANT, 5, 1
	waitstate
	end

Movement_From_Arena_Hiyori:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
 	face_down
	step_end
Movement_From_Arena_Player:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	face_down
	step_end

CBR_Text_HSIntro:
	.string "It's always a pleasure to \n"
	.string "watch a young'un's star rise. \p"
	.string "Good job on defeating my regulars, \n"
	.string "as owner of this restaurant, I'll \l"
	.string "stand as your final test. Osu! $"

CBR_Text_HSDefeat:
	.string "Hoho, very well done. Here \n"
	.string "come back to the desk. I \l"
	.string "have a prize to mark your \l"
	.string "achievement.$"



Movement_To_Arena:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	face_left
	step_end

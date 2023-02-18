ClearcurrentGym_BattleGround_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CGB_EventScript_OnFrame
	.byte 0

CGB_EventScript_OnFrame::
	map_script_2 VAR_TEMP_0, 0, CGB_EventScript_StartFight
	.2byte 0

CGB_EventScript_StartFight::
	applymovement OBJ_EVENT_ID_PLAYER Movement_To_PlayersSide_Cleartide
	waitmovement 0
	MSGBOX CGB_Text_Preamble MSGBOX_NPC
	applymovement OBJ_EVENT_ID_PLAYER Movement_Right
	waitmovement 0
	applymovement 1 Movement_Left
	waitmovement 0

	trainerbattle_single TRAINER_D_GRAINNE CGB_Text_Intro, CGB_Text_Defeat, CGB_EventScript_WonFight
	end

CGB_Text_Preamble:
	.string "GRAINNE: So you made it, \n"
	.string "challenger.\p"
	.string "REF: The rules for this \n"
	.string "battle are as follows - \p"
	.string "The challenger may use up to \n"
	.string "their full party. The gym leader \l"
	.string "shall be restricted to four.\p"
	.string "Held items will be allowed for \n"
	.string "both parties. \p"
	.string "The challenger may use any\n"
	.string "amount of healing items, while \l"
	.string "the gym leader shall be restricted\l"
	.string "to two.\p"
	.string "GRAINNE: I'd say you should \n"
	.string "have brought an umbrella, but \l"
	.string "they wouldn't really help in\l"
	.string "these winds.$"

CGB_Text_Intro:
	.string "GRAINNE: But it's in weather\n"
	.string "like this where my Pokémon are\l"
	.string "in peak condition. \p"
	.string "Let's see if you can overcome \n"
	.string "home turf advantage.\p"
	.string "REF: Begin!$"

CGB_Text_Defeat:
	.string "Hmm... congratulations.$"

CGB_Text_PostDefeat:
	.string "GRAINNE: Before I give you \n"
	.string "your hard-earned badge, I'd \l"
	.string "imagine you'll want to move to\l"
	.string "an area with a tad more shelter.$"

CGB_EventScript_WonFight::
	setvar VAR_CTG, 1
	setflag FLAG_BADGE02_GET
	clearflag FLAG_CLEARTIDE_GYM_GUIDE
	clearflag FLAG_GRAINNE_HIDE
	MSGBOX CGB_Text_PostDefeat MSGBOX_NPC
	warp MAP_CLEARCURRENT_CITY, 28, 18
	waitstate
	end

Movement_Left:
	walk_left
	step_end
Movement_Right:
	walk_right
	face_left
	step_end
Movement_To_PlayersSide_Cleartide:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	face_left
	step_end

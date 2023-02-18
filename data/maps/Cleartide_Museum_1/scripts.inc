Cleartide_Museum_1_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CTM_EventScript_OnFrame
	.byte 0

CTM_EventScript_OnFrame::
map_script_2 VAR_CTM, 1, CTM_EventScript_GrainneEthelCutscene
.2byte 0

Movement_PlayerToCutscene:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	face_down
	step_end

Movement_EthelToLab:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

CTM_EventScript_GrainneEthelCutscene::
	setvar VAR_CTM 0
	applymovement OBJ_EVENT_ID_PLAYER Movement_PlayerToCutscene
	MSGBOX CTM_Text_EthelGrainneCutscene_1 MSGBOX_DEFAULT
	applymovement 2 Movement_TurnUp
	waitmovement 0
	MSGBOX CTM_Text_EthelGrainneCutscene_2 MSGBOX_DEFAULT
	applymovement 3 Movement_TurnUp
	waitmovement 0
	MSGBOX CTM_EventScript_EthelGrainneCutscene_3 MSGBOX_DEFAULT
	applymovement 2 Movement_TurnRight
	waitmovement 0
	MSGBOX CTM_EventScript_EthelGrainneCutscene_4 MSGBOX_DEFAULT
	applymovement 3 Movement_TurnLeft
	waitmovement 0
	MSGBOX CTM_EventScript_EthelGrainneCutscene_5 MSGBOX_DEFAULT
	goto_if_set FLAG_GRAINNE_LIKES CTM_EventScript_EthelGrainneCutscene_Special
	goto CTM_EventScript_EthelGrainneCutscene_2
	end

CTM_EventScript_EthelGrainneCutscene_Special::
	applymovement 3 Movement_TurnUp
	waitmovement 0
	MSGBOX CTM_EventScript_SpecialDialogue MSGBOX_DEFAULT
	goto CTM_EventScript_EthelGrainneCutscene_2
	end
Movement_GrainneLeavesLab:
	walk_down
	walk_down
	step_end

CTM_EventScript_EthelGrainneCutscene_2::
	applymovement 3 Movement_TurnDown
	waitmovement 0
	MSGBOX CTM_EventScript_EthelGrainneCutscene_6 MSGBOX_DEFAULT
	applymovement 3 Movement_GrainneLeavesLab
	waitmovement 0
	removeobject 3
	applymovement 2 Movement_TurnDown
	waitmovement 0
	MSGBOX CTM_EventScript_EthelGrainneCutscene_7 MSGBOX_DEFAULT
	applymovement 2 Movement_TurnUp
	waitmovement 0
	MSGBOX CTM_EventScript_EthelGrainneCutscene_8 MSGBOX_DEFAULT
	applymovement 2 Movement_EthelToLab
	waitmovement 0
	opendoor 2 1
	waitdooranim
	closedoor 2 1
	waitdooranim
	removeobject 2
	setflag FLAG_GRAINNE_ETHEL_CUTSCENE
	closemessage
	end

CTM_Text_EthelGrainneCutscene_1:
	.string "ETHEL: Oh, how lovely to see\n"
	.string "the local Gym Leader finally take\l"
	.string "interest in my research.\p"
	.string "GRAINNE: Mhm, sure.$"

CTM_Text_EthelGrainneCutscene_2:
	.string "ETHEL: Why, is that {PLAYER}?\n"
	.string "Your mam did tell me you'd be\l"
	.string "heading to Cleartide, but you\l"
	.string "hardly managed that journey\l"
	.string "already?$"

CTM_EventScript_EthelGrainneCutscene_3:
		.string "GRAINNE: Oh. You know each\n"
		.string "other? That certainly puts your\l"
		.string "answers into an interesting \l"
		.string "perspective.$"

CTM_EventScript_EthelGrainneCutscene_4:
	.string "ETHEL: Answers? Oh for the\n"
	.string "love of... Grainne, you've\l"
	.string "hardly been pulling your \l"
	.string "nonsense on them?$"

CTM_EventScript_EthelGrainneCutscene_5:
	.string "GRAINNE: I'll take my cue\n"
	.string "to leave.$"

CTM_EventScript_SpecialDialogue:
	.string "GRAINNE: By the by\n"
	.string "{PLAYER}.\p"
	.string "If you want to improve your\n"
	.string "chances for our battle,\l"
	.string "I'd ask around. The locals\l"
	.string "are well used to my tricks.$"

	CTM_EventScript_EthelGrainneCutscene_6:
		.string "GRAINNE: Seeya, Ethel.$"

CTM_EventScript_EthelGrainneCutscene_7:
	.string "ETHEL: Blegh.$"

	CTM_EventScript_EthelGrainneCutscene_8:
		.string "ETHEL: {PLAYER}. I'd \n"
		.string "love the opportunity to chat more\l"
		.string "but I have some important business\l"
		.string "to attend to. If you would like\l"
		.string "to provide a helping hand, just\l"
		.string "head through the left door, and\l"
		.string "continue up the stairs to my lab.$"

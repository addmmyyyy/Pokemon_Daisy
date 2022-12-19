IndoorTusa_PlayerHouse_MapScripts::
	.byte 0
	.byte 0
	.set LOCALID_MOM, 1
	.set LOCALID_CARRAIG, 2
	.set LOCALID_CARRAIGBAG, 3
	map_script MAP_SCRIPT_ON_LOAD Script_TusaTown_PlayerHouse_Setup

	Script_TusaTown_PlayerHouse_Setup::
		setflag FLAG_TEMP_1
		end

	Script_TusaTown_PlayerHouse_CarraigsBag::
		lock
		faceplayer
		special ChooseStarter
		waitstate
		delay 10
		playfanfare MUS_OBTAIN_ITEM
		waitfanfare
		bufferleadmonspeciesname 0
		msgbox Text_Obtained_Starter, MSGBOX_DEFAULT
		delay 10
		applymovement LOCALID_CARRAIG Movement_CarraigLeave
		waitmovement 0
		removeobject LOCALID_CARRAIG
		setflag FLAG_HIDE_PETALBURG_CITY_WALLY
		release
		end

	Script_TusaTown_PlayerHouse_OpeningCutscene::
		applymovement LOCALID_CARRAIG, Movement_Exclam
		waitmovement 0
		msgbox Text_Carraig1, MSGBOX_DEFAULT
		applymovement OBJ_EVENT_ID_PLAYER, Movement_TurnUp
		waitmovement 0
		delay 40
		applymovement LOCALID_MOM, Movement_TurnDown
		waitmovement 0
		msgbox Text_Mom1, MSGBOX_DEFAULT
		delay 10
		msgbox Text_Carraig2, MSGBOX_DEFAULT
		applymovement OBJ_EVENT_ID_PLAYER, Movement_TurnRight
		waitmovement 0
		msgbox Text_Mom2, MSGBOX_DEFAULT
		msgbox Text_Carraig3, MSGBOX_DEFAULT
		applymovement LOCALID_MOM, Movement_TurnRight
		applymovement LOCALID_MOM, Movement_Exclam
		waitmovement 0
		msgbox Text_Mom3, MSGBOX_DEFAULT
		msgbox Text_Carraig4, MSGBOX_DEFAULT
		clearflag FLAG_TEMP_1
		msgbox Text_Carraig5, MSGBOX_DEFAULT
		msgbox Text_Mom4
		release
		end

	Script_TusaTown_PlayerHouse_OpeningCutscene_1::
		setvar VAR_OPENING_SCENE_COMPLETE, 1
		lock
		msgbox Text_MomCallsYouOver, MSGBOX_DEFAULT
		applymovement OBJ_EVENT_ID_PLAYER, TusaTown_PlayerHouse_PlayerToTable1
		waitmovement 0
		goto Script_TusaTown_PlayerHouse_OpeningCutscene
		end

	Script_TusaTown_PlayerHouse_OpeningCutscene_2::
			setvar VAR_OPENING_SCENE_COMPLETE, 1
			lock
			msgbox Text_MomCallsYouOver, MSGBOX_DEFAULT
			applymovement OBJ_EVENT_ID_PLAYER, TusaTown_PlayerHouse_PlayerToTable2
			waitmovement 0
			goto Script_TusaTown_PlayerHouse_OpeningCutscene
		end

	Script_TusaTown_PlayerHouse_OpeningCutscene_3::
			setvar VAR_OPENING_SCENE_COMPLETE, 1
			lock
			msgbox Text_MomCallsYouOver, MSGBOX_DEFAULT
			applymovement OBJ_EVENT_ID_PLAYER, TusaTown_PlayerHouse_PlayerToTable3
			waitmovement 0
			goto Script_TusaTown_PlayerHouse_OpeningCutscene
		end

	Script_TusaTown_PlayerHouse_OpeningCutscene_4::
			setvar VAR_OPENING_SCENE_COMPLETE, 1
			lock
			msgbox Text_MomCallsYouOver, MSGBOX_DEFAULT
			applymovement OBJ_EVENT_ID_PLAYER, TusaTown_PlayerHouse_PlayerToTable4
			waitmovement 0
			goto Script_TusaTown_PlayerHouse_OpeningCutscene
		end

	Script_TusaTown_PlayerHouse_OpeningCutscene_5::
			setvar VAR_OPENING_SCENE_COMPLETE, 1
			lock
			msgbox Text_MomCallsYouOver, MSGBOX_DEFAULT
			applymovement OBJ_EVENT_ID_PLAYER, TusaTown_PlayerHouse_PlayerToTable5
			waitmovement 0
			goto Script_TusaTown_PlayerHouse_OpeningCutscene
		end

	Script_TusaTown_PlayerHouse_OpeningCutscene_6::
			setvar VAR_OPENING_SCENE_COMPLETE, 1
			lock
			msgbox Text_MomCallsYouOver, MSGBOX_DEFAULT
			applymovement OBJ_EVENT_ID_PLAYER, TusaTown_PlayerHouse_PlayerToTable6
			waitmovement 0
			goto Script_TusaTown_PlayerHouse_OpeningCutscene
		end

	Text_Obtained_Starter:
		.string "You obtained {STR_VAR_1}! $"

	Text_MomCallsYouOver:
		.string "Hey! {PLAYER}\n"
		.string "Come over here.$"

	Text_Carraig1:
		.string "Geez, is that really \n"
		.string "{PLAYER}? \l"
		.string "You haven't half grown since \l"
		.string "I last saw you.$"

	Text_Mom1:
		.string "Do you not remember Carraig?$"

	Text_Carraig2:
		.string "Sure, in fairness I was gone awhile$"

	Text_Mom2:
		.string "He's GRASS_E4's one. He was \n"
		.string "out in Unova.$"

	Text_Carraig3:
		.string "Yeah, had to come back though. \n"
		.string "Mam couldn't find a replacement \l"
		.string "for the gym. $"

	Text_Mom3:
		.string "Oh it will be great to see the gym \n"
		.string "in use again. \l"
		.string "I know {PLAYER} has been wanting\l"
		.string "to try the league challenge. $"

	Text_Carraig4:
		.string "Ah, that's great! Actually I have \n"
		.string "something for you in that case. $"

	Text_Carraig5:
		.string "Since, I'm the local leader now, \n"
		.string "I'll need to hand out first \l"
		.string "Pokemon to the weans. \l"
		.string "Caught these little ones while travelling. \l"
		.string "How about you take first pick \l"
		.string "{PLAYER}? $"

	Text_Mom4:
		.string "Ahh how wonderful. $"

	Movement_Exclam:
		emote_exclamation_mark
		step_end

	Movement_TurnUp:
		face_up
		step_end

	Movement_TurnLeft:
		face_left
		step_end

	Movement_TurnDown:
		face_down
		step_end

	Movement_TurnRight:
		face_right
		step_end

	Movement_CarraigLeave:
		walk_down
		walk_left
		walk_left
		walk_left
		walk_left
		walk_left
		walk_left
		walk_left
		walk_left
		walk_left
		walk_left
		walk_left
		walk_left
		face_down
		step_end

	TusaTown_PlayerHouse_PlayerToTable1:
		walk_down
		walk_down
		walk_down
		walk_right
		walk_right
		walk_right
		walk_right
		walk_right
		walk_right
		walk_right
		walk_right
		walk_right
		step_end

	TusaTown_PlayerHouse_PlayerToTable2:
		walk_down
		walk_down
		walk_down
		walk_right
		walk_right
		walk_right
		walk_right
		walk_right
		walk_right
		walk_right
		walk_right
		step_end

	TusaTown_PlayerHouse_PlayerToTable3:
		walk_down
		walk_down
		walk_down
		walk_right
		walk_right
		walk_right
		walk_right
		walk_right
		walk_right
		walk_right
		step_end

	TusaTown_PlayerHouse_PlayerToTable4:
			walk_down
			walk_down
			walk_down
			walk_right
			walk_right
			walk_right
			walk_right
			walk_right
			walk_right
			step_end

	TusaTown_PlayerHouse_PlayerToTable5:
				walk_down
				walk_down
				walk_down
				walk_right
				walk_right
				walk_right
				walk_right
				walk_right
			step_end

	TusaTown_PlayerHouse_PlayerToTable6:
				walk_down
				walk_down
				walk_down
				walk_right
				walk_right
				walk_right
				walk_right
			step_end

IndoorTusa_PlayerHouse_MapScripts::
	.byte 0
	.byte 0
	.set LOCALID_MOM, 1
	.set LOCALID_CARRAIG, 2
	.set LOCALID_CARRAIGBAG, 3

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
		msgbox Text_Carraig6, MSGBOX_DEFAULT
		bufferleadmonspeciesname 0
		removeobject LOCALID_CARRAIGBAG
		setflag FLAG_HIDE_PETALBURG_CITY_WALLY
		msgbox Text_Carraig7, MSGBOX_DEFAULT
		delay 15
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
		clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
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
		.string "MOM: Hey! {PLAYER}\n"
		.string "Come here to me.$"

	Text_Carraig1:
		.string "???: Geez, is that really \n"
		.string "{PLAYER}? \l"
		.string "You haven't half grown since \l"
		.string "I last saw you.$"

	Text_Mom1:
		.string "MOM: Do you not remember Carraig?$"

	Text_Carraig2:
		.string "CARRAIG: Sure, in fairness I was gone awhile$"

	Text_Mom2:
		.string "MOM: He's Ethel's one. He was \n"
		.string "out in Unova the last few years.$"

	Text_Carraig3:
		.string "CARRAIG: Yeah but I'm back now \n"
		.string "for the foreseeable.  \l"
		.string "Mam couldn't find a replacement for \l"
		.string "her Gym in Liabara City, so I'll \l"
		.string "be taking it over. $"

	Text_Mom3:
		.string "MOM: It will be great to see it \n"
		.string "in use again. \l"
		.string "Dead handy too, I know {PLAYER} has \l"
		.string "been wanting to try the league challenge. \l"
		.string "Liabara isn't too far away for \l"
		.string "their first stop. $"

	Text_Carraig4:
		.string "CARRAIG Oh, that's great! Actually \n"
		.string "{PLAYER}, I have something for \l"
		.string "you in that case. $"

	Text_Carraig5:
		.string "CARRAIG: As the local Gym Leader \n"
		.string "its my responsibility to \l"
		.string "hand out Pokemon to young \l"
		.string "trainers \l"
		.string "I caught these little ones while travelling. \l"
		.string "How about you take first pick \l"
		.string "{PLAYER}? $"

	Text_Mom4:
		.string "MOM: Ahh how wonderful. $"

	Text_Carraig6:
		.string "CARRAIG: Okay {PLAYER}. That starter \n$"
		.string "isn't free. I need you to \l"
		.string "do some advertising for my gym. \l"
		.string "If you see any trainers tell 'em the' \l"
		.string "Liabara City Gym is officially reopened.$"

	Text_Carraig7:
		.string "Okay, I'll be heading out now. \n"
		.string "Looking forward to see what you \l"
		.string "and {STR_VAR_1} can do.$"

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

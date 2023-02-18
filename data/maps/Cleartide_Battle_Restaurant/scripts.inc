Cleartide_Battle_Restaurant_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CBRest_EventScript_OnFrame
	.byte 0

CBRest_EventScript_OnFrame::
	map_script_2 VAR_CBR, 2, CBR_EventScript_ReturnToLobby
	.2byte 0

CBR_EventScript_ReturnToLobby::
	clearflag FLAG_HIDE_HIYORI
	addobject 7
	setvar VAR_CBR, 0
	applymovement OBJ_EVENT_ID_PLAYER Movement_ReturnToLobby
	waitmovement 0
	giveitem ITEM_TART_APPLE 1
	giveitem ITEM_SWEET_APPLE 1
	goto Multichoice2_Demo
	end

Movement_ReturnToLobby:
	walk_down
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	face_up
	step_end

CleartideBattleRestaurant_EventScript_EntranceLeft::
	applymovement OBJ_EVENT_ID_PLAYER CBR_Move_EntranceLeft
	waitmovement 0
	goto Multichoice2_Demo
	end

CleartideBattleRestaurant_EventScript_EntranceRight::
	applymovement OBJ_EVENT_ID_PLAYER CBR_Move_EntranceRight
	waitmovement 0
	goto Multichoice2_Demo
	end

CBR_Move_EntranceLeft:
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

CBR_Move_EntranceRight:
walk_up
walk_up
walk_up
step_end

CBR_EventScript_ToAttack::
closemessage
	applymovement OBJ_EVENT_ID_PLAYER CleartideBattleRestaurant_Move_ToAttack
	waitmovement 0
	trainerbattle_single TRAINER_D_ATTACK, CBR_Text_AttackIntro, CBR_Text_AttackDefeat, CBR_EventScript_AfterAttack
	waitstate
	end

CBR_Text_AttackIntro:
	.string "Ahhh, a fellow connosieur\n"
	.string "of raw power, I see.$"

CBR_Text_AttackDefeat:
	.string "Aww, you're really hurting\n"
	.string "my pride here.$"

	CBR_EventScript_AfterAttack::
		setflag FLAG_CBR_ATTACK
		cleartrainerflag TRAINER_D_ATTACK
		MSGBOX CBR_Text_AnotherCourse MSGBOX_NPC
		applymovement OBJ_EVENT_ID_PLAYER CleartideBattleRestaurant_Move_FromAttack
		goto Multichoice2_Demo

		end
CBR_EventScript_ToDefense::
closemessage
applymovement OBJ_EVENT_ID_PLAYER CleartideBattleRestaurant_Move_ToDefense
waitmovement 0
trainerbattle_single TRAINER_D_DEFENSE, CBR_Text_DefenseIntro, CBR_Text_DefenseDefeat, CBR_EventScript_AfterDefense
end

CBR_Text_DefenseIntro:
	.string "Hey, hey, I heard a rumour. \n"
	.string "You'll have to win to hear it \l"
	.string "though!$"

CBR_Text_DefenseDefeat:
	.string "Hey, hey, apparently the owner\n"
	.string "of this place was a mad strong\l"
	.string "Gym leader in a faraway region.$"

	CBR_EventScript_AfterDefense::
		setflag FLAG_CBR_DEFENSE
		cleartrainerflag TRAINER_D_DEFENSE
		MSGBOX CBR_Text_AnotherCourse MSGBOX_NPC
		applymovement OBJ_EVENT_ID_PLAYER CleartideBattleRestaurant_Move_FromDefense
		waitmovement 0
		goto Multichoice2_Demo

		end

CBR_EventScript_ToSpAttack::
closemessage
applymovement OBJ_EVENT_ID_PLAYER CleartideBattleRestaurant_Move_ToSpAttack
waitmovement 0
trainerbattle_single TRAINER_D_SPECIAL_ATTACK, CBR_Text_SpAtkIntro, CBR_Text_SpAtkDefeat, CBR_EventScript_AfterSpAtk
end

CBR_Text_SpAtkIntro:
	.string "...$"

CBR_Text_SpAtkDefeat:
	.string "...I'd recommend the $"

	CBR_EventScript_AfterSpAtk::
	setflag FLAG_CBR_SPATK
		cleartrainerflag TRAINER_D_SPECIAL_ATTACK
		MSGBOX CBR_Text_AnotherCourse MSGBOX_NPC
		applymovement OBJ_EVENT_ID_PLAYER CleartideBattleRestaurant_Move_FromSpAttack
		waitmovement 0
		goto Multichoice2_Demo

		end

CBR_EventScript_ToSpDefense::
closemessage
applymovement OBJ_EVENT_ID_PLAYER CleartideBattleRestaurant_Move_ToSpDefense
waitmovement 0
trainerbattle_single TRAINER_D_SPECIAL_DEFENSE, CBR_Text_SpDefIntro, CBR_Text_SpDefDefeat, CBR_EventScript_AfterSpDef
end

CBR_Text_SpDefIntro:
	.string "$"

CBR_Text_SpDefDefeat:
	.string "$"

CBR_EventScript_AfterSpDef::
		setflag FLAG_CBR_SPDEF
		cleartrainerflag TRAINER_D_SPECIAL_DEFENSE
		MSGBOX CBR_Text_AnotherCourse MSGBOX_NPC
		applymovement OBJ_EVENT_ID_PLAYER CleartideBattleRestaurant_Move_FromSpDefense
		goto Multichoice2_Demo

		end

CBR_EventScript_ToHP::
closemessage
applymovement OBJ_EVENT_ID_PLAYER CleartideBattleRestaurant_Move_ToHP
waitmovement 0
trainerbattle_single TRAINER_D_HP, CBR_Text_HPIntro, CBR_Text_HPDefeat, CBR_EventScript_AfterHP
end

CBR_EventScript_AfterHP::
setflag FLAG_CBR_HP
	cleartrainerflag TRAINER_D_HP
	MSGBOX CBR_Text_AnotherCourse MSGBOX_NPC
	applymovement OBJ_EVENT_ID_PLAYER CleartideBattleRestaurant_Move_FromHP
	waitmovement 0
	goto Multichoice2_Demo

	end

CBR_Text_HPIntro:
	.string "Hmm, can't say I'm impressed \n"
	.string "by the trainers in this city. \l"
	.string "Please change my mind on that. Osu!$"

CBR_Text_HPDefeat:
	.string "There we go! You ever\n"
	.string	"consider visiting Hoenn?$"


CBR_EventScript_ToSpeed::
closemessage
applymovement OBJ_EVENT_ID_PLAYER CleartideBattleRestaurant_Move_ToSpeed
waitmovement 0
trainerbattle_single TRAINER_D_SPEED CBR_Text_SpeedIntro, CBR_Text_SpeedDefeat, CBR_EventScript_AfterSpeed
end

CBR_Text_SpeedIntro:
	.string "Quick, quick, lets get the battle\n"
	.string "started.$"

CBR_Text_SpeedDefeat:
	.string "Quick, quick, onto lunch.$"

	CBR_EventScript_AfterSpeed::
		setflag FLAG_CBR_SPEED
		cleartrainerflag TRAINER_D_SPEED
		MSGBOX CBR_Text_AnotherCourse MSGBOX_NPC
		applymovement OBJ_EVENT_ID_PLAYER CleartideBattleRestaurant_Move_FromSpeed
		waitmovement 0
		goto Multichoice2_Demo
		end

CBR_EventScript_Leave::
closemessage
applymovement OBJ_EVENT_ID_PLAYER CleartideBattleRestaurant_Move_Leave
waitmovement 0
end








CleartideBattleRestaurant_Move_Leave:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end


CleartideBattleRestaurant_Move_ToAttack:
	walk_right
	walk_right
	walk_right
	face_left
	step_end


CleartideBattleRestaurant_Move_ToDefense:
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_down
walk_down
face_right
step_end


CleartideBattleRestaurant_Move_ToSpDefense:
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
walk_right
walk_right
walk_up
face_right
step_end


CleartideBattleRestaurant_Move_ToHP:
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_down
walk_down
face_left
step_end


CleartideBattleRestaurant_Move_ToSpAttack:
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
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_down
walk_down
face_right
step_end

CleartideBattleRestaurant_Move_ToSpeed:
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
walk_right
walk_right
walk_right
walk_right
walk_up
face_left
step_end

CleartideBattleRestaurant_Move_FromAttack:
	walk_left
	walk_left
	walk_left
	face_up
	step_end


CleartideBattleRestaurant_Move_FromDefense:
walk_up
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
face_up
step_end


CleartideBattleRestaurant_Move_FromSpDefense:
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
walk_up
step_end


CleartideBattleRestaurant_Move_FromHP:
walk_up
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
face_up
step_end


CleartideBattleRestaurant_Move_FromSpAttack:
walk_up
walk_up
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
walk_left
walk_left
walk_left
walk_left
walk_up
face_up
step_end

CleartideBattleRestaurant_Move_FromSpeed:
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
walk_left
walk_up
face_up
step_end


CBR_Text_AfterBattle::
	.string "A fantastic battle! Here is\n"
	.string "your meal.$"

	CBR_Text_AnotherCourse::
		.string "Would you like to order\n"
		.string "another course?$"

Multichoice2_Demo::
			goto CBR_TestAtk
	    end

CBR_EventScript_Menu::
messageinstant Text_Demo1
multichoice2 1, 1, Text_DemoOptions
compare VAR_RESULT, 0
goto_if_eq CBR_EventScript_ToHP
compare VAR_RESULT, 1
goto_if_eq CBR_EventScript_ToAttack
compare VAR_RESULT, 2
goto_if_eq CBR_EventScript_ToDefense
compare VAR_RESULT, 3
goto_if_eq CBR_EventScript_ToSpAttack
compare VAR_RESULT, 4
goto_if_eq CBR_EventScript_ToSpDefense
compare VAR_RESULT, 5
goto_if_eq CBR_EventScript_ToSpeed
compare VAR_RESULT, 6
goto_if_eq CBR_EventScript_Leave
end

CBR_EventScript_Menu_2::
messageinstant Text_Demo1
multichoice2 1, 1, Text_DemoOptions_2
compare VAR_RESULT, 0
goto_if_eq CBR_EventScript_ToHS
compare VAR_RESULT, 1
goto_if_eq CBR_EventScript_ToHP
compare VAR_RESULT, 2
goto_if_eq CBR_EventScript_ToAttack
compare VAR_RESULT, 3
goto_if_eq CBR_EventScript_ToDefense
compare VAR_RESULT, 4
goto_if_eq CBR_EventScript_ToSpAttack
compare VAR_RESULT, 5
goto_if_eq CBR_EventScript_ToSpDefense
compare VAR_RESULT, 6
goto_if_eq CBR_EventScript_ToSpeed
compare VAR_RESULT, 7
goto_if_eq CBR_EventScript_Leave
end

CBR_EventScript_ToHS:
	closemessage
	setvar VAR_CBR, 0
	applymovement 7 Movement_ToBackAreaOwner
	waitmovement 0
	removeobject 7
	setflag FLAG_HIDE_HIYORI

	applymovement OBJ_EVENT_ID_PLAYER Movement_ToBackAreaPlayer
	waitmovement 0
	warp MAP_CLEARTIDE_BATTLE_RESTAURANT_BACKROOM, 8, 9
	waitstate
	end

Movement_ToBackAreaOwner:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

Movement_ToBackAreaPlayer:
walk_right
walk_right
walk_up
walk_up
walk_right
walk_right
face_up
step_end


CBR_TestAtk::
	goto_if_set FLAG_CBR_ATTACK CBR_TestDef
	goto CBR_EventScript_Menu
	end

CBR_TestDef::
goto_if_set FLAG_CBR_DEFENSE CBR_TestHP
goto CBR_EventScript_Menu
end

CBR_TestHP::
goto_if_set FLAG_CBR_HP CBR_TestSpDef
goto CBR_EventScript_Menu
end

CBR_TestSpDef::
goto_if_set FLAG_CBR_SPDEF CBR_TestSpAtk

goto CBR_EventScript_Menu
end

CBR_TestSpAtk::
goto_if_set FLAG_CBR_SPATK CBR_TestSpe
goto CBR_EventScript_Menu
end

CBR_TestSpe::
goto_if_unset FLAG_CBR_SPEED CBR_EventScript_Menu
goto CBR_EventScript_Menu_2
end



Test_MC2DEMO:
	closemessage
	msgbox Text_Demo1 MSGBOX_NPC
	end

	Text_Demo1:
	    .string "Select an option.$"

	Text_DemoOptions:
	    .string "HP$"
	    .string "Attack$"
	    .string "Defense$"
			.string "SpAtk$"
			.string "SpDef$"
			.string "Speed$"
			.string "Leave$"
	    .string "$"

	Text_DemoOptions_2:
					.string "House Special$"
					.string "HP$"
					.string "Attack$"
					.string "Defense$"
					.string "SpAtk$"
					.string "SpDef$"
					.string "Speed$"
					.string "Leave$"
					.string "$"

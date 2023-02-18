
	Joyces_Dungeon_Back_MapScripts::
		.byte 0

	Script_Joyces_Back_Kettligeist::
		lock
		faceplayer
		setflag FLAG_DISABLE_CATCHING
		settotemboost 1, 0, 2, 0, 0, 2, 0, 0
		setwildbattle SPECIES_POLTEAGEIST, 20
		waitse
		playmoncry SPECIES_POLTEAGEIST, CRY_MODE_ENCOUNTER
		waitmoncry
		applymovement 2 Jesse_Run_Over
		waitmovement 0
		MSGBOX JoycesBack_Text_JessePreFight MSGBOX_NPC
		delay 40
		playmoncry SPECIES_POLTEAGEIST, CRY_MODE_ENCOUNTER
		MSGBOX JoycesBack_Text_Olpheist MSGBOX_NPC
		waitmoncry
		switch VAR_STARTER_MON
		case 0, JoycesBack_EventScript_BattleScorbunny
		case 1, JoycesBack_EventScript_BattleMudkip
		case 2, JoycesBack_EventScript_BattleChespin
		multi_fixed_wild TRAINER_D_JESSE_1, TRAINER_BACK_PIC_WALLY

		release
		end

		JoycesBack_EventScript_BattleScorbunny::
			multi_fixed_wild TRAINER_D_JESSE_2_SCORBUNNY, TRAINER_BACK_PIC_WALLY
			specialvar VAR_RESULT, GetBattleOutcome
		  compare VAR_RESULT, 1
			goto_if_eq Route3_EventScript_OlpheistFightWon
			clearflag FLAG_DISABLE_CATCHING
		end
		JoycesBack_EventScript_BattleMudkip::
			multi_fixed_wild TRAINER_D_JESSE_2_MUDKIP, TRAINER_BACK_PIC_WALLY
			specialvar VAR_RESULT, GetBattleOutcome
		  compare VAR_RESULT, 1
			goto_if_eq Route3_EventScript_OlpheistFightWon
					clearflag FLAG_DISABLE_CATCHING

		end
		JoycesBack_EventScript_BattleChespin::
			multi_fixed_wild TRAINER_D_JESSE_2_CHESPIN, TRAINER_BACK_PIC_WALLY
			specialvar VAR_RESULT, GetBattleOutcome
		  compare VAR_RESULT, 1
			goto_if_eq Route3_EventScript_OlpheistFightWon
					clearflag FLAG_DISABLE_CATCHING

		end

		Route3_EventScript_OlpheistFightWon::
				clearflag FLAG_DISABLE_CATCHING
			setvar VAR_POYCES_QUEST, 0
			MSGBOX JDB_Text_Jessse1 MSGBOX_NPC
			delay 60
			MSGBOX JDB_Text_Jessse2 MSGBOX_NPC
			MSGBOX JDB_Text_Jessse3 MSGBOX_NPC
			warp MAP_ATKINS_TOWN, 40, 11
			waitstate
			end

		JDB_Text_Jessse1:
			.string "JESSE: Awww... I couldn't\n"
			.string "catch it..$"

			JDB_Text_Jessse2:
				.string "JESSE: ...but I'd\n"
				.string "say that Ólphéist is the.\l"
				.string "head honcho of the Ghost Types\l"
				.string "here. It was way stronger than\l"
				.string "anything else you'd find in this area.$"

				JDB_Text_Jessse3:
					.string "JESSE: Let's head out of\n"
					.string "here and I'll go find the\l"
					.string "guy who gave me\l"
					.string "the job.$"



		Jesse_Run_Over:
			walk_fast_down
			walk_fast_down
			walk_fast_right
			walk_fast_right
			walk_fast_right
			walk_fast_right
			walk_fast_right
			walk_fast_right
			walk_fast_right
			step_end
		JoycesBack_EventScript_Jesse::
			MSGBOX JoycesBack_Text_Jesse MSGBOX_NPC
			end

		JoycesBack_Text_Jesse:
			.string "JESSE: Zoinks! This calendar \n"
			.string "is for the year 19XX. \l"
			.string "That's over YY years ago!$"

		JoycesBack_Text_JessePreFight:
			.string "JESSE: {PLAYER} watch out! $"

		JoycesBack_Text_Olpheist:
			.string "LÓLÓLÓLÓLÓL$"

Cleartide_Gym_MapScripts::
	.byte 0


	Cleartide_EventScript_Azurill::
		MSGBOX CleartideGym_Text_ConfirmChoice MSGBOX_YESNO
		compare VAR_RESULT, 0
		goto_if_eq CleartideGym_EventScript_End
		warp MAP_CLEARTIDE_GYM, 4, 40
		waitstate
		end

		Cleartide_EventScript_Totodile::
			MSGBOX CleartideGym_Text_ConfirmChoice MSGBOX_YESNO
			compare VAR_RESULT, 0
			goto_if_eq CleartideGym_EventScript_End
			warp MAP_CLEARTIDE_GYM, 8, 40
			waitstate
			end

			Cleartide_EventScript_Squirtle::
				MSGBOX CleartideGym_Text_ConfirmChoice MSGBOX_YESNO
				compare VAR_RESULT, 0
				goto_if_eq CleartideGym_EventScript_End
				warp MAP_CLEARTIDE_GYM, 12, 40
				waitstate
				end

		Cleartide_EventScript_Pikachu::
			MSGBOX CleartideGym_Text_ConfirmChoice MSGBOX_YESNO
			compare VAR_RESULT, 0
			goto_if_eq CleartideGym_EventScript_End
			warp MAP_CLEARTIDE_GYM, 4, 21
			waitstate
			end

		Cleartide_EventScript_Wooper::
			MSGBOX CleartideGym_Text_ConfirmChoice MSGBOX_YESNO
			compare VAR_RESULT, 0
			goto_if_eq CleartideGym_EventScript_End
			warp MAP_CLEARTIDE_GYM, 8, 21
			waitstate
			end

		Cleartide_EventScript_Mudkip::
			MSGBOX CleartideGym_Text_ConfirmChoice MSGBOX_YESNO
			compare VAR_RESULT, 0
			goto_if_eq CleartideGym_EventScript_End
			warp MAP_CLEARTIDE_GYM, 12, 21
			waitstate
			end

		Cleartide_EventScript_Wailmer::
			MSGBOX CleartideGym_Text_ConfirmChoice MSGBOX_YESNO
			compare VAR_RESULT, 0
			goto_if_eq CleartideGym_EventScript_End
			warp MAP_CLEARTIDE_GYM, 4, 5
			waitstate
			end

		Cleartide_EventScript_Lapras::
			MSGBOX CleartideGym_Text_ConfirmChoice MSGBOX_YESNO
			compare VAR_RESULT, 0
			goto_if_eq CleartideGym_EventScript_End
			warp MAP_CLEARTIDE_GYM, 8, 5
			waitstate
			end

			Cleartide_EventScript_Blastoise::
				MSGBOX CleartideGym_Text_ConfirmChoice MSGBOX_YESNO
				compare VAR_RESULT, 0
				goto_if_eq CleartideGym_EventScript_End
				warp MAP_CLEARTIDE_GYM, 12, 5
				waitstate
				end


	CleartideGym_EventScript_End::
		end


	CleartideGym_Text_ConfirmChoice:
		.string "Is this your answer?$"


	CleartideGym_EventScript_MARK::
		trainerbattle_single TRAINER_D_MARK, CleartideGym_Text_MARKIntro, CleartideGym_Text_MARKDefeat
		msgbox CleartideGym_Text_MARKPostBattle, MSGBOX_AUTOCLOSE
		end

		CleartideGym_Text_MARKIntro:
			.string "$"

		CleartideGym_Text_MARKDefeat:
			.string "$"

		CleartideGym_Text_MARKPostBattle:
			.string "$"

	CleartideGym_EventScript_MARY::
		trainerbattle_single TRAINER_D_MARY, CleartideGym_Text_MARYIntro, CleartideGym_Text_MARYDefeat
		msgbox CleartideGym_Text_MARYPostBattle, MSGBOX_AUTOCLOSE
		end

		CleartideGym_Text_MARYIntro:
			.string "$"

		CleartideGym_Text_MARYDefeat:
			.string "$"

		CleartideGym_Text_MARYPostBattle:
			.string "$"

	CleartideGym_EventScript_STEPHEN::
		trainerbattle_single TRAINER_D_STEPHEN, CleartideGym_Text_STEPHENIntro, CleartideGym_Text_STEPHENDefeat
		msgbox CleartideGym_Text_STEPHENPostBattle, MSGBOX_AUTOCLOSE
		end

		CleartideGym_Text_STEPHENIntro:
			.string "$"

		CleartideGym_Text_STEPHENDefeat:
			.string "$"

		CleartideGym_Text_STEPHENPostBattle:
			.string "$"


	CleartideGym_EventScript_DANIEL::
		trainerbattle_single TRAINER_D_DANIEL, CleartideGym_Text_DANIELIntro, CleartideGym_Text_DANIELDefeat
		msgbox CleartideGym_Text_DANIELPostBattle, MSGBOX_AUTOCLOSE
		end

		CleartideGym_Text_DANIELIntro:
			.string "$"

		CleartideGym_Text_DANIELDefeat:
			.string "$"

		CleartideGym_Text_DANIELPostBattle:
			.string "$"

	CleartideGym_EventScript_LUKE::
		trainerbattle_single TRAINER_D_LUKE, CleartideGym_Text_LUKEIntro, CleartideGym_Text_LUKEDefeat
		msgbox CleartideGym_Text_LUKEPostBattle, MSGBOX_AUTOCLOSE
		end

		CleartideGym_Text_LUKEIntro:
			.string "$"

		CleartideGym_Text_LUKEDefeat:
			.string "$"

		CleartideGym_Text_LUKEPostBattle:
			.string "$"

	CleartideGym_EventScript_PATRICK::
		trainerbattle_single TRAINER_D_PATRICK, CleartideGym_Text_PATRICKIntro, CleartideGym_Text_PATRICKDefeat
		msgbox CleartideGym_Text_PATRICKPostBattle, MSGBOX_AUTOCLOSE
		end

		CleartideGym_Text_PATRICKIntro:
			.string "$"

		CleartideGym_Text_PATRICKDefeat:
			.string "$"

		CleartideGym_Text_PATRICKPostBattle:
			.string "$"


Cleartide_EventScript_SurfForward::
	goto EventScript_UseSurfSpecial
	end


Cleartide_EventScript_PuzzleOne::
	MSGBOX CleartideGym_Text_Description MSGBOX_SIGN
	showmonpic SPECIES_EEVEE, 10, 3
	MSGBOX CleartideGym_Text_One MSGBOX_SIGN
	hidemonpic
	showmonpic SPECIES_SURSKIT, 10, 3
	MSGBOX CleartideGym_Text_Two MSGBOX_SIGN
	hidemonpic
	showmonpic SPECIES_SKRELP, 10, 3
	MSGBOX CleartideGym_Text_Three MSGBOX_SIGN
	hidemonpic
	MSGBOX CleartideGym_Text_PuzzleOne MSGBOX_SIGN
	end


Cleartide_EventScript_PuzzleTwo::
MSGBOX CleartideGym_Text_Description MSGBOX_SIGN
showmonpic SPECIES_PSYDUCK, 10, 3
MSGBOX CleartideGym_Text_One MSGBOX_SIGN
hidemonpic
showmonpic SPECIES_POLITOED, 10, 3
MSGBOX CleartideGym_Text_Two MSGBOX_SIGN
hidemonpic
showmonpic SPECIES_CORSOLA, 10, 3
MSGBOX CleartideGym_Text_Three MSGBOX_SIGN
hidemonpic
MSGBOX CleartideGym_Text_PuzzleTwo MSGBOX_SIGN
end


Cleartide_EventScript_PuzzleThree::
MSGBOX CleartideGym_Text_Description MSGBOX_SIGN
showmonpic SPECIES_MANTINE, 10, 3
MSGBOX CleartideGym_Text_One MSGBOX_SIGN
hidemonpic
showmonpic SPECIES_LANTURN, 10, 3
MSGBOX CleartideGym_Text_Two MSGBOX_SIGN
hidemonpic
showmonpic SPECIES_HUNTAIL, 10, 3
MSGBOX CleartideGym_Text_Three MSGBOX_SIGN
hidemonpic
MSGBOX CleartideGym_Text_PuzzleThree MSGBOX_SIGN
end

CleartideGym_Text_Description:
	.string "Three sketches of Pokémon are \n"
	.string "pinned to the easel. $"

CleartideGym_Text_PuzzleOne:
	.string "There's also a note: \p"
	.string "Which Pokémon at the pool's edge \n"
	.string "continues this pattern? \p"
	.string "HINT: Think of the changing \n"
	.string "nature of a river - G. $"

CleartideGym_Text_PuzzleTwo:
		.string "There's also a note: \p"
		.string "Which Pokémon at the pool's edge \n"
		.string "continues this pattern? \p"
		.string "HINT: Think of the colours \n"
		.string "of a rare rainbow - G. $"

CleartideGym_Text_PuzzleThree:
		.string "There's also a note: \p"
		.string "Which Pokémon at the pool's edge \n"
		.string "continues this pattern? \p"
		.string "HINT: Think of the variety\n"
		.string "in bodies of water - G. $"


CleartideGym_Text_One:
	.string "The first.$"

CleartideGym_Text_Two:
	.string "The second.$"

CleartideGym_Text_Three:
	.string "The third.$"

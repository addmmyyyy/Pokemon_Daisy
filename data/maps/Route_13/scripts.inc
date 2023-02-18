Route_13_MapScripts::
	.byte 0

	Route3_EventScript_Anthony::
			trainerbattle_single TRAINER_D_ANTHONY, Route3_Text_AnthonyIntro, Route3_Text_AnthonyDefeat
			msgbox Route3_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
			end

Route3_Text_AnthonyIntro:
	.string "This cliffside beach area lends \n"
	.string "itself to some really interesting \l"
	.string "Pokémon.$"

Route3_Text_AnthonyDefeat:
	.string "My interesting Pokémon!$"

Route3_Text_AnthonyPostBattle:
	.string "I guess I'll just need\n"
	.string "to catch some more!$"

	Route3_EventScript_Declan::
			trainerbattle_single TRAINER_D_DECLAN, Route3_Text_DeclanIntro, Route3_Text_DeclanDefeat
			msgbox Route3_Text_DeclanPostBattle, MSGBOX_AUTOCLOSE
			end

			Route3_Text_DeclanIntro:
				.string "Hey you! Get off my beach!$"

			Route3_Text_DeclanDefeat:
				.string "Fine, you can stay. Just\n"
				.string "make sure to renounce your\l"
				.string "other citizenships.$"

			Route3_Text_DeclanPostBattle:
				.string "Sandygast is my minister for\n"
				.string "defense, but he's not gotten \l"
				.string "used to the job yet.$"

Route3_EventScript_SudowoodoInteract::
	MSGBOX Route3_Text_Sudowoodo MSGBOX_SIGN
	goto_if_unset FLAG_DEFEATED_SUDOWOODO Route3_EventScript_SudowoodoFight
	end

Route3_EventScript_SudowoodoFight::
	setflag FLAG_DISABLE_CATCHING
	setwildbattle SPECIES_SUDOWOODO, 18
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
	waitmoncry
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
  compare VAR_RESULT, 1
	goto_if_eq Route3_EventScript_SudowoodoFightWon
	end

Route3_EventScript_SudowoodoFightWon::
	setflag FLAG_DEFEATED_SUDOWOODO
	clearflag FLAG_DISABLE_CATCHING
	delay 240
	applymovement 4 Movement_TurnDown
	waitmovement 0
	applymovement 4 Movement_Exclam
	waitmovement 0
	applymovement 4 Route3_Movement_ManWalksOver
	waitmovement 0
	removeobject 5
	delay 50
	applymovement 4 Route3_Movement_StepDown
	waitmovement 0
  msgbox Route3_Text_SudowoodoGuy1 MSGBOX_NPC
	delay 50
	msgbox Route3_Text_SudowoodoGuy2 MSGBOX_NPC
	goto Route3_EventScript_SudowoodoGuyYesNo
	end

Route3_Movement_ManWalksOver:
	walk_fast_right
	walk_fast_right
	face_down
	step_end

Route3_Movement_StepDown:
	walk_down
	step_end

Route3_Text_SudowoodoGuy1:
	.string "Sorry kid, my Sudowoodo\n"
	.string "is a bit zealous in her\l"
	.string "guarding job.\p"
	.string "Still, you should know better\n"
	.string "than to just walk up to one"
	.string "while they're at their post.$"

Route3_Text_SudowoodoGuy2:
	.string "Oh, you're not from\n"
	.string "from around here? Take\l"
	.string "it as a lesson going \l"
	.string "forward then.$"

Route3_EventScript_SudowoodoGuyYesNo::
	MSGBOX Route3_Text_SudowoodoGuy3 MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route3_EventScript_SudowoodoGuyYes
	MSGBOX Route3_Text_SudowoodoGuyNo MSGBOX_NPC
	end

Route3_EventScript_SudowoodoGuyYes::
	MSGBOX Route3_Text_SudowoodoGuyYes MSGBOX_NPC
	setflag FLAG_BEOLGIN_QUEST
	end

Route3_EventScript_SudowoodoGuyInteract::
	goto_if_unset FLAG_BEOLGIN_QUEST Route3_EventScript_SudowoodoGuyYesNo
	goto_if_set FLAG_BEOLGIN_QUEST_FINISHED Route3_EventScript_SudowoodoGuyInteract_2
	MSGBOX Route3_Text_SudowoodoGuyCheck MSGBOX_NPC
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Route3_EventScript_SudowoodoGuyNotYet
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_BEOLGIN, Route3_EventScript_SudowoodoGuyHaveOne
	goto Route3_EventScript_SudowoodoGuyNotYet
	end

Route3_EventScript_SudowoodoGuyHaveOne::
	MSGBOX Route3_Text_SudowoodoGuyHaveOne MSGBOX_NPC
	giveitem ITEM_WAILMER_PAIL 1
	setflag FLAG_BEOLGIN_QUEST_FINISHED
	end

Route3_Text_SudowoodoGuyHaveOne:
	.string "Wow! You actually caught one\n"
	.string "I'll just take a few of the \l"
	.string "more wilted leaves. \p"
	.string "Thank you so much. Here \n"
	.string "take this Wailmer Pail. \l"
	.string "You can use it to nurture \l"
	.string "plants all over!$"
	end

Route3_EventScript_SudowoodoGuyNotYet::
	MSGBOX Route3_Text_SudowoodoGuyNotYet MSGBOX_NPC
	end

Route3_EventScript_SudowoodoGuyInteract_2::
MSGBOX Route3_Text_SudowoodoGuyInteract_2 MSGBOX_NPC
end

Route3_Text_SudowoodoGuyInteract_2:
	.string "Just make sure not to \n"
	.string "use that Pail on any \l"
	.string "Sudowoodo, hoho.$"

Route3_Text_SudowoodoGuy3:
	.string "By the by, you must be\n"
	.string "a fierce strong trainer to\l"
	.string "beat Sudowoodo. Could you\l"
	.string "do me a favour? It's nothing\l"
	.string "big.$"

Route3_Text_SudowoodoGuyNo:
		.string "Guess I'll just go to the \n"
		.string "Pokémon Centre to heal my \l"
		.string "Sudowoodo you fainted...$"


Route3_Text_SudowoodoGuyYes:
		.string "Great! I want to apply some \n"
		.string "Beolgín leaves as fertilizer \l"
		.string "to my crops. If you can go \l"
		.string "and catch a Beolgín, bring it\l"
		.string "back here, and I'll make it\l"
		.string "worth your time.$"

Route3_Text_SudowoodoGuyCheck:
	.string "Did you manage to catch a \n"
	.string "Beolgín? Please show me.$"

	Route3_Text_SudowoodoGuyNotYet:
		.string "Ah, not yet I suppose.$"


Route3_Text_Sudowoodo:
	.string "WOOOOODO! $"

Route3_Text_SudowoodoReturn:
	.string "Sudowoodo, return! $"

Route_4_MapScripts::
	.byte 0

Route4_EventScript_Man::
	MSGBOX Route4_Text_Man MSGBOX_NPC
	end

Route4_Text_Man:
	.string "Sorry, this inexplicable\n"
	.string "Snorlax is blocking the road\l"
	.string "to Cleartide City. \p"
	.string "You're a trainer right? You\n"
	.string "should be fine to just brave \l"
	.string "weaving through the farmers' field, \l"
	.string "although it will artificially lengthen \l"
	.string "the time you spend on this route. \p"
	.string "Oh, what a shame this\n"
	.string "inexplicable Snorlax.$"



Route4_EventScript_Sudowoodo::
	setflag FLAG_DISABLE_CATCHING
	givemon SPECIES_CHESPIN 5 ITEM_NONE
	giveitem ITEM_POKE_BALL 1
	setwildbattle SPECIES_SUDOWOODO, 21
	waitse
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
	waitmoncry
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
  compare VAR_RESULT, 1
	goto_if_eq Route4_EventScript_RemoveSudowoodo
	clearflag FLAG_DISABLE_CATCHING
	end

Route4_EventScript_RemoveSudowoodo::
	clearflag FLAG_DISABLE_CATCHING
	removeobject 1
	setflag FLAG_SUDOWOODO_DEFEATED
	end

Route4_EventScript_Martin::
	trainerbattle_single TRAINER_D_MARTIN Route4_Text_MartinIntro Route4_Text_MartinDefeat
	MSGBOX Route4_Text_MartinPostDefeat MSGBOX_NPC
end

Route4_EventScript_Snorlax::
	MSGBOX Route4_Text_Snorlax MSGBOX_SIGN
	end

Route4_Text_Snorlax:
	.string "Honk shoo, honk shoo..$"


Route4_Text_MartinIntro:
	.string "Halt, trespasser. What\n"
	.string "were you doing in our\l"
	.string "fields?!$"

Route4_Text_MartinDefeat:
	.string "Hmm? A Snorlax?$"

Route4_Text_MartinPostDefeat:
	.string "But Snorlaxes aren't native \n"
	.string "to this part of the region...$"

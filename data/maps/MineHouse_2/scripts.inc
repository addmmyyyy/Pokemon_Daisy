MineHouse_2_MapScripts::
	.byte 0
LiabaraHouse_EventScript_PokeFan_Request::
	msgbox LiabaraHouse_Text_PokeFan_Request MSGBOX_NPC
	setflag FLAG_EMOLGA_QUEST
	return

LiabaraHouse_EventScript_PokeFan_Disappointed::
	msgbox LiabaraHouse_Text_PokeFan_Disappointed MSGBOX_NPC
	return

LiabaraHouse_EventScript_PokeFan::
	lock
	faceplayer
	goto_if_set FLAG_EMOLGA_QUEST_FINISHED LiabaraHouse_EventScript_PokeFanAfterQuest
	goto_if_set FLAG_EMOLGA_QUEST LiabaraHouse_EventScript_PokeFanDuringQuest
	msgbox LiabaraHouse_Text_PokeFan_Ask MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LiabaraHouse_EventScript_PokeFan_Request
	goto_if_eq VAR_RESULT, NO, LiabaraHouse_EventScript_PokeFan_Disappointed
	release
	end

LiabaraHouse_EventScript_PokeFanDuringQuest::
	MSGBOX LiabaraHouse_Text_PokeFanDuringQuest MSGBOX_NPC
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Route3_EventScript_SudowoodoGuyNotYet
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EMOLGA, LiabaraHouse_EventScript_PokeFanHaveOne
	goto Route3_EventScript_SudowoodoGuyNotYet
	end

LiabaraHouse_EventScript_PokeFanHaveOne::
	MSGBOX LiabaraHouse_Text_PokeFanHaveOne MSGBOX_NPC
	giveitem ITEM_LIGHT_BALL 1
	setflag FLAG_EMOLGA_QUEST_FINISHED
	end

LiabaraHouse_Text_PokeFanHaveOne::
	.string "Yes, yes, yes. Oh, go \n"
	.string "raibh mile maith agat. \p"
	.string "Lizzie will be so happy. Here \n"
	.string "take this in return. $"

LiabaraHouse_EventScript_PokeFanAfterQuest::
	MSGBOX LiabaraHouse_Text_PokeFanAfterQuest MSGBOX_NPC
	end


LiabaraHouse_Text_PokeFanDuringQuest:
		.string "Oh, back so soon? Did you \n"
		.string "manage to find an Emolga? $"

LiabaraHouse_Text_PokeFanAfterQuest:
	.string "Oh, Lizzie will be so happy \n"
	.string "with Emolga. $"

LiabaraHouse_Text_PokeFan_Ask:
	.string "Oh hello, dearie. \n"
	.string "I can tell from that look in \l"
	.string "your eyes, you're a Pokemon trainer, \l"
	.string "aren't you? $"

	LiabaraHouse_Text_PokeFan_Disappointed:
		.string "Oh I must have been mistaken \n"
		.string "so sorry for the bother. $"

	LiabaraHouse_Text_PokeFan_Request:
		.string "Go hiontach! You can probably. \n"
		.string "tell, but my daughter loves \l"
		.string "Pikachu! If it's not too much trouble, \l"
		.string "I've been looking for a trainer to catch \l"
		.string "an Emolga to give her as a starter. \l"
		.string "You can catch one in Atkins Forest just \l"
		.string "down the mountain. If you do, bring it here \l"
		.string "and I'll give you a great reward! $"

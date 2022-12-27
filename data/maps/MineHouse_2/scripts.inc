MineHouse_2_MapScripts::
	.byte 0
LiabaraHouse_EventScript_PokeFan_Request::
	msgbox LiabaraHouse_Text_PokeFan_Request MSGBOX_NPC
	return

LiabaraHouse_EventScript_PokeFan_Disappointed::
	msgbox LiabaraHouse_Text_PokeFan_Disappointed MSGBOX_NPC
	return

LiabaraHouse_EventScript_PokeFan::
	lock
	faceplayer
	msgbox LiabaraHouse_Text_PokeFan_Ask MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LiabaraHouse_EventScript_PokeFan_Request
	goto_if_eq VAR_RESULT, NO, LiabaraHouse_EventScript_PokeFan_Disappointed
	release
	end

LiabaraHouse_Text_PokeFan_Ask:
	.string "Oh hello dearie. \n"
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

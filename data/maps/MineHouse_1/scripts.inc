MineHouse_1_MapScripts::
	.byte 0

LiabaraHouse_EventScript_GiveMachop::
	givemon SPECIES_MACHOP, 10
	return

LiabaraHouse_EventScript_GiveAbra::
	givemon SPECIES_ABRA, 10
	return


LiabaraHouse_EventScript_BlackBelt::
	lock
	msgbox LiabaraHouse_Text_Psychic MSGBOX_DEFAULT
	msgbox LiabaraHouse_Text_BlackBelt MSGBOX_DEFAULT
	faceplayer
	msgbox LiabaraHouse_Text_BlackBelt_Ask MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LiabaraHouse_EventScript_GiveMachop
	release
	end


LiabaraHouse_EventScript_Psychic::
 	lock
	msgbox LiabaraHouse_Text_Psychic MSGBOX_DEFAULT
	msgbox LiabaraHouse_Text_BlackBelt MSGBOX_DEFAULT
	faceplayer
	msgbox LiabaraHouse_Text_Psychic_Ask MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LiabaraHouse_EventScript_GiveAbra
 	release
	end


LiabaraHouse_Text_BlackBelt:
.string "Oi poindexter, all the brains \n"
.string "in the world don't hold a candle \l"
.string "to the heart of a warrior. $"

LiabaraHouse_Text_Psychic:
.string "You ridiculous oaf, how can you \n "
.string "not see that the brain is the most \l"
.string "important part of the body. $"

LiabaraHouse_Text_Psychic_Ask:
 .string "Child! You understand that \n"
 .string "brains conquers all brawn, yes? $"

LiabaraHouse_Text_BlackBelt_Ask:
  .string "You get what I'm saying right \n"
  .string "kid? I can sense your fighting spirit! $"

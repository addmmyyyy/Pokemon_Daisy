MineHouse_1_MapScripts::
	.byte 0

LiabaraHouse_EventScript_GiveMachop::
MSGBOX LiabaraHouse_Text_BlackBelt_GiveMachop MSGBOX_NPC
	setflag FLAG_RECEIVED_MACHOP
	givemon SPECIES_MACHOP, 10
	return

LiabaraHouse_EventScript_GiveAbra::
	MSGBOX LiabaraHouse_Text_Psychic_GiveAbra MSGBOX_NPC
	setflag FLAG_RECEIVED_ABRA
	givemon SPECIES_ABRA, 10
	return


LiabaraHouse_EventScript_BlackBelt::
	lock
	goto_if_set FLAG_RECEIVED_ABRA LiabaraHouse_EventScript_BlackBelt_Annoyed
	goto_if_set FLAG_RECEIVED_MACHOP LiabaraHouse_EventScript_BlackBelt_Triumphant
	msgbox LiabaraHouse_Text_Psychic MSGBOX_DEFAULT
	msgbox LiabaraHouse_Text_BlackBelt MSGBOX_DEFAULT
	faceplayer
	msgbox LiabaraHouse_Text_BlackBelt_Ask MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LiabaraHouse_EventScript_GiveMachop
	release
	end



LiabaraHouse_EventScript_Psychic::
 	lock
	goto_if_set FLAG_RECEIVED_ABRA LiabaraHouse_EventScript_Psychic_Triumphant
	goto_if_set FLAG_RECEIVED_MACHOP LiabaraHouse_EventScript_Psychic_Annoyed
	msgbox LiabaraHouse_Text_Psychic MSGBOX_DEFAULT
	msgbox LiabaraHouse_Text_BlackBelt MSGBOX_DEFAULT
	faceplayer
	msgbox LiabaraHouse_Text_Psychic_Ask MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LiabaraHouse_EventScript_GiveAbra
 	release
	end


LiabaraHouse_EventScript_Psychic_Annoyed::
	msgbox LiabaraHouse_Text_Psychic_Annoyed MSGBOX_NPC
	end

LiabaraHouse_EventScript_Psychic_Triumphant::
msgbox LiabaraHouse_Text_Psychic_Triumphant MSGBOX_NPC
end

LiabaraHouse_EventScript_BlackBelt_Annoyed::
	msgbox LiabaraHouse_Text_BlackBelt_Annoyed MSGBOX_NPC
	end

LiabaraHouse_EventScript_BlackBelt_Triumphant::
msgbox LiabaraHouse_Text_BlackBelt_Triumphant MSGBOX_NPC
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

LiabaraHouse_Text_Psychic_Annoyed:
	 .string "Harrumph, can't expect a child \n"
	 .string "to understand facts and logic.$"

LiabaraHouse_Text_BlackBelt_Annoyed:
	  .string "Kid, some day you'll realise \n"
	  .string "there's more to life than \l"
		.string "book-learning.$"

		LiabaraHouse_Text_Psychic_GiveAbra:
			 .string "Very good. You seem the\n"
			 .string "right sort to take this Abra\l"
			 .string "off my hands.$"

		LiabaraHouse_Text_BlackBelt_GiveMachop:
				.string "Yeah! That's what I'm saying! \n"
				.string "Here, take this Machop. They're\l"
				.string "a bit of a wimp, but I'm sure your\l "
				.string "fighting spirit will rub off on them.$"

		LiabaraHouse_Text_Psychic_Triumphant:
			 .string "You see this, Alan? Even a\n"
			 .string "child understands I am right.$"

		LiabaraHouse_Text_BlackBelt_Triumphant:
			  .string "Hahah kid, I like your \n"
			  .string "gumption! $"

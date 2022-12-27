LiathbearradhCity_MapScripts::
	.byte 0

Liabara_EventScript_GymSign::
	msgbox LiabaraCity_Text_GymSign, MSGBOX_SIGN
	end

LiabaraCity_Text_GymSign:
	.string "Two sentences are written on this sign \n"
	.string "The first is stricken through \l"
	.string "with a line and reads: \p"
	.string "LEADER: Ethel \l"
	.string "The Saviour Botanist \p"
	.string "The second reads: \p"
	.string "LEADER: Carraig \l"
	.string "The Vagabond Archaeologist  $"

Liabara_EventScript_MuseumSign::
	msgbox LiabaraCity_Text_MuseumSign, MSGBOX_SIGN
	end
LiabaraCity_Text_MuseumSign:
	.string "Liabara City Museum: \n"
	.string "Exhibition and Mine Tour.  $"

Liabara_EventScript_LabSign::
	msgbox LiabaraCity_Text_LabSign, MSGBOX_SIGN
	end
LiabaraCity_Text_LabSign:
	.string "Residence and Labaratory of \n"
	.string "Professor E. Hawthorne.  $"

	Liabara_EventScript_Gentleman::
	    msgbox LiabaraCity_Text_Gentleman, MSGBOX_NPC
	    end

	LiabaraCity_Text_Gentleman:
	 .string "This lovely green area and Liabaras \n"
	 .string "prosperity - we can thank Dr. Hawthorne \l"
	 .string "for both. Her research into Pokemon \l"
	 .string "terraforming taught us that, \l"
	 .string "by introducing Grass-types into the \l"
	 .string "local area, we could convert these \l"
	 .string "mountains from barren stone \l"
	 .string "into incredibly fertile soil. \l "
	 .string "It really is quite remarkable, \l "
	 .string "earned her a place on the Elite 4 \l"
	 .string "you know? Of course, I knew her \l"
	 .string "before all of it. Shared a history \l"
	 .string "class in secondary you see. \l"
	 .string "Very bright even back then, I.. \p"
	 .string " You slip away from the \l"
	 .string "old man without him noticing- $"

Liabara_EventScript_Maniac::
		msgbox LiabaraCity_Text_Maniac, MSGBOX_SIGN
		end
LiabaraCity_Text_Maniac:
	.string "Agh! I trained up my Rufflet \n"
	.string "only for the Gym's type specialty \l"
	.string "to change! $"

	Liabara_EventScript_Artist::
		msgbox LiabaraCity_Text_Artist, MSGBOX_SIGN
		call Liabara_ProfessorBirchsLab_EventScript_ReceivePokedex
		end

Liabara_ProfessorBirchsLab_EventScript_ReceivePokedex::
			setflag FLAG_SYS_POKEDEX_GET
			special SetUnlockedPokedexFlags
			setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
			setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
			return

	LiabaraCity_Text_Artist:
			.string "Whisht, whisht dear child! \n"
			.string "Do not disturb my work \l"
			.string "capturing this beast's very \l"
			.string "essence. $"

	Liabara_EventScript_TownSign::
		msgbox LiabaraCity_Text_TownSign, MSGBOX_SIGN
		end
	LiabaraCity_Text_TownSign:
		.string "Liabara City: Thriving \n"
		.string "together in hard times.  $"

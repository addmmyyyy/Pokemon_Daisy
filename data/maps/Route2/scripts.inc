Route2_MapScripts::
	.byte 0

	Route2_EventScript_DoorLocked::
		MSGBOX Route2_Text_DoorLocked MSGBOX_SIGN
		end

	Route2_Text_DoorLocked:
		.string "The door is locked. $"


Route2_EventScript_GuildSign::
	MSGBOX Route2_Text_GuildSign MSGBOX_SIGN
	end

Route2_Text_GuildSign:
	.string "INTL. ADVENTURER's GUILD\n"
	.string "EIREANN BRANCH HQ$"

Route2_EventScript_Encounters0::
	lockall
	setvar VAR_ROUTE2_WILD_SET, 0
	releaseall
	end

Route2_EventScript_Encounters1::
	lockall
	setvar VAR_ROUTE2_WILD_SET, 1
	releaseall
	end

	Route2_EventScript_Bosco::
			trainerbattle_single TRAINER_D_BOSCO, Route2_Text_BoscoIntro, Route2_Text_BoscoDefeat
			msgbox Route2_Text_BoscoPostBattle, MSGBOX_AUTOCLOSE
			end

	Route2_Text_BoscoIntro:
		.string "Oho young trainer, let us \n"
		.string "see if you hold potential. $"


	Route2_Text_BoscoDefeat:
		.string "Ahh, a fine display. $"

	Route2_Text_BoscoPostBattle:
		.string "Go ahead, claim your reward. $"

	Route2_EventScript_Rory::
			trainerbattle_single TRAINER_D_RORY, Route2_Text_RoryIntro, Route2_Text_RoryDefeat
			msgbox Route2_Text_RoryPostBattle, MSGBOX_AUTOCLOSE
			end

	Route2_Text_RoryIntro:
		.string "Our eyes met, that makes \n"
		.string "us enemies! $"

	Route2_Text_RoryDefeat:
		.string "Zamn, I guess I picked \n"
		.string "the wrong enemy. $"

	Route2_Text_RoryPostBattle:
		.string "Hmm? Liabara Gym is re-opened? \n"
		.string "Thanks for the tip, enemy! $"



		Route2_EventScript_Jane::
				trainerbattle_single TRAINER_D_JANE, Route2_Text_JaneIntro, Route2_Text_JaneDefeat
				msgbox Route2_Text_JanePostBattle, MSGBOX_AUTOCLOSE
				end

		Route2_Text_JaneIntro:
			.string "Aren't FLYING types just \n"
			.string "the coolest? $"

		Route2_Text_JaneDefeat:
			.string "Even in defeat, my Pokémon \n"
			.string "are the coolest! $"

		Route2_Text_JanePostBattle:
			.string "The Gym's reopening? This \n"
			.string "is the perfect chance to show \l"
			.string "off my flock! $"

			Route2_EventScript_Joseph::
					trainerbattle_single TRAINER_D_JOSEPH, Route2_Text_JosephIntro, Route2_Text_JosephDefeat
					msgbox Route2_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
					end

			Route2_Text_JosephIntro:
				.string "Sneak attack! $"


			Route2_Text_JosephDefeat:
				.string "Aw, I really thought \n"
				.string "that would work... $"

			Route2_Text_JosephPostBattle:
				.string "Woah, the Gym is coming \n"
				.string "back? Maybe I can learn \l"
				.string "better tactics there.. $"

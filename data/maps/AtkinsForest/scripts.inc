AtkinsForest_MapScripts::
	.byte 0

AtkinsForest_EventScript_Hiker::
	msgbox AtkinsForest_Text_Hiker MSGBOX_NPC
	end

AtkinsForest_Text_Hiker:
	.string "YOHOHO, didn't expect to see a \n"
	.string "Hiker in a forest, ja? \p"
	.string "I'm actually on a house exchange, \l"
	.string "branching out if you will. \p"
	.string "YOHOHO! $"

AtkinsForest_EventScript_Jack::
		trainerbattle_single TRAINER_D_JACK, AtkinsForest_Text_JackIntro, AtkinsForest_Text_JackDefeat
		msgbox AtkinsForest_Text_JackPostBattle, MSGBOX_AUTOCLOSE
		end

AtkinsForest_Text_JackIntro:
	.string "What are you doing?? \n"
	.string "That bait is for BUG Pokémon!! $"

AtkinsForest_Text_JackDefeat:
	.string "Agh, fine. Take it if \n"
	.string "you want, weirdo. $"

AtkinsForest_Text_JackPostBattle:
	.string "Just promise me you won't \n"
	.string "use it for evil. $"

	AtkinsForest_EventScript_Katie::
			trainerbattle_single TRAINER_D_KATIE, AtkinsForest_Text_KatieIntro, AtkinsForest_Text_KatieDefeat
			msgbox AtkinsForest_Text_KatiePostBattle, MSGBOX_AUTOCLOSE
			end

	AtkinsForest_Text_KatieIntro:
		.string "Nothing like a battle by the \n"
		.string "lake to settle the soul. $"

	AtkinsForest_Text_KatieDefeat:
		.string "Ah what a great battle, \n"
		.string "thanks kid! $"

	AtkinsForest_Text_KatiePostBattle:
		.string "I can just tell that \n"
		.string "fighting you has renewed Graveller's \l"
		.string "determination! $"

	AtkinsForest_EventScript_Ava::
			trainerbattle_single TRAINER_D_AVA, AtkinsForest_Text_AvaIntro, AtkinsForest_Text_AvaDefeat
			msgbox AtkinsForest_Text_AvaPostBattle, MSGBOX_AUTOCLOSE
			end

	AtkinsForest_Text_AvaIntro:
		.string "You! Battle me! $"

	AtkinsForest_Text_AvaDefeat:
		.string "No! Defeat! $"

	AtkinsForest_Text_AvaPostBattle:
		.string "Rematch! Later? $"

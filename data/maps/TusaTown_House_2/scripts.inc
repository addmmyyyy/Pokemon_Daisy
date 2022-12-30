TusaTown_House_2_MapScripts::
	.byte 0

TusaHouse_EventScript_OldWoman::
	goto_if_set FLAG_RECEIVED_POTIONS, TusaHouse_EventScript_OldWomanGivesPotions
	msgbox TusaHouse_Text_OldWoman
	end


TusaHouse_Text_OldWoman:
	.string "Good luck on your adventure, {PLAYER}."

TusaHouse_EventScript_OldWomanGivesPotions::
	msgbox TusaHouse_Text_OldWoman_2 MSGBOX_NPC
	giveitem ITEM_POTION, 5
	msgbox TusaHouse_Text_PlayerReceivedPotion MSGBOX_DEFAULT
	msgbox TusaHouse_Text_OldWoman_3 MSGBOX_NPC

TusaHouse_Text_OldWoman_2:
	.string "Oh {PLAYER}, how lovely \n"
	.string "to see you. How are things? \p"
	.string "Oh, the league challenge? \n"
	.string " I actually have something \l"
	.string "to help with that. $"

TusaHouse_Text_OldWoman_3:
	.string "I use these to heal the \n"
	.string "local wild pokemon, but I'm \l"
	.string "sure you'll put them to good use. $"

TusaHouse_Text_PlayerReceivedPotion:
	.string "{PLAYER} received 5 Potions!"
	end

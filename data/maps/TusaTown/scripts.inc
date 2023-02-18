TusaTown_MapScripts::
	.byte 0


TusaTown_EventScript_TownSign::
	msgbox TusaTown_Text_TownSign MSGBOX_SIGN
	end

TusaTown_Text_TownSign:
	.string "Tusa Town: A fresh start \n"
	.string "among the clouds. $"

TusaTown_EventScript_Gatekeeper::
		faceplayer
		goto_if_set FLAG_BADGE01_GET, TusaTown_EventScript_Gatekeeper_Allow
		goto_if_unset FLAG_BADGE01_GET, TusaTown_EventScript_Gatekeeper_Deny
		end

TusaTown_EventScript_Gatekeeper_Allow::
	MSGBOX TusaTown_Text_AllowPassage MSGBOX_NPC
end

TusaTown_EventScript_Gatekeeper_Deny::
	MSGBOX TusaTown_Text_DenyPassage MSGBOX_NPC
	applymovement OBJ_EVENT_ID_PLAYER Player_MoveUp
end

Player_MoveUp:
	walk_up
	step_end

TusaTown_Text_AllowPassage:
		.string "Hehehe, Carraig would name \n"
		.string "his badge something like that. \p"
		.string "Good going kid, you're free to pass. $"

TusaTown_EventScript_GatekeepTrigger::
		lockall
		goto_if_unset FLAG_BADGE01_GET, TusaTown_EventScript_Gatekeeper
		releaseall
		end

TusaTown_Text_DenyPassage:
		.string "Hold on there, buck. \n"
		.string "The path down the mountain is \l"
		.string "fierce dangerous. Just 'cause you \l"
		.string "have Pokémon with ya doesn't mean \l"
		.string "nothing. \p"
		.string "Here now, my buddy Carraig is back \n"
		.string "running his old wan's gym. If you \l"
		.string "can earn his badge, I'll let you pass. $"

AtkinsTown_MapScripts::
	.byte 0

AtkinsTown_EventScript_TownSign::
	MSGBOX AtkinsTown_Text_TownSign MSGBOX_SIGN
	end

AtkinsTown_Text_TownSign:
		.string "Tusa Town: A stop on \n "
		.string "your long path. $"

AtkinsTown_EventScript_HouseSign::
	MSGBOX AtkinsTown_Text_HouseSign MSGBOX_SIGN
	end


AtkinsTown_Text_HouseSign:
		.string "Property of Mat Poyce. $"

AtkinsTown_EventScript_PoycesSign::
			MSGBOX AtkinsTown_Text_PoycesSign MSGBOX_SIGN
			end


AtkinsTown_Text_PoycesSign:
				.string "- Poyces Superstore - $"

AtkinsTown_EventScript_HouseLocked::
	MSGBOX AtkinsTown_Text_HouseLocked MSGBOX_SIGN
	end


AtkinsTown_Text_HouseLocked:
	.string "No use, the door is locked. $"

AtkinsTown_EventScript_Girl::
	MSGBOX AtkinsTown_Text_Girl MSGBOX_NPC
	end

AtkinsTown_Text_Girl:
	.string "$"

AtkinsTown_EventScript_Boy::
	MSGBOX AtkinsTown_Text_Boy MSGBOX_NPC
	end

AtkinsTown_Text_Boy:
	.string "$"

AtkinsTown_House_3_MapScripts::
	.byte 0

AtkinsHouse_EventScript_Bard::
	msgbox AtkinsHouse_EventScript_Bard MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, AtkinsHouse_EventScript_Bard_Yes
	goto_if_eq VAR_RESULT, NO, AtkinsHouse_EventScript_Bard_No
	release

AtkinsHouse_Text_Bard:
	.string "Would you like to own a Pokemon \n"
	.string "like this?"

AtkinsHouse_EventScript_Bard_Yes::
	MSGBOX AtkinsHouse_Text_Bard_Yes MSGBOX_NPC
	end

AtkinsHouse_Text_Bard_Yes:
	.string "So would I, NYOHOHO! $"

AtkinsHouse_EventScript_Bard_No::
MSGBOX AtkinsHouse_Text_Bard_No MSGBOX_NPC
end

AtkinsHouse_Text_Bard_No:
	.string "How sad. $"

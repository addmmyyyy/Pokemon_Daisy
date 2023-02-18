Route_1_MapScripts::
	.byte 0


Route1_EventScript_DoorLocked::
	MSGBOX Route1_Text_DoorLocked MSGBOX_SIGN
	end

Route1_Text_DoorLocked:
	.string "The door is locked. $"

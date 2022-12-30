Cleartide_Battle_Restaurant_MapScripts::
	.byte 0

Multichoice2_Demo::
	    messageinstant Text_Demo1
	    multichoice2 1, 1, Text_DemoOptions
			compare VAR_RESULT, 3
			goto_if_eq Test_MC2DEMO
	    end

Test_MC2DEMO:
	closemessage
	msgbox Text_Demo1 MSGBOX_NPC
	end
	Text_Demo1:
	    .string "Select an option.$"

	Text_DemoOptions:
	    .string "HP$"
	    .string "Attack$"
	    .string "Defense$"
			.string "SpAtk$"
			.string "SpDef$"
			.string "Speed$"
	    .string "$"

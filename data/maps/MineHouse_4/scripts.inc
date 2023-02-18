MineHouse_4_MapScripts::
	.byte 0

LiabaraHouse_EventScript_Hiker1::
	applymovement 2 LiabaraHouse_Spin

	faceplayer
	msgbox LiabaraHouse_Text_Hiker1 MSGBOX_NPC
	applymovement 2 LiabaraHouse_Spin

	faceplayer
	end

LiabaraHouse_Text_Hiker1:
	.string "Yo ho ho, I'm Caspar - eldest \n"
	.string "of the Hiker Trio. Despite \l"
	.string "our scumbag brother walking out, \l"
	.string "our mountain adventures shall persist. $"

LiabaraHouse_EventScript_Hiker2::
	applymovement 1 LiabaraHouse_Spin

	faceplayer
	msgbox LiabaraHouse_Text_Hiker2 MSGBOX_NPC

	applymovement 1 LiabaraHouse_Spin

	faceplayer
	end

LiabaraHouse_Text_Hiker2:
	.string "Yo ho ho, Caspar really \n"
	.string "isn't taking Melchior's decision \l "
	.string "well...$"


		LiabaraHouse_Spin:
			face_up
			delay_4
			face_left
			delay_4
			face_down
			delay_4
			face_right
			delay_4
			step_end

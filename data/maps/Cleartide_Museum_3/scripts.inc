Cleartide_Museum_3_MapScripts::
	.byte 0

Movement_GrainneLeaves:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	step_end
Movement_PlayerStepsBack:
	walk_down
	walk_right
	face_left
step_end
CleartideMuseum_EventScript_Grainne::
setflag FLAG_CLEARTIDE_GYM_GUIDE
	setvar VAR_CTM 1
	MSGBOX CleartideMuseum_Text_Grainne1 MSGBOX_DEFAULT
	delay 30
	MSGBOX CleartideMuseum_Text_Grainne1 MSGBOX_DEFAULT
	delay 30
	applymovement 3 Movement_TurnDown
	waitmovement 0
	MSGBOX CleartideMuseum_Text_Grainne2 MSGBOX_DEFAULT
	MSGBOX CleartideMuseum_Text_Grainne2b MSGBOX_DEFAULT
	delay 60
	applymovement 3 Movement_TurnUp
	waitmovement 0
	MSGBOX CleartideMuseum_Text_Grainne3 MSGBOX_DEFAULT
	applymovement 3 Movement_TurnDown
	waitmovement 0
	MSGBOX CleartideMuseum_Text_Grainne4 MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq CleartideMuseum_EventScript_Grainne4Yes
	goto CleartideMuseum_EventScript_Grainne4No
	end

CleartideMuseum_EventScript_Grainne4Yes::
	MSGBOX CleartideMuseum_Text_Grainne4Yes MSGBOX_DEFAULT
	goto CleartideMuseum_EventScript_Grainne_2
	end

CleartideMuseum_EventScript_Grainne4No::
	MSGBOX CleartideMuseum_Text_Grainne4No MSGBOX_DEFAULT
	setflag FLAG_GRAINNE_LIKES
	goto CleartideMuseum_EventScript_Grainne_2
	end

CleartideMuseum_EventScript_Grainne_2::
	applymovement 3 Movement_TurnUp
	waitmovement 0
	MSGBOX CleartideMuseum_Text_Grainne5 MSGBOX_DEFAULT
	applymovement 3 Movement_TurnDown
	waitmovement 0
	MSGBOX CleartideMuseum_Text_Grainne6 MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq CleartideMuseum_EventScript_Grainne6Yes
	goto CleartideMuseum_EventScript_Grainne6No
	end

	CleartideMuseum_EventScript_Grainne6Yes::
		MSGBOX CleartideMuseum_Text_Grainne6Yes MSGBOX_DEFAULT
		setflag FLAG_GRAINNE_LIKES
		goto CleartideMuseum_EventScript_Grainne_3
		end

	CleartideMuseum_EventScript_Grainne6No::
		MSGBOX CleartideMuseum_Text_Grainne6No MSGBOX_DEFAULT
		goto CleartideMuseum_EventScript_Grainne_3
		end


CleartideMuseum_EventScript_Grainne_3::
	MSGBOX CleartideMuseum_Text_Grainne7 MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER Movement_PlayerStepsBack
	waitmovement 0
	applymovement 3 Movement_GrainneLeaves
	waitmovement 0
	removeobject 3
	setflag FLAG_GRAINNE_HIDE_MUSEUM
	clearflag FLAG_GRAINNE_ETHEL_CUTSCENE
	closemessage
	end

CleartideMuseum_Text_Grainne1:
	.string "???: ...$"

	CleartideMuseum_Text_Grainne2:
		.string "???: I'm sorry - who\n"
		.string "are you?$"

CleartideMuseum_Text_Grainne2b:
		.string "???: Oh, a challenger.\n"
		.string "I see. \p"
		.string "GRAINNE: Well, you've\n"
		.string "found your errant Gym\l"
		.string "Leader.\p"
		.string "I'll come back with you\n"
		.string "to the Gym - but first \l"
		.string "indulge me a bit. $"

CleartideMuseum_Text_Grainne3:
	.string "GRAINNE: I can tell by\n"
	.string "your accent, you're from\l"
	.string "up the Tusa mountains.\p"
	.string "The labratory above us is ran\n"
	.string "by Professor Ethel Hawthorne, who\l"
	.string "hails from that area herself.\p"
	.string "Hawthorne is quite famous for her\n"
	.string "turning the Liabara mining outpost\l"
	.string "into a quite successful small city\l"
	.string "over the last few decades. Even \l"
	.string "got her a place on the Elite 4.$"

CleartideMuseum_Text_Grainne4:
	.string "GRAINNE: My question to\n"
	.string "you: to achieve this she\l"
	.string "caused mass terraforming\l"
	.string "on the mountain, and displaced\l"
	.string "countless Pokémon. Were\l"
	.string "her actions justifiable?$"

CleartideMuseum_Text_Grainne4Yes:
	.string "GRAINNE: Mm, survival\n"
	.string "of the fittest type, eh?\l"
	.string "How cruel, Nosepass and \l"
	.string "Geodudes aren't cuddly, but\l"
	.string "they still need a home.$"

CleartideMuseum_Text_Grainne4No:
	.string "GRAINNE: Wow, a real\n"
	.string "misanthrope. Those people\l"
	.string "would have been without jobs,\l"
	.string "food and houses if it was\l"
	.string "not for Hawthorne's actions.$"

CleartideMuseum_Text_Grainne5:
	.string "GRAINNE: Moving on, I\n"
	.string "imagine you also passed\l"
	.string "through Atkins Town on\l"
	.string "your way here. The people\l"
	.string "there don't have the highest\l"
	.string "opinion of their neighbouring\l"
	.string "Pokémon. I heard some Ghost\l"
	.string "types are making a real \l"
	.string "ruckus, taking over their \l"
	.string "supermarket. Although, that\l"
	.string "same supermarket killed off\l"
	.string "many small businesses in the\l"
	.string "area while it was open.$"

CleartideMuseum_Text_Grainne6:
	.string "GRAINNE: My question to\n"
	.string "you: should that supermarket\l"
	.string "stay closed for the sake of \l"
	.string "other local businesses?$"

CleartideMuseum_Text_Grainne6Yes:
	.string "GRAINNE: My lord, and\n"
	.string "after Mr. Poyce put so\l"
	.string "time and effort into his\l"
	.string "monopoly? How unfair!$"

CleartideMuseum_Text_Grainne6No:
	.string "GRAINNE: Woe is me\n"
	.string "to see today's youth\l"
	.string "so blind to the dangers\l"
	.string "of unrestricted monopolies.$"

CleartideMuseum_Text_Grainne7:
	.string "GRAINNE: Okay, having\n"
	.string "heard those opinions of\l"
	.string "yours, I think you're the\l"
	.string "exact type of person I\l"
	.string "like to fight. Here,\l"
	.string "let's head to the Gym.$"

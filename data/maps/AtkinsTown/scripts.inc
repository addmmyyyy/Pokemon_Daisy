AtkinsTown_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, AtkinsTown_EventScript_OnFrame

	.byte 0

AtkinsTown_EventScript_OnFrame::
map_script_2 VAR_POYCES_QUEST, 1, AtkinsTown_EventScript_JessseMatSetup
.2byte 0


AtkinsTown_EventScript_JessseMatSetup::
	setvar VAR_POYCES_QUEST 2
	setobjectxyperm 14 29, 22
	setobjectxyperm 3 30, 22
	applymovement 14 Movement_TurnRight
	waitmovement 0
	applymovement 3 Movement_TurnLeft
	waitmovement 0
	clearflag FLAG_JESSE_OUTSIDE_POYCES
	end


AtkinsTown_EventScript_JessseMat::
	MSGBOX AtkinsTown_Text_JesseMat MSGBOX_NPC
	setvar VAR_POYCES_QUEST 0
	applymovement 3 Movement_TurnUp
	waitmovement 0
	applymovement 3 Movement_Exclam
	waitmovement 0
	MSGBOX AtkinsTown_Text_JesseMat2 MSGBOX_DEFAULT
	applymovement 3 Movement_TurnRight
	waitmovement 0
	MSGBOX AtkinsTown_Text_JesseMat3 MSGBOX_DEFAULT
	applymovement 3 Movement_Exclam
	waitmovement 0
	delay 60
	MSGBOX AtkinsTown_Text_JesseMat4 MSGBOX_DEFAULT
	MSGBOX AtkinsTown_Text_JesseMat5 MSGBOX_DEFAULT
	delay 120
	MSGBOX AtkinsTown_Text_JesseMat6 MSGBOX_DEFAULT
	message AtkinsTown_Text_JesseCash
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	applymovement 5 Movement_GuardGetsOut
	waitmovement 0

	applymovement 14 Movement_PatLeaves
	waitmovement 0

	applymovement 5 Movement_GuardGetsIn
	waitmovement 0

	MSGBOX AtkinsTown_Text_JesseMat7 MSGBOX_DEFAULT
	message AtkinsTown_Text_PlayerCash
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	closemessage
	applymovement 3 Movement_JesseLeaves
	waitmovement 0
	clearflag FLAG_JESSE_OUTSIDE_POYCES
	removeobject 3
	end
Movement_JesseLeaves:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
step_end
Movement_GuardGetsOut:
	walk_left
	walk_up
	face_down
	step_end

Movement_GuardGetsIn:
	walk_down
	walk_right
	step_end

Movement_PatLeaves:
		walk_left
		walk_left
		walk_left
		walk_left
		walk_left
		walk_down
		walk_down
		walk_down
		walk_down
		walk_left
		walk_left
		walk_left
		walk_left
		walk_left
		step_end

AtkinsTown_Text_JesseMat:
	.string "JESSE: I'd say that the\n"
	.string "Ghosts should clear out over\l"
	.string "the next few weeks.\p"
	.string "???: Excellent, excellent.$"
	end

	AtkinsTown_Text_JesseMat2:
		.string "JESSE: {PLAYER}, hey!$"
		end

	AtkinsTown_Text_JesseMat3:
		.string "JESSE: This is the\n"
		.string "extra help I mentioned.\l"
		.string "You can just give them the\l"
		.string "money you offered."
	end


	AtkinsTown_Text_JesseMat4:
		.string "SHOPOWNER: Money?$"
		.string "JESSE: You said there was\n"
		.string "a cash reward for whoever could\l"
		.string "clear out the shop.$"

	AtkinsTown_Text_JesseMat5:
		.string "SHOPOWNER: Ahh, okay.\p"
		.string "Dear child, I said a \n"
		.string "'cash reward.$"

	AtkinsTown_Text_JesseMat6:
		.string "JESSE: ...what?$"

	AtkinsTown_Text_JesseCash:
		.string "JESSE received an incredibly\n"
		.string "heavy Whiscash-themed bag.$"

	AtkinsTown_Text_JesseMat7:
		.string "JESSE: I...uh...\p"
		.string "JESSE: man...\p"
		.string "JESSE: I'm going to head,\n"
		.string "you can take this. Sorry.$"

		AtkinsTown_Text_PlayerCash:
			.string "{PLAYER} received an incredibly\n"
			.string "heavy Whiscash-themed bag.\l"
			.string "It's not in your menu, but you\l"
			.string "do have it.$"

AtkinsTown_EventScript_Guard::
	MSGBOX AtkinsTown_Text_Guard MSGBOX_NPC
	end

AtkinsTown_Text_Guard:
	.string "Beat it kid, this is \n"
	.string "private property.$"


AtkinsTown_EventScript_Sudowoodo::
	MSGBOX AtkinsTown_Text_Sudowoodo MSGBOX_NPC
	end

AtkinsTown_Text_Sudowoodo:
	.string "Resolutely, the Sudowoodo stands \n"
	.string "guarding its quarry.\p"
	.string "SUDOOOO\p"
	.string "Good job Sudowoodo.$"
	end
AtkinsTown_EventScript_BonslyInteract::
msgbox AtkinsTown_Text_LooksDry MSGBOX_NPC
checkitem ITEM_WAILMER_PAIL, 1
compare VAR_RESULT, 0
goto_if_eq AtkinsTown_EventScript_End
msgbox AtkinsTown_Text_DoYouWater, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq AtkinsTown_EventScript_End
goto AtkinsTown_EventScript_BonslyFight
	end

AtkinsTown_EventScript_BonslyInteract_2::
		msgbox AtkinsTown_Text_LooksDry MSGBOX_NPC
		checkitem ITEM_WAILMER_PAIL, 1
		compare VAR_RESULT, 0
		goto_if_eq AtkinsTown_EventScript_End
		msgbox AtkinsTown_Text_DoYouWater, MSGBOX_YESNO
		compare VAR_RESULT, 0
		goto_if_eq AtkinsTown_EventScript_End
		goto AtkinsTown_EventScript_BonslyFight_2
		end

AtkinsTown_EventScript_End::


AtkinsTown_Text_LooksDry:
	.string "This shrub is looking very dry. $"

AtkinsTown_Text_DoYouWater:
	.string "Do you want to use your \n"
	.string "Wailmer Pail it?$"

AtkinsTown_EventScript_BonslyFight::
	setwildbattle SPECIES_BONSLY, 10
	waitse
	playmoncry SPECIES_BONSLY, CRY_MODE_ENCOUNTER
	waitmoncry
	dowildbattle
	removeobject 13
	setflag FLAG_BONSLY1_HIDDEN
	end

AtkinsTown_EventScript_BonslyFight_2::
		setwildbattle SPECIES_BONSLY, 10
		waitse
		playmoncry SPECIES_BONSLY, CRY_MODE_ENCOUNTER
		waitmoncry
		dowildbattle
		removeobject 14
		setflag FLAG_BONSLY2_HIDDEN
		end

AtkinsTown_EventScript_JesseOutside::
	MSGBOX AtkinsTown_Text_Jesse1 MSGBOX_DEFAULT
	applymovement 4 Movement_TurnDown
	waitmovement 0
	delay 10
	MSGBOX AtkinsTown_Text_Jesse2 MSGBOX_NPC
	delay 50
	applymovement 4 Movement_Exclam
	waitmovement 0
	delay 50
	MSGBOX AtkinsTown_Text_Jesse3 MSGBOX_NPC
	delay 100
	MSGBOX AtkinsTown_Text_Jesse4 MSGBOX_NPC
	delay 100
	MSGBOX AtkinsTown_Text_Jesse5 MSGBOX_NPC
	delay 50
	applymovement 4 Movement_Exclam
	MSGBOX AtkinsTown_Text_Jesse6 MSGBOX_NPC
	delay 100
	MSGBOX AtkinsTown_Text_Jesse7 MSGBOX_NPC
	delay 100
	MSGBOX AtkinsTown_Text_Jesse8 MSGBOX_NPC
	MSGBOX AtkinsTown_Text_Jesse9 MSGBOX_NPC
	opendoor 40 10
	waitdooranim
	applymovement 4 WalkUpOnce
	waitmovement 0
	removeobject 3
	setflag FLAG_JESSE_OUTSIDE_POYCES
	closedoor 40 10
	waitdooranim
	delay 100
	MSGBOX AtkinsTown_Text_Conscience MSGBOX_NPC
	end

WalkUpOnce:
	walk_up
	step_end

AtkinsTown_Text_Jesse1:
	.string "JESSE: Ngh.$"

AtkinsTown_Text_Jesse2:
	.string "JESSE: AHH! $"

AtkinsTown_Text_Jesse3:
	.string "JESSE: Oh, it's just you. \p"
	.string "JESSE: Thanks again for the \n"
	.string "tip on the rare pokemon. \l"
	.string "The lad giving them out \l"
	.string "was really nice too, although \l"
	.string "he ended up using me as \l"
	.string "a guinea pig for his Gym. $"

AtkinsTown_Text_Jesse4:
	.string "JESSE: You beat it? How?!? $"

AtkinsTown_Text_Jesse5:
	.string "JESSE: Ahh okay, he had\n"
	.string "me fight them all at once...\l"
	.string "at least he took on my advice.. $"

AtkinsTown_Text_Jesse6:
	.string "JESSE: Wait that's beside the \n"
	.string "point. {PLAYER}, I need your help! \p"
	.string "See, this building behind me was\n"
	.string "the town's supermarket. But it\l"
	.string "can't be used since local Ghost\l"
	.string "Pokémon took it over recently.\l"
	.string "The building's owner needed a\l"
	.string "trainer to clear it out, so I\l"
	.string "stepped up. \p"
	.string "JESSE: But there's one problem...$"

AtkinsTown_Text_Jesse7:
	.string "JESSE: My crippling fear of\n"
	.string "the paranormal.$"

AtkinsTown_Text_Jesse8:
	.string "JESSE: Here's this what I suggest \p"
	.string "You give me backup so I \n"
	.string "can check the place for \l"
	.string "rare Pokémon, and you can \l"
	.string "take the cash reward I was \l"
	.string "offered.$"

AtkinsTown_Text_Jesse9:
		.string "JESSE: Sounds good right?\n"
		.string "Great! I'll, uh, lead \l"
		.string "the charge.$"

AtkinsTown_Text_Conscience:
	.string "YOUR CONSCIENCE: I mean...\n"
	.string "it speaks for itself.\p"
	.string "YOUR CONSCIENCE: Poor kid.$"


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
	.string "Isn't it strange that\n"
	.string "such a small town has a\l"
	.string "large supermarket? That's\l"
	.string "what my friends say when\l"
	.string "they come here.$"

AtkinsTown_EventScript_Boy::
	MSGBOX AtkinsTown_Text_Boy MSGBOX_NPC
	end

AtkinsTown_Text_Boy:
	.string "Atkins is the oldest settlement\n"
	.string "in this region, and we've had\l"
	.string "to contend with the local Pokémon\l"
	.string "every step of the way.\p"
	.string "The tall grass is teeming \n"
	.string "with pests trying to get at our\l"
	.string "crops. \p"
	.string "The Sudowoodos you see around\n"
	.string "here are our trusty guards \l"
	.string "against the Bug and Flying \l"
	.string "types. In return, we give them \l"
	.string "shelter from the rain, and part \l"
	.string "of the harvest.$"

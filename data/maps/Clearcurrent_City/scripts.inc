Clearcurrent_City_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Cleartide_EventScript_OnFrame
.byte 0

Cleartide_EventScript_OnFrame::
map_script_2 VAR_CTG, 1, Cleartide_EventScript_PostGym
.2byte 0

	Cleartide_EventScript_PostGym::
		setvar VAR_CTG 0
		applymovement OBJ_EVENT_ID_PLAYER Movement_TurnLeft
		waitmovement 0
		MSGBOX Cleartide_Text_GiveBadge MSGBOX_NPC
		message Cleartide_Text_WatercolourBadge
		waitmessage
		call Common_EventScript_PlayGymBadgeFanfare
		waitfanfare
		MSGBOX Cleartide_Text_GiveTM MSGBOX_NPC
		giveitem ITEM_TM03
		MSGBOX Cleartide_Text_GiveTM2 MSGBOX_NPC
		MSGBOX Cleartide_Text_End MSGBOX_NPC
		applymovement 15 JesseWalkAway
		waitmovement 0
		removeobject 15
		setflag FLAG_GRAINNE_HIDE
		end

Cleartide_Text_WatercolourBadge:
		.string "{PLAYER} received the WATERCOLOUR\n"
		.string "BADGE from Grainne.$"

	Cleartide_Text_GiveBadge:
		.string "GRAINNE: As Gym Leader of\n"
		.string "Cleartide City, I recognise\l"
		.string "your skill and ingenuity, and\l"
		.string "thus grant you the Watercolour\l"
		.string "Badge.$"

	Cleartide_Text_GiveTM:
		.string "GRAINNE: And as a personal\n"
		.string "gift I'd like to give you this.$"

	Cleartide_Text_GiveTM2:
		.string "GRAINNE: That's the TM for\n"
		.string "Water Pulse. It's a move that\l"
		.string "confuses the opponent, and\l"
		.string "lets you get a few blows in\l"
		.string "before they readjust.\p"
		.string "I think that's a pretty good\n"
		.string "strategy in a lot of things,\l"
		.string "even outside Pokémon.$"

		Cleartide_Text_End:
			.string "GRAINNE: Anyway, I'll be\n"
			.string "heading home now. I'd suggest\l"
			.string "not rushing off to the next Gym.\l"
			.string "At least not right now. Soak in\l"
			.string "the atmosphere of this city first.\p"
			.string "If you're still raring for a fight\n"
			.string "check out the Battle Restaurant in\l"
			.string "the south-east.\p"
			.string "Anyway, bye.$"

	Cleartide_EventScript_Gymguide::
				goto_if_set FLAG_BADGE02_GET, Cleartide_EventScript_Gymguide_2
				MSGBOX Cleartide_Text_GymGuide MSGBOX_NPC
				end

	Cleartide_Text_GymGuide:
				.string "Ahh, a challenger! I'm\n"
				.string "sorry to say the Gym \l"
				.string "Leader is currently out.\p"
				.string "If I had to guess, you should\n"
				.string "be able to find her at the \l"
				.string "museum section of the Hawthorne\l"
				.string "lab. Just go south-east from here\l"
				.string "big sea-green building, can't miss it.$"

	Cleartide_EventScript_Gymguide_2::
		MSGBOX Cleartide_Text_GymGuide_2 MSGBOX_NPC
		end

	Cleartide_Text_GymGuide_2:
				.string "Eyy, champ. That badge\n"
				.string "looks good on your I have\l"
				.string "to say. The next badge is\l"
				.string "a fair walks away, maybe\l"
				.string "enjoy Cleartide for a bit \l"
				.string "before you head.$"

	Cleartide_EventScript_Sailor::
		MSGBOX Cleartide_Text_Sailor MSGBOX_NPC
		end

	Cleartide_Text_Sailor:
		.string "A lesser Sailor wouldn't \n"
		.string "dare go out in these stores. \p"
		.string "However, I'm made of different stuff\n"
		.string "I'll brave the storm...\p"
		.string "After my lunch though.$"
	Script_PokemartFood::
		lock
		faceplayer
		message Text_PokemartFoodGreeting
		waitmessage
		pokemart PokemartFood
		msgbox Text_PokemartFoodEnd, MSGBOX_DEFAULT
		closemessage
		release
		end

		.align 2

	PokemartFood:
		.2byte ITEM_PEWTER_CRUNCHIES
		.2byte ITEM_RAGE_CANDY_BAR
		.2byte ITEM_LAVA_COOKIE
		.2byte ITEM_OLD_GATEAU
		.2byte ITEM_CASTELIACONE
		.2byte ITEM_LUMIOSE_GALETTE
		.2byte ITEM_SHALOUR_SABLE
		.2byte ITEM_BIG_MALASADA
		.2byte ITEM_NONE
		release
		end

	Text_PokemartFoodGreeting:
		.string "Global cuisine all sold here.$"


	Text_PokemartFoodEnd:
		.string "Please come again!$"

		Script_PokemartStandard::
			lock
			faceplayer
			message Text_PokemartStandardGreeting
			waitmessage
			pokemart PokemartStandard
			msgbox Text_PokemartStandardEnd, MSGBOX_DEFAULT
			release
			end

			.align 2
		PokemartStandard:
			.2byte ITEM_POKE_BALL
			.2byte ITEM_GREAT_BALL
			.2byte ITEM_POTION
			.2byte ITEM_SUPER_POTION
			.2byte ITEM_REVIVE
			.2byte ITEM_NONE
			release
			end

		Text_PokemartStandardGreeting:
			.string "Welcome to our Pop-up Pokémart.\n"
			.string "How can I help you?$"

		Text_PokemartStandardEnd:
			.string "Please come again!$"



CleartideCity_EventScript_Artist::
	lock
	faceplayer
	showmoneybox 0, 0
	msgbox CleartideCity_Text_LearnLore MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq CleartideCity_EventScript_Lore
	msgbox CleartideCity_Text_AnotherTime MSGBOX_NPC
	hidemoneybox
	release
	end

CleartideCity_EventScript_Lore::
	removemoney 500
	hidemoneybox
	msgbox CleartideCity_Text_Lore MSGBOX_NPC
	end

CleartideCity_Text_Lore:
	.string "Centuries ago, during the intial invasion\n"
	.string "by Galar this area was completely\l"
	.string "unsettled. \p"
	.string "The rain here is unusually strong you see,\n"
	.string "and regular flooding drove out any \l"
	.string "attempt of extending Atkins \l"
	.string "Town's agricultural land\p"
	.string "However, the invasion turned the weather\n"
	.string "into an asset. The storms off the coast \l"
	.string "are too strong for ships to sail in, so \l"
	.string "the Galarian navy could not blockade \l"
	.string "the area. \p"
	.string "Traders from Unova and Paldea would come in \n"
	.string "on the backs of Water Pokémon, and meet\l"
	.string "with the local tribes by the \l"
	.string "large rock you see now at the \l"
	.string "centre of this market. \p"
	.string "Now, where there is trade, cities form. \n"
	.string "To this day, this market is held even \l"
	.string "through the worst of weather,\l"
	.string "as we pay homage to \l"
	.string "our ancestors.$"



CleartideCity_Text_LearnLore:
	.string "Would you like to learn the \n"
	.string "history of this market?\l"
	.string "Only 500 Pokédollars.$"

CleartideCity_Text_AnotherTime:
	.string "Another time, perhaps.$"

CleartideCity_EventScript_HouseSign::
			msgbox CleartideCity_Text_HouseSign MSGBOX_SIGN
			end

CleartideCity_Text_HouseSign:
		.string "test $"

CleartideCity_EventScript_BattleSign::
			msgbox CleartideCity_Text_BattleSign MSGBOX_SIGN
			end

CleartideCity_Text_BattleSign:
		.string "Kokoro Battle Restaurant: Always \n"
		.string "train on a full stomach. $"

CleartideCity_EventScript_LabSign::
			msgbox CleartideCity_Text_LabSign MSGBOX_SIGN
			end

CleartideCity_Text_LabSign:
		.string "Laboratory of Professor \n"
		.string "E. Hawthorne. \p"
		.string "Museum open to public. $"

CleartideCity_EventScript_GymSign::
			msgbox CleartideCity_Text_GymSign MSGBOX_SIGN
			end

CleartideCity_Text_GymSign:
		.string "GRAINNE: Painting a \n"
		.string "picture of your fall. $"

CleartideCity_EventScript_TownSign::
		msgbox CleartideCity_Text_TownSign MSGBOX_SIGN
		end

CleartideCity_Text_TownSign:
	.string "Cleartide City: The \n"
	.string "graveyard of ambition. $"

CleartideCity_EventScript_Azumarill::
	msgbox CleartideCity_Text_Azumarill MSGBOX_NPC
	end

CleartideCity_Text_Azumarill:
	.string "Azumarill used Slack Off \p"
	.string "It's super effective! $"


CleartideCity_EventScript_PicnicKid::
		msgbox CleartideCity_Text_PicnicKid MSGBOX_NPC
		end

CleartideCity_Text_PicnicKid:
		.string "Hehehe, bet you didn't expect \n"
		.string "to see a Picnic Kid by \l"
		.string "the sea?? \p"
		.string "I'm actually on house exchange, \l"
		.string "seeing different shores hehehe. $"

CleartideCity_EventScript_TuberF::
				msgbox CleartideCity_Text_TuberF MSGBOX_NPC
				end

CleartideCity_Text_TuberF:
				.string "Despite my trusty floatable, \n"
				.string "my innate cowardice is  \l"
				.string "the prison which binds me to \l"
				.string "the land.\p"
				.string "A disgrace to Tubers everywhere. $"

CleartideCity_EventScript_Lady::
		msgbox CleartideCity_Text_Lady MSGBOX_NPC
		end

CleartideCity_Text_Lady:
								.string "What, you think I'm going \n"
								.string "to let some rain stop me  \l"
								.string "from getting the perfect tan? $"

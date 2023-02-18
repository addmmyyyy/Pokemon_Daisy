Route1_MapScripts::
	.byte 0
	map_script MAP_SCRIPT_ON_LOAD, Route1_EventScript_OnLoad
	.set LOCALID_JESSE, 1



	Route1_EventScript_OnLoad:
		removeobject 4
		msgbox Route1_Text_JesseIntro MSGBOX_DEFAULT
		end

	Route1_EventScript_RouteSign::
		MSGBOX Route1_Text_RouteSign MSGBOX_SIGN
		end


	Route1_Text_RouteSign:
		.string "{UP_ARROW} FLOWER FIELD ; BLOCKED OFF \p"
		.string "{RIGHT_ARROW} TUSA TOWN, LIABARA CITY \p"
		.string "{DOWN_ARROW} CLIFF'S EDGE"



	Route1_EventScript_JesseTutorial::
		lockall
		applymovement OBJ_EVENT_ID_PLAYER PlayerWalkUp
		waitmovement 0
		applymovement 1 JesseWalkInPlace
		waitmovement 0
		msgbox Route1_Text_JesseIntro MSGBOX_DEFAULT
		closemessage
		playmoncry SPECIES_GULPIN, CRY_MODE_ENCOUNTER
		waitse
		waitmoncry
		special SavePlayerParty
		special PutZigzagoonInPlayerParty
		special StartWallyTutorialBattle
		waitstate
		setflag FLAG_VISITED_PETALBURG_CITY
		removeobject 3
		removeobject 2
		setvar VAR_PETALBURG_CITY_STATE, 1
		msgbox Route1_Text_JesseAfterBattle MSGBOX_NPC
		applymovement 1 JesseWalkDown
		waitmovement 0
		delay 30
		removeobject 4
		delay 60
		applymovement 1 Movement_Exclam
		waitmovement 0
		msgbox Route1_Text_JesseSayHi MSGBOX_NPC
		applymovement OBJ_EVENT_ID_PLAYER PlayerWalkToJesse
		waitmovement 0
		applymovement 1 Movement_TurnLeft
		waitmovement 0
		delay 60
		msgbox Route1_Text_JesseSurprise MSGBOX_NPC
		applymovement 1 Movement_Exclam
		waitmovement 0
		delay 60
		fadedefaultbgm
		special LoadPlayerParty
		trainerbattle_single TRAINER_D_JESSE_1, Route1_Text_JesseAccepts, Route1_Text_JesseDefeated, Route1_EventScript_AfterJesseBattle
		releaseall
		end

Route1_EventScript_AfterJesseBattle::
		MSGBOX Route1_Text_JessePostBattle MSGBOX_NPC
		delay 30
		bufferleadmonspeciesname 0
		MSGBOX Route1_Text_JessePostBattle2 MSGBOX_NPC
		delay 40
		MSGBOX Route1_Text_JessePostBattle3 MSGBOX_NPC
		applymovement 1 Movement_TurnDown
		delay 120
		applymovement 1 Movement_TurnLeft
		MSGBOX Route1_Text_JessePostBattle4 MSGBOX_NPC
		giveitem ITEM_POKE_BALL, 20
		delay 120
		MSGBOX Route1_Text_JessePostBattle5 MSGBOX_NPC
		MSGBOX Route1_Text_JessePostBattle6 MSGBOX_DEFAULT
		applymovement LOCALID_JESSE JesseWalkAway
		waitmovement 0
		setflag FLAG_SYS_POKEDEX_GET
		removeobject 1
		releaseall
		closemessage
		end

JesseWalkAway:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end
PlayerWalkInPlace_Right:
		walk_in_place_faster_left
		step_end

Route1_Text_JessePostBattle:
	.string "???: Sigh, you can \n"
	.string "probably tell, I'm not really \l"
	.string "a battler. I'm more of the\l"
	.string "collecting type.\p"
	.string "???: My name's Jesse by the way. $"

Route1_Text_JessePostBattle2:
	.string "JESSE: Nice to meet you, {PLAYER}.\p"
	.string "On another note, where'd you \n"
	.string "find a {STR_VAR_1}?! They're rare \l"
	.string "worldwide and unheard of in \l"
	.string "Iniseire. $"

Route1_Text_JessePostBattle3:
	.string "WHAT?! HE'S JUST GIVING \n"
	.string "RARE POKEMON OUT?!?! $"

Route1_Text_JessePostBattle4:
	.string "JESSE: Sorry about that. Thanks \n"
	.string "so much for the info. Here,\l"
	.string "please take these in return. \p"
	.string "Jesse hands you a large package from \n"
	.string "their bag. \p"
	.string "JESSE: That's a spare Pokédex I brought \n"
	.string "in case of emergencies. Some \l"
	.string "Pokéballs too. $"

Route1_Text_JessePostBattle5:
	.string "JESSE: I'm, uh, going to go now.$"

	Route1_Text_JessePostBattle6:
		.string "JESSE: Byeeee.$"

Route1_Text_JesseIntro:
 .string "???: Ahhh! Finally!! Gulpin, \n"
 .string "quick - now's our chance. $"

Route1_Text_JesseAfterBattle:
	.string "???: Yes, yes, yes! $"

Route1_Text_JesseSayHi:
	.string "???: Oh, uh, hi? $"

Route1_Text_JesseSurprise:
	.string "???: What? A Pokémon battle? \p"
	.string "???: I'm sorry, Gulpin's probably \n"
	.string "exhausted after all that looking for... $"

Route1_Text_JesseDefeated:
	.string "Yeah, no surprises there. $"

Route1_Text_JesseAccepts:
	.string "???: Actually, let's do it. \n"
	.string "This is the perfect way to \l"
	.string "get to know Rockruff. $"

PlayerWalkUp:
	walk_up
	walk_up
	walk_right
	walk_right
	face_up
	step_end

JesseWalkDown:
	walk_down
	step_end
PlayerWalkToJesse:
walk_up
walk_up
walk_up
face_left
step_end

JesseWalkInPlace:
  walk_in_place_faster_down
	step_end

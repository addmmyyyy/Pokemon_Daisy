.set LOCALID_NURSE, 1

OldaleTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

OldaleTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_TUSA_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

OldaleTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_Boy::
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_Girl::
	lock
	faceplayer
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
	.string "When I was still a young man, \n"
	.string "this town was much larger. More\l"
	.string "lively too! We had the nicest spot \l"
	.string "to live in the area. \p"
	.string "The Liabara Terraforming Project \n"
	.string "changed all of that, of course. \p"
	.string "Now, at my age I probably wouldn't \n"
	.string "get much out of big and lively, but\l"
	.string "whenever I see a young one like you\l"
	.string "I can't help but feel sorry for the state\l"
	.string "of the place. $"

OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
	.string "KIIIIIRLIA $"

OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
	.string "Be careful on Route 2. The high road's\n"
	.string "safe enough - but the desert\l"
	.string "below is a different story!\p"
	.string "It's filled with Pokémon pushed \n"
	.string "out by the terraforming of the \l"
	.string "high road and Liabara. They've \l"
	.string "all had to toughen up to survive \l"
	.string "in the smaller area. $"

OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
	.string "The POKéMON WIRELESS CLUB on\n"
	.string "the second floor was built recently.\p"
	.string "I traded POKéMON right away.$"

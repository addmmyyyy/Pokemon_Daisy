
	Joyces_Dungeon_Back_MapScripts::
		.byte 0

	Script_Joyces_Back_Kettligeist::
		lock
		faceplayer
		settotemboost 1, 0, 1, 0, 0, 1, 0, 0
		setwildbattle SPECIES_POLTEAGEIST, 20
		waitse
		playmoncry SPECIES_POLTEAGEIST, CRY_MODE_ENCOUNTER
		waitmoncry
		delay 40
		dowildbattle
		release
		end

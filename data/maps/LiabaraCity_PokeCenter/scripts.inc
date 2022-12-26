.set LOCALID_NURSE, 1

LiabaraCity_PokeCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LiabaraCity_PokemonCenter_OnTransition
	.byte 0


LiabaraCity_PokemonCenter_OnTransition:
	setrespawn HEAL_LOCATION_PETALBURG_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

LiabaraCity_PokemonCenter_EventScript_Nurse::
		setvar VAR_0x800B, LOCALID_NURSE
		call Common_EventScript_PkmnCenterNurse
		waitmessage
		waitbuttonpress
		release
		end

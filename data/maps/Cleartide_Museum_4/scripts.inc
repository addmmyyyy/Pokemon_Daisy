Cleartide_Museum_4_MapScripts::
	.byte 0


CTM_EventScript_EthelInteract::
	goto_if_set FLAG_VULPIX_QUEST_FINISHED CTM_EventScript_EthelAfterQuest
	goto_if_set FLAG_VULPIX_QUEST CTM_EventScript_EthelDuringQuest
	goto CTM_EventScript_EthelQuestGive
	end

CTM_EventScript_EthelQuestGive::
	MSGBOX CTM_Text_EthelQuestGive MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq CTM_EventScript_EthelYes
	goto CTM_EventScript_EthelNo
	end

CTM_Text_EthelQuestGive:
	.string "ETHEL: Now, about that\n"
	.string "business I mentioned. I\l"
	.string "want you to go on a bit of \l"
	.string "a fetch quest to help my \l"
	.string "research.$"

CTM_EventScript_EthelYes::
	MSGBOX CTM_Text_EthelYes MSGBOX_NPC
	setflag FLAG_VULPIX_QUEST
	end

CTM_Text_EthelYes:
	.string "ETHEL: Superb! I\n"
	.string "want you to go out to\l"
	.string "Route 4, and search for\l"
	.string "a Vulpix specimen. \p"
	.string "They are exceedingly rare\n"
	.string "so if you bring one to me\l"
	.string "I'll trade you a Pokémon\l"
	.string "you certainly wouldn't find\l"
	.string "in this region.$"

CTM_EventScript_EthelNo::
	MSGBOX CTM_Text_EthelNo MSGBOX_NPC
	end
CTM_Text_EthelNo:
	.string "ETHEL: I'm sure you'll\n"
	.string "reconsider, hehehe.$"

CTM_EventScript_EthelDuringQuest::
	setvar VAR_0x8008, INGAME_TRADE_PLUSLE
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	MSGBOX CTM_Text_EthelDuringQuest MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CTM_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CTM_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, CTM_EventScript_DeclineTrade
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	bufferspeciesname STR_VAR_1, VAR_0x8009
	setflag FLAG_VULPIX_QUEST_FINISHED
	end

CTM_EventScript_DeclineTrade:
	MSGBOX CTM_Text_DeclineTrade MSGBOX_NPC
	end

CTM_Text_DeclineTrade:
	.string "ETHEL: Ah no bother.$"

CTM_Text_EthelDuringQuest:
	.string "ETHEL: Ahh, {PLAYER}. Glad\n"
	.string "to see you again. Have \l"
	.string "you by any chance gotten \l"
	.string "around to catching a Vulpix?$"


CTM_EventScript_EthelAfterQuest::

	end

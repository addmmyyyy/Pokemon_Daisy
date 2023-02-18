Atkins_Lake_MapScripts::
	.byte 0


AtkinsLake_EventScript_FishermanInteract::
	goto_if_set FLAG_RECEIVED_OLD_ROD, AtkinsTown_EventScript_HowsFishing
	MSGBOX	AtkinsLake_Text_FishermanInteract MSGBOX_DEFAULT
	end

AtkinsTown_EventScript_HowsFishing::
	MSGBOX	AtkinsLake_Text_HowsFishing MSGBOX_DEFAULT
	end

AtkinsLake_Text_HowsFishing:
	.string "Hope the fishing's going good"
	.string "for you.$"


AtkinsLake_Text_FishermanInteract:
	.string "The fisherman hums to himself, \n"
	.string "unaware of your presence. $"

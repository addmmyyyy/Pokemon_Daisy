Route_5_MapScripts::
	.byte 0

Route5_EventScript_RouteSign::
	MSGBOX Route5_Text_RouteSign MSGBOX_SIGN
	end

Route5_Text_RouteSign:
	.string "{UP_ARROW}: Future Content.\p"
	.string "{LEFT_ARROW}: Atkins Town.\p"
	.string "{DOWN_ARROW}: Cleartide City.$"

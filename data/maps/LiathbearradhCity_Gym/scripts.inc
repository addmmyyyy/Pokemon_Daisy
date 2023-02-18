LiathbearradhCity_Gym_MapScripts::
	.byte 0


LiabaraGym_EventScript_GymGuide::
  lock
  faceplayer
	msgbox LiabaraGym_Text_GymGuide MSGBOX_DEFAULT
	releaseall
	end

LiabaraGym_Text_GymGuide:
	.string "Yo, champ-in-the-making! Welcome \n"
	.string "to the Liabara City gym. Don't be \l"
	.string "fooled by all this greenery, Carraig \l"
	.string "is an A-grade mineral freak. His Rock \l"
	.string "Pokémon will crush any Flying or Bug types \l"
	.string "you bring. The local Grass types however should \l "
	.string "give you an advantage, as well as any Ground or"
	.string "Water types you can get your tiny, tiny hands on. $"

LiabaraGym_EventScript_Oliver::
	trainerbattle_single TRAINER_D_OLIVER, LiabaraGym_Text_OliverIntro, LiabaraGym_Text_OliverDefeat
	msgbox LiabaraGym_Text_OliverPostBattle, MSGBOX_AUTOCLOSE
	end

LiabaraGym_Text_OliverIntro:
	.string "Apologies for this, but I'm \n"
	.string "actually a carryover from \l"
	.string "when Ethel ran this gym. \l"
	.string "I do hope that you did \l"
	.string "not bring any Water Pokémon$"

LiabaraGym_Text_OliverDefeat:
 .string "Ahh how wonderful to still see such \n"
 .string "talent in our area. $"

LiabaraGym_Text_OliverPostBattle:
 .string "This thrill of battle is the \n"
 .string "exact reason I did not go with \l"
 .string "Ethel to her new lab. $"

LiabaraGym_EventScript_PADRAIG::
 trainerbattle_single TRAINER_D_MELCHIOR, LiabaraGym_Text_PadraigIntro, LiabaraGym_Text_PadraigDefeat
 msgbox LiabaraGym_Text_PadraigPostBattle, MSGBOX_AUTOCLOSE
 end

LiabaraGym_Text_PadraigIntro:
	.string "Hoho, life's finally looking up \n"
	.string "for this HIKER. This gig is all I got \l"
	.string "so please go easy on me. $"

LiabaraGym_Text_PadraigDefeat:
 .string "I'M RUINED! $"

 LiabaraGym_Text_PadraigPostBattle:
  .string "My stock options.. $"

LiabaraGym_EventScript_Aodhan::
	trainerbattle_single TRAINER_D_AODHAN, LiabaraGym_Text_AodhanIntro, LiabaraGym_Text_AodhanDefeat
	msgbox LiabaraGym_Text_AodhanPostBattle,MSGBOX_AUTOCLOSE
	end

LiabaraGym_Text_AodhanIntro:
 .string "Heya! I'm actually not from \n"
 .string "around here, was just paying Carraig \l"
 .string "a visit. But its always good to  \l"
 .string "have a friend in debt. $"

LiabaraGym_Text_AodhanDefeat:
	.string "Not too bad kid.$"

LiabaraGym_Text_AodhanPostBattle:
	.string "Y'know your style of battling \n"
	.string "reminds me of my sister's. Brutal. $"

LiabaraGym_EventScript_CarraigDefeated::
	message LiabaraGym_Text_ReceivedGlobeBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_BADGE01_GET
	goto LiabaraGym_EventScript_GiveRockTomb
	end

LiabaraGym_EventScript_GiveRockTomb::
		msgbox LiabaraGym_Text_BadgeAndTakeThis, MSGBOX_DEFAULT
		giveitem ITEM_TM39
		goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
		setflag FLAG_RECEIVED_TM39
		msgbox LiabaraGym_Text_ExplainRockTomb, MSGBOX_DEFAULT
		closemessage
		release
		end

LiabaraGym_Text_BadgeAndTakeThis:
	.string "CARRAIG: That badge is proof of your \n"
	.string "skill and your first step to\l"
	.string "taking on the league. \p"
	.string "I'd also like to give you this. $"

LiabaraGym_Text_ExplainRockTomb:
			.string "CARRAIG: That TECHNICAL MACHINE \n"
			.string "is my favourite move, Rock Tomb.\p"
			.string "It damages the opponent while\n"
			.string "also lowering their Speed.\p"
			.string "Really my slower Pokémon keep \n"
			.string "up during a battle. $"


LiabaraGym_Text_ReceivedGlobeBadge:
.string "{PLAYER} received the GLOBE BADGE\n"
.string "from Carraig.$"

LiabaraGym_EventScript_Carraig::
 	goto_if_unset FLAG_BADGE01_GET, LiabaraGym_EventScript_CarraigPreFight
 	msgbox LiabaraGym_Text_CarraigPostBattle, MSGBOX_AUTOCLOSE
 	end

LiabaraGym_EventScript_CarraigPreFight::
	MSGBOX LiabaraGym_Text_CarraigIntro MSGBOX_DEFAULT
	MSGBOX LiabaraGym_Text_CarraigIntro_2 MSGBOX_DEFAULT
	MSGBOX LiabaraGym_Text_CarraigIntro_3 MSGBOX_DEFAULT
	playbgm MUS_RG_VS_GYM_LEADER, FALSE
	trainerbattle_single TRAINER_D_CARRAIG_1, LiabaraGym_Text_CarraigIntro_4, LiabaraGym_Text_CarraigDefeat, LiabaraGym_EventScript_CarraigDefeated
	goto_if_unset FLAG_RECEIVED_TM39, LiabaraGym_EventScript_GiveRockTomb
	end


LiabaraGym_Text_CarraigIntro:
  .string "{PLAYER}, great to see you made it!\n"
	.string "Thanks to you I was able \l"
	.string "to hand out all the starter pokemon \l"
	.string "I had gathered. $"

LiabaraGym_Text_CarraigIntro_2:
	.string "So far though, none of the kids \n"
	.string "have gotten strong enough to even \l"
	.string "get through my gym challenge.$"

LiabaraGym_Text_CarraigIntro_3:
	.string "In other words, this is my first \n"
	.string "test as a Gym Leader. $"

LiabaraGym_Text_CarraigIntro_4:
	.string "Its time to show you what you can't \n"
	.string "learn at home! $"


LiabaraGym_Text_CarraigDefeat:
.string "Wow {PLAYER}, congratulations! \n"
.string "It's my honour as Liabara City's \l"
.string "Gym Leader to give you the Globe \l"
.string "Badge. $"

LiabaraGym_Text_CarraigPostBattle:
	.string "CARRAIG: Your next stop now \n"
	.string "is Cleartide City. Just go down \l "
	.string "the mountain from Tusa and head east $"

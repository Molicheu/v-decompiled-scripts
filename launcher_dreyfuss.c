#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	struct<4> Local_35[10];
	bool bLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	struct<3> Local_92 = { 0, 0, 0 } ;
	float fLocal_95 = 0f;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<42> Var0;
	struct<3> Var61;
	int iVar64[1];
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_80 = 1;
	iLocal_81 = 65;
	iLocal_82 = 49;
	iLocal_83 = 64;
	iLocal_87 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_88 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_90 = func_303(68);
	iLocal_91 = joaat("landstalker");
	Local_92 = { -1473.3762f, 517.8441f, 116.8854f };
	fLocal_95 = 97.3011f;
	iLocal_96 = -1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	func_302();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { 0f, 0f, 0f };
	func_301(&Var0);
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_300("Force cleanup [TERMINATING]");
		if (Var0.f_0 != -1)
		{
			if (Global_113056[Var0.f_0 /*10*/].f_9 != -1)
			{
				func_300("Relinquishing candidate id...");
				func_299(&(Global_113056[Var0.f_0 /*10*/].f_9));
			}
		}
		func_281(&Var0, 1);
	}
	iVar64[0] = 8;
	if (!func_278(&iVar64, &Var0, Var61, 1f))
	{
		func_277();
		func_300("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_269(Var0.f_0))
	{
		func_277();
		func_300("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_268(Var0.f_0))
	{
		func_277();
		func_300("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (!func_250(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			func_300("Player out of range [TERMINATING]");
			func_281(&Var0, 1);
		}
	}
	if (Var0.f_0 == 8)
	{
		iLocal_97 = func_249();
	}
	MISC::CLEAR_AREA(Var61, Var0.f_15, true, false, false, false);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_211(&Var0, 1))
		{
			func_281(&Var0, 1);
		}
		func_210(Var0.f_0);
		func_203(&iLocal_96, &(Var0.f_9), Var61);
		if (Var0.f_0 == 8)
		{
			func_199(&Var0, Var61, "DREY1AU", "DREY1_IDLE", 3, "DREYFUSS", 5000, 1101004800);
		}
		if (func_193(&Var0, 0) || func_181())
		{
			if (!func_2(&Var0))
			{
				func_281(&Var0, 1);
			}
			if (func_1(&Var0))
			{
				func_281(&Var0, 0);
			}
		}
	}
}

int func_1(int iParam0)//Position - 0x253
{
	while (!Global_113056[*iParam0 /*10*/])
	{
		SYSTEM::WAIT(0);
	}
	return 1;
}

int func_2(int iParam0)//Position - 0x271
{
	struct<4> Var0;
	char* sVar32;
	
	if (!func_180())
	{
		while (!func_171(*iParam0))
		{
			if (func_170(*iParam0))
			{
				func_158();
			}
			if (!func_211(iParam0, *iParam0 != 2))
			{
				func_300("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			SYSTEM::WAIT(0);
		}
	}
	if (func_157())
	{
		func_155();
	}
	if (!func_123(iParam0))
	{
		func_300("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	func_120(*iParam0, &Var0);
	MemCopy(&sVar32, {func_119(*iParam0)}, 4);
	func_117(&sVar32, Var0.f_3, 0);
	func_114(*iParam0);
	if (!func_180())
	{
		if (iParam0->f_16 == 2)
		{
			func_22(&(iParam0->f_1), 0);
		}
		else
		{
			func_22(&(iParam0->f_1), 1);
		}
	}
	func_3(*iParam0, Var0.f_0);
	return 1;
}

void func_3(int iParam0, char* sParam1)//Position - 0x332
{
	func_21(sParam1);
	MISC::CLEAR_BIT(&(Global_113969.f_18577[iParam0 /*6*/]), 5);
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
	{
		while (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
		{
			func_19();
			SYSTEM::WAIT(0);
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) < 1)
	{
		Global_64167 = 0;
		SCRIPT::REQUEST_SCRIPT("mission_stat_watcher");
		while (!SCRIPT::HAS_SCRIPT_LOADED("mission_stat_watcher"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("mission_stat_watcher", 1828);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_stat_watcher");
	}
	while (!BitTest(Global_113969.f_18577[iParam0 /*6*/], 5))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
		{
			MISC::SET_BIT(&(Global_113969.f_18577[iParam0 /*6*/]), 5);
		}
	}
	func_4(iParam0);
}

void func_4(int iParam0)//Position - 0x3EE
{
	int iVar0;
	int iVar1;
	
	if (Global_64164 == 1)
	{
		func_18();
		Global_64164 = 0;
		if (Global_64159)
		{
			return;
		}
	}
	if (Global_4)
	{
		Global_64167 = 1;
		func_10();
		return;
	}
	MemCopy(&Global_64181, {func_9(iParam0)}, 4);
	Global_64169 = 0;
	Global_64168 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_64156 = 1;
			Global_64159 = 1;
			Global_64162 = 1;
			break;
		
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_64167 = 1;
			Global_64168 = 1;
			func_10();
			func_19();
			return;
			break;
	}
	iVar0 = Global_76411;
	Global_76411 = 1;
	iVar1 = Global_76412;
	Global_76412 = iParam0;
	if (!Global_64156)
	{
		if ((Global_76412 != iVar1 || Global_76261 == 0) || iVar0 != Global_76411)
		{
			Global_33202 = 0;
			func_10();
			func_6(iParam0);
		}
		else
		{
			Global_64159 = 1;
		}
	}
	Global_64194 = MISC::GET_GAME_TIMER();
	func_5();
	Global_64166 = 0;
}

void func_5()//Position - 0x548
{
	int iVar0;
	
	if (!Global_64163)
	{
		return;
	}
	if (Global_76261 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_76261)
	{
		switch (Global_64391[Global_76262[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_76262[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_64174)
				{
					Global_76262[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_64391[Global_76262[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_76262[iVar0 /*9*/].f_1 != 0)
					{
						Global_76262[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_64163 = 0;
}

void func_6(int iParam0)//Position - 0x5FB
{
	switch (iParam0)
	{
		case 2:
			func_7(741);
			func_7(742);
			return;
		
		case 3:
			func_7(743);
			func_7(744);
			return;
		
		case 5:
			func_7(745);
			func_7(746);
			return;
		
		case 6:
			func_7(747);
			func_7(748);
			return;
		
		case 8:
			func_7(749);
			return;
		
		case 12:
			func_7(750);
			return;
		
		case 14:
			func_7(751);
			func_7(752);
			return;
		
		case 16:
			func_7(753);
			func_7(754);
			return;
		
		case 17:
			func_7(755);
			func_7(756);
			func_7(757);
			return;
		
		case 18:
			func_7(758);
			func_7(759);
			return;
		
		case 19:
			func_7(760);
			func_7(761);
			return;
		
		case 20:
			func_7(762);
			return;
		
		case 21:
			func_7(763);
			return;
		
		case 22:
			func_7(764);
			func_7(765);
			return;
		
		case 23:
			func_7(766);
			return;
		
		case 25:
			func_7(767);
			func_7(768);
			func_7(769);
			return;
		
		case 26:
			func_7(770);
			func_7(771);
			return;
		
		case 28:
			func_7(772);
			func_7(773);
			return;
		
		case 29:
			func_7(774);
			func_7(775);
			return;
		
		case 30:
			func_7(776);
			func_7(777);
			return;
		
		case 32:
			func_7(778);
			func_7(779);
			return;
		
		case 33:
			func_7(780);
			func_7(781);
			func_7(782);
			return;
		
		case 34:
			func_7(783);
			func_7(784);
			return;
		
		case 38:
			func_7(785);
			func_7(786);
			return;
		
		case 39:
			func_7(787);
			func_7(788);
			return;
		
		case 40:
			func_7(789);
			return;
		
		case 41:
			func_7(790);
			func_7(791);
			func_7(792);
			return;
		
		case 42:
			func_7(793);
			func_7(794);
			func_7(795);
			return;
		
		case 43:
			func_7(796);
			func_7(797);
			return;
		
		case 46:
			func_7(798);
			func_7(799);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 47:
			func_7(800);
			func_7(801);
			return;
		
		case 49:
			func_7(802);
			func_7(803);
			return;
		
		case 50:
			func_7(804);
			func_7(805);
			return;
		
		case 51:
			func_7(806);
			return;
		
		case 57:
			func_7(807);
			func_7(808);
			func_7(809);
			return;
		
		case 58:
			func_7(828);
			func_7(829);
			func_7(830);
			return;
		
		case 59:
			func_7(831);
			func_7(832);
			func_7(833);
			return;
		
		case 60:
			func_7(834);
			func_7(835);
			func_7(836);
			return;
		
		case 61:
			func_7(837);
			func_7(838);
			func_7(839);
			return;
		
		case 62:
			func_7(840);
			func_7(841);
			func_7(842);
			return;
		
		case 24:
			func_7(843);
			func_7(844);
			func_7(845);
			return;
		
		default:
	}
}

void func_7(int iParam0)//Position - 0x9E3
{
	Global_64159 = 1;
	Global_64162 = 1;
	if (Global_76261 > 15)
	{
		return;
	}
	func_8(Global_76261);
	Global_76262[Global_76261 /*9*/] = iParam0;
	Global_76261++;
	if (Global_64391[iParam0 /*13*/] == 16)
	{
		Global_76413 = 1;
	}
}

void func_8(int iParam0)//Position - 0xA2E
{
	Global_76262[iParam0 /*9*/].f_1 = 0;
	Global_76262[iParam0 /*9*/].f_2 = 0f;
	Global_76262[iParam0 /*9*/].f_3 = 0;
	Global_76262[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_9(int iParam0)//Position - 0xA62
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_119(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

void func_10()//Position - 0xA9A
{
	if (Global_64166)
	{
		return;
	}
	Global_64175 = 0;
	Global_76261 = 0;
	Global_64177 = 0;
	if (Global_64174)
	{
	}
	Global_64174 = 0;
	func_17(0);
	func_16();
	Global_76413 = 0;
	Global_64165 = 1;
	func_14();
	func_13();
	func_12();
	func_11();
	Global_64156 = 0;
	Global_64186 = 0;
	Global_64194 = -1;
}

void func_11()//Position - 0xAF0
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_76448[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_76457 = 0;
}

void func_12()//Position - 0xB1D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_76414[iVar0 /*2*/] = 0;
		Global_76414[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_76447 = 0;
}

void func_13()//Position - 0xB54
{
	Global_64325 = 0;
}

void func_14()//Position - 0xB60
{
	Global_64185 = 0;
	Global_64189 = func_15(joaat("SP0_SHOTS"));
	Global_64188 = func_15(joaat("SP0_HITS"));
	Global_64191 = func_15(joaat("SP1_SHOTS"));
	Global_64190 = func_15(joaat("SP1_HITS"));
	Global_64193 = func_15(joaat("SP2_SHOTS"));
	Global_64192 = func_15(joaat("SP2_HITS"));
}

var func_15(int iParam0)//Position - 0xBB4
{
	var uVar0;
	
	STATS::STAT_GET_INT(iParam0, &uVar0, -1);
	return uVar0;
}

void func_16()//Position - 0xBC8
{
	int iVar0;
	
	Global_64195 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_64196[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_17(int iParam0)//Position - 0xBF2
{
	Global_79650 = iParam0;
	Global_79651 = iParam0;
}

void func_18()//Position - 0xC06
{
	int iVar0;
	
	Global_64164 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_76261)
	{
		Global_76262[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_64174)
	{
	}
	Global_64174 = 0;
}

void func_19()//Position - 0xC3F
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
	{
		if (func_20())
		{
			if (Global_64161 && !Global_64160)
			{
				Global_64161 = 0;
				MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
			}
		}
		else
		{
			MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
		}
	}
}

int func_20()//Position - 0xC81
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_64159)
	{
		return 0;
	}
	return Global_64171;
}

void func_21(char* sParam0)//Position - 0xCAB
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

void func_22(char[4] cParam0, int iParam1)//Position - 0xCBE
{
	MISC::CLEAR_BIT(&(Global_101533.f_20), 17);
	func_23(cParam0, iParam1, 0);
}

void func_23(char[4] cParam0, int iParam1, int iParam2)//Position - 0xCDB
{
	if (Global_101533 != 10 && Global_101533 != 9)
	{
		StringCopy(&Global_104522, cParam0, 32);
		func_25(&Global_104530, cParam0, 0, "Start", iParam1, iParam2);
		func_24();
		Global_95691 = 0;
	}
}

void func_24()//Position - 0xD20
{
	int iVar0;
	int iVar1;
	
	Global_107514 = Global_104530;
	Global_107514.f_1 = Global_104530.f_1;
	Global_107514.f_6 = Global_104530.f_6;
	Global_107514.f_7 = Global_104530.f_7;
	Global_107514.f_8 = Global_104530.f_8;
	Global_107514.f_2 = Global_104530.f_2;
	Global_107514.f_3 = Global_104530.f_3;
	Global_107514.f_4 = Global_104530.f_4;
	Global_107514.f_5 = Global_104530.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_107514.f_9[iVar1] = Global_104530.f_9[iVar1];
		Global_107514.f_13[iVar1] = Global_104530.f_13[iVar1];
		Global_107514.f_17[iVar1] = Global_104530.f_17[iVar1];
		Global_107514.f_21[iVar1] = Global_104530.f_21[iVar1];
		Global_107514.f_25[0 /*295*/][iVar1 /*98*/] = { Global_104530.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_107514.f_25[1 /*295*/][iVar1 /*98*/] = { Global_104530.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_107514.f_616[iVar1 /*65*/][iVar0] = Global_104530.f_616[iVar1 /*65*/][iVar0];
			Global_107514.f_616[iVar1 /*65*/].f_13[iVar0] = Global_104530.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_107514.f_616[iVar1 /*65*/].f_26[iVar0] = Global_104530.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_107514.f_616[iVar1 /*65*/].f_59 = Global_104530.f_616[iVar1 /*65*/].f_59;
		Global_107514.f_616[iVar1 /*65*/].f_60 = Global_104530.f_616[iVar1 /*65*/].f_60;
		Global_107514.f_616[iVar1 /*65*/].f_61 = Global_104530.f_616[iVar1 /*65*/].f_61;
		Global_107514.f_616[iVar1 /*65*/].f_62 = Global_104530.f_616[iVar1 /*65*/].f_62;
		Global_107514.f_616[iVar1 /*65*/].f_63 = Global_104530.f_616[iVar1 /*65*/].f_63;
		Global_107514.f_616[iVar1 /*65*/].f_64 = Global_104530.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_107514.f_616[iVar1 /*65*/].f_39[iVar0] = Global_104530.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_107514.f_616[iVar1 /*65*/].f_49[iVar0] = Global_104530.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_107514.f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_104530.f_812[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			Global_107514.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_104530.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_107514.f_2244[iVar1 /*32*/][iVar0] = Global_104530.f_2244[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_107514.f_2244[iVar1 /*32*/].f_5[iVar0] = Global_104530.f_2244[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_107514.f_2244[iVar1 /*32*/].f_16[iVar0] = Global_104530.f_2244[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_107514.f_2341[iVar1] = Global_104530.f_2341[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_107514.f_2838[iVar1 /*15*/][iVar0] = Global_104530.f_2838[iVar1 /*15*/][iVar0];
			Global_107514.f_2838[iVar1 /*15*/].f_5[iVar0] = Global_104530.f_2838[iVar1 /*15*/].f_5[iVar0];
			Global_107514.f_2838[iVar1 /*15*/].f_10[iVar0] = Global_104530.f_2838[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_107514.f_2345[iVar1 /*164*/][iVar0] = Global_104530.f_2345[iVar1 /*164*/][iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_4[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_4[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_8[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_8[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_12[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_12[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_16[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_16[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_20[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_20[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_24[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_24[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_28[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_28[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_32[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_32[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_36[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_36[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_40[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_40[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_44[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_44[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_48[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_48[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_52[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_52[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_56[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_56[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_60[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_60[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_64[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_64[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_68[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_68[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_72[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_72[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_76[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_76[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_80[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_80[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_84[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_84[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_88[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_88[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_92[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_92[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_96[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_96[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_100[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_100[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_104[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_104[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_108[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_108[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_112[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_112[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_116[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_116[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_120[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_120[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_124[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_124[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_128[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_128[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_132[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_132[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_136[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_136[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_140[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_140[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_144[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_144[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_148[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_148[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_152[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_152[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_156[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_156[iVar0];
			Global_107514.f_2345[iVar1 /*164*/].f_160[iVar0] = Global_104530.f_2345[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_107514.f_2884 = { Global_104530.f_2884 };
	Global_107514.f_2884.f_3 = Global_104530.f_2884.f_3;
	Global_107514.f_2890 = { Global_104530.f_2890 };
	Global_107514.f_2890.f_3 = { Global_104530.f_2890.f_3 };
	Global_107514.f_2890.f_6 = Global_104530.f_2890.f_6;
	Global_107514.f_2890.f_8 = Global_107514.f_2890.f_8;
	Global_107514.f_2890.f_7 = Global_104530.f_2890.f_7;
	Global_107514.f_2890.f_9 = Global_104530.f_2890.f_9;
	Global_107514.f_2890.f_11 = Global_104530.f_2890.f_11;
	Global_107514.f_2890.f_10 = Global_104530.f_2890.f_10;
	Global_107514.f_2890.f_12 = Global_104530.f_2890.f_12;
	Global_107514.f_2890.f_12.f_1 = { Global_104530.f_2890.f_12.f_1 };
	Global_107514.f_2890.f_12.f_5 = Global_104530.f_2890.f_12.f_5;
	Global_107514.f_2890.f_12.f_6 = Global_104530.f_2890.f_12.f_6;
	Global_107514.f_2890.f_12.f_7 = Global_104530.f_2890.f_12.f_7;
	Global_107514.f_2890.f_12.f_8 = Global_104530.f_2890.f_12.f_8;
	Global_107514.f_2890.f_12.f_9 = { Global_104530.f_2890.f_12.f_9 };
	Global_107514.f_2890.f_12.f_59 = { Global_104530.f_2890.f_12.f_59 };
	Global_107514.f_2890.f_12.f_62 = Global_104530.f_2890.f_12.f_62;
	Global_107514.f_2890.f_12.f_63 = Global_104530.f_2890.f_12.f_63;
	Global_107514.f_2890.f_12.f_64 = Global_104530.f_2890.f_12.f_64;
	Global_107514.f_2890.f_12.f_65 = Global_104530.f_2890.f_12.f_65;
	Global_107514.f_2890.f_12.f_77 = Global_104530.f_2890.f_12.f_77;
	Global_107514.f_2890.f_12.f_66 = Global_104530.f_2890.f_12.f_66;
	Global_107514.f_2890.f_12.f_67 = Global_104530.f_2890.f_12.f_67;
	Global_107514.f_2890.f_12.f_68 = Global_104530.f_2890.f_12.f_68;
	Global_107514.f_2890.f_12.f_69 = Global_104530.f_2890.f_12.f_69;
	Global_107514.f_2890.f_12.f_71 = Global_104530.f_2890.f_12.f_71;
	Global_107514.f_2890.f_12.f_72 = Global_104530.f_2890.f_12.f_72;
	Global_107514.f_2890.f_12.f_73 = Global_104530.f_2890.f_12.f_73;
	Global_107514.f_2890.f_12.f_74 = Global_104530.f_2890.f_12.f_74;
	Global_107514.f_2890.f_12.f_75 = Global_104530.f_2890.f_12.f_75;
	Global_107514.f_2890.f_12.f_76 = Global_104530.f_2890.f_12.f_76;
	Global_107514.f_2980 = Global_104530.f_2980;
	Global_107514.f_2980.f_1 = Global_104530.f_2980.f_1;
	Global_107514.f_2980.f_2 = Global_104530.f_2980.f_2;
	Global_107514.f_2980.f_3 = Global_104530.f_2980.f_3;
}

void func_25(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x19B4
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_113();
	uParam0->f_1 = func_102();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_68(&(uParam0->f_2884), 0);
		func_67(PLAYER::PLAYER_PED_ID());
		func_60(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113969.f_2366.f_539.f_294[iVar1];
		if (iVar1 == func_57())
		{
			func_48(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_101258[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_101258[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_101258[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_101258[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_101258[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_101258[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_101258[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_101258[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_101258[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_101258[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113969.f_2366.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113969.f_2366.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113969.f_20567.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_61340[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113969.f_2366.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113969.f_2366.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113969.f_2366.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113969.f_2366.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113969.f_2366.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113969.f_2366[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_27(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_26(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_26(var uParam0)//Position - 0x283D
{
	*uParam0 = Global_97362;
	uParam0->f_1 = Global_97363;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_27(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x285F
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = func_45(iParam2);
	}
	if (func_42(iParam2, &iVar0, iParam3, iParam5))
	{
		func_28(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
			{
				func_28(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_28(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x28E7
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
	{
		func_30(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_29(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_29(int iParam0)//Position - 0x2927
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_101533.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_30(var uParam0, int iParam1, int iParam2)//Position - 0x2955
{
	func_37(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_33(iParam1, 145, 0);
	uParam0->f_11 = func_32(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_31(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(iParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.3256f, -1523.8713f, 3.262189f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_79084 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_31(int iParam0)//Position - 0x2A31
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[iVar0]))
		{
			if (iParam0 == Global_78179.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0)//Position - 0x2A73
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98844[iVar0]))
		{
			if (Global_98844[iVar0] == iParam0)
			{
				return Global_98854[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_33(int iParam0, bool bParam1, int iParam2)//Position - 0x2AD6
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98844[iVar0]))
		{
			if (Global_98844[iVar0] == iParam0)
			{
				if (bParam1 == 145 || bParam1 == Global_98854[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_34(bParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(bool bParam0, int iParam1)//Position - 0x2B64
{
	struct<82> Var0;
	
	if (func_36(bParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_35(bParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

void func_35(bool bParam0, var uParam1, int iParam2)//Position - 0x2BA6
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (bParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113969.f_9088.f_99.f_58[128] && !Global_113969.f_9088.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113969.f_9088.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113969.f_9088.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_36(bool bParam0)//Position - 0x2E02
{
	return bParam0 < 3;
}

void func_37(int iParam0, var uParam1)//Position - 0x2E0E
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_41(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_40(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_39(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_38(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_38(int iParam0)//Position - 0x30B9
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_39(int iParam0, var uParam1, var uParam2)//Position - 0x3169
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_40(int iParam0)//Position - 0x335C
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_41(var uParam0)//Position - 0x337C
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_42(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x342D
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != 0)
							{
								return 0;
							}
						}
						if (func_43(*uParam1, func_113(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_43(int iParam0, bool bParam1, bool bParam2)//Position - 0x355C
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_44(bParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_113969.f_7232[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x35CA
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_45(int iParam0)//Position - 0x36A3
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(int iParam0)//Position - 0x36E0
{
	if (func_36(iParam0))
	{
		return func_47(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_47(int iParam0)//Position - 0x3705
{
	return Global_2169[iParam0 /*29*/];
}

void func_48(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x3714
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_45(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_56(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_55(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_36(bVar0))
		{
			uParam1->f_59 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_53(161, iParam3))
			{
				uParam1->f_59 = func_49(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_49(753, iParam3);
			}
			uParam1->f_60 = func_49(754, iParam3);
			uParam1->f_61 = func_49(755, iParam3);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_53(161, iParam3))
			{
				uParam1->f_59 = func_49(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_49(753, iParam3);
			}
		}
	}
}

int func_49(int iParam0, int iParam1)//Position - 0x38AE
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_50(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_50(int iParam0, var uParam1)//Position - 0x38DD
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_51(uParam1));
}

int func_51(var uParam0)//Position - 0x38F2
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

int func_52()//Position - 0x3926
{
	return Global_1574926;
}

int func_53(int iParam0, int iParam1)//Position - 0x3932
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_54(int iParam0, var uParam1)//Position - 0x3956
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_51(uParam1));
}

void func_55(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x396B
{
	int iVar0;
	
	iVar0 = func_45(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0) != -1)
				{
					*uParam2 = PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0);
					*uParam3 = PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_56(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x3EB4
{
	int iVar0;
	
	iVar0 = func_45(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_57()//Position - 0x40F6
{
	func_58();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_58()//Position - 0x410F
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_46(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_45(PLAYER::PLAYER_PED_ID());
			if (func_36(iVar0) && (!func_59(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_36(Global_113969.f_2366.f_539.f_4321))
				{
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
				}
				Global_113969.f_2366.f_539.f_4323 = iVar0;
				Global_113969.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != 145)
			{
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113969.f_2366.f_539.f_4321 = 145;
}

bool func_59(int iParam0)//Position - 0x420C
{
	return Global_44042 == iParam0;
}

void func_60(int iParam0, bool bParam1)//Position - 0x421A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = func_45(iParam0);
	if (func_36(bVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_61(iParam0, &(Global_113969.f_2366.f_539.f_298[bVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113969.f_2366.f_539.f_1730[iVar2 /*4*/][bVar0] = HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
					if (Global_113969.f_2366.f_539.f_1730[iVar2 /*4*/][bVar0] == iVar1)
					{
						Global_113969.f_2366.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &iVar3);
			if (bVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
			else if (bVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
			else if (bVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
		}
	}
}

void func_61(int iParam0, var uParam1)//Position - 0x430D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	int iVar73;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_66(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_66(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("WEAPON_UNARMED"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("GADGET_PARACHUTE"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
					Var4.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_64(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_64(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = FILES::GET_NUM_DLC_WEAPONS_SP();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((FILES::GET_DLC_WEAPON_DATA_SP(iVar9, &Var11) && !func_63(Var11.f_1)) && iVar72 < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var11.f_0))
				{
					Var4.f_0 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, false))
					{
						Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
						Var4.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar9))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar9, iVar1, &Var50))
						{
							if (!func_62(Var50.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, Var50.f_3))
								{
									MISC::SET_BIT(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, false))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_62(int iParam0)//Position - 0x4595
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x4636
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return 0;
				break;
			
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return 0;
				break;
			
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return 0;
				break;
			
			case joaat("WEAPON_BULLPUPRIFLE"):
				return 0;
				break;
			
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return 0;
				break;
			
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return 0;
				break;
			
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return 0;
				break;
			
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return 0;
				break;
			
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return 0;
				break;
			
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case joaat("WEAPON_AMRIFLE"):
			case joaat("WEAPON_CROSSBOW"):
			case joaat("WEAPON_HARPOON"):
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
			case joaat("WEAPON_GADGETPISTOL"):
			case joaat("WEAPON_MILITARYRIFLE"):
			case joaat("WEAPON_COMBATSHOTGUN"):
			case joaat("WEAPON_EMPLAUNCHER"):
			case joaat("WEAPON_FERTILIZERCAN"):
			case joaat("WEAPON_STUNGUN_MP"):
			case joaat("WEAPON_METALDETECTOR"):
			case joaat("WEAPON_PRECISIONRIFLE"):
			case joaat("WEAPON_TACTICALRIFLE"):
			case joaat("WEAPON_PISTOLXM3"):
			case joaat("WEAPON_CANDYCANE"):
			case joaat("WEAPON_RAILGUNXM3"):
			case joaat("WEAPON_TECPISTOL"):
			case joaat("WEAPON_BATTLERIFLE"):
			case joaat("WEAPON_SNOWLAUNCHER"):
			case joaat("WEAPON_STUNROD"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_64(int iParam0, int iParam1)//Position - 0x4828
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_XMAS23");
					break;
			}
			break;
		
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
					break;
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_XM3");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_FRN");
					break;
			}
			break;
		
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SMG_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_SMG_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_SMG_CLIP_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				
				case 9:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
				
				case 10:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_MICH");
					break;
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MG_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_SR_SUPP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_VARMOD_XMAS23");
					break;
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
		
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_XMAS23");
					break;
			}
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
		
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		
		case joaat("WEAPON_BAT"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_04");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_05");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_06");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_07");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_08");
					break;
				
				case 9:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_09");
					break;
			}
			break;
		
		case joaat("WEAPON_RPG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_RPG_VARMOD_TVR");
					break;
			}
			break;
		
		case joaat("WEAPON_BATTLERIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BATTLERIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_BATTLERIFLE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		
		case joaat("WEAPON_STUNGUN_MP"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_STUNGUN_VARMOD_BAIL");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_65(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var43))
						{
							if (!func_62(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_65(int iParam0, var* uParam1)//Position - 0x5569
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_66(int iParam0)//Position - 0x55A4
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("SLOT_UNARMED");
			break;
		
		case 1:
			iVar0 = joaat("SLOT_KNIFE");
			break;
		
		case 2:
			iVar0 = joaat("SLOT_NIGHTSTICK");
			break;
		
		case 3:
			iVar0 = joaat("SLOT_HAMMER");
			break;
		
		case 4:
			iVar0 = joaat("SLOT_BAT");
			break;
		
		case 5:
			iVar0 = joaat("SLOT_CROWBAR");
			break;
		
		case 6:
			iVar0 = joaat("SLOT_GOLFCLUB");
			break;
		
		case 7:
			iVar0 = joaat("SLOT_STUNGUN");
			break;
		
		case 8:
			iVar0 = joaat("SLOT_PISTOL");
			break;
		
		case 9:
			iVar0 = joaat("SLOT_COMBATPISTOL");
			break;
		
		case 10:
			iVar0 = joaat("SLOT_APPISTOL");
			break;
		
		case 11:
			iVar0 = joaat("SLOT_MICROSMG");
			break;
		
		case 12:
			iVar0 = joaat("SLOT_SMG");
			break;
		
		case 13:
			iVar0 = joaat("SLOT_ASSAULTRIFLE");
			break;
		
		case 14:
			iVar0 = joaat("SLOT_CARBINERIFLE");
			break;
		
		case 15:
			iVar0 = joaat("SLOT_ADVANCEDRIFLE");
			break;
		
		case 16:
			iVar0 = joaat("SLOT_MG");
			break;
		
		case 17:
			iVar0 = joaat("SLOT_COMBATMG");
			break;
		
		case 18:
			iVar0 = joaat("SLOT_PUMPSHOTGUN");
			break;
		
		case 19:
			iVar0 = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
		
		case 20:
			iVar0 = joaat("SLOT_ASSAULTSHOTGUN");
			break;
		
		case 21:
			iVar0 = joaat("SLOT_SNIPERRIFLE");
			break;
		
		case 22:
			iVar0 = joaat("SLOT_HEAVYSNIPER");
			break;
		
		case 23:
			iVar0 = joaat("SLOT_GRENADELAUNCHER");
			break;
		
		case 24:
			iVar0 = joaat("SLOT_RPG");
			break;
		
		case 25:
			iVar0 = joaat("SLOT_MINIGUN");
			break;
		
		case 26:
			iVar0 = joaat("SLOT_GRENADE");
			break;
		
		case 27:
			iVar0 = joaat("SLOT_STICKYBOMB");
			break;
		
		case 28:
			iVar0 = joaat("SLOT_SMOKEGRENADE");
			break;
		
		case 29:
			iVar0 = joaat("SLOT_MOLOTOV");
			break;
		
		case 30:
			iVar0 = joaat("SLOT_FIREEXTINGUISHER");
			break;
		
		case 31:
			iVar0 = joaat("SLOT_PETROLCAN");
			break;
		
		case 33:
			iVar0 = joaat("SLOT_PARACHUTE");
			break;
		
		case 34:
			iVar0 = joaat("SLOT_DIGISCANNER");
			break;
		
		case 35:
			iVar0 = joaat("SLOT_OBJECT");
			break;
		
		case 36:
			iVar0 = joaat("SLOT_ASSAULTSMG");
			break;
		
		case 37:
			iVar0 = joaat("SLOT_BULLPUPSHOTGUN");
			break;
		
		case 38:
			iVar0 = joaat("SLOT_PISTOL50");
			break;
	}
	return iVar0;
}

void func_67(int iParam0)//Position - 0x5818
{
	bool bVar0;
	
	bVar0 = func_45(iParam0);
	if (func_36(bVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113969.f_2366.f_539.f_294[bVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_68(var uParam0, int iParam1)//Position - 0x5854
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	bool bVar5;
	
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.5645f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.4724f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (BitTest(Global_79638, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_79638, 5))
	{
		*uParam0 = { -745.4462f, 5595.1465f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_79638, 6))
	{
		*uParam0 = { -1675.5215f, -1125.5901f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_79638, 7))
	{
		*uParam0 = { -1631.2192f, -1112.8052f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.6588f, -1715.4669f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.9564f, -1725.1892f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.43646f, 2068.2886f, 113.30017f, -564.9516f, 1884.7025f, 134.04034f, 258.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.41275f, -581.21344f, 2036.2561f, 136.28363f, 9.5f, false, true, 0))
	{
		*uParam0 = { -601.59f, 2099.1973f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.39264f, -477.95844f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.3756f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.8085f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.9323f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.5266f, 2571.3113f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.9304f, 2594.1528f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_72(&iVar0))
		{
			if (func_70(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0))
		{
			bVar5 = func_113();
			if (bVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (bVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.3774f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (bVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.3016f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.71747f, -1326.6299f, 28.2135f, 474.96436f, -1307.9983f, 34.494976f, 12f, false, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.0801f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.54315f, -996.97687f, 24.88307f, 428.29355f, -997.0192f, 28.574581f, 8.5f, false, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_69(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_69(struct<3> Param0, char* sParam3, struct<3> Param4)//Position - 0x5DA3
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param4, sParam3);
		if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_70(int iParam0, var uParam1, var uParam2)//Position - 0x5DE7
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.5278f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.9128f, -1120.9985f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.0281f, 3718.7358f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.8656f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.0806f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.1599f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.4451f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.0536f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.6436f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.0271f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.3027f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.4172f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.3552f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.7391f, -1278.5734f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.3928f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.8022f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.5958f, -1417.6997f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.9523f, -1660.6111f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.2136f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.8136f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.9661f, 3749.7092f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.9628f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.0597f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.1018f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.9321f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.8818f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.8745f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.0531f, -1993.9161f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.0814f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.7089f, 2664.8135f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.5024f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_71(*uParam1, 0f, 0f, 0f, 0);
}

bool func_71(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x6566
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_72(var uParam0)//Position - 0x65AD
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_101())
		{
			*uParam0 = func_78(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 6, -1, 0, 1, -1);
			if (func_77(*uParam0) && !func_73(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_73(int iParam0)//Position - 0x6608
{
	return func_74(iParam0, 0, 1);
}

int func_74(int iParam0, int iParam1, bool bParam2)//Position - 0x6618
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_76() == 0)
		{
			return BitTest(func_49(func_75(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_75(int iParam0)//Position - 0x6678
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12924;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		default:
			break;
	}
	return 14835;
}

int func_76()//Position - 0x6A20
{
	return Global_32948;
}

int func_77(int iParam0)//Position - 0x6A2B
{
	return func_74(iParam0, 5, 1);
}

int func_78(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x6A3B
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (iParam3 == 6 || iParam3 == func_100(iVar0))
		{
			if (!bParam5 || func_99(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_79(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_79(int iParam0, bool bParam1)//Position - 0x6ADD
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.0822f, -1116.5576f, 5.9901f;
			break;
		
		case 3:
			return 1933.1191f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.3335f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.7705f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.6694f, 28.3761f;
			break;
		
		case 8:
			return 1687.8812f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.0487f, 2704.1707f, 18.0873f;
			break;
		
		case 11:
			return 1197.9722f, 2704.2205f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.0454f, 30.8684f;
			break;
		
		case 14:
			return -1199.8092f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.5667f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.9663f, 1055.2869f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.0045f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.5549f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.6853f, 3750.0798f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.0947f, 30.4871f;
			break;
		
		case 25:
			return -1153.9481f, -1425.0186f, 3.9544f;
			break;
		
		case 26:
			return 1322.4547f, -1651.1252f, 51.1885f;
			break;
		
		case 27:
			return -3169.4204f, 1074.7272f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.9788f, 3753.2002f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.5707f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.0264f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.9485f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.2375f, 2688.4626f, 17.6131f;
			break;
		
		case 36:
			return -3165.2307f, 1082.8551f, 19.8438f;
			break;
		
		case 37:
			return 2569.6116f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.1016f, 28.6363f;
			break;
		
		case 39:
			return -1147.3138f, -1992.4344f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.2803f, 30.7871f;
			break;
		
		case 43:
			return 1174.7074f, 2644.4497f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.1127f, 30.296f;
			}
			break;
		
		case 45:
			return func_96(Global_103686);
			break;
		
		case 46:
			if (Global_1845111 != func_95())
			{
				if (func_94(Global_1845111))
				{
					return func_87(2, 2);
				}
				else if (func_86(Global_1845111))
				{
					return func_87(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return func_84(-9.9f, -0.5f, 1f);
			break;
		
		case 48:
			return -1422.1969f, -3015.8027f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.5466f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1964427;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.2125f, -25.361736f;
			break;
		
		case 55:
			return -2194.1226f, 1103.8047f, -24.2451f;
			break;
		
		case 56:
			switch (func_83())
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
					break;
				
				case 156:
					return -1029.1659f, -426.3766f, 72.2069f;
					break;
				
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
					break;
				
				case 158:
					return -1013.7179f, -768.3539f, 69.4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
		
		case 58:
			return func_80();
			break;
		
		case 59:
			return 560f, -405f, -69.6591f;
			break;
		
		case 60:
			return -1299.6909f, -3017.1646f, -48.2612f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_80()//Position - 0x723C
{
	if (!func_82(Global_1949748))
	{
		return Global_1949748;
	}
	switch (func_81())
	{
		case 0:
			return -29.532f, 6435.136f, 31.162f;
		
		case 1:
			return 1705.214f, 4819.167f, 41.75f;
		
		case 2:
			return 1795.522f, 3899.753f, 33.869f;
		
		case 3:
			return 1335.536f, 2758.746f, 51.099f;
		
		case 4:
			return 795.583f, 1210.78f, 338.962f;
		
		case 5:
			return -3192.67f, 1077.205f, 20.594f;
		
		case 6:
			return -789.719f, 5400.921f, 33.915f;
		
		case 7:
			return -24.384f, 3048.167f, 40.703f;
		
		case 8:
			return 2666.786f, 1469.324f, 24.237f;
		
		case 9:
			return -1454.966f, 2667.503f, 3.2f;
		
		case 10:
			return 2340.418f, 3054.188f, 47.888f;
		
		case 11:
			return 1509.183f, -2146.795f, 76.853f;
		
		case 12:
			return 1137.404f, -1358.654f, 34.322f;
		
		case 13:
			return -57.208f, -2658.793f, 5.737f;
		
		case 14:
			return 1905.017f, 565.222f, 175.558f;
		
		case 15:
			return 974.484f, -1718.798f, 30.296f;
		
		case 16:
			return 779.077f, -3266.297f, 5.719f;
		
		case 17:
			return -587.728f, -1637.208f, 19.611f;
		
		case 18:
			return 733.99f, -736.803f, 26.165f;
		
		case 19:
			return -1694.632f, -454.082f, 40.712f;
		
		case 20:
			return -1330.726f, -1163.948f, 4.313f;
		
		case 21:
			return -496.618f, 40.231f, 52.316f;
		
		case 22:
			return 275.527f, 66.509f, 94.108f;
		
		case 23:
			return 260.928f, -763.35f, 30.559f;
		
		case 24:
			return -478.025f, -741.45f, 30.299f;
		
		case 25:
			return 894.94f, 3603.911f, 32.56f;
		
		case 26:
			return -2166.511f, 4289.503f, 48.733f;
		
		case 27:
			return 1465.633f, 6553.67f, 13.771f;
		
		case 28:
			return 1101.032f, -335.172f, 66.944f;
		
		case 29:
			return 149.683f, -1655.674f, 29.028f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_81()//Position - 0x7537
{
	return Global_2652592.f_2671;
}

int func_82(struct<3> Param0)//Position - 0x7546
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_83()//Position - 0x7570
{
	return Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_8;
}

Vector3 func_84(struct<3> Param0)//Position - 0x7588
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_85(), 0f, Param0);
}

Vector3 func_85()//Position - 0x759D
{
	return -880f, -2770f, -50f;
}

int func_86(int iParam0)//Position - 0x75B4
{
	if (iParam0 != func_95())
	{
		if ((BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 0) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 1)) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_87(int iParam0, int iParam1)//Position - 0x760C
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1845111 != func_95())
	{
		if (iParam1 == 3)
		{
			if (func_88(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1845281[Global_1845111 /*883*/].f_268.f_292, 4))
			{
				if (func_88(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (BitTest(Global_1845281[Global_1845111 /*883*/].f_268.f_292, 5))
			{
				if (func_88(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_88(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x76B6
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_93(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_93(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_91(iParam0) };
	}
	else
	{
		Var12 = { func_90(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_89(Var18, -Var0.f_3.f_2) };
	Var18 = { func_89(Var18, Var6.f_3.f_2) };
	*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_89(struct<3> Param0, float fParam3)//Position - 0x774B
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_90(int iParam0)//Position - 0x778F
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_91(int iParam0)//Position - 0x7913
{
	return func_92(iParam0);
}

struct<6> func_92(int iParam0)//Position - 0x7921
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.4084f, -3012.3198f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.0374f, -3012.3184f, -39.998745f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.0634f, -3012.3677f, -39.998753f };
			break;
		
		case 9:
			Var0 = { 1105.6648f, -3012.3345f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.9282f, -3012.6934f, -39.999454f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.9421f, -3011.315f, -37.999454f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.9943f, -3012.8777f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.1519f, -3013.0325f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.9167f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.9218f, -3010.8872f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.6818f, -3009.227f, -39.949997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.4534f, -3008.5105f, -38.199997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.3401f, -3008.6982f, -39.999454f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.3442f, -3009.618f, -37.981716f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.4595f, -3009.7935f, -39.949997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.7828f, -3010.433f, -38.199997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.0251f, -3007.3157f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.1602f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.1749f, -3005.818f, -37.919476f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.5996f, -3000.8472f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.6013f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.4756f, -3008.5076f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.5076f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.5928f, -3008.2698f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_93(int iParam0, var uParam1)//Position - 0x83E9
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_94(int iParam0)//Position - 0x846B
{
	if (iParam0 != func_95())
	{
		if ((BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 3) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 4)) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_95()//Position - 0x84C3
{
	return -1;
}

Vector3 func_96(int iParam0)//Position - 0x84CC
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.0908f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.5149f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.5624f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.1116f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.8364f, -49.4895f;
			break;
		
		case 13:
			return func_85();
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.6643f, -3012.5828f, -79.9999f;
			break;
		
		case 16:
			return -1421.0149f, -3012.5867f, -80f;
			break;
		
		case 17:
			if (func_97() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		case 21:
			return 570f, -415f, -70f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_97()//Position - 0x8738
{
	return func_98(PLAYER::PLAYER_ID());
}

int func_98(int iParam0)//Position - 0x8748
{
	return MISC::GET_BITS_IN_RANGE(Global_2657971[iParam0 /*465*/].f_322.f_3, 28, 31);
}

int func_99(int iParam0)//Position - 0x8765
{
	return func_74(iParam0, 0, 0);
}

int func_100(int iParam0)//Position - 0x8775
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
	}
	return 6;
}

bool func_101()//Position - 0x8AAB
{
	return Global_101585.f_393 > 0;
}

var func_102()//Position - 0x8ABC
{
	var uVar0;
	
	func_112(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_111(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_110(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_105(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_104(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_103(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_103(var uParam0, int iParam1)//Position - 0x8B02
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_104(var uParam0, int iParam1)//Position - 0x8B88
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_105(var uParam0, int iParam1)//Position - 0x8BBB
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_109(*uParam0);
	iVar1 = func_107(*uParam0);
	if (iParam1 < 1 || iParam1 > func_106(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_106(int iParam0, int iParam1)//Position - 0x8C0C
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_107(int iParam0)//Position - 0x8CAE
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_108(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_108(bool bParam0, int iParam1, int iParam2)//Position - 0x8CD0
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_109(var uParam0)//Position - 0x8CE7
{
	return uParam0 & 15;
}

void func_110(var uParam0, int iParam1)//Position - 0x8CF4
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_111(var uParam0, int iParam1)//Position - 0x8D2E
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_112(var uParam0, int iParam1)//Position - 0x8D69
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_113()//Position - 0x8DA5
{
	func_58();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_114(int iParam0)//Position - 0x8DBE
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_116())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(9, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || func_115())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(9, &cVar1);
	}
}

bool func_115()//Position - 0x8E17
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_116()//Position - 0x8E2D
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_117(char* sParam0, int iParam1, int iParam2)//Position - 0x8E43
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_98583))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_98583, 0, 0, false, true, false);
		StringCopy(&Global_98583, "", 64);
	}
	StringCopy(&Global_98583, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_118(0));
}

int func_118(bool bParam0)//Position - 0x8E85
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

struct<2> func_119(int iParam0)//Position - 0x8EAD
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_120(int iParam0, var uParam1)//Position - 0x92FA
{
	switch (iParam0)
	{
		case 0:
			func_121(uParam1, "Abigail1", func_9(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 1:
			func_121(uParam1, "Abigail2", func_9(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 2:
			func_121(uParam1, "Barry1", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 3:
			func_121(uParam1, "Barry2", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 4:
			func_121(uParam1, "Barry3", func_9(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 5:
			func_121(uParam1, "Barry3A", func_9(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 6:
			func_121(uParam1, "Barry3C", func_9(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 7:
			func_121(uParam1, "Barry4", func_9(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_122(iParam0), 0, 0);
			break;
		
		case 8:
			func_121(uParam1, "Dreyfuss1", func_9(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 9:
			func_121(uParam1, "Epsilon1", func_9(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 10:
			func_121(uParam1, "Epsilon2", func_9(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 11:
			func_121(uParam1, "Epsilon3", func_9(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 12:
			func_121(uParam1, "Epsilon4", func_9(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 13:
			func_121(uParam1, "Epsilon5", func_9(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 14:
			func_121(uParam1, "Epsilon6", func_9(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 15:
			func_121(uParam1, "Epsilon7", func_9(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 16:
			func_121(uParam1, "Epsilon8", func_9(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 17:
			func_121(uParam1, "Extreme1", func_9(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 18:
			func_121(uParam1, "Extreme2", func_9(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 19:
			func_121(uParam1, "Extreme3", func_9(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 20:
			func_121(uParam1, "Extreme4", func_9(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 21:
			func_121(uParam1, "Fanatic1", func_9(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_122(iParam0), 1, 0);
			break;
		
		case 22:
			func_121(uParam1, "Fanatic2", func_9(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_122(iParam0), 1, 0);
			break;
		
		case 23:
			func_121(uParam1, "Fanatic3", func_9(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_122(iParam0), 0, 1);
			break;
		
		case 24:
			func_121(uParam1, "Hao1", func_9(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_122(iParam0), 0, 1);
			break;
		
		case 25:
			func_121(uParam1, "Hunting1", func_9(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 26:
			func_121(uParam1, "Hunting2", func_9(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 27:
			func_121(uParam1, "Josh1", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 28:
			func_121(uParam1, "Josh2", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 29:
			func_121(uParam1, "Josh3", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 30:
			func_121(uParam1, "Josh4", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 31:
			func_121(uParam1, "Maude1", func_9(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 32:
			func_121(uParam1, "Minute1", func_9(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 33:
			func_121(uParam1, "Minute2", func_9(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 34:
			func_121(uParam1, "Minute3", func_9(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 35:
			func_121(uParam1, "MrsPhilips1", func_9(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 36:
			func_121(uParam1, "MrsPhilips2", func_9(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 37:
			func_121(uParam1, "Nigel1", func_9(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 38:
			func_121(uParam1, "Nigel1A", func_9(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 39:
			func_121(uParam1, "Nigel1B", func_9(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
		
		case 40:
			func_121(uParam1, "Nigel1C", func_9(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
		
		case 41:
			func_121(uParam1, "Nigel1D", func_9(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
		
		case 42:
			func_121(uParam1, "Nigel2", func_9(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 43:
			func_121(uParam1, "Nigel3", func_9(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 44:
			func_121(uParam1, "Omega1", func_9(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 45:
			func_121(uParam1, "Omega2", func_9(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 46:
			func_121(uParam1, "Paparazzo1", func_9(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 47:
			func_121(uParam1, "Paparazzo2", func_9(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 48:
			func_121(uParam1, "Paparazzo3", func_9(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 49:
			func_121(uParam1, "Paparazzo3A", func_9(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 50:
			func_121(uParam1, "Paparazzo3B", func_9(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 51:
			func_121(uParam1, "Paparazzo4", func_9(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 52:
			func_121(uParam1, "Rampage1", func_9(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 54:
			func_121(uParam1, "Rampage3", func_9(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 55:
			func_121(uParam1, "Rampage4", func_9(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 56:
			func_121(uParam1, "Rampage5", func_9(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 53:
			func_121(uParam1, "Rampage2", func_9(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 57:
			func_121(uParam1, "TheLastOne", func_9(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 58:
			func_121(uParam1, "Tonya1", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 59:
			func_121(uParam1, "Tonya2", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 60:
			func_121(uParam1, "Tonya3", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 61:
			func_121(uParam1, "Tonya4", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 62:
			func_121(uParam1, "Tonya5", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_121(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0xA541
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_122(int iParam0)//Position - 0xA5D2
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_123(var* uParam0)//Position - 0xA918
{
	int iVar0;
	
	if (func_154(&(uParam0->f_1)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_9)))
		{
			func_143(1);
			func_141(uParam0, 1, func_142(*uParam0));
		}
		if (uParam0->f_27)
		{
			if (func_140(*uParam0))
			{
				while (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					func_158();
					SYSTEM::WAIT(0);
				}
			}
		}
		func_124(*uParam0);
		iVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(uParam0->f_1), uParam0, 61, 62500);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_300("Initial cutscene loaded and passing to RC mission.");
			CUTSCENE::SET_SCRIPT_CAN_START_CUTSCENE(iVar0);
		}
		else
		{
			func_300("Initial cutscene wasn't loaded in time to pass to RC mission.");
			CUTSCENE::REMOVE_CUTSCENE();
		}
		return 1;
	}
	return 0;
}

void func_124(int iParam0)//Position - 0xA9BD
{
	struct<2> Var0;
	
	func_139();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, false);
	}
	if (func_138(iParam0))
	{
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false);
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
	HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	HUD::CLEAR_ADDITIONAL_TEXT(3, true);
	HUD::CLEAR_ADDITIONAL_TEXT(2, true);
	if (Global_45250 == 1)
	{
		if (func_136(PLAYER::PLAYER_PED_ID()))
		{
			func_127(PLAYER::PLAYER_PED_ID());
		}
	}
	if (!func_180())
	{
		if (iParam0 < 63)
		{
			func_125(iParam0);
			Var0 = { func_9(iParam0) };
			HUD::SET_MISSION_NAME(true, &Var0);
		}
	}
}

void func_125(int iParam0)//Position - 0xAA58
{
	if (iParam0 < 63)
	{
		func_126();
		Global_79645 = iParam0;
		Global_79644 = 0;
		Global_79647 = 7;
	}
}

void func_126()//Position - 0xAA7E
{
	if (Global_79644 != 6)
	{
	}
	if (Global_79649)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_79649 = 0;
		Global_23831.f_9116 = 0;
	}
	Global_79644 = 6;
	Global_79646 = -1;
	Global_79645 = -1;
}

void func_127(int iParam0)//Position - 0xAAB6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_135(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_45036[iVar0 /*5*/];
		func_130(1, iVar1, 1);
		return;
	}
	iVar2 = func_129(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_128(iVar2);
}

void func_128(int iParam0)//Position - 0xAB0F
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_45005[iParam0 /*6*/].f_1 == 0)
	{
		if (Global_45005[iParam0 /*6*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_45248 = 0;
		}
	}
	Global_45005[iParam0 /*6*/] = 13;
	Global_45005[iParam0 /*6*/].f_1 = 0;
	Global_45005[iParam0 /*6*/].f_2 = 0;
	Global_45005[iParam0 /*6*/].f_3 = 0;
	Global_45005[iParam0 /*6*/].f_4 = 0;
	Global_45003 = (Global_45003 - 1);
	if (Global_45003 < 0)
	{
		Global_45003 = 0;
	}
}

int func_129(int iParam0)//Position - 0xAB92
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_45005[iVar0 /*6*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_130(int iParam0, int iParam1, int iParam2)//Position - 0xABC3
{
	func_131(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xABD8
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_133(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_132();
	if (iVar0 == -1)
	{
		return;
	}
	Global_45117[iVar0 /*6*/] = iParam0;
	Global_45117[iVar0 /*6*/].f_1 = iParam1;
	Global_45117[iVar0 /*6*/].f_2 = iParam2;
	Global_45117[iVar0 /*6*/].f_3 = iParam3;
	Global_45117[iVar0 /*6*/].f_4 = iParam4;
	Global_45117[iVar0 /*6*/].f_5 = iParam5;
}

int func_132()//Position - 0xAC5A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_45117[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_133(int iParam0, int iParam1, int iParam2)//Position - 0xAC8B
{
	if (func_134(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_134(int iParam0, int iParam1, int iParam2)//Position - 0xACA6
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_45117[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_45117[iVar0 /*6*/])
			{
				if (iParam1 == Global_45117[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_135(int iParam0)//Position - 0xACF2
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_45036[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_45036[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_136(int iParam0)//Position - 0xAD3B
{
	if (func_137(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_137(int iParam0)//Position - 0xAD5B
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_138(int iParam0)//Position - 0xAD7C
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return 0;
			break;
	}
	return 1;
}

void func_139()//Position - 0xADCF
{
	if (Global_9605[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9605[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9605[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9605[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9605[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9605[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_8800, 25);
	MISC::SET_BIT(&Global_8801, 11);
}

int func_140(int iParam0)//Position - 0xAE4C
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return 0;
			break;
	}
	return 1;
}

void func_141(var uParam0, bool bParam1, bool bParam2)//Position - 0xAE9F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_137(uParam0->f_28[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_28[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_137(uParam0->f_35[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_35[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_137(uParam0->f_41[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_41[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), bParam1);
		if (bParam2)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		}
	}
}

int func_142(int iParam0)//Position - 0xAF94
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 0;
			break;
	}
	return 1;
}

void func_143(bool bParam0)//Position - 0xAFFF
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		if (bParam0)
		{
		}
		PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 16);
		PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 32);
	}
	func_144(1, 1, 0, 0, 0, 0, 0);
}

void func_144(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xB03E
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_153(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_152())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_151(1, bParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_153(0);
		HUD::THEFEED_RESUME();
		Global_64172 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_151(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_149(PLAYER::PLAYER_ID())) && !func_146(PLAYER::PLAYER_ID(), 0)) && !func_145()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_149(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_79387 = 0;
	}
}

bool func_145()//Position - 0xB18B
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

bool func_146(int iParam0, int iParam1)//Position - 0xB1A5
{
	bool bVar0;
	
	if (!func_148(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_147(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_147(int iParam0, bool bParam1)//Position - 0xB1FE
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_52();
	}
	if (Global_1575063[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_148(var uParam0)//Position - 0xB23F
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_149(int iParam0)//Position - 0xB261
{
	if (func_146(iParam0, 0))
	{
		return 1;
	}
	if (func_150())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_150()//Position - 0xB2A0
{
	return BitTest(Global_2621446, 3);
}

int func_151(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0xB2AE
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && uParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_152()//Position - 0xB2E1
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_153(int iParam0)//Position - 0xB308
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 13);
	}
}

int func_154(char* sParam0)//Position - 0xB32B
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		SCRIPT::REQUEST_SCRIPT(sParam0);
		while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
		{
			SCRIPT::REQUEST_SCRIPT(sParam0);
			SYSTEM::WAIT(0);
		}
		return 1;
	}
	func_300("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_155()//Position - 0xB368
{
	Global_21152 = 0;
	func_156();
}

void func_156()//Position - 0xB378
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}
}

int func_157()//Position - 0xB3CF
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_158()//Position - 0xB3F1
{
	func_164(0);
	func_163();
	func_159();
}

void func_159()//Position - 0xB406
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_160(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1)
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
		}
	}
}

int func_160(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xB45E
{
	func_162(bParam5, bParam6);
	func_161(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_30) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_30 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_161(int iParam0)//Position - 0xB4B5
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

void func_162(bool bParam0, bool bParam1)//Position - 0xB4E1
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 138 /*INPUT_VEH_PUSHBIKE_FRONT_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 136 /*INPUT_VEH_PUSHBIKE_PEDAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 107 /*INPUT_VEH_FLY_ROLL_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 110 /*INPUT_VEH_FLY_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 87 /*INPUT_VEH_FLY_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 88 /*INPUT_VEH_FLY_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 113 /*INPUT_VEH_FLY_UNDERCARRIAGE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 116 /*INPUT_VEH_FLY_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 117 /*INPUT_VEH_FLY_SELECT_TARGET_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 118 /*INPUT_VEH_FLY_SELECT_TARGET_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 119 /*INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 352 /*INPUT_VEH_FLY_BOOST*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 131 /*INPUT_VEH_SUB_ASCEND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 132 /*INPUT_VEH_SUB_DESCEND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 123 /*INPUT_VEH_SUB_TURN_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 126 /*INPUT_VEH_SUB_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 129 /*INPUT_VEH_SUB_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 130 /*INPUT_VEH_SUB_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 133 /*INPUT_VEH_SUB_TURN_HARD_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 134 /*INPUT_VEH_SUB_TURN_HARD_RIGHT*/, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
}

void func_163()//Position - 0xB632
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
}

void func_164(int iParam0)//Position - 0xB683
{
	if (func_169())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_168(0))
		{
			func_165(iParam0);
		}
		MISC::SET_BIT(&Global_8801, 2);
	}
}

void func_165(int iParam0)//Position - 0xB6B6
{
	if (func_169())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_167())
		{
			func_166(1, 1);
		}
		else
		{
			func_166(0, 0);
		}
	}
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8801, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22286 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 30);
	}
	if (!func_152())
	{
		Global_20930.f_1 = 3;
	}
}

void func_166(bool bParam0, bool bParam1)//Position - 0xB740
{
	if (bParam0)
	{
		if (func_168(0))
		{
			Global_21145 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20867);
			}
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
	else if (Global_21145 == 1)
	{
		Global_21145 = 0;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20867);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
}

bool func_167()//Position - 0xB7B4
{
	return BitTest(Global_1956920, 5);
}

int func_168(int iParam0)//Position - 0xB7C2
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_169()//Position - 0xB819
{
	return BitTest(Global_1956920, 19);
}

int func_170(int iParam0)//Position - 0xB828
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_171(int iParam0)//Position - 0xB869
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_178();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_173(&(Global_113056[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_172(iParam0);
	return 1;
}

void func_172(int iParam0)//Position - 0xB8AE
{
	Global_113056[iParam0 /*10*/].f_4 = 1;
	Global_113056[iParam0 /*10*/].f_5 = 0;
	Global_113056[iParam0 /*10*/].f_6 = 0;
	Global_113056[iParam0 /*10*/] = 0;
}

int func_173(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xB8E0
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98991.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_177(0))
		{
			return 0;
		}
		Global_44006++;
		*uParam0 = Global_44006;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23692.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_44042 = iParam2;
		Global_44004 = *uParam0;
		Global_44005 = iParam4;
		Global_44003 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_44003 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_44003)
			{
				if (Global_44009[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_44004 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_175(iParam2))
		{
			return 0;
		}
		if (Global_44003 == 8)
		{
			return 0;
		}
		Global_44006++;
		*uParam0 = Global_44006;
		Global_44009[Global_44003 /*4*/] = Global_44006;
		Global_44009[Global_44003 /*4*/].f_1 = iParam1;
		Global_44009[Global_44003 /*4*/].f_2 = iParam2;
		Global_44009[Global_44003 /*4*/].f_3 = 0;
		Global_44003++;
		if (iParam4 != 0)
		{
			func_174(uParam0, iParam4);
		}
	}
	return 2;
}

void func_174(var uParam0, int iParam1)//Position - 0xBA17
{
	int iVar0;
	
	if (Global_44003 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_44003)
	{
		if (Global_44009[iVar0 /*4*/] == *uParam0)
		{
			Global_44009[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_175(int iParam0)//Position - 0xBA66
{
	return func_176(iParam0, Global_44042);
}

int func_176(int iParam0, int iParam1)//Position - 0xBA77
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_177(int iParam0)//Position - 0xBC58
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_175(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_178()//Position - 0xBC7A
{
	return func_179(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
}

int func_179(char* sParam0, int iParam1)//Position - 0xBC8B
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = MISC::GET_HASH_KEY(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_120(iVar0, &sVar1);
		if (MISC::GET_HASH_KEY(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

int func_180()//Position - 0xBCD4
{
	if (Global_101533 == 10 || Global_101533 == 9)
	{
		return 1;
	}
	return 0;
}

int func_181()//Position - 0xBCF8
{
	if (func_184(2))
	{
		if (func_183(PLAYER::PLAYER_PED_ID(), -1459.68f, 485.26f, 116.22f, 1) < 6f && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_300("Special launching Dreyfuss1");
				return 1;
			}
			else if ((!func_182(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) && func_137(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && func_160(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1f, 1, 1056964608, 0, 1, 0))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
		}
	}
	return 0;
}

int func_182(int iParam0, int iParam1)//Position - 0xBD99
{
	if (func_136(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

float func_183(int iParam0, struct<3> Param1, bool bParam4)//Position - 0xBDCC
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

int func_184(int iParam0)//Position - 0xBE06
{
	bool bVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				bVar0 = func_113();
				if (!func_36(bVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_192()) || Global_113016) || Global_32951) || func_191()) || func_190(8, -1)) || func_101()) || func_189()) || func_188()) || func_187()) || Global_113969.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_192()) || Global_32951) || func_191()) || func_190(8, -1)) || func_188()) || func_101()) || func_189()) || func_187()) || Global_113969.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_192()) || Global_113016) || Global_32951) || func_191()) || func_190(8, -1)) || func_188()) || func_101()) || func_189()) || func_187()) || Global_113969.f_7691.f_919[bVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_192()) || Global_113016) || Global_32951) || func_191()) || func_190(8, -1)) || func_101()) || func_189()) || func_187()) || Global_113969.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_192() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_190(8, -1)) || func_187()) || func_186()) || Global_113969.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_190(8, -1) || func_101()) || func_189()) || func_186()) || func_185())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_192()) || Global_32951) || func_191()) || func_190(8, -1)) || func_189()) || func_188()) || func_187()) || Global_113969.f_7691.f_919[bVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_192()) || func_189()) || Global_113016) || Global_32951) || func_191()) || Global_45250) || func_190(8, -1)) || func_188()) || func_186()) || func_187()) || Global_113969.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_192()) || Global_113016) || Global_32951) || func_191()) || func_190(8, -1)) || func_188()) || func_186()) || func_101()) || func_189()) || func_187())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_185()//Position - 0xC524
{
	return Global_101572.f_1;
}

int func_186()//Position - 0xC532
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_187()//Position - 0xC555
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_188()//Position - 0xC56F
{
	if (Global_79650)
	{
		return 1;
	}
	else if (Global_64160 && !Global_64166)
	{
		return 1;
	}
	return 0;
}

bool func_189()//Position - 0xC599
{
	return Global_101585.f_394 > 0;
}

var func_190(int iParam0, int iParam1)//Position - 0xC5AA
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

var func_191()//Position - 0xC5E2
{
	return Global_1575083;
}

int func_192()//Position - 0xC5EE
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_193(int iParam0, int iParam1)//Position - 0xC60A
{
	switch (iParam0->f_16)
	{
		case 0:
			if (*iParam0 == 12)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1826.6306f, 4699.115f, 35.38089f, 1812.8776f, 4710.457f, 42.053535f, 23.75f, false, true, 0))
				{
					if (func_137(iParam0->f_28[0]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0->f_28[0], true), true) < 3f)
						{
							if (func_184(2))
							{
								if (func_197(iParam0->f_27))
								{
									func_196(iParam0->f_27, *iParam0);
									func_300("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return 1;
								}
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else if (func_137(iParam0->f_28[0]))
				{
					if (func_195(iParam0))
					{
						if (func_184(2))
						{
							if (func_197(iParam0->f_27))
							{
								func_196(iParam0->f_27, *iParam0);
								return 1;
							}
						}
					}
				}
				else
				{
					return 0;
				}
			}
			else if (*iParam0 == 21)
			{
				if ((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1895.788f, -434.01923f, 40.301258f, -1883.0376f, -444.08112f, 50.24509f, 8.5f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1883.5764f, -443.64337f, 36.405807f, -1874.8258f, -448.0797f, 49.15162f, 8.5f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1876.3427f, -446.2214f, 35.64637f, -1866.9519f, -456.56006f, 49.044197f, 8.5f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1882.9973f, -438.99216f, 44.172462f, -1874.0793f, -443.34204f, 48.691788f, 0.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1878.8223f, -441.7655f, 44.917503f, -1877.9409f, -439.9522f, 47.289818f, 1.25f, false, true, 0))
				{
					if (func_137(iParam0->f_28[0]))
					{
						if (func_195(iParam0))
						{
							if (func_184(2))
							{
								if (func_197(iParam0->f_27))
								{
									func_196(iParam0->f_27, *iParam0);
									return 1;
								}
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (*iParam0 == 22)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 837.07306f, 1261.0862f, 366.15918f, 780.83826f, 1260.8286f, 351.405f, 17.75f, false, true, 0))
				{
					if (func_137(iParam0->f_28[0]))
					{
						if (func_195(iParam0))
						{
							if (func_184(2))
							{
								if (func_197(iParam0->f_27))
								{
									func_196(iParam0->f_27, *iParam0);
									return 1;
								}
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (func_137(iParam0->f_28[0]))
			{
				if (func_195(iParam0))
				{
					if (func_184(2))
					{
						if (func_197(iParam0->f_27))
						{
							func_196(iParam0->f_27, *iParam0);
							return 1;
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_137(iParam0->f_35[0]))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_35[0], false))
				{
					if (func_184(3))
					{
						func_196(iParam0->f_27, *iParam0);
						return 1;
					}
				}
				else if (iParam1 == 1)
				{
					func_194();
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_35[0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35[0], false))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0->f_35[0], true), true) < iParam0->f_15)
					{
						if (func_184(2))
						{
							if (func_197(iParam0->f_27))
							{
								func_196(iParam0->f_27, *iParam0);
								return 1;
							}
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), iParam0->f_17[0 /*3*/], true) < iParam0->f_15)
			{
				if (func_184(2))
				{
					if (func_197(iParam0->f_27))
					{
						func_196(iParam0->f_27, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), iParam0->f_17[0 /*3*/], iParam0->f_17[1 /*3*/], false, true, 0))
			{
				if (func_184(2))
				{
					if (func_197(iParam0->f_27))
					{
						func_196(iParam0->f_27, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 5:
			if (*iParam0 == 6)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (func_137(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("towtruck")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("towtruck2")))
						{
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iParam0->f_35[0]))
							{
								if (func_184(3))
								{
									return 1;
								}
							}
						}
						else if ((VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("cargobob")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("cargobob2"))) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("cargobob3")))
						{
							if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iParam0->f_35[0]))
							{
								if (func_184(3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
			else if (*iParam0 == 10)
			{
				if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) >= 2f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 245.88849f, 371.9034f, 103.98843f, 241.58984f, 359.64575f, 107.34612f, 1.25f, false, true, 0))
					{
						if (func_184(2))
						{
							if (func_197(iParam0->f_27))
							{
								func_196(iParam0->f_27, *iParam0);
								func_300("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*iParam0 == 46)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -164.20456f, 277.48663f, 91.553215f, -153.59996f, 277.40607f, 97.338135f, 10f, false, true, 0))
				{
					return 0;
				}
			}
			else if (*iParam0 == 31)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2728.9482f, 4143.44f, 42.292946f, 2722.2134f, 4144.5215f, 45.431824f, 10f, false, true, 0))
				{
					if (func_184(2))
					{
						if (func_197(1))
						{
							func_196(1, *iParam0);
							func_300("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*iParam0 == 39)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -992.49945f, 358.74545f, 96.373505f, -1021.9401f, 361.88876f, 65.36148f, 30f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -983.5426f, 369.11035f, 68.460175f, -1028.5663f, 395.46133f, 94.57245f, 15f, false, true, 0))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -983.875f, 346.75565f, 68.02096f, -1021.4514f, 336.34583f, 93.18714f, 14.5f, false, true, 0))
						{
							if (func_184(2))
							{
								if (func_197(iParam0->f_27))
								{
									func_196(iParam0->f_27, *iParam0);
									func_300("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), iParam0->f_17[0 /*3*/], iParam0->f_17[1 /*3*/], iParam0->f_24, false, true, 0))
			{
				if (*iParam0 == 45)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2338.6965f, 2597.0374f, 45.39052f, 2324.0034f, 2597.185f, 47.749607f, 8.5f, false, true, 0))
					{
						return 0;
					}
				}
				if (func_184(2))
				{
					if (func_197(iParam0->f_27))
					{
						func_196(iParam0->f_27, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

void func_194()//Position - 0xCDED
{
	func_27(&(Global_104530.f_2890), &Global_104530, 0, 1, 1, 0);
}

int func_195(var uParam0)//Position - 0xCE08
{
	float fVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], true), true) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], true), true) < uParam0->f_15)
	{
		return 1;
	}
	return 0;
}

void func_196(int iParam0, int iParam1)//Position - 0xCE96
{
	if (iParam0 == 1)
	{
		if (!func_140(iParam1))
		{
			return;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			func_300("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				func_300("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				VEHICLE::SET_VEHICLE_ENGINE_ON(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, true, false);
			}
			func_158();
		}
	}
}

int func_197(bool bParam0)//Position - 0xCEFA
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (func_198(iVar0))
				{
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					{
						if ((!ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0) && !ENTITY::IS_ENTITY_IN_AIR(iVar0)) && ENTITY::GET_ENTITY_SPEED(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!ENTITY::IS_ENTITY_IN_AIR(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_198(int iParam0)//Position - 0xCF91
{
	if (func_137(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_199(int iParam0, struct<3> Param1, char[4] cParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, float fParam9)//Position - 0xCFBB
{
	var uVar0;
	
	if ((((func_137(PLAYER::PLAYER_PED_ID()) && func_137(iParam0->f_28[0])) && !func_157()) && (MISC::GET_GAME_TIMER() - iParam0->f_60) > iParam8) && func_183(PLAYER::PLAYER_PED_ID(), Param1, 1) < fParam9)
	{
		uVar0 = 16;
		func_202(&uVar0, iParam6, iParam0->f_28[0], sParam7, 0, 1);
		func_200(&uVar0, cParam4, sParam5, 7, 0, 0);
		iParam0->f_60 = MISC::GET_GAME_TIMER();
		return 1;
	}
	return 0;
}

void func_200(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xD043
{
	func_201(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	MISC::SET_BIT(&Global_21152, 0);
	Global_22289 = iParam3;
	StringCopy(&Global_22276, sParam2, 24);
}

void func_201(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xD07E
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;
	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}
}

void func_202(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xD0D4
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

void func_203(int iParam0, char* sParam1, struct<3> Param2)//Position - 0xD16F
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (Global_44042 == 17)
			{
				if (*iParam0 != -1)
				{
					func_208(iParam0);
				}
			}
			else if (func_207())
			{
				if (*iParam0 != -1)
				{
					func_208(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_183(PLAYER::PLAYER_PED_ID(), Param2, 1) <= 100f)
				{
					func_206(iParam0, 1);
				}
			}
			else
			{
				switch (func_205(*iParam0))
				{
					case 1:
						if (MISC::ARE_STRINGS_EQUAL(sParam1, "JOSH_1_INT_CONCAT"))
						{
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(sParam1, 14, 8);
						}
						else
						{
							CUTSCENE::REQUEST_CUTSCENE(sParam1, 8);
						}
						STREAMING::SET_SRL_FORCE_PRESTREAM(2);
						func_204(*iParam0, 1);
						break;
					
					case 2:
						CUTSCENE::STOP_CUTSCENE(false);
						CUTSCENE::REMOVE_CUTSCENE();
						STREAMING::SET_SRL_FORCE_PRESTREAM(0);
						func_204(*iParam0, 0);
						break;
				}
				if (func_183(PLAYER::PLAYER_PED_ID(), Param2, 1) > 120f)
				{
					func_208(iParam0);
				}
			}
		}
	}
}

void func_204(int iParam0, bool bParam1)//Position - 0xD260
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_79385 == iParam0)
		{
			Global_79386 = iParam0;
		}
	}
	else if (Global_79386 == iParam0)
	{
		Global_79386 = -1;
	}
}

int func_205(int iParam0)//Position - 0xD29C
{
	if (Global_79385 == iParam0)
	{
		if (Global_79386 == -1)
		{
			if (Global_79384 < MISC::GET_FRAME_COUNT())
			{
				return 1;
			}
		}
	}
	else if (Global_79386 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_206(int iParam0, int iParam1)//Position - 0xD2D5
{
	bool bVar0;
	int iVar1;
	
	if (Global_79382 < 5)
	{
		Global_79371[Global_79382 /*2*/] = 0;
		Global_79371[Global_79382 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_79382)
			{
				if (Global_79371[iVar1 /*2*/] == Global_79371[Global_79382 /*2*/])
				{
					Global_79371[Global_79382 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_79371[Global_79382 /*2*/];
		Global_79382++;
		Global_79383 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

bool func_207()//Position - 0xD373
{
	return Global_98822;
}

void func_208(int iParam0)//Position - 0xD37F
{
	CUTSCENE::STOP_CUTSCENE(false);
	CUTSCENE::REMOVE_CUTSCENE();
	func_209(iParam0);
}

void func_209(int iParam0)//Position - 0xD396
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_79386 == *iParam0)
	{
		func_204(*iParam0, 0);
	}
	if (Global_79385 == *iParam0)
	{
		Global_79385 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_79382)
	{
		if (Global_79371[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_79382 - 2))
	{
		Global_79371[iVar2 /*2*/] = Global_79371[iVar2 + 1 /*2*/];
		Global_79371[iVar2 /*2*/].f_1 = Global_79371[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_79371[(Global_79382 - 1) /*2*/] = -1;
	Global_79371[(Global_79382 - 1) /*2*/].f_1 = 3;
	Global_79382 = (Global_79382 - 1);
	Global_79383 = 1;
	Global_79384 = MISC::GET_FRAME_COUNT();
	*iParam0 = -1;
}

void func_210(int iParam0)//Position - 0xD47E
{
	if (iParam0 == -1)
	{
		iParam0 = func_178();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_113056[iParam0 /*10*/].f_1 = 1;
}

int func_211(var uParam0, bool bParam1)//Position - 0xD4A6
{
	struct<27> Var0;
	
	if (Global_79389)
	{
		func_300("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_120(*uParam0, &Var0);
	if ((func_248(*uParam0) || func_246(*uParam0)) || Global_79635 == 1)
	{
		return 1;
	}
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		func_300("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_242(*uParam0))
	{
		if (*uParam0 == 19)
		{
			func_241(uParam0->f_28[0]);
		}
		func_300("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1)
	{
		if (!func_221(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_221(uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!func_219(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				func_218(uParam0);
			}
			else
			{
				func_216(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!func_219(uParam0, 0, 1))
		{
			func_216(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!func_219(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!func_219(uParam0, 1, 0))
		{
			func_216(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!func_219(uParam0, 0, 0))
		{
			func_216(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (func_137(uParam0->f_35[0]))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, false, true, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1 /*EXP_TAG_DONTCARE*/, uParam0->f_17[0 /*3*/], 8f))
		{
			func_300("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!BitTest(Var0.f_26, func_113()))
		{
			func_300("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (func_215(&(uParam0->f_48)) && bParam1)
	{
		func_212(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}

void func_212(int iParam0, var uParam1, int iParam2)//Position - 0xD716
{
	int iVar0;
	int iVar1;
	
	if (func_137(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_215(uParam1))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
						if (iParam2 != 21)
						{
							if (func_71(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								TASK::TASK_PLAY_ANIM(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0f, false, false, false);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								if (func_214(uParam1))
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0f, 2, 0);
								}
								else
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0f, 2, 0);
								}
								TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0f, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(iVar0);
								TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							}
						}
						else
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0f, 2, 3);
						}
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 2:
				if (!func_214(uParam1) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_213(iParam2) && !PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 25f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_214(uParam1) && uParam1->f_4 == 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				if (func_71(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					TASK::TASK_PLAY_ANIM(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0f, false, false, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0f, 2, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				uParam1->f_4 = 1;
				if (func_213(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_213(iParam2) || PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 10f))
				{
					if (func_71(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						TASK::TASK_PLAY_ANIM(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0f, false, false, false);
					}
					else
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0f, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}

int func_213(int iParam0)//Position - 0xDA6E
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_214(var uParam0)//Position - 0xDA8E
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_215(var uParam0)//Position - 0xDAA6
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(*uParam0) || MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

void func_216(var uParam0)//Position - 0xDACB
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 52)
	{
		func_217(&(uParam0->f_41[1]));
		func_217(&(uParam0->f_41[2]));
	}
	if (func_137(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_136(uParam0->f_28[iVar0]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_28[iVar0], false))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_28[iVar0], true, false);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], false);
				}
				PED::SET_PED_KEEP_TASK(uParam0->f_28[iVar0], true);
				if (*uParam0 == 34)
				{
					if (func_137(uParam0->f_41[0]))
					{
						ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], true, false);
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], false);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_241(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						STREAMING::REQUEST_ANIM_DICT("rcmcollect_paperleadinout@");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmcollect_paperleadinout@"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_PLAY_ANIM(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0f, false, false, false);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						break;
					
					case 0:
					case 1:
						STREAMING::REQUEST_ANIM_DICT("rcmabigail");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmabigail"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_PLAY_ANIM(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0f, false, false, false);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						break;
					
					case 32:
						STREAMING::REQUEST_ANIM_DICT("rcmminute1");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmminute1"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						if (iVar0 == 0)
						{
							TASK::TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0f, false, false, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0f, false, false, false);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						break;
					
					case 24:
						STREAMING::REQUEST_ANIM_DICT("special_ped@hao@base");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("special_ped@hao@base"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_PLAY_ANIM(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0f, false, false, false);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						break;
					
					default:
						TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_28[iVar0]);
						TASK::TASK_SMART_FLEE_PED(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_217(int* iParam0)//Position - 0xDDCF
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		OBJECT::DELETE_OBJECT(iParam0);
	}
}

void func_218(var uParam0)//Position - 0xDDFA
{
	int iVar0;
	
	if (func_137(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_136(uParam0->f_28[iVar0]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_28[iVar0], 1, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[iVar0], false);
				PED::SET_PED_KEEP_TASK(uParam0->f_28[iVar0], true);
				TASK::TASK_COMBAT_PED(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_219(var uParam0, bool bParam1, bool bParam2)//Position - 0xDE7A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_35 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (func_136(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[iVar0]))
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_35[iVar0], false))
				{
					func_300("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_35[iVar0], false))
				{
					func_300("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_35[iVar0], PLAYER::PLAYER_PED_ID(), false))
				{
					func_300("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (ENTITY::GET_ENTITY_HEALTH(uParam0->f_35[iVar0]) < 850)
				{
					func_300("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[iVar0], PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f)
						{
							func_300("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (func_198(iVar2))
						{
							if (ENTITY::GET_ENTITY_MODEL(iVar2) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar2) == joaat("towtruck2"))
							{
								if (func_198(uParam0->f_35[iVar0]))
								{
									if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar2, uParam0->f_35[iVar0]))
									{
										func_300("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (func_198(iVar3))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[iVar0], iVar3) && ENTITY::GET_ENTITY_SPEED(iVar3) > 6f)
							{
								func_300("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_220(PLAYER::PLAYER_PED_ID(), uParam0->f_35[iVar0]))
							{
								func_300("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return 0;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_220(int iParam0, int iParam1)//Position - 0xE038
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_221(var uParam0, bool bParam1, int iParam2)//Position - 0xE068
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_28 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*uParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*uParam0 == 30)
	{
		iParam2 = 1;
	}
	if (func_136(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_28[iVar0]))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_216(uParam0);
							}
							else
							{
								func_218(uParam0);
							}
							if (func_157())
							{
								func_155();
							}
							func_300("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_28[iVar0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_28[iVar0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_216(uParam0);
						}
						else
						{
							func_218(uParam0);
						}
						func_300("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (PED::IS_PED_RAGDOLL(uParam0->f_28[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
						{
							if (iParam2 == 0)
							{
								func_216(uParam0);
							}
							else
							{
								func_218(uParam0);
							}
							func_300("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_240(*uParam0))
					{
						if (!func_170(*uParam0))
						{
							if (func_235(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_216(uParam0);
								}
								else
								{
									func_218(uParam0);
								}
								func_300("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1 /*EXP_TAG_DONTCARE*/, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], true), 15f))
						{
							if (iParam2 == 0)
							{
								func_216(uParam0);
							}
							else
							{
								func_218(uParam0);
							}
							func_300("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_223(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_216(uParam0);
							}
							else
							{
								func_218(uParam0);
							}
							func_300("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_222(*uParam0))
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1 /*EXP_TAG_DONTCARE*/, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], true), 5f))
						{
							if (iParam2 == 0)
							{
								func_216(uParam0);
							}
							else
							{
								func_218(uParam0);
							}
							func_300("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							if (iParam2 == 0)
							{
								func_216(uParam0);
							}
							else
							{
								func_218(uParam0);
							}
							func_300("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_300("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_137(uParam0->f_41[0]))
						{
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], true, false);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], false);
						}
					}
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_222(int iParam0)//Position - 0xE324
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_223(int iParam0, float fParam1)//Position - 0xE358
{
	float fVar0;
	
	if (func_137(PLAYER::PLAYER_PED_ID()) && func_137(iParam0))
	{
		if (func_234(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, false, true, 0))
			{
				if (func_224(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_224(int iParam0, float fParam1)//Position - 0xE3CE
{
	return func_225(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_225(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xE3E6
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_233(iParam0, iParam1);
	if (!func_137(iParam0) || !func_137(iParam1))
	{
		if (iVar4 != -1)
		{
			func_232(&(Local_35[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_229(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_228();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_35[iVar4 /*4*/].f_1 = iParam0;
		Local_35[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_226(&(Local_35[iVar4 /*4*/]), Var1, iParam1, &(Local_35[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_35[iVar4 /*4*/].f_3) < iParam4);
}

int func_226(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)//Position - 0xE4A7
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_137(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_227(iParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(iVar7))
	{
		func_137(iVar7);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7) == iParam4)
		{
			if (bLocal_76)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar7))
	{
		func_137(iVar7);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam4, false))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7) == PED::GET_VEHICLE_PED_IS_IN(iParam4, false))
			{
				if (bLocal_76)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_227(int iParam0, int iParam1)//Position - 0xE5D3
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return ENTITY::GET_ENTITY_COORDS(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
	}
	return ENTITY::GET_ENTITY_COORDS(iParam0, true);
}

int func_228()//Position - 0xE698
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_35.f_0)
	{
		if ((Local_35[iVar0 /*4*/] == 0 && Local_35[iVar0 /*4*/].f_1 == 0) && Local_35[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_229(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0xE6E2
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_231(ENTITY::GET_ENTITY_COORDS(iParam1, true) - ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var3 = { func_231(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_230(Var3, Var0);
	if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_230(struct<3> Param0, struct<3> Param3)//Position - 0xE773
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_231(struct<3> Param0)//Position - 0xE794
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_232(var uParam0)//Position - 0xE7D3
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_233(int iParam0, int iParam1)//Position - 0xE7EE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_35.f_0)
	{
		if (Local_35[iVar0 /*4*/].f_1 == iParam0 && Local_35[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_234(int iParam0)//Position - 0xE82D
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}

int func_235(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xE855
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_137(PLAYER::PLAYER_PED_ID()) && func_137(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, true);
		if (iVar2 == joaat("WEAPON_PETROLCAN"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_239(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_236(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), fVar0, true))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_239(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_236(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_236(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0xE950
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("WEAPON_GRENADE"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("WEAPON_MOLOTOV"), fParam1, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("WEAPON_SMOKEGRENADE"), fParam1, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("WEAPON_STICKYBOMB"), 5f, true))
		{
			if (bParam3)
			{
				if (func_237(iParam0, fParam1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_237(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (MISC::IS_PROJECTILE_IN_AREA(Var0, Var3, true))
		{
			return 1;
		}
	}
	return 0;
}

int func_237(int iParam0, float fParam1)//Position - 0xEA5C
{
	var uVar0;
	struct<3> Var1;
	
	if ((((MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_GRENADE"), fParam1, &Var1, &uVar0, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_SMOKEGRENADE"), fParam1, &Var1, &uVar0, false)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_BZGAS"), fParam1, &Var1, &uVar0, false)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_STICKYBOMB"), fParam1, &Var1, &uVar0, false)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_MOLOTOV"), fParam1, &Var1, &uVar0, false))
	{
		if (func_238(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_238(int iParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0xEAF1
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_231(Param1 - ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var3 = { func_231(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_230(Var3, Var0);
	if (fVar6 <= SYSTEM::COS((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_239(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0xEB7F
{
	if (bParam1)
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fParam3, fParam3, fParam3, false, true, 0))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), fParam2, true))
	{
		return 1;
	}
	return 0;
}

int func_240(int iParam0)//Position - 0xEBC7
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

void func_241(int iParam0)//Position - 0xEC11
{
	int iVar0;
	
	if (func_137(PLAYER::PLAYER_PED_ID()) && func_137(iParam0))
	{
		STREAMING::REQUEST_ANIM_DICT("rcmextreme3");
		while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme3"))
		{
			SYSTEM::WAIT(0);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_ANIM(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0f, false, false, false);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
		TASK::TASK_PARACHUTE_TO_TARGET(0, 64.6f, -737.8f, 44.2f);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

int func_242(int iParam0)//Position - 0xECAE
{
	if (iParam0 == -1)
	{
		iParam0 = func_178();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_248(iParam0))
	{
		return 0;
	}
	if (!func_175(4))
	{
		if (func_246(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (func_245() && !func_244())
	{
		return 1;
	}
	if (!func_243(iParam0))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
			{
				return 1;
			}
		}
	}
	if (!BitTest(Global_113969.f_18577[iParam0 /*6*/], 2))
	{
		return 1;
	}
	return 0;
}

int func_243(int iParam0)//Position - 0xED43
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_244()//Position - 0xED82
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::GET_CITY_DENSITY() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_245()//Position - 0xED9F
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

int func_246(int iParam0)//Position - 0xEDC2
{
	if ((func_247() && Global_101533.f_11 == 6) && iParam0 == func_179(&(Global_101533.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_247()//Position - 0xEDF6
{
	if (((Global_101533 == 13 || Global_101533 == 10) || Global_101533 == 11) || Global_101533 == 12)
	{
		return 0;
	}
	return 1;
}

int func_248(int iParam0)//Position - 0xEE34
{
	if (func_118(0))
	{
		if (Global_79636.f_1 == 7)
		{
			if (Global_79636 == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_249()//Position - 0xEE5C
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-1495.4958f, 519.46063f, 100.8889f, -1429.1115f, 468.1972f, 120.9696f, false, true, true, true, 1);
}

int func_250(int iParam0)//Position - 0xEE8B
{
	if (!func_251(iParam0))
	{
		return 0;
	}
	func_300("Created initial scene");
	return 1;
}

int func_251(var uParam0)//Position - 0xEEAA
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	
	iVar0[0] = uLocal_90;
	iVar0[1] = iLocal_91;
	switch (iLocal_89)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -1457.2512f, 475.82584f, 114.201454f };
			uParam0->f_17[1 /*3*/] = { -1460.4023f, 490.4705f, 118.60101f };
			uParam0->f_24 = 35f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "paper_1_RCM_alt1", 24);
			uParam0->f_25 = 1;
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			func_267(&(uParam0->f_48), "rcmcollect_paperleadinout@", "meditiate_idle", 0);
			iLocal_89 = 1;
			break;
		
		case 1:
			if (!func_266(&iVar0) || !func_265(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_89 = 2;
			break;
		
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!func_262(&(uParam0->f_28[0]), 68, -1459.68f, 485.26f, 116.22f, -131.3f, "DREYFUSS LAUNCHER RC", 1))
				{
					bVar4 = false;
				}
			}
			if (func_137(uParam0->f_28[0]))
			{
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2096, 2);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_260(&(uParam0->f_35[0]), iVar0[1], Local_92, fLocal_95);
				if (func_137(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[0], "DR3YFU55");
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_91, true);
				}
			}
			if (bVar4)
			{
				iLocal_89 = 3;
			}
			break;
		
		case 3:
			func_253(99, 1, 0, 1, 0);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			if (func_137(uParam0->f_28[0]))
			{
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], true), 50f, 0);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(-1471.1663f, 510.6191f, 115.8419f, 4f, false, false, false, false, false, false, 0);
			func_252(0);
			return 1;
			break;
	}
	return 0;
}

void func_252(bool bParam0)//Position - 0xF0C5
{
	PATHFIND::SET_ROADS_IN_AREA(-1594.8999f, 457.8715f, -100f, -1366.7844f, 635.579f, 900f, bParam0, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1473.5175f, 508f, 115.601f, -1471.0171f, 514.829f, 120f, bParam0, true);
}

void func_253(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xF117
{
	if (iParam0 != 198)
	{
		if (Global_79389)
		{
			Global_43576.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_113969.f_7264.f_227[iParam0] = iParam1;
		}
		Global_40582[iParam0] = iParam2;
		Global_40781[iParam0] = 1;
		func_256(iParam0, bParam3, iParam4, 0);
		func_254(iParam0, iParam1);
	}
}

void func_254(int iParam0, int iParam1)//Position - 0xF16F
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", false, false);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", true, false);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", false, false);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", true, false);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_255(0, 0);
			}
			else
			{
				func_255(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", true, false);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", false, false);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", false);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", false);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", false);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", false);
			}
			break;
	}
}

void func_255(int iParam0, bool bParam1)//Position - 0xF258
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_112604, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_112604, iParam0);
	}
	Global_112603 = 1;
}

bool func_256(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xF281
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	int iVar98;
	bool bVar99;
	int iVar100;
	
	Global_1919037 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_259(&Var3, iParam0);
	if (func_257())
	{
		iVar1 = Global_113969.f_7264.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_43576.f_227[iParam0];
	}
	iVar2 = Global_40980[iParam0];
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !bParam3)
	{
		Global_1919037 = 1;
	}
	else
	{
		bVar99 = true;
		if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_40582[iParam0] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3, true) < 200f)
				{
					bVar99 = false;
					Global_1919037 = 1;
				}
				if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
				{
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						bVar99 = false;
						Global_1919037 = 1;
					}
				}
			}
		}
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() != 5))
		{
			bVar99 = false;
			Global_1919037 = 1;
		}
		if (bVar99)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							ENTITY::REMOVE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar1], false);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							ENTITY::CREATE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar2], true);
						}
						Global_42176[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
								Global_1919037 = 1;
							}
						}
						if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
								Global_1919037 = 1;
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[0 /*8*/]));
								Global_1919037 = 1;
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_34));
								Global_1919037 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_34));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_34));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_41977[iParam0] = 1;
					Global_42176[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar100 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_50)) != MISC::GET_HASH_KEY(""))
						{
							if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_50)))
							{
								INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
							{
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							INTERIOR::REFRESH_INTERIOR(iVar100);
						}
					}
					Global_42176[iParam0] = 1;
					Global_41977[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) < 250f)
					{
						iVar98 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iVar98))
						{
							if (iVar1 == 0)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98, 3);
								Global_42176[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98) != 6 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98) != 7) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98) != 8)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98, 10);
									Global_42176[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						ENTITY::REMOVE_MODEL_SWAP(Var3, 50f, Var3.f_4[1], Var3.f_4[0], false);
						MISC::CLEAR_BIT(&(Global_40328[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						ENTITY::CREATE_MODEL_SWAP(Var3, 50f, Var3.f_4[0], Var3.f_4[1], true);
						MISC::SET_BIT(&(Global_40328[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_40781[iParam0] = 0;
				Global_40980[iParam0] = iVar1;
				if (!func_257())
				{
					if (!Global_41577[iParam0])
					{
						Global_41577[iParam0] = 1;
						Global_41776++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_257()//Position - 0xFBE6
{
	if ((func_76() == -1 || func_76() == 999) && !func_258() == 0)
	{
		return 1;
	}
	return 0;
}

int func_258()//Position - 0xFC16
{
	return Global_32949;
}

int func_259(var uParam0, int iParam1)//Position - 0xFC21
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.91345f, 603.2904f, 105.66109f };
			uParam0->f_61 = { -1038.9135f, 639.2904f, 135.66109f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.89182f, -2365.7693f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.8584f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_lod");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_slod");
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.3074f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.3074f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.5955f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.7556f, 4929.9883f, 39.52461f };
			uParam0->f_82 = { 2505.7556f, 5023.9883f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.5955f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.6194f, 4443.4565f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.4285f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.1783f, -1143.6046f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.2096f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.6292f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.9692f, 4277.5825f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.8813f, 3836.1074f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.9276f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.93504f - 11f), (40.307034f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.93504f + 11f), (40.307034f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.6099f, 2835.3274f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.6821f, 3286.2512f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.3743f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.3743f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.3356f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.0391f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.0391f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.0288f, 3682.9983f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.3857f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.3857f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.6136f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.6136f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.6136f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.2944f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.57953f, -3092.9624f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.9624f, 139.57953f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.9624f, 139.57953f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.9624f, 139.57953f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.9624f, 139.57953f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.77838f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.77838f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.77838f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.77055f, -2982.6594f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.6594f, 144.77055f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.6594f, 144.77055f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.9647f, -1520.9827f, 9.132731f };
			uParam0->f_79 = { -1154.9647f, -1520.9827f, 9.132731f };
			uParam0->f_82 = { -1158.9647f, -1524.9827f, 11.632731f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.2039f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.2039f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.0645f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.9836f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.9836f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.2018f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.2018f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.2333f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.1377f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.7847f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.5055f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.3812f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.0793f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.4241f, 2808.2126f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.1273f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.3467f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

void func_260(int* iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x13777
{
	func_261(iParam0);
	*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, true, true, false);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
		ENTITY::SET_ENTITY_HEALTH(*iParam0, 1000, 0, 0);
	}
}

void func_261(int* iParam0)//Position - 0x137BA
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
		}
		if (func_198(*iParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
			{
				if (func_137(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
						return;
					}
				}
				VEHICLE::DELETE_VEHICLE(iParam0);
			}
		}
		else
		{
			if (func_137(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
					return;
				}
			}
			VEHICLE::DELETE_VEHICLE(iParam0);
		}
	}
}

int func_262(int* iParam0, int iParam1, struct<3> Param2, float fParam5, char* sParam6, int iParam7)//Position - 0x13856
{
	if (func_263(iParam0, iParam1, Param2, fParam5, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
				PED::SET_PED_MONEY(*iParam0, 0);
				if (iParam7 == 1)
				{
					PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
				}
			}
			PED::SET_PED_NAME_DEBUG(*iParam0, sParam6);
		}
		return 1;
	}
	return 0;
}

int func_263(int* iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x138B2
{
	int iVar0;
	
	if (!func_36(iParam1))
	{
		iVar0 = func_303(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, false, false);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
			if (iVar0 == joaat("IG_LamarDavis"))
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(*iParam0, 3) == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 2, 0, 0);
				}
			}
			func_264(*iParam0, iParam1);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_264(var uParam0, int iParam1)//Position - 0x13940
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_97347[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_265(var uParam0)//Position - 0x13986
{
	if (func_215(uParam0))
	{
		STREAMING::REQUEST_ANIM_DICT(*uParam0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_266(int iParam0)//Position - 0x139B0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!STREAMING::HAS_MODEL_LOADED((*iParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_267(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x139E1
{
	*uParam0 = sParam1;
	uParam0->f_1 = sParam2;
	uParam0->f_2 = iParam3;
	STREAMING::REQUEST_ANIM_DICT(*uParam0);
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
}

int func_268(int iParam0)//Position - 0x13A1D
{
	struct<27> Var0;
	bool bVar32;
	
	func_120(iParam0, &Var0);
	bVar32 = func_113();
	if (bVar32 == 145)
	{
		return 1;
	}
	else if ((bVar32 != 1 && bVar32 != 0) && bVar32 != 2)
	{
		return 1;
	}
	if (!BitTest(Var0.f_26, bVar32))
	{
		return 1;
	}
	return 0;
}

int func_269(int iParam0)//Position - 0x13A6E
{
	char* sVar0;
	
	if (Global_79389)
	{
		func_300("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_113969.f_9088 && !func_118(1))
	{
		func_300("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_270(iParam0))
	{
		Global_113056[iParam0 /*10*/].f_1 = 1;
		func_300("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_101533.f_11 == 6)
	{
		if (Global_101533 < 9)
		{
			func_120(iParam0, &sVar0);
			if (MISC::ARE_STRINGS_EQUAL(&(Global_101533.f_3), sVar0))
			{
				func_300("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("candidate_controller")) == 0)
	{
		Global_113056[iParam0 /*10*/].f_1 = 1;
		func_300("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_270(int iParam0)//Position - 0x13B27
{
	var uVar0;
	
	func_120(iParam0, &uVar0);
	if (!func_175(4))
	{
		if (func_246(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_245() && !func_244())
	{
		return 0;
	}
	if (func_276(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_178();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_248(iParam0))
	{
		if (!func_275(iParam0))
		{
			return 0;
		}
		if (!func_274(iParam0))
		{
			return 0;
		}
		if (func_273(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_271(5))
		{
			Global_113056[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_113056[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_271(int iParam0)//Position - 0x13BE8
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (Global_101585.f_391 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_271(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_272(iParam0, &sVar1);
		iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_96551[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_101585.f_391 == iVar9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_272(int iParam0, char* sParam1)//Position - 0x13C6D
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !MISC::ARE_STRINGS_EQUAL(sParam1, "");
}

int func_273(int iParam0)//Position - 0x13D4F
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_18577[iParam0 /*6*/], 3);
}

int func_274(int iParam0)//Position - 0x13D7A
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_18577[iParam0 /*6*/], 2);
}

int func_275(int iParam0)//Position - 0x13DA5
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_18577[iParam0 /*6*/], 0);
}

int func_276(int iParam0)//Position - 0x13DD0
{
	if (func_243(iParam0))
	{
		return 0;
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_277()//Position - 0x13E05
{
	func_300("Running end routines.");
	Global_113687 = (Global_113687 - 1);
}

int func_278(int iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x13E1F
{
	int iVar0;
	
	if (*iParam0 == 1)
	{
		if (func_279((*iParam0)[0], Param2, fParam5, iParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_279((*iParam0)[iVar0], Param2, fParam5, iParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	func_300("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}

int func_279(int iParam0, struct<3> Param1, float fParam4, var uParam5)//Position - 0x13E84
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_120(iParam0, &Var1);
	if (func_280(Var1.f_6, Param1, fParam4, 0))
	{
		if (BitTest(Global_113969.f_18577[iParam0 /*6*/], 0))
		{
			if (!BitTest(Global_113969.f_18577[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_248(iParam0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		*uParam5 = iParam0;
		StringCopy(&(uParam5->f_1), Var1.f_0, 32);
		return 1;
	}
	return 0;
}

int func_280(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x13EFC
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_281(int iParam0, bool bParam1)//Position - 0x13F77
{
	char* sVar0;
	
	if (bParam1)
	{
		func_300("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_288(iParam0, 0, 0, 0);
	}
	func_287(&(iParam0->f_48));
	if (iLocal_96 != -1)
	{
		func_300("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_209(&iLocal_96);
	}
	switch (*iParam0)
	{
		case 8:
			sVar0 = "DREY1_IDLE";
			break;
	}
	func_282(sVar0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_91, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_97, false);
	func_252(1);
	if (bParam1)
	{
		func_210(*iParam0);
	}
	func_277();
	func_300("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_282(char* sParam0)//Position - 0x13FFC
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (func_285(sParam0))
		{
			func_283();
		}
	}
}

void func_283()//Position - 0x1401F
{
	Global_21152 = 0;
	func_284();
}

void func_284()//Position - 0x1402F
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
	}
}

int func_285(char* sParam0)//Position - 0x14050
{
	struct<6> Var0;
	
	Var0 = { func_286() };
	if (MISC::ARE_STRINGS_EQUAL(&Var0, sParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_286()//Position - 0x14070
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		return Global_21905;
	}
	return Var0;
}

int func_287(var uParam0)//Position - 0x14094
{
	if (func_215(uParam0))
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
		{
			STREAMING::REMOVE_ANIM_DICT(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_288(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x140CA
{
	func_295(uParam0, iParam1);
	func_292(uParam0, bParam2);
	func_289(uParam0, bParam3);
}

void func_289(var uParam0, bool bParam1)//Position - 0x140EA
{
	func_290(&(uParam0->f_41), bParam1);
}

void func_290(var uParam0, bool bParam1)//Position - 0x140FC
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_217(uParam0[iVar0]);
		}
		else
		{
			func_291(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_291(int* iParam0, bool bParam1)//Position - 0x1413A
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		if (!bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*iParam0);
		}
	}
}

void func_292(var uParam0, bool bParam1)//Position - 0x14175
{
	func_293(&(uParam0->f_35), bParam1);
}

void func_293(var uParam0, bool bParam1)//Position - 0x14187
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_261(uParam0[iVar0]);
		}
		else
		{
			func_294(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_294(int* iParam0)//Position - 0x141C4
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0, false);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_295(var uParam0, int iParam1)//Position - 0x141FC
{
	func_296(&(uParam0->f_28), iParam1);
}

void func_296(var uParam0, int iParam1)//Position - 0x1420E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_298(uParam0[iVar0]);
		}
		else
		{
			func_297(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_297(int* iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1424F
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
			}
			PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_298(int* iParam0)//Position - 0x1429F
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
		}
		PED::DELETE_PED(iParam0);
	}
}

void func_299(var uParam0)//Position - 0x142E0
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_44004)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_44003 = 0;
	Global_44005 = 0;
	Global_44042 = 15;
	Global_64163 = 0;
	Global_64164 = 0;
}

void func_300(char* sParam0)//Position - 0x1431D
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
	}
}

void func_301(var uParam0)//Position - 0x1432F
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_302()//Position - 0x14362
{
	func_300("Running start routines.");
	Global_113687++;
}

int func_303(int iParam0)//Position - 0x1437C
{
	if (!func_36(iParam0))
	{
		return func_47(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}


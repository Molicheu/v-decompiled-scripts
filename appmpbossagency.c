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
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	struct<2> Local_89 = { 0, 0 } ;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	struct<2> Local_93 = { 0, 0 } ;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	struct<2> Local_97 = { 0, 0 } ;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	struct<2> Local_101 = { 0, 0 } ;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	struct<2> Local_105 = { 0, 0 } ;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	struct<2> Local_109 = { 0, 0 } ;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int* iLocal_116 = NULL;
	var uLocal_117 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
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
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_45 = ((0.05f + 0.275f) - 0.01f);
	StringCopy(&Local_89, "CELL_206" /* GXT: BACK */, 16);
	StringCopy(&Local_93, "CELL_214" /* GXT: OPTIONS */, 16);
	StringCopy(&Local_97, "CELL_243" /* GXT: ACCEPT JOB */, 16);
	StringCopy(&Local_101, "CELL_244" /* GXT: CANCEL JOB */, 16);
	StringCopy(&Local_105, "CELL_265" /* GXT: INVITATION */, 16);
	StringCopy(&Local_109, "CELL_300" /* GXT: CHAR_DEFAULT */, 16);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_100(&iLocal_116);
	iLocal_113 = 0;
	func_98();
	func_97(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_87(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_86();
		func_85();
		if (!Global_20813.f_1 == 9 && Global_20813.f_1 > 3)
		{
			switch (iLocal_88)
			{
				case 0:
					func_48();
					break;
				
				case 1:
					func_32();
					break;
				
				case 3:
					func_5();
					break;
				
				case 2:
					func_4();
					break;
				
				default:
					break;
			}
			if (Global_20813.f_1 != 8)
			{
				if (func_3())
				{
					func_2();
				}
			}
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()//Position - 0x170
{
	if (((Global_20813.f_1 == 1 || Global_20813.f_1 == 3) || Global_20813.f_1 == 0) || Global_20757 == 1)
	{
		Global_20800 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x1B3
{
	Global_1881898.f_6 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_3()//Position - 0x1C6
{
	if (Global_9289 == 1 || Global_20813.f_1 < 7)
	{
		Global_20800 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x1EF
{
}

void func_5()//Position - 0x1F7
{
	int iVar0;
	
	Global_1881898.f_6 = 1;
	if (iLocal_115)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, Global_20782))
		{
			iLocal_115 = 0;
		}
		return;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		iLocal_88 = 1;
		iVar0 = func_30(iLocal_113, 0);
		func_6(iVar0);
		return;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		iLocal_88 = 1;
		return;
	}
	HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_INPUT23" /* GXT: Confirm */, "BA_APP_PASS_W" /* GXT: Are you sure you want to become a Bodyguard? Passive Mode is disabled when playing as a Bodyguard. */, 36, 0, false, -1, 0, 0, true, 0);
}

void func_6(int iParam0)//Position - 0x25E
{
	int iVar0;
	
	iVar0 = Global_1881898.f_7[iParam0 /*8*/].f_2;
	if (Global_1881898.f_7[iParam0 /*8*/].f_1 == 1 && iLocal_114 == iVar0)
	{
		func_26(iVar0, Global_1881898.f_7[iParam0 /*8*/].f_6);
		func_13(iParam0);
	}
	Global_1881898.f_6 = 0;
	func_7(0);
}

void func_7(int iParam0)//Position - 0x2B3
{
	if (func_12())
	{
		return;
	}
	if (Global_21025)
	{
		if (func_11())
		{
			func_9(1, 1);
		}
		else
		{
			func_9(0, 0);
		}
	}
	if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8684, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22166 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8683, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8683, 30);
	}
	if (!func_8())
	{
		Global_20813.f_1 = 3;
	}
}

int func_8()//Position - 0x33D
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)//Position - 0x364
{
	if (bParam0)
	{
		if (func_10(0))
		{
			Global_21025 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20750);
			}
			Global_20741 = { Global_20759[Global_20758 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
		}
	}
	else if (Global_21025 == 1)
	{
		Global_21025 = 0;
		Global_20741 = { Global_20766[Global_20758 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20750);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
		}
	}
}

int func_10(int iParam0)//Position - 0x3D8
{
	if (iParam0 == 1)
	{
		if (Global_20813.f_1 > 3)
		{
			if (BitTest(Global_8683, 14))
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
	if (Global_20813.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_11()//Position - 0x42F
{
	return BitTest(Global_1956030, 5);
}

bool func_12()//Position - 0x43D
{
	return BitTest(Global_1956030, 19);
}

void func_13(int iParam0)//Position - 0x44C
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		if (Global_1881898.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (BitTest(Global_1881898.f_7[iParam0 /*8*/].f_5, 0))
			{
				func_25();
				if (Global_1881898.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_25();
				}
				else
				{
					Global_1881898.f_4 = (Global_1881898.f_4 - 1);
					if (Global_1881898.f_4 < 0)
					{
						Global_1881898.f_4 = 0;
					}
					func_18();
				}
			}
			MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_22), Global_1881898.f_7[iParam0 /*8*/].f_2);
			HUD::THEFEED_REMOVE_ITEM(Global_1881898.f_7[iParam0 /*8*/].f_4);
			func_17();
			func_15(0);
		}
		iVar0 = iParam0;
		while (iVar0 <= 8)
		{
			Global_1881898.f_7[iVar0 /*8*/] = { Global_1881898.f_7[iVar0 + 1 /*8*/] };
			iVar0++;
		}
		Global_1881898.f_7[9 /*8*/].f_1 = 0;
		Global_1881898.f_7[9 /*8*/].f_2 = func_14();
	}
}

int func_14()//Position - 0x53E
{
	return -1;
}

void func_15(int iParam0)//Position - 0x547
{
	if (!func_16(iParam0))
	{
		MISC::SET_BIT(&(Global_1881898.f_3), iParam0);
	}
}

bool func_16(int iParam0)//Position - 0x565
{
	return BitTest(Global_1881898.f_3, iParam0);
}

void func_17()//Position - 0x576
{
	Global_1881898 = (Global_1881898 - 1);
}

void func_18()//Position - 0x588
{
	Global_23229 = (Global_23229 - 1);
	if (Global_23229 < 0)
	{
		func_24("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_19();
}

void func_19()//Position - 0x5AA
{
	if (!Global_21026)
	{
		if (Global_20813.f_1 == 6)
		{
			func_97(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(1);
			func_97(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20793), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_20(int iParam0)//Position - 0x607
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_23234 = 0;
	Global_9288 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9252[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_23(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8690[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8690[iVar1 /*15*/].f_4)
					{
						if (Global_9252[iVar0] == 0)
						{
							Global_9216[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8684, 3))
								{
									iVar2 = 42;
									Global_21029 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21029 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2695946)
							{
								if (iVar1 == 14)
								{
									func_21(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23229), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9252[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8690[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8690[iVar1 /*15*/].f_4)
					{
						if (Global_9252[iVar0] == 0)
						{
							Global_9216[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_114370.f_14144[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_114370.f_14144[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_114370.f_14144[iVar3 /*104*/].f_99[Global_20813] == 1)
											{
												Global_23234++;
											}
										}
									}
									iVar3++;
								}
								func_21(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23234), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79248)
								{
									iVar4 = 0;
									iVar4 = Global_4541717;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541718[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541718[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541718[iVar5 /*104*/].f_99[Global_20813] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_21(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20813)
									{
										case 0:
											iVar6 = Global_45133;
											break;
										
										case 1:
											iVar6 = Global_45134;
											break;
										
										case 2:
											iVar6 = Global_45135;
											break;
										
										default:
											break;
									}
									func_21(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_21(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23229), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8689);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8684, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8684, 3))
								{
									iVar8 = 42;
									Global_21029 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21029 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8690[iVar1 /*15*/]), "CELL_BENWEB" /* GXT: Benny's */)) && BitTest(Global_8684, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8690[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1881898.f_1;
								func_21(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_21(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9252[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_21(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xB93
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_22(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_22(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_22(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_22(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_22(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_22(char* sParam0)//Position - 0xC46
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_23(int iParam0)//Position - 0xC58
{
	return Global_43922 == iParam0;
}

void func_24(char* sParam0)//Position - 0xC66
{
	if (Global_23229 != 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
		}
		Global_23229 = 0;
	}
}

void func_25()//Position - 0xC83
{
	Global_1881898.f_1 = (Global_1881898.f_1 - 1);
	if (Global_1881898.f_1 < 0)
	{
		Global_1881898.f_1 = 0;
	}
}

void func_26(int iParam0, var uParam1)//Position - 0xCAA
{
	if (Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_26 == func_14())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_26 = iParam0;
			Global_2738587.f_5234.f_227 = uParam1;
			func_27(func_28(iParam0));
		}
	}
}

void func_27(int iParam0)//Position - 0xCFA
{
	struct<2> Var0;
	
	Var0.f_0 = -627920584;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 3, iParam0, Var0.f_0);
	}
}

int func_28(int iParam0)//Position - 0xD28
{
	var uVar0;
	
	if (func_29(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_29(var uParam0)//Position - 0xD43
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

int func_30(int iParam0, int iParam1)//Position - 0xD65
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_31())
	{
		if (Global_1881898.f_7[iVar0 /*8*/].f_7 == iParam1)
		{
			iParam0 = (iParam0 - 1);
			if (iParam0 < 0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_31()//Position - 0xDA5
{
	return Global_1881898;
}

void func_32()//Position - 0xDB1
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_30(iLocal_113, 0);
	if (iLocal_113 == -1)
	{
		func_87(1);
		return;
	}
	iVar1 = Global_1881898.f_7[iVar0 /*8*/].f_2;
	if (!func_47(iVar1, 0, 1) || iLocal_114 != iVar1)
	{
		func_87(1);
		return;
	}
	func_42(&iLocal_116);
	if (func_40(&iLocal_116))
	{
		func_87(1);
		return;
	}
	if (func_39(&iLocal_116))
	{
		func_13(iVar0);
		func_87(1);
		return;
	}
	if (func_35(&iLocal_116))
	{
		if (func_34())
		{
			iLocal_115 = 1;
			iLocal_88 = 3;
		}
		else if (Global_1881898.f_7[iVar0 /*8*/] == 0)
		{
			func_6(iVar0);
		}
		else if (Global_1881898.f_7[iVar0 /*8*/] == 1)
		{
			func_33(iVar0);
		}
		else
		{
			func_7(0);
		}
	}
}

void func_33(int iParam0)//Position - 0xE77
{
	MISC::SET_BIT(&Global_1836147, 15);
	func_13(iParam0);
	Global_1881898.f_6 = 0;
	func_7(0);
}

bool func_34()//Position - 0xE9B
{
	return Global_1574582;
}

int func_35(int* iParam0)//Position - 0xEA7
{
	if (!BitTest(*iParam0, 0))
	{
		return 0;
	}
	if (Global_20791)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20782))
	{
		return 0;
	}
	func_36();
	Global_20791 = 1;
	return 1;
}

void func_36()//Position - 0xEEB
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20802, true);
		func_37();
	}
}

void func_37()//Position - 0xF10
{
	if (func_38())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

int func_38()//Position - 0xF24
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79248)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4543261 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_39(int* iParam0)//Position - 0xF6B
{
	if (!BitTest(*iParam0, 1))
	{
		return 0;
	}
	if (Global_20791)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20785))
	{
		return 0;
	}
	func_36();
	Global_20791 = 1;
	return 1;
}

int func_40(int* iParam0)//Position - 0xFAF
{
	if (!BitTest(*iParam0, 2))
	{
		return 0;
	}
	if (Global_20791)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20783))
	{
		return 0;
	}
	func_41();
	Global_20791 = 1;
	return 1;
}

void func_41()//Position - 0xFF3
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20802, true);
	}
}

void func_42(int* iParam0)//Position - 0x1015
{
	if (MISC::GET_GAME_TIMER() < iParam0->f_1)
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20789) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
	{
		func_45();
		iParam0->f_1 = MISC::GET_GAME_TIMER() + 50;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20790) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
	{
		func_43();
		iParam0->f_1 = MISC::GET_GAME_TIMER() + 50;
	}
}

void func_43()//Position - 0x1082
{
	func_97(Global_20794, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
	func_44();
}

void func_44()//Position - 0x10BF
{
	if (func_38())
	{
		if (Global_21030 == 0)
		{
			MOBILE::CELL_SET_INPUT(2);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(1);
		}
	}
}

void func_45()//Position - 0x10E2
{
	func_97(Global_20794, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
	func_46();
}

void func_46()//Position - 0x111F
{
	if (func_38())
	{
		if (Global_21030 == 0)
		{
			MOBILE::CELL_SET_INPUT(1);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(2);
		}
	}
}

int func_47(int iParam0, bool bParam1, bool bParam2)//Position - 0x1142
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672741.f_3)
				{
					return Global_2672741.f_2;
				}
				else if (Global_2657921[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_48()//Position - 0x11A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_31() > 1)
	{
		func_42(&iLocal_116);
	}
	if (func_35(&iLocal_116))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "GET_CURRENT_SELECTION");
		iVar0 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iVar0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_113 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iVar0);
		iVar1 = func_30(iLocal_113, 0);
		switch (Global_1881898.f_7[iVar1 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_50();
				break;
			
			default:
				return;
		}
		Global_20813.f_1 = 8;
		return;
	}
	if (func_39(&iLocal_116))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "GET_CURRENT_SELECTION");
		iVar2 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iVar2))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_113 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iVar2);
		iVar3 = func_30(iLocal_113, 0);
		switch (Global_1881898.f_7[iVar3 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_13(iVar3);
				func_87(0);
				return;
			
			default:
		}
		return;
		return;
	}
	if (func_16(0))
	{
		func_49(0);
		func_87(0);
	}
}

void func_49(int iParam0)//Position - 0x12AE
{
	if (func_16(iParam0))
	{
		MISC::CLEAR_BIT(&(Global_1881898.f_3), iParam0);
	}
}

void func_50()//Position - 0x12CB
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<16> Var5;
	var uVar21[3];
	bool bVar25;
	int iVar26;
	int iVar27;
	char cVar28[16];
	struct<16> Var32;
	char cVar48[16];
	
	if (Global_20813.f_1 != 8)
	{
		Global_20813.f_1 = 8;
	}
	func_97(Global_20794, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	bVar0 = false;
	iVar3 = func_30(iLocal_113, 0);
	iLocal_114 = Global_1881898.f_7[iVar3 /*8*/].f_2;
	iVar4 = Global_1881898.f_7[iVar3 /*8*/].f_2;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	if (func_47(iVar4, 0, 1))
	{
		Var5 = { func_84(iVar4) };
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_78(iVar4));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var5);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		bVar0 = true;
	}
	else
	{
		func_22("");
	}
	if (Global_1881898.f_7[iVar3 /*8*/] == 0)
	{
		if (Global_262145.f_15622 /* Tunable: EXEC_VIP2_DISABLE_INVITE_INFO */)
		{
			bVar25 = func_77(iVar4);
			iVar26 = 0;
			while (iVar26 < 3)
			{
				if (iVar27 < 3)
				{
					if (Global_1886967[iVar4 /*609*/].f_10.f_11[iVar26] != func_14())
					{
						if (func_47(Global_1886967[iVar4 /*609*/].f_10.f_11[iVar26], 0, 1))
						{
							uVar21[iVar27] = Global_1886967[iVar4 /*609*/].f_10.f_11[iVar26];
							iVar27++;
						}
					}
				}
				iVar26++;
			}
			if (iVar27 == 0)
			{
				if (bVar25)
				{
					func_22("BA_APP_BODYCTA" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become an Associate.~s~ */);
				}
				else
				{
					func_22("BA_APP_BODY_TA" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~s~ */);
				}
			}
			else
			{
				StringCopy(&cVar28, "BA_APP_BODY_T4" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~s~ */, 16);
				if (bVar25)
				{
					StringCopy(&cVar28, "BA_APP_BODYCT4" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~s~ */, 16);
				}
				if (iVar27 == 2)
				{
					if (bVar25)
					{
						StringCopy(&cVar28, "BA_APP_BODYCT5" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~n~~a~~s~ */, 16);
					}
					else
					{
						StringCopy(&cVar28, "BA_APP_BODY_T5" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~n~~a~~s~ */, 16);
					}
				}
				else if (iVar27 > 2)
				{
					if (bVar25)
					{
						StringCopy(&cVar28, "BA_APP_BODYCT6" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~n~~a~~n~~a~~s~ */, 16);
					}
					else
					{
						StringCopy(&cVar28, "BA_APP_BODY_T6" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~n~~a~~n~~a~~s~ */, 16);
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&cVar28);
				iVar26 = 0;
				while (iVar26 < iVar27)
				{
					Var32 = { func_84(uVar21[iVar26]) };
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var32);
					iVar26++;
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		}
		else
		{
			if (Global_1881898.f_88[iVar3 /*5*/].f_1)
			{
				if (Global_1881898.f_88[iVar3 /*5*/].f_2)
				{
					StringCopy(&cVar48, "BA_APP_BODY_T9" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~- Wage: $~1~ ~n~- Associate(s): ~1~ ~n~- Yacht: Yes~n~- Office: Yes ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~ */, 16);
				}
				else
				{
					StringCopy(&cVar48, "BA_APP_BODY_T8" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~- Wage: $~1~ ~n~- Bodyguard(s): ~1~ ~n~- Yacht: Yes~n~- Office: No ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~ */, 16);
				}
			}
			else if (Global_1881898.f_88[iVar3 /*5*/].f_2)
			{
				StringCopy(&cVar48, "BA_APP_BODY_T7" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~- Wage: $~1~ ~n~- Associate(s): ~1~ ~n~- Yacht: No~n~- Office: Yes ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~ */, 16);
			}
			else
			{
				StringCopy(&cVar48, "BA_APP_BODY_T10" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~- Wage: $~1~ ~n~- Bodyguard(s): ~1~ ~n~- Yacht: No~n~- Office: No~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~ */, 16);
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&cVar48);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1881898.f_88[iVar3 /*5*/]);
			HUD::ADD_TEXT_COMPONENT_INTEGER(func_76(iVar4));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1881898.f_88[iVar3 /*5*/].f_3);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1881898.f_88[iVar3 /*5*/].f_4);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
	}
	else if (Global_1881898.f_7[iVar3 /*8*/] == 1)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM2" /* GXT: ~HUD_COLOUR_WHITE~The VIP of ~a~~HUD_COLOUR_WHITE~ has challenged you to an Executive Deathmatch.~s~ */);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_78(Global_1881898.f_7[iVar3 /*8*/].f_2));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_62(Global_1881898.f_7[iVar3 /*8*/].f_2));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	if (bVar0)
	{
		iVar2 = func_56(Global_1881898.f_7[iVar3 /*8*/].f_2);
		if (iVar2 == 0)
		{
			bVar0 = false;
		}
		else
		{
			sVar1 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar2);
		}
	}
	if (bVar0)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sVar1);
	}
	else
	{
		func_22(&Local_109);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_97(Global_20794, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_54(&Local_105);
	func_51(13, &Local_97, 12, &Local_101, 4, &Local_89, &iLocal_116);
	iLocal_88 = 1;
}

void func_51(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int* iParam6)//Position - 0x161A
{
	func_52(2, iParam0, sParam1, 0, iParam6, -1);
	func_52(1, iParam2, sParam3, 1, iParam6, 17);
	func_52(3, iParam4, sParam5, 2, iParam6, -1);
}

void func_52(int iParam0, int iParam1, char* sParam2, int iParam3, int* iParam4, int iParam5)//Position - 0x164A
{
	if (iParam1 == 1)
	{
		func_21(Global_20794, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(iParam4, iParam3);
		func_53(iParam5, 0);
		return;
	}
	if (Global_20801)
	{
		func_21(Global_20794, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		MISC::SET_BIT(iParam4, iParam3);
		func_53(iParam5, 1);
		return;
	}
	func_21(Global_20794, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	MISC::SET_BIT(iParam4, iParam3);
	func_53(iParam5, 1);
}

void func_53(int iParam0, bool bParam1)//Position - 0x16EF
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&Global_8683, iParam0);
		return;
	}
	MISC::CLEAR_BIT(&Global_8683, iParam0);
}

void func_54(char* sParam0)//Position - 0x171A
{
	func_55(Global_20794, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_55(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x1733
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_22(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_22(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_22(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_22(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_22(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_56(int iParam0)//Position - 0x178E
{
	int iVar0;
	
	iVar0 = func_59(iParam0);
	if (iVar0 == -1)
	{
		func_57(iParam0, 1);
		return 0;
	}
	Global_1680805[iVar0 /*5*/].f_4 = 1;
	return Global_1680805[iVar0 /*5*/].f_2;
}

void func_57(int iParam0, bool bParam1)//Position - 0x17C4
{
	if (!func_47(iParam0, 0, 1))
	{
		return;
	}
	if (func_59(iParam0) != -1)
	{
		return;
	}
	if (Global_1680968)
	{
		if (iParam0 == Global_1680968.f_1)
		{
			return;
		}
	}
	if (func_58(iParam0))
	{
		return;
	}
	if (Global_1681006 >= 32)
	{
		return;
	}
	Global_1680973[Global_1681006] = iParam0;
	Global_1681006++;
	if (bParam1)
	{
	}
}

int func_58(int iParam0)//Position - 0x1830
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681006)
	{
		if (Global_1680973[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_59(int iParam0)//Position - 0x1862
{
	int iVar0;
	
	if (!func_47(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1680966 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1680966)
	{
		if (Global_1680805[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1680805[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1680805[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_60(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_60(int iParam0)//Position - 0x18E1
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1680966)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1680805[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1680805[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1680805[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1680805[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1680966)
	{
		Global_1680805[iVar32 /*5*/] = { Global_1680805[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_61(&(Global_1680805[iVar32 /*5*/]));
	Global_1680966 = (Global_1680966 - 1);
}

void func_61(var uParam0)//Position - 0x1997
{
	*uParam0 = 0;
	uParam0->f_1 = func_14();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

char* func_62(int iParam0)//Position - 0x19C4
{
	char* sVar0;
	int iVar1;
	
	if (!func_29(iParam0))
	{
		sVar0 = func_71(iParam0, 0);
		return sVar0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_70(&(Global_1886967[iParam0 /*609*/].f_10.f_105));
		return sVar0;
	}
	if (Global_1886967[iParam0 /*609*/].f_10.f_121 != Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_121)
	{
		sVar0 = func_71(iParam0, 0);
		return sVar0;
	}
	if (((func_69(iParam0, 28) || func_69(PLAYER::PLAYER_ID(), 28)) || func_67(iParam0)) && !func_65(iParam0))
	{
		return func_71(iParam0, 0);
	}
	iVar1 = func_64(iParam0);
	if (iVar1 != func_14())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (Global_262145.f_36085 /* Tunable: 664611037 */)
			{
				return func_71(iVar1, 0);
			}
			if (!func_63() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_71(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_14())
	{
		sVar0 = func_70(&(Global_1886967[iVar1 /*609*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_71(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

bool func_63()//Position - 0x1AFA
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_64(int iParam0)//Position - 0x1B10
{
	if (func_29(iParam0))
	{
		return Global_1886967[iParam0 /*609*/].f_10;
	}
	return func_14();
}

int func_65(int iParam0)//Position - 0x1B33
{
	struct<13> Var0;
	
	Var0 = { func_66(iParam0) };
	if (func_63())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
		else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_66(int iParam0)//Position - 0x1B73
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_67(int iParam0)//Position - 0x1B8A
{
	struct<13> Var0;
	
	if (iParam0 != func_14())
	{
		Var0 = { func_66(iParam0) };
		if ((MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (func_63() || MISC::IS_PROSPERO_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
		if ((func_68(Var0) && NETWORK::NETWORK_PERMISSIONS_HAS_GAMER_RECORD(&Var0)) && !NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
		{
			return 1;
		}
	}
	return 1;
}

bool func_68(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x1C1E
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_69(int iParam0, int iParam1)//Position - 0x1C2E
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

var func_70(var uParam0)//Position - 0x1C46
{
	return uParam0;
}

char* func_71(int iParam0, bool bParam1)//Position - 0x1C50
{
	if (!bParam1)
	{
		if (func_73(iParam0, 1))
		{
			return func_72();
		}
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /* GXT: An Organization */);
}

char* func_72()//Position - 0x1C77
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /* GXT: Motorcycle Club */);
}

bool func_73(int iParam0, bool bParam1)//Position - 0x1C87
{
	return func_74(iParam0, bParam1, 1);
}

int func_74(int iParam0, bool bParam1, int iParam2)//Position - 0x1C98
{
	int iVar0;
	
	if (!func_29(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_75(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1886967[iParam0 /*609*/].f_10;
	if (iVar0 != func_14() && Global_1886967[iVar0 /*609*/].f_10.f_429 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_75(int iParam0, int iParam1)//Position - 0x1CF5
{
	if (func_29(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10 != func_14())
		{
			if (Global_1886967[iParam0 /*609*/].f_10 == iParam0 && Global_1886967[iParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_76(int iParam0)//Position - 0x1D44
{
	if (func_64(iParam0) == func_14())
	{
		return 0;
	}
	return Global_1886967[iParam0 /*609*/].f_10.f_19;
}

int func_77(int iParam0)//Position - 0x1D6A
{
	if (!func_29(iParam0))
	{
		return 0;
	}
	return BitTest(Global_1845263[iParam0 /*877*/].f_267.f_32, 26);
}

int func_78(int iParam0)//Position - 0x1D91
{
	int iVar0;
	
	iVar0 = func_81(iParam0);
	if (iVar0 != -1)
	{
		return func_79(iVar0);
	}
	return 1;
}

int func_79(int iParam0)//Position - 0x1DB1
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_80(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_80(int iParam0)//Position - 0x1E74
{
	return Global_2648918.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_81(int iParam0)//Position - 0x1E8B
{
	if (func_29(iParam0))
	{
		if (func_82(iParam0, 1))
		{
			return Global_2648918.f_818.f_11[func_64(iParam0)];
		}
	}
	return -1;
}

bool func_82(int iParam0, bool bParam1)//Position - 0x1EBB
{
	if (!func_29(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_83(iParam0))
		{
			return 0;
		}
	}
	return Global_1886967[iParam0 /*609*/].f_10 != func_14();
}

int func_83(int iParam0)//Position - 0x1EF4
{
	if (func_29(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10 != func_14())
		{
			return Global_1886967[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

struct<16> func_84(int iParam0)//Position - 0x1F29
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, PLAYER::GET_PLAYER_NAME(iParam0), 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_85()//Position - 0x1F50
{
	if (Global_1881898.f_6)
	{
		if (iLocal_88 != 3)
		{
			if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				Global_1881898.f_6 = 0;
			}
		}
	}
}

void func_86()//Position - 0x1F76
{
	PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/);
	PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/);
}

void func_87(bool bParam0)//Position - 0x1F8C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iLocal_114 = func_14();
	if (!Global_20813.f_1 == 7)
	{
		Global_20813.f_1 = 7;
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = iLocal_113;
	}
	if (iVar0 >= Global_1679748)
	{
		iVar0 = 0;
	}
	if (Global_23226)
	{
		func_50();
		Global_23226 = 0;
		return;
	}
	iVar1 = func_31();
	iVar1 = (iVar1 - func_96());
	if ((func_82(PLAYER::PLAYER_ID(), 0) && !func_95(1)) && iVar1 <= 0)
	{
		func_93();
		return;
	}
	func_88();
	func_97(Global_20794, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(25), SYSTEM::TO_FLOAT(iVar0), -1082130432, -1082130432, -1082130432);
	func_54("CELL_BOSSAGE" /* GXT: SecuroServ */);
	bVar2 = false;
	if (iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_51(13, &Local_93, 12, &Local_101, 4, &Local_89, &iLocal_116);
	}
	else
	{
		func_51(1, "", 1, "", 4, &Local_89, &iLocal_116);
	}
	iLocal_88 = 0;
}

void func_88()//Position - 0x2076
{
	int iVar0;
	int iVar1;
	
	func_97(Global_20794, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(25), -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	while (iVar0 < func_31())
	{
		if (Global_1881898.f_7[iVar0 /*8*/].f_1 == 1 && Global_1881898.f_7[iVar0 /*8*/].f_7 == 0)
		{
			switch (Global_1881898.f_7[iVar0 /*8*/])
			{
				case 0:
					if (func_92(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				
				case 1:
					if (func_90(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				}
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return;
	}
	func_89();
}

void func_89()//Position - 0x212B
{
	bool bVar0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	if (func_83(PLAYER::PLAYER_ID()))
	{
		func_22("BA_APP_NONEB" /* GXT: No Invites */);
	}
	else
	{
		func_22("BA_APP_NONE" /* GXT: No VIP Invites */);
	}
	func_22("");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_90(int iParam0, int iParam1)//Position - 0x2189
{
	struct<16> Var0;
	int iVar16;
	int iVar17;
	
	if (Global_1881898.f_7[iParam0 /*8*/].f_2 == func_14() || !func_47(Global_1881898.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	Var0 = { func_84(Global_1881898.f_7[iParam0 /*8*/].f_2) };
	func_91(&Var0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM1" /* GXT: Has challenged you to an Executive Deathmatch. */);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	iVar16 = 1;
	iVar17 = func_81(Global_1881898.f_7[iParam0 /*8*/].f_2);
	if (iVar17 != -1)
	{
		iVar16 = func_79(iVar17);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar16);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return 1;
}

void func_91(char* sParam0)//Position - 0x2238
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_92(int iParam0, int iParam1)//Position - 0x2246
{
	struct<16> Var0;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (Global_1881898.f_7[iParam0 /*8*/].f_2 == func_14() || !func_47(Global_1881898.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	Var0 = { func_84(Global_1881898.f_7[iParam0 /*8*/].f_2) };
	func_91(&Var0);
	bVar16 = func_77(Global_1881898.f_7[iParam0 /*8*/].f_2);
	iVar17 = func_76(Global_1881898.f_7[iParam0 /*8*/].f_2);
	if (iVar17 == 0)
	{
		if (bVar16)
		{
			func_22("BA_APP_BODYCT" /* GXT: Wants you to become an Associate. */);
		}
		else
		{
			func_22("BA_APP_BODY_T" /* GXT: Wants you to become a Bodyguard. */);
		}
	}
	else if (iVar17 == 1)
	{
		if (bVar16)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT3" /* GXT: Wants you to become an Associate.~n~~1~ other in this Organization. */);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T3" /* GXT: Wants you to become a Bodyguard.~n~~1~ other in this Organization. */);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iVar17);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		if (bVar16)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT2" /* GXT: Wants you to become an Associate.~n~~1~ others in this Organization. */);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T2" /* GXT: Wants you to become a Bodyguard.~n~~1~ others in this Organization. */);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iVar17);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	iVar18 = 1;
	iVar19 = func_81(Global_1881898.f_7[iParam0 /*8*/].f_2);
	if (iVar19 != -1)
	{
		iVar18 = func_79(iVar19);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar18);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return 1;
}

void func_93()//Position - 0x237B
{
	func_97(Global_20794, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_78(PLAYER::PLAYER_ID()));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_94());
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_22("BA_APP_NONEG" /* GXT: You are already a member of this Organization. */);
	func_22("CELL_AGBOSSPIC" /* GXT: CHAR_GANGAPP */);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_97(Global_20794, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_54("CELL_BOSSAGE" /* GXT: SecuroServ */);
	func_51(1, "", 1, "", 4, &Local_89, &iLocal_116);
	iLocal_88 = 2;
}

char* func_94()//Position - 0x2433
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_64(PLAYER::PLAYER_ID());
	if (iVar0 != func_14())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_69(iVar0, 28) || func_69(PLAYER::PLAYER_ID(), 28)) || func_67(iVar0)) && !func_65(iVar0))
			{
				return func_71(iVar0, 0);
			}
			if (Global_262145.f_36085 /* Tunable: 664611037 */)
			{
				return func_71(iVar0, 0);
			}
			if (!func_63() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_71(iVar0, 0);
			}
		}
		sVar1 = func_70(&(Global_1886967[iVar0 /*609*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_71(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

bool func_95(bool bParam0)//Position - 0x24FC
{
	return func_73(PLAYER::PLAYER_ID(), bParam0);
}

int func_96()//Position - 0x250E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_31())
	{
		if (Global_1881898.f_7[iVar0 /*8*/].f_7 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_97(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x2543
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_98()//Position - 0x25A6
{
	Global_1881898.f_1 = 0;
	func_99();
}

void func_99()//Position - 0x25B9
{
	Global_1881898.f_5 = 0;
}

void func_100(var uParam0)//Position - 0x25C8
{
	*uParam0 = 0;
}


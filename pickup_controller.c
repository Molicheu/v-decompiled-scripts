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
	int iLocal_18[45] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_64[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_84[76] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_161[102] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_264[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_274 = 0;
	bool bLocal_275 = 0;
	int iLocal_276[1] = { 0 };
	int iLocal_278 = 0;
	int iLocal_279[1] = { 0 };
	int iLocal_281 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_40();
	}
	func_24();
	while (true)
	{
		if (func_23(13) || func_23(14))
		{
			if (bLocal_275)
			{
				func_15();
			}
		}
		else if (!bLocal_275)
		{
			func_24();
		}
		func_14();
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x87
{
	if (!iLocal_274)
	{
		if (func_13(75))
		{
			func_10();
			iLocal_274 = 1;
		}
	}
	if (!iLocal_278)
	{
		if (func_13(75))
		{
			if (func_9())
			{
				func_6();
				iLocal_278 = 1;
			}
		}
	}
	if (!iLocal_281)
	{
		if (func_5(62))
		{
			if (func_9())
			{
				func_2();
				iLocal_281 = 1;
			}
		}
	}
}

void func_2()//Position - 0xE5
{
	if (func_9())
	{
		func_3(0, joaat("PICKUP_WEAPON_HATCHET"), 156.24f, 0f, 71.2f, 1, 1);
	}
}

void func_3(int iParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6)//Position - 0x10B
{
	int iVar0;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 1);
	if (bParam6)
	{
		MISC::SET_BIT(&iVar0, 4);
	}
	if (bParam5)
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	iLocal_279[iParam0] = OBJECT::CREATE_PICKUP_ROTATE(iParam1, func_4(iParam0), Param2, iVar0, -1, 2, true, 0);
	OBJECT::SET_PICKUP_REGENERATION_TIME(iLocal_279[iParam0], 600000);
}

Vector3 func_4(int iParam0)//Position - 0x168
{
	switch (iParam0)
	{
		case 0:
			return -35.64201f, 2871.7441f, 58.61521f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_5(int iParam0)//Position - 0x195
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114370.f_9088.f_330[iParam0 /*6*/];
}

void func_6()//Position - 0x1C1
{
	if (func_9())
	{
		func_7(0, joaat("PICKUP_WEAPON_RAILGUN"), 156.24f, 0f, 166.2f, 1, 1);
	}
}

void func_7(int iParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6)//Position - 0x1E7
{
	int iVar0;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 1);
	if (bParam6)
	{
		MISC::SET_BIT(&iVar0, 4);
	}
	if (bParam5)
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	iLocal_276[iParam0] = OBJECT::CREATE_PICKUP_ROTATE(iParam1, func_8(iParam0), Param2, iVar0, -1, 2, true, 0);
	OBJECT::SET_PICKUP_REGENERATION_TIME(iLocal_276[iParam0], 600000);
}

Vector3 func_8(int iParam0)//Position - 0x244
{
	switch (iParam0)
	{
		case 0:
			return 299.41788f, 3942.4434f, -3.18848f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_9()//Position - 0x271
{
	int iVar0;
	
	if (Global_153246 == 2)
	{
		return 1;
	}
	else if (Global_153246 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
				}
				return 1;
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_10()//Position - 0x329
{
	func_11(0, joaat("PICKUP_WEAPON_GRENADELAUNCHER"), 156.24f, 0f, 25.2f, 1, 1);
	func_11(1, joaat("PICKUP_WEAPON_RPG"), -92.68f, 62.64f, -264.24f, 1, 1);
	func_11(2, joaat("PICKUP_WEAPON_COMBATMG"), -70f, 0f, -40f, 1, 1);
	func_11(3, joaat("PICKUP_ARMOUR_STANDARD"), -71f, 0f, 168.48f, 1, 1);
	func_11(4, joaat("PICKUP_WEAPON_APPISTOL"), -100.8f, 92.8f, 0f, 1, 1);
	func_11(5, joaat("PICKUP_WEAPON_PUMPSHOTGUN"), 77.76f, 10.08f, -17.28f, 1, 1);
	func_11(6, joaat("PICKUP_WEAPON_SNIPERRIFLE"), 97.92f, 0f, 100.8f, 1, 1);
	func_11(7, joaat("PICKUP_WEAPON_STICKYBOMB"), 0f, 0f, 0f, 1, 1);
	func_11(8, joaat("PICKUP_WEAPON_STICKYBOMB"), 0f, 0f, 0f, 1, 1);
}

void func_11(int iParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6)//Position - 0x3F9
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam1 == joaat("PICKUP_ARMOUR_STANDARD"))
	{
		MISC::SET_BIT(&iVar0, 2);
		MISC::SET_BIT(&iVar0, 4);
		MISC::SET_BIT(&iVar0, 1);
		if (bParam5)
		{
			MISC::SET_BIT(&iVar0, 3);
		}
	}
	else
	{
		MISC::SET_BIT(&iVar0, 2);
		MISC::SET_BIT(&iVar0, 1);
		if (bParam6)
		{
			MISC::SET_BIT(&iVar0, 4);
		}
		if (bParam5)
		{
			MISC::SET_BIT(&iVar0, 3);
		}
	}
	iLocal_264[iParam0] = OBJECT::CREATE_PICKUP_ROTATE(iParam1, func_12(iParam0), Param2, iVar0, -1, 2, true, 0);
	OBJECT::SET_PICKUP_REGENERATION_TIME(iLocal_264[iParam0], 600000);
}

Vector3 func_12(int iParam0)//Position - 0x484
{
	switch (iParam0)
	{
		case 0:
			return 346.89f, 3999.51f, -6.4f;
			break;
		
		case 1:
			return 303.8f, 3949.8f, -5.19f;
			break;
		
		case 2:
			return 308.5f, 3972.7f, -8.16f;
			break;
		
		case 3:
			return 295.2f, 3961f, -7.74f;
			break;
		
		case 4:
			return 293f, 3969.6f, -9.21f;
			break;
		
		case 5:
			return 289.23f, 3955.22f, -6.54f;
			break;
		
		case 6:
			return 302.19f, 3983.12f, -11.02f;
			break;
		
		case 7:
			return 282.4f, 3966.9f, -7.63f;
			break;
		
		case 8:
			return 317.8f, 3968.13f, -10.11f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_13(int iParam0)//Position - 0x589
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114370.f_9088.f_99.f_58[iParam0];
}

void func_14()//Position - 0x5B6
{
	switch (Global_33073)
	{
		case 0:
			break;
		
		case 1:
			switch (Global_33074)
			{
				case 0:
					if (OBJECT::DOES_PICKUP_EXIST(iLocal_18[Global_33075]) && OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_18[Global_33075]))
					{
						Global_33076 = 0;
					}
					else
					{
						Global_33076 = 1;
					}
					break;
				
				case 1:
					if (OBJECT::DOES_PICKUP_EXIST(iLocal_84[Global_33075]) && OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_84[Global_33075]))
					{
						Global_33076 = 0;
					}
					else
					{
						Global_33076 = 1;
					}
					break;
				
				case 2:
					if (OBJECT::DOES_PICKUP_EXIST(iLocal_161[Global_33075]) && OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_161[Global_33075]))
					{
						Global_33076 = 0;
					}
					else
					{
						Global_33076 = 1;
					}
					break;
				
				case 3:
					Global_33073 = 3;
					break;
			}
			Global_33073 = 2;
			break;
		
		case 2:
			break;
		
		case 3:
			Global_33075 = 0;
			Global_33076 = 0;
			Global_33073 = 0;
			break;
	}
}

void func_15()//Position - 0x6A5
{
	func_22();
	func_21();
	func_20();
	func_19();
	if (iLocal_274)
	{
		func_18();
	}
	if (iLocal_278)
	{
		func_17();
	}
	if (iLocal_281)
	{
		func_16();
	}
	bLocal_275 = false;
}

void func_16()//Position - 0x6DF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_279[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_279[iVar0]);
		}
		iVar0++;
	}
	iLocal_281 = 0;
}

void func_17()//Position - 0x716
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_276[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_276[iVar0]);
		}
		iVar0++;
	}
	iLocal_278 = 0;
}

void func_18()//Position - 0x74D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_264[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_264[iVar0]);
		}
		iVar0++;
	}
	iLocal_274 = 0;
}

void func_19()//Position - 0x785
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_161[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_161[iVar0]);
		}
		iVar0++;
	}
}

void func_20()//Position - 0x7B7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 76)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_84[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_84[iVar0]);
		}
		iVar0++;
	}
}

void func_21()//Position - 0x7E9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_64[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_64[iVar0]);
		}
		iVar0++;
	}
}

void func_22()//Position - 0x81B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_18[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_18[iVar0]);
		}
		iVar0++;
	}
}

bool func_23(int iParam0)//Position - 0x84D
{
	return Global_43922 == iParam0;
}

void func_24()//Position - 0x85B
{
	func_36();
	func_33();
	func_29();
	func_25();
	bLocal_275 = true;
}

void func_25()//Position - 0x877
{
	func_26(0, joaat("PICKUP_WEAPON_ASSAULTRIFLE"), 90f, 0f, 70f, 0, 0, 1);
	func_26(1, joaat("PICKUP_WEAPON_ASSAULTRIFLE"), 90f, 0f, 0f, 0, 0, 1);
	func_26(2, joaat("PICKUP_WEAPON_ASSAULTRIFLE"), 0f, 0f, 0f, 1, 0, 1);
	func_26(3, joaat("PICKUP_WEAPON_ASSAULTRIFLE"), 0f, 0f, 0f, 1, 0, 1);
	func_26(4, joaat("PICKUP_WEAPON_ASSAULTRIFLE"), 0f, 0f, 0f, 1, 0, 1);
	func_26(5, joaat("PICKUP_WEAPON_ASSAULTRIFLE"), 0f, 0f, 0f, 1, 0, 1);
	func_26(6, joaat("PICKUP_WEAPON_GRENADE"), 0f, 0f, 0f, 1, 0, 1);
	func_26(7, joaat("PICKUP_WEAPON_GRENADE"), 0f, 0f, 0f, 1, 0, 1);
	func_26(8, joaat("PICKUP_WEAPON_GRENADE"), 95f, 0f, 0f, 0, 0, 1);
	func_26(9, joaat("PICKUP_WEAPON_GRENADE"), 0f, 0f, 0f, 1, 0, 1);
	func_26(10, joaat("PICKUP_WEAPON_GRENADELAUNCHER"), 0f, 0f, 0f, 1, 0, 1);
	func_26(11, joaat("PICKUP_WEAPON_GRENADELAUNCHER"), 118f, 0f, 92f, 0, 0, 0);
	func_26(12, joaat("PICKUP_WEAPON_GRENADELAUNCHER"), 82f, -60f, 0f, 0, 0, 0);
	func_26(13, joaat("PICKUP_WEAPON_MINIGUN"), 0f, 0f, 0f, 1, 1, 1);
	func_26(14, joaat("PICKUP_WEAPON_MG"), 0f, 0f, 0f, 1, 0, 1);
	func_26(15, joaat("PICKUP_WEAPON_MG"), 97.92f, 60.48f, 0f, 0, 0, 1);
	func_26(16, joaat("PICKUP_WEAPON_MG"), 0f, 0f, 0f, 1, 0, 1);
	func_26(17, joaat("PICKUP_WEAPON_MG"), 0f, 0f, 0f, 1, 0, 1);
	func_26(18, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 0f, 1, 0, 1);
	func_26(19, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 0f, 1, 0, 1);
	func_26(20, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 0f, 1, 0, 1);
	func_26(21, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 0f, 1, 0, 1);
	func_26(22, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 0f, 1, 0, 1);
	func_26(23, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 0f, 1, 0, 1);
	func_26(24, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 0f, 1, 0, 1);
	func_26(25, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 0f, 1, 0, 1);
	func_26(26, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 0f, 1, 0, 1);
	func_26(27, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 36f, 1, 0, 1);
	func_26(28, joaat("PICKUP_WEAPON_RPG"), 86f, 0f, 0f, 1, 0, 1);
	func_26(29, joaat("PICKUP_WEAPON_RPG"), 0f, 0f, 0f, 1, 0, 1);
	func_26(30, joaat("PICKUP_WEAPON_RPG"), 0f, 0f, 0f, 1, 0, 1);
	func_26(31, joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), -82f, 0f, 0f, 0, 0, 1);
	func_26(32, joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), 0f, 0f, 24f, 1, 0, 1);
	func_26(33, joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), 0f, 0f, 12f, 1, 0, 1);
	func_26(34, joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), 0f, 0f, 98f, 1, 0, 1);
	func_26(35, joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), 90f, 0f, 140f, 1, 0, 1);
	func_26(36, joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), 90f, 0f, 120f, 0, 0, 1);
	func_26(37, joaat("PICKUP_WEAPON_SMG"), 0f, 0f, 0f, 1, 0, 1);
	func_26(38, joaat("PICKUP_WEAPON_SMG"), 85.68f, -92.88f, 0f, 0, 0, 1);
	func_26(39, joaat("PICKUP_WEAPON_SMG"), 0f, 0f, 0f, 1, 0, 1);
	func_26(40, joaat("PICKUP_WEAPON_SMG"), 0f, 0f, 20f, 1, 0, 1);
	func_26(41, joaat("PICKUP_WEAPON_SMG"), 0f, 0f, 0f, 1, 0, 1);
	func_26(42, joaat("PICKUP_WEAPON_SMG"), 0f, 0f, 0f, 1, 1, 1);
	func_26(43, joaat("PICKUP_WEAPON_SNIPERRIFLE"), 0f, 0f, 42f, 1, 0, 1);
	func_26(44, joaat("PICKUP_WEAPON_SNIPERRIFLE"), 0f, 0f, 52f, 1, 0, 1);
	func_26(45, joaat("PICKUP_WEAPON_SNIPERRIFLE"), 90f, 0f, 87f, 1, 0, 1);
	func_26(46, joaat("PICKUP_WEAPON_SNIPERRIFLE"), 0f, 0f, 98f, 1, 0, 1);
	func_26(47, joaat("PICKUP_WEAPON_SNIPERRIFLE"), 0f, 0f, 20f, 1, 0, 1);
	func_26(48, joaat("PICKUP_WEAPON_STICKYBOMB"), 0f, 0f, 0f, 1, 0, 1);
	func_26(49, joaat("PICKUP_WEAPON_STICKYBOMB"), 0f, 0f, 0f, 1, 0, 1);
	func_26(50, joaat("PICKUP_WEAPON_RPG"), 63f, 0f, 0f, 0, 0, 1);
	func_26(51, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 4f, 1, 0, 1);
	func_26(52, joaat("PICKUP_WEAPON_PISTOL"), 90f, 90f, 90f, 0, 0, 0);
	func_26(53, joaat("PICKUP_WEAPON_SNIPERRIFLE"), 0f, 0f, 2f, 1, 0, 1);
	func_26(54, joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), 0f, 0f, 0f, 1, 0, 1);
	func_26(55, joaat("PICKUP_WEAPON_BAT"), 90f, 0f, 4f, 1, 0, 1);
	func_26(56, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(57, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(58, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(59, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(60, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(61, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 1, 1);
	func_26(62, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(63, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(64, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 1, 1);
	func_26(65, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(66, joaat("PICKUP_WEAPON_CROWBAR"), 90f, 0f, 45f, 0, 0, 1);
	func_26(67, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(68, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(69, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(70, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(71, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(72, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(73, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(74, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(75, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(76, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(77, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(78, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(79, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(80, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(81, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(82, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(83, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(84, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(85, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(86, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(87, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(88, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(89, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(90, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(91, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(92, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(93, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(94, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(95, joaat("PICKUP_WEAPON_CARBINERIFLE"), 0f, 0f, 87f, 1, 0, 1);
	func_26(96, joaat("PICKUP_WEAPON_ASSAULTSHOTGUN"), 0f, 0f, 0f, 1, 1, 1);
	func_26(97, joaat("PICKUP_WEAPON_ASSAULTSHOTGUN"), 85.7f, 0f, 136f, 0, 0, 0);
	func_26(98, joaat("PICKUP_PARACHUTE"), 10f, 0f, -90f, 0, 0, 0);
	func_26(99, joaat("PICKUP_WEAPON_PUMPSHOTGUN"), -88f, 0f, 0f, 0, 0, 0);
	func_26(100, joaat("PICKUP_PARACHUTE"), 11f, 0f, 28.16f, 0, 0, 0);
	func_26(101, joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), 92.8f, 0f, 50.4f, 0, 0, 0);
}

void func_26(int iParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, bool bParam7)//Position - 0xFF5
{
	int iVar0;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 1);
	if (bParam7)
	{
		MISC::SET_BIT(&iVar0, 4);
	}
	if (bParam5)
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	iLocal_161[iParam0] = OBJECT::CREATE_PICKUP_ROTATE(iParam1, func_28(iParam0, 0), Param2, iVar0, -1, 2, true, 0);
	OBJECT::SET_PICKUP_REGENERATION_TIME(iLocal_161[iParam0], 600000);
	if (bParam6)
	{
		INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_161[iParam0], func_27(iParam0));
	}
}

char* func_27(int iParam0)//Position - 0x1066
{
	switch (iParam0)
	{
		case 13:
			return "V_25_ObsvDckRm";
			break;
		
		case 42:
			return "GtaMloRoom002";
			break;
		
		case 31:
			return "V_70_GamesRm";
			break;
		
		case 61:
			return "V_68_BackRm";
			break;
		
		case 64:
			return "V_51_StoreRm";
			break;
		
		case 96:
			return "GtaMloRoomTun2";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

Vector3 func_28(int iParam0, bool bParam1)//Position - 0x10DA
{
	switch (iParam0)
	{
		case 0:
			if (bParam1 == 1)
			{
				return -1760.36f, 428.6f, 126.31f;
			}
			else
			{
				return -1756.974f, 427.531f, 126.7f;
			}
			break;
		
		case 1:
			return -1595.7422f, 2799.3706f, 16.0205f;
			break;
		
		case 2:
			if (bParam1 == 1)
			{
				return -197.14859f, 1482.6846f, 288.253f;
			}
			else
			{
				return -200.0114f, 1481.6971f, 289.4303f;
			}
			break;
		
		case 3:
			return 256.77f, 2841.0466f, 42.6599f;
			break;
		
		case 4:
			return -1360.2231f, 4435.7515f, 27.7754f;
			break;
		
		case 5:
			return 64.63f, 7051.2534f, 15.8272f;
			break;
		
		case 6:
			return -456.2838f, 1593.7988f, 358.0119f;
			break;
		
		case 7:
			if (bParam1 == 1)
			{
				return -3114.617f, 749.84454f, 11.59352f;
			}
			else
			{
				return -3111.6143f, 749.2816f, 12.6285f;
			}
			break;
		
		case 8:
			return 713.6797f, 4095.9688f, 33.765f;
			break;
		
		case 9:
			return 255.2671f, 2586.2815f, 43.9619f;
			break;
		
		case 10:
			return -1292.64f, -3345.82f, 23.27f;
			break;
		
		case 11:
			return 3111.531f, 2214.8481f, -8.6457f;
			break;
		
		case 12:
			if (bParam1 == 1)
			{
				return 555.82f, -839.05f, 39.84f;
			}
			else
			{
				return 555f, -837.81f, 55.08f;
			}
			break;
		
		case 13:
			return -2360f, 3245f, 91.9f;
			break;
		
		case 14:
			return 1691.1517f, 2640.859f, 54.0693f;
			break;
		
		case 15:
			return 1982.37f, 6203.64f, 41.15f;
			break;
		
		case 16:
			return -2979f, 1588f, 23.3f;
			break;
		
		case 17:
			return 963.5308f, -1824.0399f, 30.0708f;
			break;
		
		case 18:
			return -295.41867f, 6188.7856f, 30.48932f;
			break;
		
		case 19:
			return -1778f, 124f, 67.9f;
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 157.57587f, 3133.9941f, 42.45733f;
			}
			else
			{
				return 161.2925f, 3131.8538f, 42.5892f;
			}
			break;
		
		case 21:
			return -888f, 5406f, 30.5f;
			break;
		
		case 22:
			return -1840f, 793f, 138.7f;
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return -495.80392f, -1750.2067f, 17.42509f;
			}
			else
			{
				return -495.9968f, -1747.231f, 18.5194f;
			}
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return -1764.695f, -265.58093f, 47.6187f;
			}
			else
			{
				return -1763.3588f, -263.2062f, 47.1481f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 548.0715f, -1642.4506f, 27.2033f;
			}
			else
			{
				return 548.5943f, -1642.603f, 27.4425f;
			}
			break;
		
		case 26:
			return 736.0563f, 2595.556f, 72.9165f;
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 701.0009f, -1179.7015f, 23.28737f;
			}
			else
			{
				return 699.2748f, -1181.6705f, 33.2608f;
			}
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return -1146.74f, 4938.93f, 221.27f;
			}
			else
			{
				return -1149.437f, 4940.362f, 221.3282f;
			}
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return 2543.91f, -432.76f, 93.12f;
			}
			else
			{
				return 2513.5347f, -442.8484f, 113.0888f;
			}
			break;
		
		case 30:
			return -553.1764f, -2239.8767f, 121.3704f;
			break;
		
		case 31:
			if (bParam1 == 1)
			{
				return 987.16f, -108.02f, 73.3f;
			}
			else
			{
				return 987.15f, -105.88f, 74.13f;
			}
			break;
		
		case 32:
			return -1048f, -836f, 10.5f;
			break;
		
		case 33:
			return 312.6026f, 6606.8965f, 27.8835f;
			break;
		
		case 34:
			return -37.21f, 2871.26f, 58.61f;
			break;
		
		case 35:
			if (bParam1 == 1)
			{
				return 61.91f, 3690.51f, 38.83f;
			}
			else
			{
				return 59f, 3692f, 38.92f;
			}
			break;
		
		case 36:
			if (bParam1 == 1)
			{
				return 2933.33f, 4617.07f, 47.72f;
			}
			else
			{
				return 2934.499f, 4617.067f, 47.736f;
			}
			break;
		
		case 37:
			return 57.8219f, -1932.1208f, 20.4939f;
			break;
		
		case 38:
			return 378.26f, -334.3f, 45.63f;
			break;
		
		case 39:
			if (bParam1 == 1)
			{
				return 2673.6624f, 2793.7021f, 31.8124f;
			}
			else
			{
				return 2676.0454f, 2793.2493f, 39.5934f;
			}
			break;
		
		case 40:
			return -1582.278f, 770.3486f, 188.1942f;
			break;
		
		case 41:
			if (bParam1 == 1)
			{
				return -1641.139f, -1032.8152f, 4.63165f;
			}
			else
			{
				return -1640.5464f, -1034.1287f, 4.6074f;
			}
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return -151.09f, -214.36f, 44.73f;
			}
			else
			{
				return -159.7137f, -209.1721f, 48.938f;
			}
			break;
		
		case 43:
			return -1276.9862f, -2451.8862f, 72.0481f;
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -403.58267f, 1056.2117f, 322.84143f;
			}
			else
			{
				return -402f, 1053f, 323f;
			}
			break;
		
		case 45:
			return 2728.9866f, 1576.3821f, 65.5818f;
			break;
		
		case 46:
			if (bParam1 == 1)
			{
				return -221.27f, 6133.62f, 30.48f;
			}
			else
			{
				return -215.9002f, 6125.27f, 56.278f;
			}
			break;
		
		case 47:
			return 2092.2253f, 2492.3015f, 89.4046f;
			break;
		
		case 48:
			return -1124.666f, -967.1614f, 5.6319f;
			break;
		
		case 49:
			if (bParam1 == 1)
			{
				return -405.5299f, 323.40634f, 107.72269f;
			}
			else
			{
				return -405f, 325f, 108.7f;
			}
			break;
		
		case 50:
			return -1087.31f, -2429.3f, 13f;
			break;
		
		case 51:
			return -1042.6445f, 879.7763f, 160.2144f;
			break;
		
		case 52:
			if (bParam1 == 1)
			{
				return -1081.2289f, 678.94543f, 141.80563f;
			}
			else
			{
				return -1078.3499f, 682.2944f, 144.904f;
			}
			break;
		
		case 53:
			return -402.0679f, 1355.0619f, 329.8384f;
			break;
		
		case 54:
			return 153.3876f, 713.6584f, 207.2551f;
			break;
		
		case 55:
			return 186.9f, 243.0269f, 140.55f;
			break;
		
		case 56:
			if (bParam1 == 1)
			{
				return 302.01f, -3254.45f, 4.8f;
			}
			else
			{
				return 304f, -3259f, 5f;
			}
			break;
		
		case 57:
			if (bParam1 == 1)
			{
				return -398.57f, -1883.96f, 20.54f;
			}
			else
			{
				return -397f, -1885f, 21.5f;
			}
			break;
		
		case 58:
			return 780.7208f, -211.0616f, 65.1143f;
			break;
		
		case 59:
			return -1755.0115f, 184.3929f, 63.3711f;
			break;
		
		case 60:
			if (bParam1 == 1)
			{
				return 788.84f, 2164.06f, 52.1f;
			}
			else
			{
				return 786.0139f, 2164.9507f, 52.0981f;
			}
			break;
		
		case 61:
			return 1707.2278f, 4920.156f, 41.0637f;
			break;
		
		case 62:
			return -684.9417f, 5793.045f, 16.331f;
			break;
		
		case 63:
			return -2188f, 4251f, 48f;
			break;
		
		case 64:
			if (bParam1 == 1)
			{
				return -1099.08f, 2711.35f, 18.11f;
			}
			else
			{
				return -1103f, 2715f, 19f;
			}
			break;
		
		case 65:
			return 581f, -2805f, 5.5f;
			break;
		
		case 66:
			if (bParam1 == 1)
			{
				return -663.95f, -1998.85f, 6.1f;
			}
			else
			{
				return -665.4316f, -2002.0398f, 7.5968f;
			}
			break;
		
		case 67:
			return 1442.9049f, -1479.7588f, 62.2245f;
			break;
		
		case 68:
			if (bParam1 == 1)
			{
				return -361.92f, -141.76f, 37.58f;
			}
			else
			{
				return -356.5324f, -145.0359f, 41.7413f;
			}
			break;
		
		case 69:
			return 624.0116f, 558.6531f, 129.2455f;
			break;
		
		case 70:
			return 2833f, 2807f, 56.3785f;
			break;
		
		case 71:
			if (bParam1 == 1)
			{
				return 92.14449f, 6360.1816f, 30.37612f;
			}
			else
			{
				return 94.0769f, 6356.961f, 30.3761f;
			}
			break;
		
		case 72:
			return -2231.5142f, 3477.7915f, 29.3291f;
			break;
		
		case 73:
			return 377f, 3582f, 32.5f;
			break;
		
		case 74:
			if (bParam1 == 1)
			{
				return -2947.47f, 445.6f, 14.29f;
			}
			else
			{
				return -2948f, 441f, 15f;
			}
			break;
		
		case 75:
			if (bParam1 == 1)
			{
				return 1292.88f, -3341.78f, 4.9f;
			}
			else
			{
				return 1296f, -3348f, 5.2f;
			}
			break;
		
		case 76:
			if (bParam1 == 1)
			{
				return -1165.46f, -2054.09f, 13.2f;
			}
			else
			{
				return -1165.8832f, -2051.0264f, 13.2268f;
			}
			break;
		
		case 77:
			if (bParam1 == 1)
			{
				return 1235.57f, -452.01f, 65.7f;
			}
			else
			{
				return 1235f, -450f, 66.5f;
			}
			break;
		
		case 78:
			return -467.0458f, -934.8019f, 46.9844f;
			break;
		
		case 79:
			return 226.7f, -1761f, 28.5f;
			break;
		
		case 80:
			if (bParam1 == 1)
			{
				return 1218.07f, 1898.69f, 76.87f;
			}
			else
			{
				return 1221f, 1898f, 77.4f;
			}
			break;
		
		case 81:
			if (bParam1 == 1)
			{
				return 1545.99f, 3802.7f, 32.42f;
			}
			else
			{
				return 1535.8291f, 3798.2166f, 33.4563f;
			}
			break;
		
		case 82:
			return 756.8601f, 6462.329f, 30.4229f;
			break;
		
		case 83:
			return -2319f, 4124f, 26f;
			break;
		
		case 84:
			return -3185f, 1053f, 20.2f;
			break;
		
		case 85:
			return 818.9215f, -3188.1667f, 4.9007f;
			break;
		
		case 86:
			if (bParam1 == 1)
			{
				return -451.05f, -2264.24f, 6.61f;
			}
			else
			{
				return -457.3656f, -2262.646f, 7.5212f;
			}
			break;
		
		case 87:
			if (bParam1 == 1)
			{
				return 1409.86f, -757.22f, 65.8f;
			}
			else
			{
				return 1410.091f, -752.1061f, 66.2362f;
			}
			break;
		
		case 88:
			return 8.4875f, -441.2103f, 44.5639f;
			break;
		
		case 89:
			if (bParam1 == 1)
			{
				return -935.04f, 387.39f, 76.62f;
			}
			else
			{
				return -937.0176f, 391.544f, 80.2377f;
			}
			break;
		
		case 90:
			if (bParam1 == 1)
			{
				return 2748.49f, 3463.02f, 54.77f;
			}
			else
			{
				return 2746.5537f, 3463.5254f, 54.7144f;
			}
			break;
		
		case 91:
			return 1898.8965f, 4921.9746f, 47.8088f;
			break;
		
		case 92:
			if (bParam1 == 1)
			{
				return -315.51f, 6310.89f, 31.37f;
			}
			else
			{
				return -315.9772f, 6307.3853f, 31.4906f;
			}
			break;
		
		case 93:
			return -1171f, 4927f, 224f;
			break;
		
		case 94:
			return -281.1712f, 2528.0125f, 73.6376f;
			break;
		
		case 95:
			if (bParam1 == 1)
			{
				return 68.45f, 3756.27f, 38.74f;
			}
			else
			{
				return 68.453f, 3758.9668f, 38.7395f;
			}
			break;
		
		case 96:
			return 25.2888f, -634.2637f, 6.5084f;
			break;
		
		case 97:
			if (bParam1 == 1)
			{
				return -1146.67f, 4939.11f, 221.27f;
			}
			else
			{
				return -1145.2826f, 4940.2856f, 221.3038f;
			}
			break;
		
		case 98:
			return 441.64f, 5570.38f, 780.45f;
			break;
		
		case 99:
			if (bParam1)
			{
				return 1353.1516f, 4377.2227f, 43.3416f;
			}
			else
			{
				return 1357.2092f, 4388.445f, 43.872f;
			}
			break;
		
		case 100:
			return -102.0671f, -968.1538f, 295.5635f;
			break;
		
		case 101:
			return 2492.6902f, 4963.014f, 43.6478f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_29()//Position - 0x2017
{
	func_30(0, 0f, 0f, 0f, 0, 0);
	func_30(1, 0f, 0f, 24f, 0, 0);
	func_30(2, 0f, 0f, 60f, 1, 1);
	func_30(3, 0f, 0f, 45f, 0, 0);
	func_30(4, 0f, 0f, 55f, 1, 0);
	func_30(5, 0f, 0f, 0f, 0, 0);
	func_30(6, 0f, 0f, 0f, 0, 0);
	func_30(7, 0f, 0f, 0f, 0, 0);
	func_30(8, 0f, 0f, 90f, 1, 1);
	func_30(9, 0f, 0f, 0f, 0, 0);
	func_30(10, 0f, 0f, -112f, 0, 0);
	func_30(11, 0f, 0f, 0f, 0, 0);
	func_30(12, 0f, 0f, 0f, 0, 0);
	func_30(13, 0f, 0f, 0f, 0, 0);
	func_30(14, 0f, 0f, 0f, 0, 0);
	func_30(15, 0f, 0f, 35f, 0, 0);
	func_30(16, 0f, 0f, 13f, 0, 0);
	func_30(17, 0f, 0f, 0f, 0, 1);
	func_30(18, 0f, 0f, -64f, 1, 0);
	func_30(19, 0f, 0f, 0f, 0, 0);
	func_30(20, 0f, 0f, -62.4f, 1, 0);
	func_30(21, 0f, 0f, 0f, 0, 0);
	func_30(22, 0f, 0f, 0f, 0, 0);
	func_30(23, 0f, 0f, 0f, 0, 0);
	func_30(24, 0f, 0f, 95f, 0, 0);
	func_30(25, 0f, 0f, 0f, 0, 0);
	func_30(26, 0f, 0f, -15f, 1, 0);
	func_30(27, 0f, 0f, 0f, 0, 0);
	func_30(28, 0f, 0f, -5f, 0, 0);
	func_30(29, 5f, 0f, -45f, 0, 0);
	func_30(30, 0f, 0f, 0f, 0, 0);
	func_30(31, 6f, 0f, 51f, 0, 0);
	func_30(32, 0f, 0f, -28f, 0, 0);
	func_30(33, 0f, 0f, 33f, 0, 0);
	func_30(34, 0f, 0f, 0f, 0, 0);
	func_30(35, 0f, 0f, 0f, 0, 0);
	func_30(36, 5f, 0f, 30.2f, 1, 0);
	func_30(37, 0f, 0f, 0f, 1, 0);
	func_30(38, 0f, 0f, 70.5f, 1, 1);
	func_30(39, 0f, 0f, 70f, 1, 0);
	func_30(40, 0f, 0f, 45f, 0, 0);
	func_30(41, 0f, 0f, -7f, 1, 0);
	func_30(42, 0f, 0f, -13f, 1, 0);
	func_30(43, 0f, 0f, 44.4f, 1, 0);
	func_30(44, 0f, 0f, 35f, 0, 0);
	func_30(45, 0f, 0f, 89.8f, 1, 0);
	func_30(46, 0f, 0f, -166f, 0, 0);
	func_30(47, 0f, 0f, 0f, 0, 0);
	func_30(48, 0f, 0f, 0f, 0, 1);
	func_30(49, 0f, 2f, 90f, 1, 0);
	func_30(50, 0f, 0f, 34f, 0, 0);
	func_30(51, 0f, 0f, 59f, 1, 1);
	func_30(52, 0f, 0f, 5f, 0, 0);
	func_30(53, 0f, 0f, 70f, 0, 0);
	func_30(54, 0f, 0f, 104f, 0, 0);
	func_30(55, 0f, 0f, -85f, 0, 0);
	func_30(56, 0f, 0f, 32f, 0, 0);
	func_30(57, 0f, 0f, 38f, 1, 0);
	func_30(58, 0f, 0f, 100f, 0, 1);
	func_30(59, 0f, 0f, 70f, 1, 0);
	func_30(60, 0f, 0f, 69.7f, 1, 0);
	func_30(61, 0f, 0f, 100f, 0, 0);
	func_30(62, 0f, 20.1f, 52.5f, 1, 0);
	func_30(63, 0f, 0f, 339f, 1, 1);
	func_30(64, 0f, 0f, 61f, 0, 0);
	func_30(65, 0f, 0f, 284f, 1, 1);
	func_30(66, 0f, 0f, -20f, 1, 0);
	func_30(67, 6f, 0f, 0f, 1, 0);
	func_30(68, 6f, 0f, -215f, 1, 0);
	func_30(69, -6f, 0f, -40f, 1, 0);
	func_30(70, 6f, 0f, 140f, 1, 0);
	func_30(71, 6f, 0f, -110f, 1, 0);
	func_30(72, -6f, 0f, -110f, 1, 0);
	func_30(73, 6f, 0f, -7f, 1, 0);
	func_30(74, 6f, 0f, 173f, 1, 0);
	func_30(75, 0f, 0f, 23.3f, 1, 0);
}

void func_30(int iParam0, struct<3> Param1, bool bParam4, bool bParam5)//Position - 0x2437
{
	int iVar0;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 1);
	MISC::SET_BIT(&iVar0, 8);
	MISC::SET_BIT(&iVar0, 4);
	if (!bParam4)
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	iLocal_84[iParam0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), func_32(iParam0, 0), Param1, iVar0, -1, 2, true, 0);
	OBJECT::SET_PICKUP_REGENERATION_TIME(iLocal_84[iParam0], 600000);
	if (bParam5)
	{
		INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_84[iParam0], func_31(iParam0));
	}
}

char* func_31(int iParam0)//Position - 0x24AF
{
	switch (iParam0)
	{
		case 2:
			return "V_25_ControlRm";
			break;
		
		case 8:
			return "FireDeptRoom";
			break;
		
		case 15:
			return "Inside Dam";
			break;
		
		case 17:
			return "V_CarModRoom";
			break;
		
		case 20:
			return "V_70_Toilet";
			break;
		
		case 38:
			return "rm_garage";
			break;
		
		case 48:
			return "GtaMloRoom001";
			break;
		
		case 51:
			return "v_refit";
			break;
		
		case 58:
			return "V_39_ShopRm";
			break;
		
		case 63:
			return "V_FIB03_atr_off1";
			break;
		
		case 65:
			return "GtaMloRoomTun2";
			break;
		
		case 67:
			return "V_34_ProcessRm";
			break;
		
		case 68:
			return "V_34_Ent_office";
			break;
		
		case 69:
			return "V_34_WareRm";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

Vector3 func_32(int iParam0, bool bParam1)//Position - 0x259C
{
	switch (iParam0)
	{
		case 0:
			return 131.2f, 6920.1f, 20.8f;
			break;
		
		case 1:
			if (bParam1 == 1)
			{
				return -1048.5695f, 4917.414f, 208.4216f;
			}
			else
			{
				return -1046.2772f, 4918.7393f, 211.5379f;
			}
			break;
		
		case 2:
			return -2358.46f, 3251.397f, 100.5504f;
			break;
		
		case 3:
			if (bParam1 == 1)
			{
				return -247.62189f, 6331.341f, 31.42602f;
			}
			else
			{
				return -249.9504f, 6331.219f, 32.7262f;
			}
			break;
		
		case 4:
			if (bParam1 == 1)
			{
				return -140.9f, -2491.45f, 43.45f;
			}
			else
			{
				return -141.0976f, -2498.239f, 40.0124f;
			}
			break;
		
		case 5:
			if (bParam1 == 1)
			{
				return -2924.6968f, 46.50282f, 10.60369f;
			}
			else
			{
				return -2925.7f, 47.4f, 11.6f;
			}
			break;
		
		case 6:
			return -793.1981f, -726.4421f, 26.28f;
			break;
		
		case 7:
			if (bParam1 == 1)
			{
				return 124.00925f, -673.00964f, 41.02729f;
			}
			else
			{
				return 123.5196f, -674.2917f, 41.4945f;
			}
			break;
		
		case 8:
			if (bParam1 == 1)
			{
				return 1195.7374f, -1481.6945f, 33.8595f;
			}
			else
			{
				return 1194.7092f, -1482.4723f, 33.9594f;
			}
			break;
		
		case 9:
			if (bParam1 == 1)
			{
				return -35.88743f, 1945.7378f, 189.18681f;
			}
			else
			{
				return -35.5254f, 1947.2894f, 189.186f;
			}
			break;
		
		case 10:
			if (bParam1)
			{
				return 753.4579f, 4174.9956f, 39.8011f;
			}
			else
			{
				return 751.72f, 4175.14f, 40.95f;
			}
			break;
		
		case 11:
			if (bParam1 == 1)
			{
				return 1791.2565f, 4592.3833f, 36.68283f;
			}
			else
			{
				return 1789.8f, 4592.4f, 36.78f;
			}
			break;
		
		case 12:
			return 341.311f, 2618.9182f, 43.5124f;
			break;
		
		case 13:
			return 442.3755f, -223.602f, 55.0215f;
			break;
		
		case 14:
			if (bParam1 == 1)
			{
				return 1291.02f, -1760.94f, 51.05f;
			}
			else
			{
				return 1286.5f, -1754.4f, 52f;
			}
			break;
		
		case 15:
			if (bParam1 == 1)
			{
				return 1659.4376f, 5.4271f, 165.1176f;
			}
			else
			{
				return 1658.621f, 6.7752f, 166.1676f;
			}
			break;
		
		case 16:
			if (bParam1 == 1)
			{
				return 1645.91f, 4866.72f, 40.98f;
			}
			else
			{
				return 1647.3992f, 4865.8394f, 41f;
			}
			break;
		
		case 17:
			return -1144.5892f, -2004.4523f, 12.3803f;
			break;
		
		case 18:
			if (bParam1 == 1)
			{
				return -1047.3f, -520.6f, 35f;
			}
			else
			{
				return -1048.32f, -521.2f, 35.14f;
			}
			break;
		
		case 19:
			if (bParam1 == 1)
			{
				return -1576.0459f, -587.82574f, 33.97909f;
			}
			else
			{
				return -1576.8167f, -586.3887f, 34.8528f;
			}
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 953.44f, -123.42f, 73.35f;
			}
			else
			{
				return 954.5f, -121.34f, 74.18f;
			}
			break;
		
		case 21:
			if (bParam1 == 1)
			{
				return 1134.2009f, -665.94135f, 56.08261f;
			}
			else
			{
				return 1135.4014f, -663.7875f, 56.088f;
			}
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return -2196.1975f, 248.9123f, 173.612f;
			}
			else
			{
				return -2195.0288f, 250.4256f, 173.6017f;
			}
			break;
		
		case 23:
			return 29.2f, 3635.4f, 39.8f;
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return 1724.4291f, 3299.0234f, 40.2235f;
			}
			else
			{
				return 1721.9596f, 3300.4644f, 40.3835f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 2617.3206f, 3659.452f, 100.38673f;
			}
			else
			{
				return 2612.7124f, 3662.5642f, 101.1074f;
			}
			break;
		
		case 26:
			return -459.9625f, 1101.076f, 328.0211f;
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 2432.6072f, 4994.3335f, 45.25828f;
			}
			else
			{
				return 2430.9065f, 4995.561f, 45.2685f;
			}
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return 3722.4556f, 4521.837f, 20.39456f;
			}
			else
			{
				return 3724.5f, 4524.5f, 21.6f;
			}
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return -446.9024f, 5997.598f, 30.3407f;
			}
			else
			{
				return -446.045f, 6000.882f, 31.9163f;
			}
			break;
		
		case 30:
			return 3291.4f, 5192.5f, 18.4f;
			break;
		
		case 31:
			if (bParam1 == 1)
			{
				return 390.81f, -1436.07f, 28.45f;
			}
			else
			{
				return 388.7f, -1434.3f, 29.8f;
			}
			break;
		
		case 32:
			return -445.26f, -442.49f, 32.26f;
			break;
		
		case 33:
			if (bParam1)
			{
				return -1501.46f, 858.17f, 180.59f;
			}
			else
			{
				return -1500.08f, 857.59f, 180.59f;
			}
			break;
		
		case 34:
			return 2822.2f, -741.4f, 1.8f;
			break;
		
		case 35:
			if (bParam1 == 1)
			{
				return -3166.9783f, 1102.6224f, 19.80827f;
			}
			else
			{
				return -3165.6125f, 1102.2405f, 19.8928f;
			}
			break;
		
		case 36:
			if (bParam1 == 1)
			{
				return 1842.8818f, 3670.4568f, 32.68f;
			}
			else
			{
				return 1841.114f, 3675.253f, 34.086f;
			}
			break;
		
		case 37:
			if (bParam1 == 1)
			{
				return 1828.7944f, 2605.504f, 44.61582f;
			}
			else
			{
				return 1830.535f, 2603.828f, 45.7491f;
			}
			break;
		
		case 38:
			if (bParam1 == 1)
			{
				return -32.61f, -1089.67f, 25.42f;
			}
			else
			{
				return -40.0528f, -1084.016f, 26.6224f;
			}
			break;
		
		case 39:
			if (bParam1 == 1)
			{
				return 1439.0122f, 6336.812f, 22.96477f;
			}
			else
			{
				return 1445.544f, 6334.057f, 23.975f;
			}
			break;
		
		case 40:
			if (bParam1 == 1)
			{
				return -782.5126f, -1352.2454f, 8.0001f;
			}
			else
			{
				return -784.4851f, -1351.364f, 8.1001f;
			}
			break;
		
		case 41:
			if (bParam1 == 1)
			{
				return 962.88055f, -1826.4192f, 30.07195f;
			}
			else
			{
				return 963.1673f, -1831.149f, 36.2055f;
			}
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return -1246.155f, -1531.6471f, 3.2962f;
			}
			else
			{
				return -1246.494f, -1533.677f, 4.5262f;
			}
			break;
		
		case 43:
			if (bParam1 == 1)
			{
				return -765.5466f, 698.8101f, 143.36932f;
			}
			else
			{
				return -761.1058f, 701.9452f, 145.05f;
			}
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -512.10944f, 28.86313f, 43.6153f;
			}
			else
			{
				return -513.4391f, 30.9069f, 43.9018f;
			}
			break;
		
		case 45:
			if (bParam1 == 1)
			{
				return 781.38385f, 1292.073f, 359.29965f;
			}
			else
			{
				return 780.3879f, 1295.705f, 361.6941f;
			}
			break;
		
		case 46:
			return 208.69f, 337.76f, 104.64f;
			break;
		
		case 47:
			if (bParam1 == 1)
			{
				return -1889.99f, 2078.38f, 140f;
			}
			else
			{
				return -1890.24f, 2073.26f, 140.11f;
			}
			break;
		
		case 48:
			return 153.6156f, -3073.9983f, 4.8962f;
			break;
		
		case 49:
			if (bParam1)
			{
				return -306.2449f, -1180.5382f, 22.711f;
			}
			else
			{
				return -304.0894f, -1180.886f, 23.9493f;
			}
			break;
		
		case 50:
			return -2006.9866f, -556.4998f, 11.8813f;
			break;
		
		case 51:
			if (bParam1 == 1)
			{
				return -590.20795f, -289.8196f, 40.68631f;
			}
			else
			{
				return -588.1934f, -290.4782f, 43.7101f;
			}
			break;
		
		case 52:
			return -1795.8262f, -855.7111f, 8.2048f;
			break;
		
		case 53:
			return -1557.108f, -1155.2465f, 2.9158f;
			break;
		
		case 54:
			if (bParam1 == 1)
			{
				return -1470.71f, -1389.33f, 1.58f;
			}
			else
			{
				return -1467.4833f, -1387.5068f, 3.1432f;
			}
			break;
		
		case 55:
			return -684.8126f, -180.648f, 48.02f;
			break;
		
		case 56:
			if (bParam1 == 1)
			{
				return -1311.4127f, 640.11536f, 136.92444f;
			}
			else
			{
				return -1307.062f, 641.4211f, 138.0582f;
			}
			break;
		
		case 57:
			return 2493.6855f, 4963.541f, 43.7358f;
			break;
		
		case 58:
			if (bParam1 == 1)
			{
				return 1392.76f, 3602.94f, 33.98f;
			}
			else
			{
				return 1392.6086f, 3605.7986f, 34.9939f;
			}
			break;
		
		case 59:
			if (bParam1 == 1)
			{
				return -527.33f, 5295.7f, 73.17f;
			}
			else
			{
				return -535.4436f, 5297.496f, 76.3891f;
			}
			break;
		
		case 60:
			if (bParam1 == 1)
			{
				return -564.26f, 5353.13f, 69.23f;
			}
			else
			{
				return -551.5837f, 5349.4043f, 75.253f;
			}
			break;
		
		case 61:
			if (bParam1 == 1)
			{
				return 3.18f, -1827.1f, 24.22f;
			}
			else
			{
				return 0.1911f, -1825.9047f, 24.3295f;
			}
			break;
		
		case 62:
			if (bParam1 == 1)
			{
				return 62.25f, 3681.06f, 38.84f;
			}
			else
			{
				return 63.8867f, 3683.49f, 39.1543f;
			}
			break;
		
		case 63:
			return 155.384f, -741.179f, 258.6519f;
			break;
		
		case 64:
			if (bParam1 == 1)
			{
				return 126.61f, -1206.29f, 28.3f;
			}
			else
			{
				return 124.265f, -1205.882f, 28.2951f;
			}
			break;
		
		case 65:
			return 27.449f, -625.31f, 15.462f;
			break;
		
		case 66:
			if (bParam1 == 1)
			{
				return -129.04f, -662.04f, 39.51f;
			}
			else
			{
				return -129.0374f, -659.2689f, 41.0016f;
			}
			break;
		
		case 67:
			if (bParam1)
			{
				return 1138.62f, -1598.56f, 33.69f;
			}
			else
			{
				return 1138.63f, -1596.61f, 35.07f;
			}
			break;
		
		case 68:
			if (bParam1)
			{
				return 1149.68f, -1525.56f, 33.84f;
			}
			else
			{
				return 1147.55f, -1527.83f, 36.01f;
			}
			break;
		
		case 69:
			if (bParam1)
			{
				return 297.48f, -1448.79f, 28.97f;
			}
			else
			{
				return 296.44f, -1450.75f, 30.4f;
			}
			break;
		
		case 70:
			if (bParam1)
			{
				return 324.21f, -1392.68f, 31.51f;
			}
			else
			{
				return 322.27f, -1393.75f, 32.79f;
			}
			break;
		
		case 71:
			if (bParam1)
			{
				return 293.2f, -597.92f, 42.28f;
			}
			else
			{
				return 294.3f, -598.1f, 43.73f;
			}
			break;
		
		case 72:
			if (bParam1)
			{
				return 358f, -592.66f, 27.79f;
			}
			else
			{
				return 357.07f, -590.63f, 29.08f;
			}
			break;
		
		case 73:
			if (bParam1)
			{
				return -495.45f, -326.18f, 33.5f;
			}
			else
			{
				return -496.4f, -324.7f, 34.75f;
			}
			break;
		
		case 74:
			if (bParam1)
			{
				return -450.91f, -351.93f, 33.5f;
			}
			else
			{
				return -449.82f, -353.49f, 34.75f;
			}
			break;
		
		case 75:
			return -2258.833f, 323.9413f, 184.9015f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_33()//Position - 0x3374
{
	func_34(0, 0f, 0f, 0f, 1);
	func_34(1, 0f, 0f, 0f, 1);
	func_34(2, 0f, 0f, 0f, 1);
	func_34(3, 0f, 0f, 0f, 1);
	func_34(4, 0f, 0f, 0f, 1);
	func_34(5, 0f, 0f, 0f, 1);
	func_34(6, 0f, 0f, 0f, 1);
	func_34(7, 0f, 0f, 0f, 1);
	func_34(8, 0f, 0f, 0f, 1);
	func_34(9, 0f, 0f, 0f, 1);
	func_34(10, 0f, 0f, 0f, 1);
	func_34(11, 0f, 0f, 0f, 1);
	func_34(12, 0f, 0f, 0f, 1);
	func_34(13, 0f, 0f, 0f, 1);
	func_34(14, 0f, 0f, 0f, 1);
	func_34(15, 0f, 0f, 0f, 1);
	func_34(16, 0f, 0f, 0f, 1);
	func_34(17, 0f, 0f, 0f, 1);
	func_34(18, 0f, 0f, 0f, 1);
}

void func_34(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x3432
{
	int iVar0;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 4);
	MISC::SET_BIT(&iVar0, 1);
	MISC::SET_BIT(&iVar0, 8);
	if (bParam4)
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	iLocal_64[iParam0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_PETROLCAN"), func_35(iParam0), Param1, iVar0, -1, 2, true, 0);
	OBJECT::SET_PICKUP_REGENERATION_TIME(iLocal_64[iParam0], 600000);
}

Vector3 func_35(int iParam0)//Position - 0x3493
{
	switch (iParam0)
	{
		case 0:
			return 818.7551f, -1027.4293f, 25.4043f;
			break;
		
		case 1:
			return -1804.5659f, 794.3649f, 137.6856f;
			break;
		
		case 2:
			return 264.9156f, 2606.0127f, 43.8688f;
			break;
		
		case 3:
			return 1183.3037f, -330.2197f, 68.1744f;
			break;
		
		case 4:
			return 289.336f, -1272.1393f, 28.4408f;
			break;
		
		case 5:
			return -723.6323f, -936.4893f, 18.2141f;
			break;
		
		case 6:
			return -70.3154f, -1760.2888f, 28.539f;
			break;
		
		case 7:
			return 157.897f, -1562.516f, 28.2619f;
			break;
		
		case 8:
			return 172.5852f, 6601.821f, 30.8682f;
			break;
		
		case 9:
			return 1195.6464f, -1396.0403f, 34.2207f;
			break;
		
		case 10:
			return -1437.5946f, -282.2951f, 45.3922f;
			break;
		
		case 11:
			return -2073.7073f, -322.7324f, 12.3162f;
			break;
		
		case 12:
			return -2558.8562f, 2333.5364f, 32.2575f;
			break;
		
		case 13:
			return 1691.2345f, 4928.9194f, 41.2317f;
			break;
		
		case 14:
			return 43.4899f, 2773.5117f, 56.8786f;
			break;
		
		case 15:
			return 1042.862f, 2667.4263f, 38.7f;
			break;
		
		case 16:
			return 2668.9294f, 3260.676f, 54.2403f;
			break;
		
		case 17:
			return 2002.7366f, 3772.7563f, 31.4059f;
			break;
		
		case 18:
			return 1703.254f, 6415.81f, 31.7642f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_36()//Position - 0x36A6
{
	func_37(0, 0f, 0f, 6f, 1, 0, 0);
	func_37(1, 0f, 0f, 78f, 1, 0, 0);
	func_37(2, 90f, 0f, 2f, 1, 0, 0);
	func_37(3, 0f, 0f, 330f, 1, 0, 0);
	func_37(4, 0f, 0f, 0f, 1, 0, 0);
	func_37(5, 0f, 0f, 0f, 1, 0, 0);
	func_37(6, 0f, 0f, 6f, 1, 0, 0);
	func_37(7, 0f, 0f, 0f, 1, 0, 0);
	func_37(8, 90f, 0f, 0f, 0, 0, 0);
	func_37(9, 0f, 0f, 46f, 1, 0, 0);
	func_37(10, 90f, 0f, 9f, 1, 0, 0);
	func_37(11, -83.56f, 0f, 0f, 0, 0, 0);
	func_37(12, -102.96f, 0f, 0f, 0, 0, 0);
	func_37(13, 0f, 0f, 0f, 1, 0, 0);
	func_37(14, 0f, 0f, 0f, 1, 0, 0);
	func_37(15, 0f, 0f, 78f, 1, 0, 0);
	func_37(16, -90f, 0f, 145.4f, 0, 0, 0);
	func_37(17, 0f, 0f, 0f, 1, 0, 0);
	func_37(18, 0f, 0f, 42f, 1, 0, 0);
	func_37(19, 0f, 0f, 0f, 1, 0, 0);
	func_37(20, 0f, 0f, 0f, 1, 0, 0);
	func_37(21, 0f, 0f, 0f, 1, 0, 0);
	func_37(22, 0f, 0f, 3f, 1, 0, 0);
	func_37(23, 0f, 0f, 0f, 1, 0, 0);
	func_37(24, 0f, 0f, 0f, 1, 0, 0);
	func_37(25, 5f, 0f, -146f, 1, 0, 0);
	func_37(26, 0f, 0f, 108f, 1, 0, 0);
	func_37(27, 0f, 0f, 130f, 1, 0, 0);
	func_37(28, -90f, 0f, -180f, 0, 1, 0);
	func_37(29, 0f, 0f, 14f, 1, 0, 0);
	func_37(30, 0f, 0f, 0f, 1, 0, 0);
	func_37(31, 0f, 0f, 0f, 1, 0, 0);
	func_37(32, 0f, 0f, 5f, 1, 0, 0);
	func_37(33, 0f, 0f, 72f, 1, 0, 0);
	func_37(34, 0f, 0f, 27f, 1, 0, 0);
	func_37(35, 0f, 0f, 7f, 1, 0, 0);
	func_37(36, 0f, 0f, 7f, 1, 0, 0);
	func_37(37, 0f, 0f, 7f, 1, 0, 0);
	func_37(38, 0f, 0f, 7f, 1, 0, 0);
	func_37(39, -90f, 0f, -20f, 0, 1, 0);
	func_37(40, -90f, 0f, 0f, 0, 0, 0);
	func_37(41, 0f, 0f, 7f, 1, 1, 0);
	func_37(42, 0f, 0f, 7f, 1, 0, 0);
	func_37(43, -92f, 0f, -18f, 0, 0, 0);
	func_37(44, 90f, 0f, -108f, 0, 0, 0);
}

void func_37(int iParam0, struct<3> Param1, bool bParam4, bool bParam5, bool bParam6)//Position - 0x3932
{
	int iVar0;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 4);
	MISC::SET_BIT(&iVar0, 1);
	if (bParam6)
	{
		MISC::SET_BIT(&iVar0, 8);
	}
	if (bParam4)
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	iLocal_18[iParam0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_ARMOUR_STANDARD"), func_39(iParam0, 0), Param1, iVar0, -1, 2, true, 0);
	OBJECT::SET_PICKUP_REGENERATION_TIME(iLocal_18[iParam0], 600000);
	if (bParam5)
	{
		INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_18[iParam0], func_38(iParam0));
	}
}

char* func_38(int iParam0)//Position - 0x39AE
{
	switch (iParam0)
	{
		case 28:
			return "PH_LOBBY_ROOM";
			break;
		
		case 39:
			return "V_FIB03_atr_off2";
			break;
		
		case 41:
			return "GtaMloRoomTun2";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

Vector3 func_39(int iParam0, bool bParam1)//Position - 0x39F7
{
	switch (iParam0)
	{
		case 0:
			return 473.1829f, -2643.1838f, 4.7209f;
			break;
		
		case 1:
			if (bParam1 == 1)
			{
				return 291.41f, -2090.78f, 16.29f;
			}
			else
			{
				return 289.2062f, -2091.221f, 16.0234f;
			}
			break;
		
		case 2:
			if (bParam1 == 1)
			{
				return 1173.8392f, -1499.7808f, 33.84875f;
			}
			else
			{
				return 1173.5656f, -1495.7628f, 34.1121f;
			}
			break;
		
		case 3:
			if (bParam1 == 1)
			{
				return -461.71393f, -1699.2019f, 17.85122f;
			}
			else
			{
				return -462f, -1701f, 18.8f;
			}
			break;
		
		case 4:
			return -1384.6276f, -521.0416f, 30.084f;
			break;
		
		case 5:
			return -521.5692f, -601.7532f, 29.4482f;
			break;
		
		case 6:
			return -664.5f, 165.4552f, 58.3821f;
			break;
		
		case 7:
			return 329.3609f, -190.5986f, 53.2262f;
			break;
		
		case 8:
			if (bParam1 == 1)
			{
				return -477.44f, -1052.99f, 39.81f;
			}
			else
			{
				return -478.7744f, -1051.0792f, 40.93f;
			}
			break;
		
		case 9:
			return -1268.0712f, -1917.4076f, 4.8583f;
			break;
		
		case 10:
			return -1221.908f, -2771.7622f, 13.0545f;
			break;
		
		case 11:
			return -3088.6682f, 652.9629f, 0.989f;
			break;
		
		case 12:
			if (bParam1 == 1)
			{
				return -629.3048f, 2036.0667f, 157.3307f;
			}
			else
			{
				return -627.2166f, 2035.032f, 157.5585f;
			}
			break;
		
		case 13:
			if (bParam1 == 1)
			{
				return -2071.9026f, 3411.5042f, 30.36414f;
			}
			else
			{
				return -2048.4832f, 3406.1624f, 31.1504f;
			}
			break;
		
		case 14:
			return -424.0321f, 4012.767f, 80.4744f;
			break;
		
		case 15:
			return 1983.1f, 5174.5f, 47.6f;
			break;
		
		case 16:
			if (bParam1 == 1)
			{
				return 2341.1f, 2576f, 45.7f;
			}
			else
			{
				return 2340.17f, 2573.89f, 45.77f;
			}
			break;
		
		case 17:
			if (bParam1 == 1)
			{
				return 1663.9004f, -25.91945f, 172.77475f;
			}
			else
			{
				return 1663.96f, -24.1101f, 172.7747f;
			}
			break;
		
		case 18:
			if (bParam1 == 1)
			{
				return 2614.4507f, 1695.1271f, 26.59907f;
			}
			else
			{
				return 2617.729f, 1693.4167f, 30.8743f;
			}
			break;
		
		case 19:
			if (bParam1 == 1)
			{
				return -187.31f, 1545.16f, 314.07f;
			}
			else
			{
				return -187.0338f, 1555.6766f, 321.2431f;
			}
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 859.5025f, 2426.0396f, 53.18517f;
			}
			else
			{
				return 868.7573f, 2423.5361f, 60.8942f;
			}
			break;
		
		case 21:
			if (bParam1 == 1)
			{
				return -1822.0751f, 805.7814f, 137.7265f;
			}
			else
			{
				return -1822.9667f, 803.8147f, 138.2005f;
			}
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return -1852.9221f, 2054.4197f, 139.98405f;
			}
			else
			{
				return -1851.6283f, 2053.836f, 139.9841f;
			}
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return -1075.5149f, 4898.4966f, 213.27675f;
			}
			else
			{
				return -1070.6506f, 4898.9336f, 213.2752f;
			}
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return 1301.56f, 4306.6f, 36.39f;
			}
			else
			{
				return 1300.1f, 4308.1f, 37.3f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return -436.44f, 5983.5f, 30.49f;
			}
			else
			{
				return -437.94f, 5985.04f, 31.29f;
			}
			break;
		
		case 26:
			if (bParam1 == 1)
			{
				return 1840.5687f, 3693.7703f, 33.2668f;
			}
			else
			{
				return 1838.577f, 3692.028f, 33.6172f;
			}
			break;
		
		case 27:
			return 533.1f, -23.8f, 70.6f;
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return 445.83f, -986.48f, 29.69f;
			}
			else
			{
				return 446.4f, -988.5f, 29.77f;
			}
			break;
		
		case 29:
			return -1119.4977f, -847.3371f, 18.6886f;
			break;
		
		case 30:
			return 391.2f, -1603.9f, 28.38f;
			break;
		
		case 31:
			return -890.8f, -2386.2f, 13.4f;
			break;
		
		case 32:
			if (bParam1 == 1)
			{
				return 282.75f, 953.05f, 209.95f;
			}
			else
			{
				return 284.7f, 954.2f, 210.1514f;
			}
			break;
		
		case 33:
			return -2003.1145f, 544.7549f, 114.5077f;
			break;
		
		case 34:
			if (bParam1 == 1)
			{
				return -397.57858f, 1127.3531f, 321.72913f;
			}
			else
			{
				return -386.8739f, 1142.4197f, 321.5892f;
			}
			break;
		
		case 35:
			return -1521.8113f, 1560.201f, 106.9392f;
			break;
		
		case 36:
			return 1391.9453f, 3616.6548f, 37.9259f;
			break;
		
		case 37:
			if (bParam1 == 1)
			{
				return 45.37f, -1911.45f, 20.79f;
			}
			else
			{
				return 40.5177f, -1910.727f, 20.9706f;
			}
			break;
		
		case 38:
			if (bParam1 == 1)
			{
				return 68.14f, 3749.36f, 38.73f;
			}
			else
			{
				return 70.3786f, 3755.6055f, 38.7487f;
			}
			break;
		
		case 39:
			return 119.45f, -755.29f, 258.15f;
			break;
		
		case 40:
			if (bParam1 == 1)
			{
				return 156.35f, -1192.1f, 28.37f;
			}
			else
			{
				return 160.4134f, -1191.7f, 28.87f;
			}
			break;
		
		case 41:
			return 23.9296f, -633.9206f, 6.5084f;
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return 31.67f, 6542.78f, 30.44f;
			}
			else
			{
				return 30.9162f, 6546.791f, 30.4058f;
			}
			break;
		
		case 43:
			if (bParam1)
			{
				return 1333.0566f, 4381.278f, 43.3703f;
			}
			else
			{
				return 1331.3549f, 4392.887f, 44.012f;
			}
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -1147.31f, 4939.27f, 221.27f;
			}
			else
			{
				return -1149.3918f, 4938.771f, 221.3682f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_40()//Position - 0x4189
{
	func_22();
	func_21();
	func_20();
	func_19();
	if (iLocal_274)
	{
		func_18();
	}
	if (iLocal_278)
	{
		func_17();
	}
	if (iLocal_281)
	{
		func_16();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}


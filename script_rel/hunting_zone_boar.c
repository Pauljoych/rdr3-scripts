#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	float fLocal_8 = 0f;
	float fLocal_9 = 0f;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	struct<631> Var0;

	fLocal_8 = 1f;
	fLocal_9 = 1f;
	Var0 = -1;
	Var0.f_7 = 1077936128;
	Var0.f_8 = 1120403456;
	Var0.f_9 = 1120403456;
	Var0.f_10 = 1132068864;
	Var0.f_12.f_3 = 1061158912;
	Var0.f_12.f_4 = 1066611507;
	Var0.f_12.f_6 = 1;
	Var0.f_31 = 15;
	Var0.f_572 = 7;
	Var0.f_580 = 7;
	Var0.f_588 = 7;
	Var0.f_596 = 7;
	Var0.f_630 = 5;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (Var0.f_622)
		{
			if (func_1() > Global_40.f_9319[Var0 /*4*/].f_2)
			{
				Global_40.f_9319[Var0 /*4*/].f_2 = func_1();
				func_2(&(Global_40.f_9319[Var0 /*4*/].f_2), 0, 0, 24, 0, 0, 0, 0);
			}
		}
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
			Var0.f_619 = 1;
		}
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		func_3(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		func_3(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (func_4())
	{
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		func_3(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_627 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, true) };
	while (!func_5(&Var0) && !func_6(&Var0))
	{
		BUILTIN::WAIT(0);
	}
	func_3(&Var0);
	SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
}

int func_1()
{
	return Global_1899515;
}

void func_2(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_7(*uParam0);
	iVar1 = func_8(*uParam0);
	iVar2 = func_9(*uParam0);
	iVar3 = func_10(*uParam0);
	iVar4 = func_11(*uParam0);
	iVar5 = func_12(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_13(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_13(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_14(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_3(var uParam0)
{
	int iVar0;

	if (uParam0->f_626)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "isInspectingGround", false, -1);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		uParam0->f_626 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), uParam0->f_12);
			PLAYER::_0x00B156AFEBCC5AE0(uParam0->f_12);
		}
		if (!uParam0->f_621 || ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_12) || uParam0->f_619)
			{
				PED::DELETE_PED(&(uParam0->f_12));
			}
			else
			{
				ENTITY::_SET_ENTITY_HEALTH(uParam0->f_12, 0, Global_35);
				Global_40.f_9319[*uParam0 /*4*/].f_1 = 1;
				MAP::_MAP_DISCOVERY_SET_ENABLED(func_15(*uParam0));
				MAP::_0xD8C7162AB2E2AF45(func_16(*uParam0));
				func_17(0, -1);
				if (!func_18(466))
				{
					func_20(func_19(18, 0, 0, 0), 466, 40000);
				}
			}
		}
		else
		{
			if (uParam0->f_619 && uParam0->f_11 == 8)
			{
				if (func_21(Global_35) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_22(Global_35)) == uParam0->f_12)
				{
					func_23(*uParam0, 1);
					func_25(func_24(*uParam0), uParam0->f_12.f_1, ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true, false), 1, 0);
					func_27(func_26(joaat("TRACKED"), func_24(*uParam0)), 1);
					func_27(func_26(joaat("KILLED"), func_24(*uParam0)), 1);
					func_27(func_26(joaat("SKINNED"), func_24(*uParam0)), 1);
					STATS::_0xA59590050F80FF2E(func_24(*uParam0), 0, 1, 0);
					ENTITY::_0x6BCF5F3D8FFE988D(uParam0->f_12, 1);
					TASK::_0xA21AA2F0C2180125(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_12), 0);
					PERSISTENCE::_0x9D16896F0DBE78A2(ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true, false), 1f);
				}
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
		}
	}
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_12.f_9))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam0->f_12.f_9);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_3))
	{
		func_28(uParam0->f_3);
		VOLUME::_DELETE_VOLUME(uParam0->f_3);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2))
	{
		func_28(uParam0->f_2);
		VOLUME::_DELETE_VOLUME(uParam0->f_2);
		func_29(&(uParam0->f_5), uParam0->f_4, 0);
	}
	if (*uParam0 == 15)
	{
		FLOCK::_0x706B434FEFAD6A24(-1f);
		FLOCK::_0xA881F5C77A560906(-1f);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_6));
	}
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31[iVar0 /*36*/].f_1))
		{
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(uParam0->f_31[iVar0 /*36*/].f_1));
			if (uParam0->f_31[iVar0 /*36*/].f_9 != -1)
			{
				GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_31[iVar0 /*36*/].f_9), 1);
			}
			if (MAP::DOES_BLIP_EXIST(uParam0->f_31[iVar0 /*36*/]))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_31[iVar0 /*36*/]));
			}
			if (uParam0->f_31[iVar0 /*36*/].f_3 != 0)
			{
				ENTITY::_0xD2B9C78537ED5759(uParam0->f_31[iVar0 /*36*/].f_3);
			}
		}
		func_31(uParam0->f_31[iVar0 /*36*/].f_10);
		func_32(&(uParam0->f_31[iVar0 /*36*/].f_16), 1, 1);
		iVar0++;
	}
	func_33(uParam0);
}

bool func_4()
{
	return false;
}

bool func_5(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (uParam0->f_11 > 0)
	{
		bVar0 = false;
		bVar1 = false;
		if ((MISC::GET_GAME_TIMER() - uParam0->f_613) > 1200000)
		{
			bVar0 = true;
		}
		if (func_34() || func_35(Global_1935630, 131072))
		{
			bVar0 = true;
		}
		if ((SCRIPTS::_0x9E4EF615E307FBBE() && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("HUNTING1")) == 0) && !func_36(15))
		{
			bVar0 = true;
		}
		else if (func_37() && *uParam0 != 0)
		{
			iVar2 = func_38(0);
			if (iVar2 != 9 && iVar2 != 7)
			{
				bVar0 = true;
			}
		}
		else if (func_39(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			if (!Global_40.f_9319[*uParam0 /*4*/].f_1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12) && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_12))
					{
						func_40(200, 1);
					}
				}
			}
			bVar0 = true;
		}
		if (bVar0)
		{
			if (uParam0->f_622)
			{
				if (Global_40.f_9319[*uParam0 /*4*/].f_1)
				{
					bVar1 = true;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12) && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_12))
					{
						bVar1 = true;
					}
				}
				if (!bVar1)
				{
					func_41(Global_35, "HUNTING_LOST_TRAIL", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
				}
				if (func_1() > Global_40.f_9319[*uParam0 /*4*/].f_2)
				{
					Global_40.f_9319[*uParam0 /*4*/].f_2 = func_1();
					func_2(&(Global_40.f_9319[*uParam0 /*4*/].f_2), 0, 0, 24, 0, 0, 0, 0);
				}
			}
			return true;
		}
	}
	return false;
}

bool func_6(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_42(uParam0))
			{
				uParam0->f_11 = 1;
			}
			uParam0->f_613 = MISC::GET_GAME_TIMER();
			break;
		case 1:
			if (func_43(uParam0))
			{
				uParam0->f_11 = 9;
			}
			else
			{
				uParam0->f_11 = 2;
			}
			break;
		case 2:
			if (uParam0->f_623)
			{
				PED::_0xED9582B3DA8F02B4(func_44(0) + 1);
			}
			else
			{
				PED::_0xED9582B3DA8F02B4(1);
			}
			func_45(uParam0);
			uParam0->f_11 = 3;
			break;
		case 3:
			if (PED::_0x5E420FF293EE5472() && func_46(uParam0))
			{
				uParam0->f_11 = 4;
			}
			break;
		case 4:
			if (func_47(uParam0))
			{
				uParam0->f_11 = 5;
			}
			break;
		case 5:
			if (func_48(uParam0))
			{
				uParam0->f_11 = 6;
			}
			break;
		case 6:
			if (func_49(uParam0))
			{
				uParam0->f_11 = 7;
			}
			break;
		case 7:
			if (!uParam0->f_622)
			{
				func_50(uParam0);
			}
			func_51(uParam0);
			if (uParam0->f_621)
			{
				func_52(uParam0);
			}
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
				{
					if (ENTITY::IS_ENTITY_DEAD(uParam0->f_12))
					{
						Global_40.f_9319[*uParam0 /*4*/].f_1 = 1;
						MAP::_MAP_DISCOVERY_SET_ENABLED(func_15(*uParam0));
						MAP::_0xD8C7162AB2E2AF45(func_16(*uParam0));
						func_17(0, -1);
						if (!func_18(466))
						{
							func_20(func_19(18, 0, 0, 0), 466, 40000);
						}
						func_33(uParam0);
						if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
						{
							MAP::REMOVE_BLIP(&(uParam0->f_6));
						}
						uParam0->f_11 = 8;
					}
					else if ((uParam0->f_679 != 0 && !uParam0->f_680) && PED::IS_PED_IN_COMBAT(uParam0->f_12, 0))
					{
						AUDIO::_0xDC2F83A0612CA34D(uParam0->f_679);
						uParam0->f_680 = 1;
					}
					else if (uParam0->f_680)
					{
						if (!PED::IS_PED_IN_COMBAT(uParam0->f_12, 0))
						{
							AUDIO::_0x6AB944DF68B512D3(uParam0->f_679);
							uParam0->f_680 = 0;
						}
					}
				}
			}
			break;
		case 8:
			if (func_53(func_26(joaat("KILLED"), func_24(*uParam0))) < 1)
			{
				func_27(func_26(joaat("KILLED"), func_24(*uParam0)), 1);
			}
			if (func_54(uParam0))
			{
				func_17(0, -1);
				uParam0->f_11 = 9;
			}
			break;
		case 9:
			return true;
	}
	return false;
}

var func_7(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_55(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_8(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_9(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_10(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_11(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_12(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_13(int iParam0, int iParam1)
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
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
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
		default:
			break;
	}
	return 30;
}

void func_14(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_56(uParam0, iParam6);
	func_57(uParam0, iParam5);
	func_58(uParam0, iParam4);
	func_59(uParam0, iParam3);
	func_60(uParam0, iParam2);
	func_61(uParam0, iParam1);
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -372503450;
		case 1:
			return 1523666538;
		case 2:
			return 4951849;
		case 3:
			return -1644197791;
		case 4:
			return -1503385932;
		case 5:
			return 87178501;
		case 6:
			return -188752474;
		case 7:
			return -349166975;
		case 8:
			return -1290927903;
		case 9:
			return 637563550;
		case 10:
			return 1475355982;
		case 11:
			return 1724443719;
		case 12:
			return 1050506191;
		case 13:
			return 1623565947;
		case 14:
			return -1962265862;
		case 15:
			return 1526203407;
		default:
			break;
	}
	return 0;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 13083484;
		case 1:
			return 333045931;
		case 2:
			return 1902076494;
		case 3:
			return -453294510;
		case 4:
			return 904770332;
		case 5:
			return 1407413829;
		case 6:
			return 45199580;
		case 7:
			return -140390317;
		case 8:
			return 1415123831;
		case 9:
			return 1789471985;
		case 10:
			return -2000773121;
		case 11:
			return 21224643;
		case 12:
			return -1026516599;
		case 13:
			return -1026066875;
		case 14:
			return -1536975869;
		case 15:
			return -412469442;
		default:
			break;
	}
	return 0;
}

void func_17(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_62(&Global_0, 8);
	}
	if (!func_63() || func_64() != -1)
	{
		return;
	}
	func_62(&Global_0, 1);
}

bool func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_64() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

int func_19(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	iVar0 = -1;
	iVar1 = -1;
	fVar4 = -1f;
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (!func_65(iVar0))
		{
		}
		else if (func_66(iVar0) != iParam0)
		{
		}
		else if (bParam1)
		{
			if (!func_67(iVar0))
			{
			}
			else
			{
				iVar2 = func_68(iVar0);
				if (bParam3)
				{
					if (!func_69(iVar2))
					{
					}
					else if (bParam2)
					{
						if (func_70(iVar2))
						{
						}
						else
						{
							fVar3 = func_72(Global_35, func_71(iVar0), 1);
							if (fVar3 < fVar4 || fVar4 == -1f)
							{
								iVar1 = iVar0;
								fVar4 = fVar3;
							}
						}
						iVar0++;
						return iVar1;
					}
				}
			}
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2)
{
	Global_1934051.f_115 = iParam1;
	Global_1934051.f_116 = iParam0;
	Global_1934051.f_117 = iParam2;
	Global_1934051.f_118 = 1;
}

bool func_21(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return true;
	}
	return false;
}

int func_22(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

void func_23(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	var uVar5[15];
	int iVar21;
	var uVar22;

	iVar0 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar21 = func_73(iParam0);
	func_74(iParam0, &uVar22);
	iVar4 = PED::_0xB29C553BA582D09E(&uVar5, uVar22, 2, 4);
	if (iVar4 > 0 && iVar4 < 15)
	{
		bVar1 = true;
		bVar2 = false;
		iVar3 = 0;
		while (iVar3 < iVar4)
		{
			iVar0 = 0;
			if (func_75(uVar5[iVar3], 369710026, &iVar0))
			{
				iVar0 = (iVar0 - func_76(uVar5[iVar3], 1));
				if (iVar0 > 0)
				{
					if (func_77(uVar5[iVar3], 1))
					{
						if (!func_78(uVar5[iVar3], 1, iVar0))
						{
							bVar1 = false;
						}
						else
						{
							bVar2 = true;
						}
					}
				}
			}
			if (bParam1 && func_75(uVar5[iVar3], -768110908, &iVar0))
			{
				iVar0 = (iVar0 - func_76(uVar5[iVar3], 0));
				if (iVar0 > 0)
				{
					if (func_77(uVar5[iVar3], 0))
					{
						if (!func_78(uVar5[iVar3], 0, iVar0))
						{
							bVar1 = false;
						}
						else
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar3++;
		}
		if (bVar1)
		{
			Global_40.f_9319[iParam0 /*4*/].f_3 = 0;
			func_79(&(Global_20710.f_2407), iVar21);
			if (bVar2)
			{
				func_40(467, 1);
			}
			func_17(0, -1);
		}
	}
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("AT_BEAR_LEGENDARY");
		case 1:
			return joaat("AT_BEAVER_LEGENDARY");
		case 2:
			return joaat("AT_RAM_LEGENDARY");
		case 3:
			return joaat("AT_BUFFALO_LEGENDARY");
		case 4:
			return joaat("AT_BOAR_LEGENDARY");
		case 5:
			return joaat("AT_BUCK_LEGENDARY");
		case 6:
			return joaat("AT_BUFFALO_TATANKA");
		case 7:
			return joaat("AT_GATOR_BULL");
		case 8:
			return joaat("AT_COUGAR_LEGENDARY");
		case 9:
			return joaat("AT_COYOTE_LEGENDARY");
		case 10:
			return joaat("AT_ELK_LEGENDARY");
		case 11:
			return joaat("AT_FOX_LEGENDARY");
		case 12:
			return joaat("AT_MOOSE_LEGENDARY");
		case 13:
			return joaat("AT_PANTHER_LEGENDARY");
		case 14:
			return joaat("AT_PRONGHORN_LEGENDARY");
		case 15:
			return joaat("AT_WOLF_LEGENDARY");
		default:
			break;
	}
	return 0;
}

void func_25(int iParam0, int iParam1, vector3 vParam2, bool bParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = COMPENDIUM::COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM(iParam0, vParam2);
	iVar1 = iVar0;
	if (iVar1 != 0 && !MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar1))
	{
		MAP::_0xD8C7162AB2E2AF45(iVar1);
	}
	if (bParam5 && joaat("AT_HORSE") != iParam0)
	{
		COMPENDIUM::COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME(iParam0, uParam6);
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_40.f_39 == joaat("PLAYER_ZERO"))
		{
			iVar2 = func_80(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				func_81(iVar2, 0);
			}
		}
		else
		{
			iVar2 = func_80(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar2))
				{
					iVar2 = func_80(iParam0, iParam1, 0);
					if (iVar2 != 0)
					{
						func_81(iVar2, 0);
					}
				}
			}
		}
	}
}

struct<2> func_26(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_27(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_28(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_82(vVar0, 0);
}

void func_29(var uParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(iParam1);
	POPULATION::_0x74C2B3DC0B294102(iParam1);
	if (PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);
	}
}

int func_30()
{
	return 9;
}

void func_31(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_32(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_83(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_84(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_85(iVar0);
	*uParam0 = 0;
}

void func_33(var uParam0)
{
	if (uParam0->f_680)
	{
		AUDIO::_0x6AB944DF68B512D3(uParam0->f_679);
		uParam0->f_680 = 0;
	}
	if (uParam0->f_614 > 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_677))
		{
			AUDIO::SET_AMBIENT_ZONE_STATE(uParam0->f_677, false, true);
		}
	}
}

bool func_34()
{
	return (func_35(Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("RESPAWN_DUMP_BODY")) > 0);
}

bool func_35(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_36(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_86(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_37()
{
	return Global_1898164.f_163;
}

int func_38(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

int func_39(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_87(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1225639.f_10)
		{
			if (!Global_1225639.f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_40(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_88(iParam0, &iVar0, &iVar1);
	if (!func_89(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_90(iVar0, iVar1);
}

bool func_41(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_91(iParam0, &Var0);
}

bool func_42(var uParam0)
{
	*uParam0 = 4;
	uParam0->f_1 = 1;
	uParam0->f_9 = 70f;
	uParam0->f_10 = 170f;
	uParam0->f_572[0] = joaat("P_BOARSCAT01X");
	uParam0->f_572[1] = joaat("BROKENSTICKS_AB");
	uParam0->f_572[2] = joaat("P_BOARSCAT01X");
	uParam0->f_580[0] = 0;
	uParam0->f_580[1] = 4;
	uParam0->f_580[2] = 0;
	uParam0->f_588[0] = 0;
	uParam0->f_588[1] = 0;
	uParam0->f_588[2] = 0;
	uParam0->f_596[1] = 1;
	uParam0->f_596[2] = 1;
	uParam0->f_596[2] = 1;
	uParam0->f_12.f_1 = joaat("A_C_BOAR_01");
	uParam0->f_12.f_5 = 1;
	uParam0->f_12.f_8 = joaat("META_OUTFIT_ANIMAL_ALBINO_BOAR");
	return true;
}

bool func_43(var uParam0)
{
	float fVar0;
	var uVar1;
	int iVar6[4];

	if (*uParam0 != -1)
	{
		if (!func_92(15))
		{
			return true;
		}
		if (Global_40.f_9319[*uParam0 /*4*/].f_1)
		{
			return true;
		}
		else if (func_1() < Global_40.f_9319[*uParam0 /*4*/].f_2)
		{
			func_40(201, 1);
			return true;
		}
	}
	if (*uParam0 == 1)
	{
		if ((func_93(123) || func_94(123)) || func_95(123))
		{
			return true;
		}
		else
		{
			fVar0 = 10f;
		}
	}
	else if (*uParam0 == 13)
	{
		fVar0 = 10f;
	}
	else if (*uParam0 == 5)
	{
		fVar0 = 10f;
	}
	else if (*uParam0 == 12)
	{
		fVar0 = 50f;
	}
	else
	{
		fVar0 = (uParam0->f_9 - 15f);
	}
	uVar1 = 4;
	iVar6[0] = 4096;
	iVar6[1] = 16384;
	iVar6[2] = 16;
	iVar6[3] = 8192;
	if (VOLUME::_0x51E52C9687FCDEEC(uParam0->f_627, fVar0, &uVar1, &iVar6, 0))
	{
		func_40(200, 1);
		return true;
	}
	return false;
}

int func_44(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		case 1:
			iVar0 = 3;
			break;
		case 2:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

void func_45(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_572[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_572[iVar0], false);
		}
		iVar0++;
	}
	if (uParam0->f_12.f_1 != 0)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_12.f_1, false);
	}
}

int func_46(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_572[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_572[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	if (uParam0->f_12.f_1 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_1))
		{
			return 0;
		}
		else if (uParam0->f_12.f_5)
		{
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_12.f_9))
			{
				if (uParam0->f_12.f_7 > 0)
				{
					uParam0->f_12.f_9 = PED::_0x273915CE30780986(uParam0->f_12.f_1, uParam0->f_12.f_7);
				}
				else
				{
					uParam0->f_12.f_9 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_12.f_1, uParam0->f_12.f_8);
				}
				return 0;
			}
			else if (!PED::_0x610438375E5D1801(uParam0->f_12.f_9))
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_47(var uParam0)
{
	float fVar0;

	fVar0 = (uParam0->f_9 + 20f);
	uParam0->f_3 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_627, 0f, 0f, 0f, fVar0, fVar0, fVar0, "HuntingZoneRestrictionPending");
	func_96(uParam0->f_3, "Hunting Zone Target Pending", 0, 0, 8192, 0, -1082130432 /* Float: -1f */);
	return true;
}

bool func_48(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < func_97())
	{
		iVar1 = 0;
		while (iVar1 < func_44(iVar0))
		{
			func_98(uParam0, iVar0, iVar1);
			uParam0->f_618++;
			iVar1++;
		}
		iVar0++;
	}
	return true;
}

bool func_49(var uParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[16];
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;

	uParam0->f_12.f_10 = { uParam0->f_627 + Vector(-20f, 0f, 0f) };
	uParam0->f_12.f_13 = { 0f, 0f, func_99(0) };
	if (uParam0->f_12.f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
		{
			if (uParam0->f_12.f_5)
			{
				uParam0->f_12 = PED::_0xEAF682A14F8E5F53(uParam0->f_12.f_9, uParam0->f_12.f_10, 0, 1, 1, 0, 0);
			}
			else
			{
				uParam0->f_12 = func_100(uParam0->f_12.f_1, uParam0->f_12.f_10, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
			}
			func_101(uParam0);
			return false;
		}
	}
	uVar1 = uParam0->f_12.f_3;
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (uParam0->f_31[iVar0 /*36*/].f_4 != 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_31[iVar0 /*36*/].f_1) && uParam0->f_31[iVar0 /*36*/].f_28 < 3)
			{
				if (uParam0->f_31[iVar0 /*36*/].f_6 == 0)
				{
					uParam0->f_31[iVar0 /*36*/].f_1 = OBJECT::CREATE_OBJECT(uParam0->f_31[iVar0 /*36*/].f_4, uParam0->f_31[iVar0 /*36*/].f_17, true, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uParam0->f_31[iVar0 /*36*/].f_1, uParam0->f_31[iVar0 /*36*/].f_23);
					ENTITY::_0x9587913B9E772D29(uParam0->f_31[iVar0 /*36*/].f_1, 0);
				}
				else if (uParam0->f_31[iVar0 /*36*/].f_6 == 1)
				{
					uParam0->f_31[iVar0 /*36*/].f_1 = OBJECT::CREATE_OBJECT(uParam0->f_31[iVar0 /*36*/].f_4, uParam0->f_31[iVar0 /*36*/].f_17, true, true, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_31[iVar0 /*36*/].f_1, 0f, 90f, uParam0->f_31[iVar0 /*36*/].f_23, 0, false);
				}
				else if (uParam0->f_31[iVar0 /*36*/].f_6 == 2)
				{
					uParam0->f_31[iVar0 /*36*/].f_2 = func_100(uParam0->f_31[iVar0 /*36*/].f_4, uParam0->f_31[iVar0 /*36*/].f_17, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31[iVar0 /*36*/].f_2))
					{
						func_102(uParam0->f_31[iVar0 /*36*/].f_2, 0, 0);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_31[iVar0 /*36*/].f_2, 186, false);
						PED::APPLY_PED_DAMAGE_PACK(uParam0->f_31[iVar0 /*36*/].f_2, &(uParam0->f_605), 1f, 1f);
						PERSISTENCE::_0xF5622FA6ACFCA7DB(uParam0->f_31[iVar0 /*36*/].f_2, MISC::GET_RANDOM_INT_IN_RANGE(40, 50));
						PERSISTENCE::_0xDC0A1F0ECEC9F0C0(uParam0->f_31[iVar0 /*36*/].f_2, 1.25f);
						MISC::_0x674B90BE1115846D(uParam0->f_31[iVar0 /*36*/].f_2, 1);
					}
					uParam0->f_31[iVar0 /*36*/].f_1 = func_103(uParam0->f_31[iVar0 /*36*/].f_2);
				}
				else if (uParam0->f_31[iVar0 /*36*/].f_6 == 3)
				{
					uParam0->f_31[iVar0 /*36*/].f_9 = GRAPHICS::_0xFA50F79257745E74(uParam0->f_31[iVar0 /*36*/].f_17, uVar1, 4, -1, 0);
					uParam0->f_31[iVar0 /*36*/].f_1 = OBJECT::CREATE_OBJECT(uParam0->f_31[iVar0 /*36*/].f_4, uParam0->f_31[iVar0 /*36*/].f_17, true, true, false, false, true);
				}
				else if (uParam0->f_31[iVar0 /*36*/].f_6 == 4)
				{
					uParam0->f_31[iVar0 /*36*/].f_9 = GRAPHICS::_0xFA50F79257745E74(uParam0->f_31[iVar0 /*36*/].f_17, uVar1, 2, -1, 0);
					uParam0->f_31[iVar0 /*36*/].f_1 = OBJECT::CREATE_OBJECT(uParam0->f_31[iVar0 /*36*/].f_4, uParam0->f_31[iVar0 /*36*/].f_17, true, true, false, false, true);
				}
				else if (uParam0->f_31[iVar0 /*36*/].f_6 == 5)
				{
					if (uParam0->f_31[iVar0 /*36*/].f_3 == 0)
					{
						uParam0->f_31[iVar0 /*36*/].f_3 = ENTITY::_0x6F3068258A499E52(uParam0->f_31[iVar0 /*36*/].f_4, uParam0->f_31[iVar0 /*36*/].f_17, 11);
					}
					else if (ENTITY::_0x1FF441D7954F8709(uParam0->f_31[iVar0 /*36*/].f_3))
					{
						uParam0->f_31[iVar0 /*36*/].f_1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_31[iVar0 /*36*/].f_3));
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31[iVar0 /*36*/].f_1))
				{
					if (uParam0->f_31[iVar0 /*36*/].f_26 == 0)
					{
						uParam0->f_31[iVar0 /*36*/] = MAP::_BLIP_ADD_FOR_COORD(1538154804, uParam0->f_31[iVar0 /*36*/].f_17);
					}
					StringCopy(&cVar2, "hzt_", 16);
					StringIntConCat(&cVar2, *uParam0, 16);
					StringConCat(&cVar2, "_clue_", 16);
					StringIntConCat(&cVar2, uParam0->f_31[iVar0 /*36*/].f_27, 16);
					StringConCat(&cVar2, "_", 16);
					StringIntConCat(&cVar2, uParam0->f_31[iVar0 /*36*/].f_26, 16);
					uParam0->f_31[iVar0 /*36*/].f_29 = { cVar2 };
					fVar13 = (MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_31[iVar0 /*36*/].f_20, uParam0->f_31[iVar0 /*36*/].f_17, true) / 4f);
					vVar4 = { uParam0->f_31[iVar0 /*36*/].f_20 - uParam0->f_31[iVar0 /*36*/].f_17 };
					vVar7 = { func_104(vVar4, 1.5f) };
					vVar10 = { func_104(vVar4, fVar13) };
					uParam0->f_630[0 /*8*/] = { uParam0->f_31[iVar0 /*36*/].f_17 };
					uParam0->f_630[1 /*8*/] = { uParam0->f_31[iVar0 /*36*/].f_17 + vVar7 };
					uParam0->f_630[2 /*8*/] = { uParam0->f_630[1 /*8*/] + vVar10 };
					uParam0->f_630[3 /*8*/] = { uParam0->f_630[2 /*8*/] + vVar10 };
					uParam0->f_630[4 /*8*/] = { uParam0->f_630[3 /*8*/] + vVar7 };
					func_105(&(uParam0->f_630[1 /*8*/]), 50, 10, 0);
					func_105(&(uParam0->f_630[2 /*8*/]), 50, 10, 0);
					func_105(&(uParam0->f_630[3 /*8*/]), 50, 10, 0);
					func_105(&(uParam0->f_630[4 /*8*/]), 50, 10, 0);
					TASK::_0x5C885E0978B6AD60(func_106(&(uParam0->f_31[iVar0 /*36*/].f_29)), &(uParam0->f_630), 5, 0);
				}
				uParam0->f_31[iVar0 /*36*/].f_28++;
				return false;
			}
		}
		iVar0++;
	}
	func_40(199, 1);
	if (!Global_40.f_9319[*uParam0 /*4*/])
	{
		MAP::_0xD8C7162AB2E2AF45(func_15(*uParam0));
		Global_40.f_9319[*uParam0 /*4*/] = 1;
	}
	return true;
}

void func_50(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;

	fVar0 = 9999f;
	iVar1 = 0;
	bVar3 = PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID());
	iVar2 = 0;
	while (iVar2 < func_30())
	{
		fVar4 = 0f;
		if (uParam0->f_31[iVar2 /*36*/].f_13)
		{
			if (MAP::DOES_BLIP_EXIST(uParam0->f_31[iVar2 /*36*/]))
			{
				MAP::_BLIP_SET_MODIFIER(uParam0->f_31[iVar2 /*36*/], -1186550032);
			}
			fVar4 = func_107(Global_35, uParam0->f_31[iVar2 /*36*/].f_17, 1);
			if (fVar4 < fVar0)
			{
				fVar0 = fVar4;
				iVar1 = iVar2;
			}
		}
		iVar2++;
	}
	MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_31[iVar1 /*36*/], -1186550032);
	if (bVar3)
	{
		MAP::_BLIP_SET_MODIFIER(uParam0->f_31[iVar1 /*36*/], 1641478980);
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_31[iVar1 /*36*/], 1641478980);
	}
}

void func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	int iVar9;

	bVar5 = false;
	bVar6 = PED::IS_PED_ON_MOUNT(Global_35);
	iVar3 = 5000;
	iVar1 = 3000;
	iVar2 = 1500;
	PED::SET_PED_RESET_FLAG(Global_35, 211, true);
	iVar0 = 0;
	while (iVar0 < uParam0->f_618)
	{
		if (!uParam0->f_31[iVar0 /*36*/].f_14)
		{
			bVar7 = true;
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31[iVar0 /*36*/].f_1))
			{
				fVar8 = func_108(Global_35, uParam0->f_31[iVar0 /*36*/].f_1, 1);
				if ((uParam0->f_31[iVar0 /*36*/].f_13 && fVar8 < 2500f) && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_31[iVar0 /*36*/].f_1))
				{
					if (!bVar5)
					{
						bVar5 = true;
					}
					if (!uParam0->f_31[iVar0 /*36*/].f_11)
					{
						if (uParam0->f_620)
						{
							PLAYER::_0x6ECFC621A168424C(uParam0->f_12, uParam0->f_31[iVar0 /*36*/].f_1, uParam0->f_31[iVar0 /*36*/].f_5, 0);
						}
						else
						{
							PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), uParam0->f_31[iVar0 /*36*/].f_1, 0);
							PLAYER::_0x6ECFC621A168424C(uParam0->f_31[iVar0 /*36*/].f_1, uParam0->f_31[iVar0 /*36*/].f_1, uParam0->f_31[iVar0 /*36*/].f_5, 0);
						}
						uParam0->f_31[iVar0 /*36*/].f_11 = 1;
					}
					if (fVar8 < 36f)
					{
						if (!uParam0->f_31[iVar0 /*36*/].f_12)
						{
							PED::_0xF9CBD46433E36713(Global_35, uParam0->f_31[iVar0 /*36*/].f_1, 0f, 0f, 0f, 7.5f, 6f, 15f, 20f, "TRACKING_ZONE_CLUE");
							PAD::SET_PAD_SHAKE(0, 200, 125);
							uParam0->f_31[iVar0 /*36*/].f_12 = 1;
						}
					}
					if ((fVar8 < 6.25f && !func_109()) && !bVar6)
					{
						bVar7 = false;
						if (!func_83(uParam0->f_31[iVar0 /*36*/].f_16))
						{
							uParam0->f_31[iVar0 /*36*/].f_16 = func_110("INSPECT_GENERIC", joaat("INPUT_CONTEXT_Y"), uParam0->f_31[iVar0 /*36*/].f_1, 2, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
							func_111(uParam0->f_31[iVar0 /*36*/].f_16, 2.5f, 0);
							func_112(&(uParam0->f_31[iVar0 /*36*/].f_16), uParam0->f_31[iVar0 /*36*/].f_1);
						}
						else if (uParam0->f_31[iVar0 /*36*/].f_8 == 5)
						{
							HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 2.5f, 2, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_31[iVar0 /*36*/].f_1), func_106(&(uParam0->f_31[iVar0 /*36*/].f_31)), 2);
						}
						else
						{
							HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_31[iVar0 /*36*/].f_1, 2.5f, 2, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_31[iVar0 /*36*/].f_1), func_106(&(uParam0->f_31[iVar0 /*36*/].f_31)), 2);
						}
						if (func_113(uParam0->f_31[iVar0 /*36*/].f_16, 1))
						{
							if (PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID()))
							{
								PLAYER::_0x64FF4BF9AF59E139(PLAYER::PLAYER_ID(), 1);
							}
							if (uParam0->f_614 == 0)
							{
								func_41(Global_35, "HUNTING_START", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
							}
							func_114(uParam0->f_31[iVar0 /*36*/].f_16, 0, 1);
							uParam0->f_31[iVar0 /*36*/].f_24 = 0f;
							uParam0->f_31[iVar0 /*36*/].f_14 = 1;
							uParam0->f_31[iVar0 /*36*/].f_25 = MISC::GET_GAME_TIMER();
							PLAYER::_0xDC5E09D012D759C4(uParam0->f_12, uParam0->f_31[iVar0 /*36*/].f_1, uParam0->f_31[iVar0 /*36*/].f_5);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
							uParam0->f_626 = 1;
							PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "isInspectingGround", true, -1);
							TASK::OPEN_SEQUENCE_TASK(&iVar4);
							TASK::TASK_TURN_PED_TO_FACE_COORD(0, uParam0->f_31[iVar0 /*36*/].f_17, iVar1);
							TASK::CLOSE_SEQUENCE_TASK(iVar4);
							if (!PED::IS_PED_ON_MOUNT(Global_35))
							{
								if (!PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
								{
									PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
								}
							}
							TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar4);
							TASK::CLEAR_SEQUENCE_TASK(&iVar4);
							func_115(uParam0, uParam0->f_31[iVar0 /*36*/].f_27);
						}
					}
					else if (uParam0->f_31[iVar0 /*36*/].f_12 && fVar8 > 64f)
					{
						uParam0->f_31[iVar0 /*36*/].f_12 = 0;
					}
					if (bVar7 && func_83(uParam0->f_31[iVar0 /*36*/].f_16))
					{
						func_32(&(uParam0->f_31[iVar0 /*36*/].f_16), 1, 1);
					}
				}
				else if (uParam0->f_31[iVar0 /*36*/].f_11)
				{
					if (uParam0->f_31[iVar0 /*36*/].f_12)
					{
						uParam0->f_31[iVar0 /*36*/].f_12 = 0;
					}
					if (uParam0->f_620)
					{
						PLAYER::_0xDC5E09D012D759C4(uParam0->f_12, uParam0->f_31[iVar0 /*36*/].f_1, uParam0->f_31[iVar0 /*36*/].f_5);
					}
					else
					{
						PLAYER::_0xDC5E09D012D759C4(uParam0->f_31[iVar0 /*36*/].f_1, uParam0->f_31[iVar0 /*36*/].f_1, uParam0->f_31[iVar0 /*36*/].f_5);
						PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), uParam0->f_31[iVar0 /*36*/].f_1);
					}
					if (func_83(uParam0->f_31[iVar0 /*36*/].f_16))
					{
						func_32(&(uParam0->f_31[iVar0 /*36*/].f_16), 1, 1);
					}
					uParam0->f_31[iVar0 /*36*/].f_11 = 0;
				}
			}
		}
		else if (uParam0->f_31[iVar0 /*36*/].f_15)
		{
			if (uParam0->f_31[iVar0 /*36*/].f_8 == 5)
			{
				HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 2.5f, 2, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_31[iVar0 /*36*/].f_1), func_106(&(uParam0->f_31[iVar0 /*36*/].f_33)), 2);
			}
			else
			{
				HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_31[iVar0 /*36*/].f_1, 2.5f, 2, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_31[iVar0 /*36*/].f_1), func_106(&(uParam0->f_31[iVar0 /*36*/].f_33)), 2);
			}
			iVar9 = MISC::GET_GAME_TIMER();
			if ((iVar9 - uParam0->f_31[iVar0 /*36*/].f_25) > iVar3 || ((iVar9 - uParam0->f_31[iVar0 /*36*/].f_25) > iVar1 && !func_116(Global_35, 242628503)))
			{
				func_117((uParam0->f_614 - 1), *uParam0);
				func_32(&(uParam0->f_31[iVar0 /*36*/].f_16), 1, 1);
				TASK::TASK_CLEAR_LOOK_AT(Global_35);
				PLAYER::_0x2AF423D6ECB2C485(PLAYER::PLAYER_ID(), uParam0->f_12);
				PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "isInspectingGround", false, -1);
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				uParam0->f_626 = 0;
				uParam0->f_31[iVar0 /*36*/].f_15 = 0;
			}
			else if ((iVar9 - uParam0->f_31[iVar0 /*36*/].f_25) > iVar2 && uParam0->f_31[iVar0 /*36*/].f_13)
			{
				func_118(uParam0->f_12, func_106(&(uParam0->f_31[iVar0 /*36*/].f_29)), 1, 0.762f, 1053609165 /* Float: 0.4f */, 0, 2f, 1);
				if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_31[iVar0 /*36*/].f_10))
				{
					func_119(uParam0->f_31[iVar0 /*36*/].f_10);
				}
				uParam0->f_31[iVar0 /*36*/].f_13 = 0;
			}
		}
		iVar0++;
	}
	if (uParam0->f_614 > 0)
	{
		if (!uParam0->f_624)
		{
			if (!uParam0->f_625)
			{
				if (func_120(*uParam0))
				{
					if (Global_1935496.f_31 == joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"))
					{
						uParam0->f_625 = 1;
					}
				}
				else if (Global_1935496.f_31 == joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"))
				{
					uParam0->f_625 = 1;
				}
			}
			else if (func_107(Global_35, uParam0->f_12.f_10, 1) > 400f && !CAM::IS_SPHERE_VISIBLE(uParam0->f_12.f_10, 1f))
			{
				uParam0->f_621 = 1;
				func_121(uParam0);
				uParam0->f_624 = 1;
			}
		}
	}
}

void func_52(var uParam0)
{
	int iVar0;
	float fVar1;

	if (uParam0->f_12.f_2 != 1)
	{
		if (((func_107(uParam0->f_12, uParam0->f_12.f_16, 1) >= 2500f && func_108(Global_35, uParam0->f_12, 1) > 400f) && !PED::IS_PED_INJURED(uParam0->f_12)) && !func_116(uParam0->f_12, 242628503))
		{
			func_122(uParam0);
			uParam0->f_12.f_2 = 1;
			fVar1 = 3f;
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (*uParam0 == 0)
			{
				TASK::TASK_STAND_STILL(0, 2000);
				fVar1 = 1f;
			}
			TASK::_TASK_FLEE_FROM_PED(0, Global_35, uParam0->f_12.f_16, 25f, -1, 1024, fVar1, 0);
			TASK::TASK_WANDER_IN_AREA(0, uParam0->f_12.f_16, 15f, 1.5f, 3f, 1);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_12, iVar0);
		}
	}
	else if (func_107(uParam0->f_12, uParam0->f_12.f_16, 1) >= 100f)
	{
		uParam0->f_12.f_2 = 0;
	}
}

int func_53(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

bool func_54(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		return true;
	}
	if (ENTITY::_0x8DE41E9902E85756(uParam0->f_12) && !func_21(Global_35))
	{
		return true;
	}
	return false;
}

int func_55(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_56(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_57(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_58(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_8(*uParam0);
	iVar1 = func_7(*uParam0);
	if (iParam1 < 1 || iParam1 > func_13(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_59(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_60(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_61(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_62(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_63()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_64()
{
	return Global_1572887.f_12;
}

bool func_65(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_66(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

bool func_67(int iParam0)
{
	return !func_123(iParam0, 1);
}

int func_68(int iParam0)
{
	if (!func_65(iParam0))
	{
		return -1;
	}
	if (iParam0 == 34 && func_124() == 128)
	{
		return 128;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 120:
		case 121:
			return 78;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 106:
		case 107:
		case 108:
			return 38;
		case 18:
		case 19:
		case 20:
		case 21:
		case 105:
			return 69;
		case 22:
		case 118:
			return 3;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 109:
		case 110:
		case 111:
			return 5;
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 112:
		case 113:
			return 105;
		case 23:
		case 24:
			return 23;
		case 35:
			return 101;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 114:
		case 115:
			return 26;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 102:
		case 103:
		case 104:
			return 76;
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 116:
		case 117:
			return 92;
		case 4:
			return 13;
		case 128:
		case 129:
		case 130:
		case 131:
			return 79;
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 98;
		case 5:
			return 14;
		case 137:
		case 138:
		case 139:
		case 140:
			return 71;
		case 141:
		case 142:
		case 143:
		case 144:
			return 4;
		case 34:
			return 90;
		case 145:
		case 146:
		case 147:
		case 148:
			return 9;
		case 67:
			return 113;
		case 87:
		case 88:
		case 89:
			return 28;
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
			return 115;
		case 95:
		case 96:
		case 97:
			return 120;
		case 98:
			return 123;
		case 99:
		case 100:
		case 123:
			return 117;
		case 119:
			return 65;
		case 122:
			return 82;
		case 124:
			return 110;
		case 125:
			return 127;
		case 56:
			return 71;
		case 57:
			return 98;
		case 58:
			return 9;
		case 59:
			return 79;
		default:
			break;
	}
	return -1;
}

bool func_69(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888.f_40615[iParam0 /*11*/] & 32 != 0;
}

bool func_70(int iParam0)
{
	if (!func_125(iParam0))
	{
		return false;
	}
	return func_126(iParam0, 33554432);
}

Vector3 func_71(int iParam0)
{
	if (!func_65(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 2:
			return 2939.063f, 1287.116f, 43.6529f;
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 99:
			return -5227.357f, -3470.067f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 7:
			return -784.49f, -1321.95f, 42.88f;
		case 10:
			return -753.4219f, -1284.24f, 43.20049f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 17:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1521.91f, 441.15f, 89.68f;
		case 21:
			return 1523.63f, 442.65f, 89.68f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.35f, -577.48f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1329.755f, -1294.218f, 76.0092f;
		case 29:
			return 1323.734f, -1321.775f, 77.8924f;
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
		case 31:
			return 1230.34f, -1298.578f, 75.9027f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 36:
			return 2644.188f, -1292.507f, 51.2496f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
		case 42:
			return 2825.607f, -1318.207f, 45.7557f;
		case 43:
			return 2718f, -1287f, 49.6f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2748.811f, -1398.277f, 45.18309f;
		case 46:
			return 2747.824f, -1396.384f, 45.18309f;
		case 47:
			return 2555.09f, -1166.97f, 52.68f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1790f, -388.27f, 159.33f;
		case 62:
			return -1818.99f, -370.94f, 162.3f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -306.3f, 815.08f, 117.98f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -287.9538f, 804.0544f, 118.3859f;
		case 74:
			return -324f, 803.72f, 116.88f;
		case 75:
			return -281.82f, 778.97f, 118.5f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -178.0316f, 628.0621f, 113.0896f;
		case 78:
			return -175.0377f, 631.7999f, 113.0896f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -325.532f, 773.6285f, 117.5038f;
		case 82:
			return 3025.786f, 562.7253f, 43.7167f;
		case 86:
			return 2986.224f, 569.9468f, 43.62284f;
		case 85:
			return 2986.94f, 574.9f, 43.64f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.83f, 399.7599f, 94.38248f;
		case 88:
			return -1299.891f, 401.3615f, 94.38248f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5487.197f, -2939.038f, -1.3872f;
		case 91:
			return -5507.993f, -2964.844f, -1.6215f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3687.3f, -2623.39f, -14.44f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_72(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 64;
		case 5:
			return 16;
		case 6:
			return 32;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
	}
	return 0;
}

int func_74(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("A_C_BEAR_01");
			return 1;
		case 1:
			*uParam1 = joaat("A_C_BEAVER_01");
			return 1;
		case 2:
			*uParam1 = joaat("A_C_BIGHORNRAM_01");
			return 1;
		case 3:
			*uParam1 = joaat("A_C_BUFFALO_01");
			return 1;
		case 4:
			*uParam1 = joaat("A_C_BOAR_01");
			return 1;
		case 5:
			*uParam1 = joaat("A_C_BUCK_01");
			return 1;
		case 6:
			*uParam1 = joaat("A_C_BUFFALO_TATANKA_01");
			return 1;
		case 7:
			*uParam1 = joaat("A_C_ALLIGATOR_02");
			return 1;
		case 8:
			*uParam1 = joaat("A_C_COUGAR_01");
			return 1;
		case 9:
			*uParam1 = joaat("A_C_COYOTE_01");
			return 1;
		case 10:
			*uParam1 = joaat("A_C_ELK_01");
			return 1;
		case 11:
			*uParam1 = joaat("A_C_FOX_01");
			return 1;
		case 12:
			*uParam1 = joaat("A_C_MOOSE_01");
			return 1;
		case 13:
			*uParam1 = joaat("A_C_PANTHER_01");
			return 1;
		case 14:
			*uParam1 = joaat("A_C_PRONGHORN_01");
			return 1;
		case 15:
			*uParam1 = joaat("A_C_WOLF");
			return 1;
	}
	return 0;
}

bool func_75(int iParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14[15];
	int iVar45;
	int iVar46;

	if (!func_127(iParam0, 0))
	{
		return false;
	}
	*iParam2 = 0;
	Var0 = { func_128(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, 0, 0) };
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar12, &iVar13))
			{
				if (func_129(iVar13, iParam1, &Var14, &iVar45, 1, 0))
				{
					iVar46 = 0;
					while (iVar46 < iVar45)
					{
						if (iParam0 == Var14[iVar46 /*2*/])
						{
							*iParam2 = (*iParam2 + Var14[iVar46 /*2*/].f_1);
						}
						iVar46++;
					}
				}
			}
			iVar12++;
		}
		ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar11);
	}
	return true;
}

int func_76(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	var uVar9;

	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_130(0) };
	Var0.f_4 = func_131(iParam1);
	Var5 = { func_132(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	uVar9 = INVENTORY::_0xC97E0D2302382211(func_133(0), &Var5, 0);
	return uVar9;
}

bool func_77(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	if (!func_127(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = func_131(iParam1);
	if (!func_134(iParam0, Var0.f_4))
	{
		return false;
	}
	iVar5 = func_135(iParam0, &Var0, 1, 0);
	iVar6 = func_136(iParam0, 0);
	if (iVar5 >= 0 && iVar6 > iVar5)
	{
		return false;
	}
	return true;
}

bool func_78(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;
	var uVar6;

	if (!func_77(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == 1)
	{
		if (func_137(iParam0) && func_138(iParam0))
		{
			iVar0 = 0;
			if (func_75(iParam0, 369710026, &iVar0))
			{
				iParam2 = iVar0;
			}
		}
	}
	Var1.f_4 = func_131(iParam1);
	Var1 = { func_130(0) };
	if (!func_139(iParam0, &uVar6, &Var1, iParam2, 752097756, 1))
	{
		return false;
	}
	return true;
}

void func_79(var uParam0, int iParam1)
{
	func_140(uParam0, iParam1);
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("AT_ARMADILLO"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ARMADILLO_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ARMADILLO_JN");
			}
			break;
		case joaat("AT_BADGER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BADGER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BADGER_JN");
			}
			break;
		case joaat("AT_BAT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BAT_JN");
			}
			break;
		case joaat("AT_BEAR_BLACK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLACK_BEAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLACK_BEAR_JN");
			}
			break;
		case joaat("AT_BEAR_GRIZZLY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GRIZZLY_BEAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GRIZZLY_BEAR_JN");
			}
			break;
		case joaat("AT_BEAR_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BEAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BEAR_JN");
			}
			break;
		case joaat("AT_BEAVER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BEAVER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BEAVER_JN");
			}
			break;
		case joaat("AT_BEAVER_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BEAVER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BEAVER_JN");
			}
			break;
		case joaat("AT_BLUEJAY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLUE_JAY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLUE_JAY_JN");
			}
			break;
		case joaat("AT_BOAR"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WILD_BOAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WILD_BOAR_JN");
			}
			break;
		case joaat("AT_BOAR_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BOAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BOAR_JN");
			}
			break;
		case joaat("AT_BUCK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WHITETAIL_BUCK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WHITETAIL_BUCK_JN");
			}
			break;
		case joaat("AT_BUCK_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BUCK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BUCK_JN");
			}
			break;
		case joaat("AT_BUFFALO"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BISON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BISON_JN");
			}
			break;
		case joaat("AT_BUFFALO_TATANKA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BUFFALO_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BUFFALO_JN");
			}
			break;
		case joaat("AT_BUFFALO_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_WHITE_BUFFALO_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_WHITE_BUFFALO_JN");
			}
			break;
		case joaat("AT_BULL_ANGUS"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BULL_JN");
			}
			break;
		case joaat("AT_BULL_DEVON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DEVON_BULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DEVON_BULL_JN");
			}
			break;
		case joaat("AT_BULL_HEREFORD"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HEREFORD_BULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HEREFORD_BULL_JN");
			}
			break;
		case joaat("AT_BULLFROG"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BULLFROG_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BULLFROG_JN");
			}
			break;
		case joaat("AT_CALIFORNIACONDOR"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CALIFORNIAN_CONDOR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CALIFORNIAN_CONDOR_JN");
			}
			break;
		case joaat("AT_CARDINAL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CARDINAL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CARDINAL_JN");
			}
			break;
		case joaat("AT_CAT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CAT_JN");
			}
			break;
		case joaat("AT_CEDARWAXWING"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CEDAR_WAXWING_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CEDAR_WAXWING_JN");
			}
			break;
		case joaat("AT_CHICKEN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DOMINIQUE_CHICKEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DOMINIQUE_CHICKEN_JN");
			}
			break;
		case joaat("AT_CHICKEN_PRAIRIE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PRARIE_CHICKEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PRARIE_CHICKEN_JN");
			}
			break;
		case joaat("AT_CHICKEN_LEGHORN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGHORN_CHICKEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGHORN_CHICKEN_JN");
			}
			break;
		case joaat("AT_CHICKEN_JAVA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_JAVA_CHICKEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_JAVA_CHICKEN_JN");
			}
			break;
		case joaat("AT_CHIPMUNK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CHIPMUNK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CHIPMUNK_JN");
			}
			break;
		case joaat("AT_CORMORANT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DOUBLE_CRESTED_CORMORANT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DOUBLE_CRESTED_CORMORANT_JN");
			}
			break;
		case joaat("AT_CORMORANT_NEO"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_NEOTROPIC_CORMORANT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_NEOTROPIC_CORMORANT_JN");
			}
			break;
		case joaat("AT_COUGAR"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COUGAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COUGAR_JN");
			}
			break;
		case joaat("AT_COUGAR_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_COUGAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_COUGAR_JN");
			}
			break;
		case joaat("AT_COW"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CRACKER_COW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CRACKER_COW_JN");
			}
			break;
		case joaat("AT_COYOTE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COYOTE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COYOTE_JN");
			}
			break;
		case joaat("AT_COYOTE_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_COYOTE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_COYOTE_JN");
			}
			break;
		case joaat("AT_CRAB"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CRAB_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CRAB_JN");
			}
			break;
		case joaat("AT_CRANE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WHOOPING_CRANE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WHOOPING_CRANE_JN");
			}
			break;
		case joaat("AT_CRANE_SAND"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SANDHILL_CRANE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SANDHILL_CRANE_AR");
			}
			break;
		case joaat("AT_CRAYFISH"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CRAYFISH_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CRAYFISH_JN");
			}
			break;
		case joaat("AT_CROW"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_AMERICAN_CROW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_AMERICAN_CROW_JN");
			}
			break;
		case joaat("AT_DEER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DEER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DEER_JN");
			}
			break;
		case joaat("AT_DOG_AUSTRALIAN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_AUSTRALIAN_SHEPHERD_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_AUSTRALIAN_SHEPHERD_JN");
			}
			break;
		case joaat("AT_DOG_BLOODHOUND"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLOODHOUND_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLOODHOUND_JN");
			}
			break;
		case joaat("AT_DOG_BLUETICK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COONHOUND_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COONHOUND_JN");
			}
			break;
		case joaat("AT_DOG_BORDER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COLLIE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COLLIE_JN");
			}
			break;
		case joaat("AT_DOG_CATAHOULA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CATAHOULA_CUR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CATAHOULA_CUR_JN");
			}
			break;
		case joaat("AT_DOG_CHESAPEAKE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CHESAPEAKEBAY_RET_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CHESAPEAKEBAY_RET_JN");
			}
			break;
		case joaat("AT_DOG_FOXHOUND"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FOX_HOUND_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FOX_HOUND_JN");
			}
			break;
		case joaat("AT_DOG_HUSKY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HUSKY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HUSKY_JN");
			}
			break;
		case joaat("AT_DOG_LAB"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LABRADOR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LABRADOR_JN");
			}
			break;
		case joaat("AT_DOG_MUTT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MUTT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MUTT_JN");
			}
			break;
		case joaat("AT_DOG"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MONGREL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MONGREL_JN");
			}
			break;
		case joaat("AT_DOG_POODLE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_POODLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_POODLE_JN");
			}
			break;
		case joaat("AT_DONKEY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DONKEY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DONKEY_JN");
			}
			break;
		case joaat("AT_DUCK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MALLARD_DUCK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MALLARD_DUCK_JN");
			}
			break;
		case joaat("AT_DUCK_PEKIN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PEKING_DUCK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PEKING_DUCK_JN");
			}
			break;
		case joaat("AT_EAGLE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BALD_EAGLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BALD_EAGLE_JN");
			}
			break;
		case joaat("AT_EAGLE_GOLDEN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GOLDEN_EAGLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GOLDEN_EAGLE_JN");
			}
			break;
		case joaat("AT_EGRET"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_REDDISH_EGRET_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_REDDISH_EGRET_JN");
			}
			break;
		case joaat("AT_EGRET_LITTLE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LITTLE_EGRET_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LITTLE_EGRET_JN");
			}
			break;
		case joaat("AT_EGRET_SNOWY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SNOWY_EGRET_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SNOWY_EGRET_JN");
			}
			break;
		case joaat("AT_ELK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ELK_F_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ELK_F_JN");
			}
			break;
		case joaat("AT_ELK_BULL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ELK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ELK_JN");
			}
			break;
		case joaat("AT_ELK_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_ELK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_ELK_JN");
			}
			break;
		case joaat("AT_FOX"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FOX_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FOX_JN");
			}
			break;
		case joaat("AT_FOX_GRAY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GREY_FOX_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GREY_FOX_JN");
			}
			break;
		case joaat("AT_FOX_SILVER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SILVER_FOX_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SILVER_FOX_JN");
			}
			break;
		case joaat("AT_FOX_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_FOX_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_FOX_JN");
			}
			break;
		case joaat("AT_GATOR"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ALIGATOR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ALIGATOR_JN");
			}
			break;
		case joaat("AT_GATOR_BULL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BULLGATOR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BULLGATOR_JN");
			}
			break;
		case joaat("AT_GILAMONSTER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GILA_MONSTER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GILA_MONSTER_JN");
			}
			break;
		case joaat("AT_GOAT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ALPINE_GOAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ALPINE_GOAT_JN");
			}
			break;
		case joaat("AT_GOOSE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CANADA_GOOSE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CANADA_GOOSE_JN");
			}
			break;
		case joaat("AT_HAWK_RED"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HAWK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HAWK_JN");
			}
			break;
		case joaat("AT_HAWK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FERRUGINIOUS_HAWK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FERRUGINIOUS_HAWK_JN");
			}
			break;
		case joaat("AT_HAWK_ROUGH"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ROUGH_LEGGED_HAWK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ROUGH_LEGGED_HAWK_JN");
			}
			break;
		case joaat("AT_HERON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLUE_HERON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLUE_HERON_JN");
			}
			break;
		case joaat("AT_HERON_TRI"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLUE_HERON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLUE_HERON_JN");
			}
			break;
		case joaat("AT_HORSE"):
			if (((iParam1 == joaat("A_C_HORSE_AMERICANPAINT_OVERO") || iParam1 == joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE")) || iParam1 == joaat("A_C_HORSE_AMERICANPAINT_TOBIANO")) || iParam1 == joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_AMERICAN_PAINT_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_AMERICAN_PAINT_JN");
				}
			}
			else if (((iParam1 == joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK") || iParam1 == joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN")) || iParam1 == joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE")) || iParam1 == joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_AMERICAN_STANDARDBRED_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_AMERICAN_STANDARDBRED_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_ANDALUSIAN_DARKBAY") || iParam1 == joaat("A_C_HORSE_ANDALUSIAN_PERLINO")) || iParam1 == joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_ANDALUSIAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_ANDALUSIAN_JN");
				}
			}
			else if ((((iParam1 == joaat("A_C_HORSE_APPALOOSA_BLANKET") || iParam1 == joaat("A_C_HORSE_APPALOOSA_LEOPARD")) || iParam1 == joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET")) || iParam1 == joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD")) || iParam1 == joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_APPALOOSA_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_APPALOOSA_JN");
				}
			}
			else if ((((iParam1 == joaat("A_C_HORSE_ARABIAN_BLACK") || iParam1 == joaat("A_C_HORSE_ARABIAN_REDCHESTNUT")) || iParam1 == joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY")) || iParam1 == joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC")) || iParam1 == joaat("A_C_HORSE_ARABIAN_WHITE"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_ARABIAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_ARABIAN_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_ARDENNES_BAYROAN") || iParam1 == joaat("A_C_HORSE_ARDENNES_IRONGREYROAN")) || iParam1 == joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_ARDENNES_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_ARDENNES_JN");
				}
			}
			else if (iParam1 == joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT") || iParam1 == joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_BELGIAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_BELGIAN_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN") || iParam1 == joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN")) || iParam1 == joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_DUTCH_WARMBLOOD_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_DUTCH_WARMBLOOD_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY") || iParam1 == joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT")) || iParam1 == joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_HUNGARIAN_HALFBRED_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_HUNGARIAN_HALFBRED_JN");
				}
			}
			else if ((((iParam1 == joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK") || iParam1 == joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC")) || iParam1 == joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO")) || iParam1 == joaat("A_C_HORSE_KENTUCKYSADDLE_GREY")) || iParam1 == joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_KENTUCKY_SADDLER_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_KENTUCKY_SADDLER_JN");
				}
			}
			else if (iParam1 == joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE") || iParam1 == joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_MISSOURI_FOXTROTTER_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_MISSOURI_FOXTROTTER_JN");
				}
			}
			else if ((((iParam1 == joaat("A_C_HORSE_MORGAN_BAY") || iParam1 == joaat("A_C_HORSE_MORGAN_BAYROAN")) || iParam1 == joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC")) || iParam1 == joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT")) || iParam1 == joaat("A_C_HORSE_MORGAN_PALOMINO"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_MORGAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_MORGAN_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_MUSTANG_GRULLODUN") || iParam1 == joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY")) || iParam1 == joaat("A_C_HORSE_MUSTANG_WILDBAY"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_MUSTANG_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_MUSTANG_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_NOKOTA_BLUEROAN") || iParam1 == joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN")) || iParam1 == joaat("A_C_HORSE_NOKOTA_WHITEROAN"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_NOKOTA_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_NOKOTA_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_SHIRE_DARKBAY") || iParam1 == joaat("A_C_HORSE_SHIRE_LIGHTGREY")) || iParam1 == joaat("A_C_HORSE_SHIRE_RAVENBLACK"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_SHIRE_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_SHIRE_JN");
				}
			}
			else if (iParam1 == joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT") || iParam1 == joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_SUFFOLK_PUNCH_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_SUFFOLK_PUNCH_JN");
				}
			}
			else if ((((((iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO") || iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT")) || iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY")) || iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC")) || iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY")) || iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN")) || iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_TENNESSEE_WALKER_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_TENNESSEE_WALKER_JN");
				}
			}
			else if ((((iParam1 == joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT") || iParam1 == joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY")) || iParam1 == joaat("A_C_HORSE_THOROUGHBRED_BRINDLE")) || iParam1 == joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY")) || iParam1 == joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_THOROUGHBRED_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_THOROUGHBRED_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_TURKOMAN_DARKBAY") || iParam1 == joaat("A_C_HORSE_TURKOMAN_GOLD")) || iParam1 == joaat("A_C_HORSE_TURKOMAN_SILVER"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_TURKOMAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_TURKOMAN_JN");
				}
			}
			break;
		case joaat("AT_IGUANA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_IGUANA_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_IGUANA_JN");
			}
			break;
		case joaat("AT_IGUANA_DESERT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DESERT_IGUANA_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DESERT_IGUANA_JN");
			}
			break;
		case joaat("AT_JAVELINA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PECCARY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PECCARY_JN");
			}
			break;
		case joaat("AT_LOON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COMMON_LOON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COMMON_LOON_JN");
			}
			break;
		case joaat("AT_LOON_PACIFIC"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PACIFIC_LOON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PACIFIC_LOON_JN");
			}
			break;
		case joaat("AT_LOON_YELLOW"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_YELLOW_BILLED_LOON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_YELLOW_BILLED_LOON_JN");
			}
			break;
		case joaat("AT_MOOSE_BULL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MOOSE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MOOSE_JN");
			}
			break;
		case joaat("AT_MOOSE_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_MOOSE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_MOOSE_JN");
			}
			break;
		case joaat("AT_MULE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MULE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MULE_JN");
			}
			break;
		case joaat("AT_MUSKRAT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MUSKRAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MUSKRAT_JN");
			}
			break;
		case joaat("AT_ORIOLE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ORIOLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ORIOLE_JN");
			}
			break;
		case joaat("AT_ORIOLE_HOODED"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HOODED_ORIOLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HOODED_ORIOLE_JN");
			}
			break;
		case joaat("AT_OWL_NORTH"):
		case joaat("AT_OWL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HORNED_OWL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HORNED_OWL_JN");
			}
			break;
		case joaat("AT_OWL_CALI"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GREAT_HORNED_OWL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GREAT_HORNED_OWL_JN");
			}
			break;
		case joaat("AT_OX"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_OXEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_OXEN_JN");
			}
			break;
		case joaat("AT_OX_DEVON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DEVON_OXEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DEVON_OXEN_JN");
			}
			break;
		case joaat("AT_PANTHER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FLORIDA_PANTHER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FLORIDA_PANTHER_JN");
			}
			break;
		case joaat("AT_PANTHER_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_PANTHER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_PANTHER_JN");
			}
			break;
		case joaat("AT_PARROT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PARROT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PARROT_JN");
			}
			break;
		case joaat("AT_PARROT_GREEN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GREAT_GREEN_MACAW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GREAT_GREEN_MACAW_JN");
			}
			break;
		case joaat("AT_PARROT_SCARLET"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SCARLET_MACAW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SCARLET_MACAW_JN");
			}
			break;
		case joaat("AT_PELICAN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PELICAN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PELICAN_JN");
			}
			break;
		case joaat("AT_PELICAN_BROWN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BROWN_PELICAN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BROWN_PELICAN_JN");
			}
			break;
		case joaat("AT_PHEASANT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RING_NECKED_PHEASANT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RING_NECKED_PHEASANT_JN");
			}
			break;
		case joaat("AT_PHEASANT_CHINESE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PHEASANT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PHEASANT_JN");
			}
			break;
		case joaat("AT_PIG"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PIG_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PIG_JN");
			}
			break;
		case joaat("AT_PIG_CHINA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CHINA_PIG_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CHINA_PIG_JN");
			}
			break;
		case joaat("AT_PIG_SPOT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_OLD_SPOT_PIG_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_OLD_SPOT_PIG_JN");
			}
			break;
		case joaat("AT_PIGEON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PIGEON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PIGEON_JN");
			}
			break;
		case joaat("AT_PIGEON_BAND"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BAND_TAILED_PIGEON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BAND_TAILED_PIGEON_JN");
			}
			break;
		case joaat("AT_POSSUM"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_POSSUM_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_POSSUM_JN");
			}
			break;
		case joaat("AT_PRONGHORN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PRONGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PRONGHORN_JN");
			}
			break;
		case joaat("AT_PRONGHORN_BAJA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BAJA_CALIFORNIAN_PRONGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BAJA_CALIFORNIAN_PRONGHORN_JN");
			}
			break;
		case joaat("AT_PRONGHORN_SONO"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SONORAN_PRONGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SONORAN_PRONGHORN_JN");
			}
			break;
		case joaat("AT_PRONGHORN_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_PRONGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_PRONGHORN_JN");
			}
			break;
		case joaat("AT_QUAIL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_QUAIL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_QUAIL_JN");
			}
			break;
		case joaat("AT_RABBIT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RABBIT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RABBIT_JN");
			}
			break;
		case joaat("AT_RACCOON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RACCOON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RACCOON_JN");
			}
			break;
		case joaat("AT_RAMSHEEP_ROCKY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BIGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BIGHORN_JN");
			}
			break;
		case joaat("AT_RAMSHEEP_DESERT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DESERT_BIG_HORN_SHEEP_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DESERT_BIG_HORN_SHEEP_JN");
			}
			break;
		case joaat("AT_RAM_DESERT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DESERT_BIGHORN_RAM_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DESERT_BIGHORN_RAM_JN");
			}
			break;
		case joaat("AT_RAM_ROCKY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ROCKY_MOUNTAIN_BIGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ROCKY_MOUNTAIN_BIGHORN_JN");
			}
			break;
		case joaat("AT_RAM_SIERRA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SIERRA_NEVADA_BIGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SIERRA_NEVADA_BIGHORN_JN");
			}
			break;
		case joaat("AT_RAMSHEEP_SIERRA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SIERRA_NEVADA_BIGHORN_SHEEP_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SIERRA_NEVADA_BIGHORN_SHEEP_JN");
			}
			break;
		case joaat("AT_RAM_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_LONG_HORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_LONG_HORN_JN");
			}
			break;
		case joaat("AT_RAT_BLACK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RAT_JN");
			}
			break;
		case joaat("AT_RAT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BROWN_RAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BROWN_RAT_JN");
			}
			break;
		case joaat("AT_RAVEN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RAVEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RAVEN_JN");
			}
			break;
		case joaat("AT_REDFOOTEDBOOBY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RED_FOOTED_BOOBY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RED_FOOTED_BOOBY_JN");
			}
			break;
		case joaat("AT_ROBIN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ROBIN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ROBIN_JN");
			}
			break;
		case joaat("AT_ROOSTER_JAVA"):
		case joaat("AT_ROOSTER"):
		case joaat("AT_ROOSTER_LEGHORN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ROOSTER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ROOSTER_JN");
			}
			break;
		case joaat("AT_ROSESPOONBILL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SPOONBILL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SPOONBILL_JN");
			}
			break;
		case joaat("AT_SEAGULL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SEAGULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SEAGULL_JN");
			}
			break;
		case joaat("AT_SEAGULL_LAUGH"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LAUGHING_GULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LAUGHING_GULL_JN");
			}
			break;
		case joaat("AT_SEAGULL_RING"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HERRING_GULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HERRING_GULL_JN");
			}
			break;
		case joaat("AT_SHEEP"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SHEEP_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SHEEP_JN");
			}
			break;
		case joaat("AT_SKUNK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SKUNK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SKUNK_JN");
			}
			break;
		case joaat("AT_SNAKE_BOA"):
		case joaat("AT_SNAKE_BOA_RAINBOW"):
		case joaat("AT_SNAKE_BOA_SUN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RED_BOA_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RED_BOA_JN");
			}
			break;
		case joaat("AT_SNAKE_FERDELANCE"):
		case joaat("AT_SNAKE_COPPER_NORTH"):
		case joaat("AT_SNAKE_COPPER_SOUTH"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FERDELANCE_SNAKE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FERDELANCE_SNAKE_JN");
			}
			break;
		case joaat("AT_SNAKE_BLACK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLACK_TAIL_RATTLESNAKE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLACKTAILED_RATTLE_SNAKE_JN");
			}
			break;
		case joaat("AT_SNAKE_COTTON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COTTONMOUTH_SNAKE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COTTONMOUTH_SNAKE_JN");
			}
			break;
		case joaat("AT_SNAKE_DIAMOND"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RATTLESNAKE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RATTLESNAKE_JN");
			}
			break;
		case joaat("AT_SONGBIRD"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SONGBIRD_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SONGBIRD_JN");
			}
			break;
		case joaat("AT_SONGBIRD_SCARLET"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SCARLET_TANAGER_SONGBIRD_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SCARLET_TANAGER_SONGBIRD_JN");
			}
			break;
		case joaat("AT_SPARROW"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SPARROW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SPARROW_JN");
			}
			break;
		case joaat("AT_SPARROW_EURO"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_EURASIAN_TREE_SPARROW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_EURASIAN_TREE_SPARROW_JN");
			}
			break;
		case joaat("AT_SPARROW_GOLD"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GOLDEN_CROWNED_SPARROW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GOLDEN_CROWNED_SPARROW_JN");
			}
			break;
		case joaat("AT_SQUIRREL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SQUIRREL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SQUIRREL_JN");
			}
			break;
		case joaat("AT_SQUIRREL_RED"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RED_SQUIRREL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RED_SQUIRREL_JN");
			}
			break;
		case joaat("AT_SQUIRREL_BLACK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLACK_SQUIRREL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLACK_SQUIRREL_JN");
			}
			break;
		case joaat("AT_TOAD"):
		case joaat("AT_TOAD_DESERT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_TOAD_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_TOAD_JN");
			}
			break;
		case joaat("AT_TURKEY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_TURKEY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_TURKEY_JN");
			}
			break;
		case joaat("AT_TURKEY_RIO"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RIO_GRANDE_TURKEY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RIO_GRANDE_TURKEY_JN");
			}
			break;
		case joaat("AT_TURTLE_SEA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SEA_TURTLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SEA_TURTLE_JN");
			}
			break;
		case joaat("AT_TURTLE_SNAP"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SNAPPING_TURTLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SNAPPING_TURTLE_JN");
			}
			break;
		case joaat("AT_VULTURE_EAST"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_EASTERN_TURKEY_VULTURE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_EASTERN_TURKEY_VULTURE_JN");
			}
			break;
		case joaat("AT_VULTURE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WESTERN_VULTURE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WESTERN_VULTURE_JN");
			}
			break;
		case joaat("AT_WOLF"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WOLF_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WOLF_JN");
			}
			break;
		case joaat("AT_WOLF_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_WOLF_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_WOLF_JN");
			}
			break;
		case joaat("AT_WOLF_TIMBER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_TIMBER_WOLF_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_TIMBER_WOLF_JN");
			}
			break;
		case joaat("AT_WOODPECKER_RED"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WOOD_PECKER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WOOD_PECKER_JN");
			}
			break;
		case joaat("AT_WOODPECKER_PILEATED"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WOOD_PECKER_02_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WOOD_PECKER_02_JN");
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_141(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_142(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_82(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_143(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_144(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					Global_1911670[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

bool func_83(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (Global_1945938[iParam0 /*18*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3);
}

int func_84(int iParam0)
{
	return iParam0;
}

void func_85(int iParam0)
{
	if (!func_145(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1945938[iParam0 /*18*/].f_3);
	}
	Global_1945938[iParam0 /*18*/].f_4 = 0;
	Global_1945938[iParam0 /*18*/] = 1;
	Global_1945938[iParam0 /*18*/].f_16 = 0;
	Global_1945938[iParam0 /*18*/].f_1 = 0;
	Global_1945938[iParam0 /*18*/].f_6 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_9 = 0f;
	Global_1945938[iParam0 /*18*/].f_10 = 0;
	Global_1945938[iParam0 /*18*/].f_11 = 0;
	Global_1945938[iParam0 /*18*/].f_2 = 1;
	Global_1945938[iParam0 /*18*/].f_15 = -1f;
}

bool func_86(int iParam0)
{
	int iVar0;

	iVar0 = func_146(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_87(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630.f_18)
	{
		if ((bParam2 || Global_1935630.f_19 > 0) || Global_1935630.f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630.f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630.f_20 > 0 || (bParam2 && Global_1935630.f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630.f_13)
		{
			if (bParam2 || Global_1935630.f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_88(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_89(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_147(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_148(iParam0))
	{
		return false;
	}
	if (func_149(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_150(iParam0, 1)) || func_151(32768))
	{
		if (!func_150(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_152())
	{
		return false;
	}
	return true;
}

void func_90(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_91(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_92(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_153(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

int func_93(int iParam0)
{
	if (func_64() != -1)
	{
		return 0;
	}
	if (!func_154(iParam0))
	{
		return 0;
	}
	return func_155(Global_1347702[iParam0 /*49*/].f_15);
}

bool func_94(int iParam0)
{
	if (func_64() != -1)
	{
		return false;
	}
	if (!func_154(iParam0))
	{
		return false;
	}
	return func_86(Global_1347702[iParam0 /*49*/].f_15);
}

bool func_95(int iParam0)
{
	if (func_64() != -1)
	{
		return false;
	}
	if ((SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false) && !func_86(Global_1347702[iParam0 /*49*/].f_15)) && !func_156(Global_1347702[iParam0 /*49*/].f_13, 4))
	{
		return true;
	}
	return false;
}

int func_96(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	vVar3 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	iVar6 = func_157(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_97()
{
	return 3;
}

void func_98(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_31[uParam0->f_618 /*36*/].f_4 = uParam0->f_572[iParam1];
	uParam0->f_31[uParam0->f_618 /*36*/].f_5 = 0;
	uParam0->f_31[uParam0->f_618 /*36*/].f_17 = { func_158(iParam1, iParam2) };
	uParam0->f_31[uParam0->f_618 /*36*/].f_23 = func_159(iParam1, iParam2);
	uParam0->f_31[uParam0->f_618 /*36*/].f_26 = iParam1;
	uParam0->f_31[uParam0->f_618 /*36*/].f_27 = iParam2;
	if (uParam0->f_580[iParam1] == 0)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_8 = 0;
		StringCopy(&(uParam0->f_31[uParam0->f_618 /*36*/].f_31), "ATZ_INS_EXC", 16);
		uParam0->f_31[uParam0->f_618 /*36*/].f_33 = { func_160() };
	}
	else if (uParam0->f_580[iParam1] == 1)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_8 = 1;
		StringCopy(&(uParam0->f_31[uParam0->f_618 /*36*/].f_31), "ATZ_INS_FUR", 16);
		uParam0->f_31[uParam0->f_618 /*36*/].f_33 = { func_161() };
	}
	else if (uParam0->f_580[iParam1] == 2)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_8 = 2;
		StringCopy(&(uParam0->f_31[uParam0->f_618 /*36*/].f_31), "ATZ_INS_KLR", 16);
		uParam0->f_31[uParam0->f_618 /*36*/].f_33 = { func_162() };
	}
	else if (uParam0->f_580[iParam1] == 3)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_8 = 3;
		StringCopy(&(uParam0->f_31[uParam0->f_618 /*36*/].f_31), "ATZ_INS_BLD", 16);
		uParam0->f_31[uParam0->f_618 /*36*/].f_33 = { func_163() };
	}
	else if (uParam0->f_580[iParam1] == 4)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_8 = 4;
		StringCopy(&(uParam0->f_31[uParam0->f_618 /*36*/].f_31), "ATZ_INS_BRK", 16);
		uParam0->f_31[uParam0->f_618 /*36*/].f_33 = { func_164() };
	}
	else if (uParam0->f_580[iParam1] == 5)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_8 = 5;
		StringCopy(&(uParam0->f_31[uParam0->f_618 /*36*/].f_31), "ATZ_INS_TRB", 16);
		uParam0->f_31[uParam0->f_618 /*36*/].f_33 = { func_165() };
	}
	if (uParam0->f_588[iParam1] == 0)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_6 = 0;
	}
	else if (uParam0->f_588[iParam1] == 1)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_6 = 1;
	}
	else if (uParam0->f_588[iParam1] == 2)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_6 = 2;
	}
	else if (uParam0->f_588[iParam1] == 3)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_6 = 3;
	}
	else if (uParam0->f_588[iParam1] == 4)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_6 = 4;
	}
	else if (uParam0->f_588[iParam1] == 5)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_6 = 5;
	}
	if (iParam1 == 0)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_13 = 1;
		uParam0->f_31[uParam0->f_618 /*36*/].f_15 = 1;
		func_166(&(uParam0->f_31[uParam0->f_618 /*36*/].f_10), uParam0->f_31[uParam0->f_618 /*36*/].f_17, 0f, 0f, 0f, uParam0->f_7, uParam0->f_7, uParam0->f_7, "volHerbBlocking - Legendary Tracking Clue");
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_31[uParam0->f_618 /*36*/].f_10))
		{
			func_167(uParam0->f_31[uParam0->f_618 /*36*/].f_10, 1);
		}
	}
	if (iParam1 + 1 < func_97())
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_20 = { func_158(iParam1 + 1, iParam2) };
	}
	else
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_20 = { func_168(iParam2) };
	}
}

float func_99(int iParam0)
{
	return func_169(0, iParam0);
}

int func_100(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_170(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_101(var uParam0)
{
	PED::_SET_PED_SCALE(uParam0->f_12, uParam0->f_12.f_4);
	PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(uParam0->f_12, func_171());
	PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), uParam0->f_12, 0);
	FLOCK::_0x8B6F0F59B1B99801(uParam0->f_12, 2);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 305, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 306, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 186, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 465, true);
	PERSISTENCE::_0xDC0A1F0ECEC9F0C0(uParam0->f_12, 1E+08f);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, true);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_12, false);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_12, false);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_12, true);
	PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_12, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 34, true);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 112, 100f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 81, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 82, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 85, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 83, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 84, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 89, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 90, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 105, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 106, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 78, 20f);
	uParam0->f_620 = 1;
	if (uParam0->f_1 == 2)
	{
		if (*uParam0 == 15)
		{
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 137, 0f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 138, 0f);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 39, true);
			FLOCK::_0x706B434FEFAD6A24(1f);
			FLOCK::_0xA881F5C77A560906(3f);
		}
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 139, 0.75f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 88, 50f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 91, 40f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 10, 30f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 74, 1f);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 32, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 54, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 80, true);
	}
	else if (uParam0->f_1 == 3)
	{
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 139, 0.75f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 88, 50f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 91, 40f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 10, 30f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 74, 1f);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 16, false);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 12, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 32, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 54, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 80, true);
	}
	else if (uParam0->f_1 == 1)
	{
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 74, 0f);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_678))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_12, uParam0->f_678, 0f);
	}
}

void func_102(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

int func_103(var uParam0)
{
	return uParam0;
}

Vector3 func_104(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_105(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_172(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

char* func_106(var uParam0)
{
	return uParam0;
}

float func_107(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_173(vVar0, vParam1);
}

float func_108(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_173(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

bool func_109()
{
	if (PED::_IS_PED_CARRYING(Global_35) || func_174(Global_35))
	{
		return true;
	}
	return false;
}

int func_110(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_175(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945938[iVar0 /*18*/].f_11 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_176(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_111(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_83(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_84(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	Global_1945938[iVar0 /*18*/].f_9 = fParam1;
	HUD::_UIPROMPT_CONTEXT_SET_SIZE(Global_1945938[iVar0 /*18*/].f_3, fParam1);
}

int func_112(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_84(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
		{
			HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1), 0);
			return 1;
		}
	}
	return 0;
}

bool func_113(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_83(iParam0))
	{
		return false;
	}
	iVar0 = func_84(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_114(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_83(iParam0))
	{
		return;
	}
	iVar0 = func_84(iParam0);
	if (bParam1)
	{
		func_177(iParam0, 4);
		func_178(iVar0, 1);
		func_179(iVar0, 1);
	}
	else
	{
		func_180(iParam0, 4);
		func_179(iVar0, 0);
	}
}

void func_115(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar1 = func_30();
	iVar2 = 210;
	fVar3 = (uParam0->f_9 + 20f);
	if (uParam0->f_614 == 0)
	{
		uParam0->f_615 = uParam1;
		uParam0->f_616 = uParam1;
		uParam0->f_12.f_10 = { func_168(uParam0->f_615) };
		uParam0->f_12.f_16 = { func_168(uParam0->f_615) };
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_12.f_10, 0f, 0f, 0f, 50f, 50f, 50f);
		uParam0->f_5 = func_181(uParam0->f_4, 0, 0, 0);
		func_182(uParam0);
		if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
		{
			uParam0->f_6 = MAP::_BLIP_ADD_FOR_RADIUS(-108658760, uParam0->f_627, uParam0->f_9);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "ATZ_AREA_BLIP");
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_677))
		{
			AUDIO::SET_AMBIENT_ZONE_STATE(uParam0->f_677, true, true);
		}
		func_183(-1, 0, 0, 0, 0);
		func_184();
		func_185(iVar2, 0, 1);
		func_28(uParam0->f_3);
		uParam0->f_2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_627, 0f, 0f, 0f, fVar3, fVar3, fVar3, "HuntingZoneRestriction");
		func_96(uParam0->f_3, "Hunting Zone Target", 0, 0, 0, 0, -1082130432 /* Float: -1f */);
		uParam0->f_622 = 1;
	}
	uParam0->f_614++;
	if (!uParam0->f_614 >= func_97())
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (uParam0->f_614 == uParam0->f_31[iVar0 /*36*/].f_26 && uParam0->f_615 == uParam0->f_31[iVar0 /*36*/].f_27)
			{
				func_166(&(uParam0->f_31[iVar0 /*36*/].f_10), uParam0->f_31[iVar0 /*36*/].f_17, 0f, 0f, 0f, uParam0->f_7, uParam0->f_7, uParam0->f_7, "volHerbBlocking - Legendary Tracking Clue");
				if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_31[iVar0 /*36*/].f_10))
				{
					func_167(uParam0->f_31[iVar0 /*36*/].f_10, 1);
				}
				uParam0->f_31[iVar0 /*36*/].f_13 = 1;
				uParam0->f_31[iVar0 /*36*/].f_15 = 1;
			}
			else if (uParam0->f_31[iVar0 /*36*/].f_14 == 0)
			{
				uParam0->f_31[iVar0 /*36*/].f_13 = 0;
				uParam0->f_31[iVar0 /*36*/].f_15 = 0;
			}
			iVar0++;
		}
	}
	else
	{
		uParam0->f_621 = 1;
		if (!uParam0->f_624)
		{
			func_121(uParam0);
			uParam0->f_624 = 1;
		}
	}
}

bool func_116(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_117(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (iParam0 == 0)
		{
			func_41(Global_35, "HUNTING_MEDIUM", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
		}
		else if (iParam0 == 1)
		{
			func_41(Global_35, "HUNTING_NEAR", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
		}
	}
	else if (iParam0 == 0)
	{
		func_41(Global_35, "HUNTING_FAR", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
	}
	else if (iParam0 == 1)
	{
		func_41(Global_35, "HUNTING_MEDIUM", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
	}
	else if (iParam0 == 2)
	{
		func_41(Global_35, "HUNTING_NEAR", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
	}
}

int func_118(int iParam0, char* sParam1, int iParam2, float fParam3, int iParam4, int iParam5, float fParam6, int iParam7)
{
	int iVar0;

	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		return 0;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iVar0 > 256)
	{
		return 0;
	}
	if (ENTITY::_0x29BA9F78321E5A6C(iParam0, sParam1, iParam2, fParam3, iParam4, iParam5, 0, 0, 0, fParam6, 0, iParam7))
	{
		return 1;
	}
	return 0;
}

void func_119(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			Global_36581[iVar0 /*2*/].f_1 = 3;
		}
		iVar0++;
	}
}

bool func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
		case 8:
		case 9:
		case 11:
		case 13:
		case 15:
			return true;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 10:
		case 12:
		case 14:
			return false;
		default:
			break;
	}
	return false;
}

void func_121(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		func_186(uParam0->f_12, uParam0->f_12.f_10, func_99(uParam0->f_615), 2, 1073741824 /* Float: 2f */);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_12, true);
		PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_12, true);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_12, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_12, false);
		TASK::TASK_WANDER_IN_AREA(uParam0->f_12, uParam0->f_12.f_10, 10f, 1.5f, 3f, 1);
	}
}

void func_122(var uParam0)
{
	int iVar0;

	iVar0 = func_188(0, func_187(), uParam0->f_616);
	uParam0->f_616 = iVar0;
	uParam0->f_12.f_16 = { func_168(iVar0) };
}

bool func_123(int iParam0, int iParam1)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_15614[iParam0] && iParam1) != 0;
}

int func_124()
{
	return Global_1894899.f_2;
}

bool func_125(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_126(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

bool func_127(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

struct<10> func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_129(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_127(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*(uParam2[iVar47 /*2*/]) = { Var0.f_4[iVar47 /*2*/] };
		iVar47++;
	}
	if (bParam4)
	{
		func_189(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

struct<4> func_130(bool bParam0)
{
	return func_132(joaat("CHARACTER"), func_190(), -1591664384, bParam0);
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		case 2:
			return 1426626782;
		case 3:
			return 1227915917;
		default:
			break;
	}
	return 1084182731;
}

struct<4> func_132(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_127(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_133(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_133(bool bParam0)
{
	if (func_64() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_134(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam0 != 0)
	{
		iVar3 = func_191(iParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_192(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar3, iVar0, &iVar1))
				{
					iVar2 = iVar1;
					if (iVar2 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

int func_135(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	if (!func_193(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_133(bParam3), iParam0);
}

int func_136(int iParam0, bool bParam1)
{
	if (func_194(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_133(bParam1), iParam0, 0);
}

int func_137(int iParam0)
{
	if (!func_127(iParam0, 0))
	{
	}
	if (func_195(iParam0, 173360570))
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0)
{
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x4AEF1FB5B9011D75(iParam0);
}

bool func_139(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_127(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return false;
	}
	if (func_196(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_193(0))
	{
		return false;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_133(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_140(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_141(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_197(1);
	}
}

void func_142(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_141(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_197(1);
	}
}

bool func_143(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_144(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_145(int iParam0)
{
	return func_175(iParam0, 2);
}

int func_146(int iParam0)
{
	if (!func_198(iParam0))
	{
		return -1;
	}
	return func_199(iParam0);
}

bool func_147(int iParam0, int iParam1)
{
	if (func_64() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_148(int iParam0)
{
	if (func_64() != -1)
	{
		if (func_150(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_150(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_150(iParam0, 65536) && !func_150(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_150(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_150(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_150(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_151(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_152()
{
	return Global_1905944.f_5694;
}

int func_153(int iParam0, bool bParam1)
{
	switch (func_146(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_154(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_155(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_199(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_156(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_157(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_143(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_200(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, bParam7);
	}
	if (fParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, fParam9);
	}
	func_201(iVar0, bParam8);
	return iVar0;
}

Vector3 func_158(int iParam0, int iParam1)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { func_202(1, iParam1) };
			break;
		case 1:
			vVar0 = { func_202(2, iParam1) };
			break;
		case 2:
			vVar0 = { func_202(3, iParam1) };
			break;
	}
	return vVar0;
}

float func_159(int iParam0, int iParam1)
{
	float fVar0;

	switch (iParam0)
	{
		case 0:
			fVar0 = func_169(1, iParam1);
			break;
		case 1:
			fVar0 = func_169(2, iParam1);
			break;
		case 2:
			fVar0 = func_169(3, iParam1);
			break;
	}
	return fVar0;
}

Vector3 func_160()
{
	return func_203("ATZ_INS_EXC_BO");
}

Vector3 func_161()
{
	return func_203("ATZ_INS_FUR");
}

Vector3 func_162()
{
	return func_203("ATZ_INS_KLR");
}

Vector3 func_163()
{
	return func_203("ATZ_INS_BLD");
}

Vector3 func_164()
{
	return func_203("ATZ_INS_BRK");
}

Vector3 func_165()
{
	return func_203("ATZ_INS_TRB");
}

void func_166(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_167(int iParam0, int iParam1)
{
	if (func_204(iParam0))
	{
		return;
	}
	if (func_205(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36602 >= 10)
	{
		Global_36602 = 0;
	}
	Global_36581[Global_36602 /*2*/].f_1 = iParam1;
	Global_36581[Global_36602 /*2*/] = iParam0;
	Global_36602++;
}

Vector3 func_168(int iParam0)
{
	return func_202(0, iParam0);
}

float func_169(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 359.0104f;
				case 1:
					return 359.0104f;
				case 2:
					return 359.0104f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 239.0104f;
				case 1:
					return 181.0104f;
				case 2:
					return 319.0104f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 151.0104f;
				case 1:
					return 343.0104f;
				case 2:
					return 291.0104f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 205.0104f;
				case 1:
					return 267.0104f;
				case 2:
					return 267.0104f;
			}
			break;
	}
	return 0f;
}

void func_170(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_206(iParam1))
		{
			func_207(iParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_208(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_209(iParam0, 0);
			bVar0 = true;
		}
		func_210(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_171()
{
	return -1796300629 /* GXTEntry: "Legendary Boar" */;
}

bool func_172(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_173(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_174(int iParam0)
{
	return (func_211(iParam0, 4) || func_211(iParam0, 5));
}

bool func_175(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

void func_176(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1945938[iParam0 /*18*/].f_4 = iParam1;
	Global_1945938[iParam0 /*18*/] = iParam4;
	Global_1945938[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945938[iParam0 /*18*/].f_2 = iParam5;
	Global_1945938[iParam0 /*18*/].f_6 = { vParam6 };
	Global_1945938[iParam0 /*18*/].f_9 = fParam9;
	Global_1945938[iParam0 /*18*/].f_10 = iParam10;
	Global_1945938[iParam0 /*18*/].f_11 = iParam11;
	Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_5 = iParam12;
	Global_1945938[iParam0 /*18*/].f_1 = 2;
	Global_1945938[iParam0 /*18*/].f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1945938[iParam0 /*18*/].f_3 = iVar0;
	func_178(iParam0, 1);
	func_179(iParam0, 1);
	func_180(iParam0, 128);
}

void func_177(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_178(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_175(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_179(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_180(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

var func_181(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return uVar0;
	}
	func_212(iParam0, bParam2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = PED::_0x4C39C95AE5DB1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_182(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (uParam0->f_31[iVar0 /*36*/].f_26 == 0)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_31[iVar0 /*36*/].f_10))
			{
				func_119(uParam0->f_31[iVar0 /*36*/].f_10);
			}
			if (MAP::DOES_BLIP_EXIST(uParam0->f_31[iVar0 /*36*/]))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_31[iVar0 /*36*/]));
			}
		}
		iVar0++;
	}
}

void func_183(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_213() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_214(iVar1) && !func_215(iVar1, iParam2)) && (!bParam3 || !func_216(iVar1))) && (!bParam4 || !func_217(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_218(iVar0);
			}
		}
		iVar0++;
	}
}

void func_184()
{
	if (!func_214(Global_1327479))
	{
		return;
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1310750[Global_1327479 /*111*/].f_40)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1310750[Global_1327479 /*111*/].f_40)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1310750[Global_1327479 /*111*/].f_40));
		}
	}
	func_219(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
}

void func_185(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_220(iParam0, iParam1, bParam2);
}

void func_186(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_103(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_221(iParam0))
	{
		if (func_222(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_223(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_186(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_186(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_223(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_223(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_223(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_223(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_223(iParam5, 129))
	{
		if (func_223(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_223(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_223(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_223(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_221(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_223(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_223(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_187()
{
	return 3;
}

int func_188(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_224())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_55(func_224(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

void func_189(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	struct<2> Var21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		Var21[iVar0 /*2*/] = (*uParam2)[iVar0 /*2*/];
		Var21[iVar0 /*2*/].f_1 = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (Var21[iVar0 /*2*/] == Var19)
							{
								Var21[iVar0 /*2*/].f_1 = (Var21[iVar0 /*2*/].f_1 - Var19.f_1);
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (Var21[iVar0 /*2*/].f_1 != 1f)
		{
			(uParam2[iVar0 /*2*/])->f_1 = BUILTIN::FLOOR((IntToFloat((uParam2[iVar0 /*2*/])->f_1) * (Var21[iVar0 /*2*/].f_1 / 1f)));
		}
		iVar0++;
	}
}

struct<4> func_190()
{
	struct<4> Var0;

	return Var0;
}

int func_191(int iParam0)
{
	struct<2> Var0;

	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_192(int iParam0)
{
	int iVar0;

	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_191(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar0);
}

bool func_193(bool bParam0)
{
	if (func_64() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_133(bParam0));
}

bool func_194(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_195(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

bool func_196(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_225(&iParam0);
	if (!func_127(iParam0, 0))
	{
		return false;
	}
	if (!func_193(0))
	{
		bParam3 = true;
	}
	if (func_226(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { func_227(0) };
			Var4.f_9 = -1591664384;
			if (!func_228(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (func_229(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (func_230(iParam0, 1))
			{
				if (!func_228(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (func_229(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_231(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_135(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = func_232(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_133(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

void func_197(bool bParam0)
{
	if (bParam0)
	{
		func_233(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_234(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_198(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_199(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_235(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_200(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_201(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			Global_1911670[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

Vector3 func_202(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2358.828f, -289.1895f, 41.629f;
				case 1:
					return 2362.36f, -235.9453f, 40.9825f;
				case 2:
					return 2429.042f, -203.314f, 41.6953f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2435.007f, -231.337f, 40.7745f;
				case 1:
					return 2433.5f, -273.3965f, 41.2025f;
				case 2:
					return 2373.288f, -290.5373f, 40.5215f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2392.101f, -216.588f, 40.6585f;
				case 1:
					return 2405.278f, -303.8483f, 41.3704f;
				case 2:
					return 2372.459f, -253.9842f, 40.7453f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2362.197f, -227.1641f, 40.4913f;
				case 1:
					return 2363.996f, -280.7906f, 40.5509f;
				case 2:
					return 2416.042f, -257.2738f, 41.8762f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_203(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_204(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_205(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			return Global_36581[Global_36602 /*2*/].f_1;
		}
		iVar0++;
	}
	return 3;
}

bool func_206(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CS_SISTERCALDERON"):
		case joaat("CS_STRSHERIFF_01"):
		case joaat("CS_MUD2BIGGUY"):
		case joaat("CS_RAINSFALL"):
		case joaat("CS_PENELOPEBRAITHWAITE"):
		case joaat("CS_SWAMPWEIRDOSONNY"):
		case joaat("CS_UNIDUSTERJAIL_01"):
		case joaat("CS_IANGRAY"):
		case joaat("CS_TINYHERMIT"):
		case joaat("CS_TIMOTHYDONAHUE"):
		case joaat("CS_PRINCESSISABEAU"):
		case joaat("CS_LEVITICUSCORNWALL"):
		case joaat("CS_DIDSBURY"):
		case joaat("CS_FEATHERSTONCHAMBERS"):
		case joaat("CS_FEATSOFSTRENGTH"):
		case joaat("CS_BANDPIANIST"):
		case joaat("CS_ESCAPEARTISTASSISTANT"):
		case joaat("CS_GARETHBRAITHWAITE"):
		case joaat("CS_CREOLEGUY"):
		case joaat("CS_LEIGHGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_02"):
		case joaat("CS_GLORIA"):
		case joaat("CS_WARVET"):
		case joaat("CS_JOCKGRAY"):
		case joaat("CS_DAVIDGEDDES"):
		case joaat("CS_GUIDOMARTELLI"):
		case joaat("CS_DUNCANGEDDES"):
		case joaat("CS_DUSTERINFORMANT_01"):
		case joaat("CS_PINKERTONGOON"):
		case joaat("CS_MICKEY"):
		case joaat("CS_TWINBROTHER_02"):
		case joaat("CS_HESTONJAMESON"):
		case joaat("CS_STRDEPUTY_01"):
		case joaat("CS_ABE"):
		case joaat("CS_ODDFELLOWSPINHEAD"):
		case joaat("CS_SWAMPFREAK"):
		case joaat("CS_MRADLER"):
		case joaat("CS_ABERDEENPIGFARMER"):
		case joaat("CS_HOBARTCRAWLEY"):
		case joaat("CS_FORMYARTBIGWOMAN"):
		case joaat("CS_NORRISFORSYTHE"):
		case joaat("CS_JULES"):
		case joaat("CS_TOMDICKENS"):
		case joaat("CS_GERALDBRAITHWAITE"):
		case joaat("CS_PAYTAH"):
		case joaat("CS_CANCAN_03"):
		case joaat("CS_GRIZZLEDJON"):
		case joaat("CS_WROBEL"):
		case joaat("CS_MEREDITH"):
		case joaat("CS_CREEPYOLDLADY"):
		case joaat("CS_NBXRECEPTIONIST_01"):
		case joaat("CS_NBXPOLICECHIEFFORMAL"):
		case joaat("CS_CORNWALLTRAINCONDUCTOR"):
		case joaat("CS_RHODEPUTY_01"):
		case joaat("CS_DRMALCOLMMACINTOSH"):
		case joaat("CS_LEON"):
		case joaat("CS_SHERIFFOWENS"):
		case joaat("CS_SDDOCTOR_01"):
		case joaat("CS_SCOTTGRAY"):
		case joaat("CS_CANCAN_01"):
		case joaat("CS_CREOLECAPTAIN"):
		case joaat("CS_BRONTESBUTLER"):
		case joaat("CS_JANSON"):
		case joaat("CS_FORGIVENWIFE_01"):
		case joaat("CS_TIGERHANDLER"):
		case joaat("CS_FRENCHARTIST"):
		case joaat("CS_GENSTORYMALE"):
		case joaat("CS_CLAY"):
		case joaat("CS_STRDEPUTY_02"):
		case joaat("CS_FAMOUSGUNSLINGER_03"):
		case joaat("CS_BIVCOACHDRIVER"):
		case joaat("CS_BRAITHWAITEBUTLER"):
		case joaat("CS_CLEET"):
		case joaat("CS_JOE"):
		case joaat("CS_SLAVECATCHER"):
		case joaat("CS_BRAITHWAITEMAID"):
		case joaat("CS_TWINGROUPIE_02"):
		case joaat("CS_MRSGEDDES"):
		case joaat("CS_SAMARITAN"):
		case joaat("CS_EXCONFEDINFORMANT"):
		case joaat("CS_FRENCHMAN_01"):
		case joaat("CS_BANDSINGER"):
		case joaat("CS_BAPTISTE"):
		case joaat("CS_ANGUSGEDDES"):
		case joaat("CS_MYSTERIOUSSTRANGER"):
		case joaat("CS_FAMOUSGUNSLINGER_01"):
		case joaat("CS_BARTHOLOMEWBRAITHWAITE"):
		case joaat("CS_MIXEDRACEKID"):
		case joaat("CS_BEATENUPCAPTAIN"):
		case joaat("CS_EDGARROSS"):
		case joaat("CS_TWINGROUPIE_01"):
		case joaat("CS_MRSWEATHERS"):
		case joaat("CS_JAMIE"):
		case joaat("CS_KARENSJOHN_01"):
		case joaat("CS_THOMASDOWN"):
		case joaat("CS_OBEDIAHHINTON"):
		case joaat("CS_AGNESDOWD"):
		case joaat("CS_CAVEHERMIT"):
		case joaat("CS_BRYNNTILDON"):
		case joaat("CS_GERMANSON"):
		case joaat("CS_BRENDACRAWLEY"):
		case joaat("CS_COLFAVOURS"):
		case joaat("CS_RHODESKIDNAPVICTIM"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("CS_CANCAN_04"):
		case joaat("CS_TOWNCRIER"):
		case joaat("CS_FAMOUSGUNSLINGER_04"):
		case joaat("CS_DALEMARONEY"):
		case joaat("CS_ANGRYHUSBAND"):
		case joaat("CS_LILLIANPOWELL"):
		case joaat("CS_ANDERSHELGERSON"):
		case joaat("CS_POORJOE"):
		case joaat("CS_BRAITHWAITESERVANT"):
		case joaat("CS_BROTHERDORKINS"):
		case joaat("CS_ALBERTMASON"):
		case joaat("CS_FAMOUSGUNSLINGER_05"):
		case joaat("CS_BALLOONOPERATOR"):
		case joaat("CS_ALBERTCAKEESQUIRE"):
		case joaat("CS_MRSFELLOWS"):
		case joaat("CS_CANCANMAN_01"):
		case joaat("CS_POISONWELLSHAMAN"):
		case joaat("CS_CANCAN_02"):
		case joaat("CS_MEREDITHSMOTHER"):
		case joaat("CS_ANGEL"):
		case joaat("CS_ARCHERFORDHAM"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("CS_CHELONIANMASTER"):
		case joaat("CS_TWINBROTHER_01"):
		case joaat("CS_GERMANDAUGHTER"):
		case joaat("CS_LEMIUXASSISTANT"):
		case joaat("CS_CREOLEDOCTOR"):
		case joaat("CS_CRACKPOTROBOT"):
		case joaat("CS_BANDBASSIST"):
		case joaat("CS_GENSTORYFEMALE"):
		case joaat("CS_MARYLINTON"):
		case joaat("CS_VALPRAYINGMAN"):
		case joaat("CS_JOHNTHEBAPTISINGMADMAN"):
		case joaat("CS_MRS_CALHOUN"):
		case joaat("CS_THEODORELEVIN"):
		case joaat("CS_NICHOLASTIMMINS"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("CS_DINOBONESLADY"):
		case joaat("CS_BEAUGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_01"):
		case joaat("CS_CRACKPOTINVENTOR"):
		case joaat("CS_HERCULE"):
		case joaat("CS_GAVIN"):
		case joaat("CS_LEVISIMON"):
		case joaat("CS_LONDONDERRYSON"):
		case joaat("CS_CAPTAINMONROE"):
		case joaat("CS_FAMOUSGUNSLINGER_02"):
		case joaat("CS_MRSLONDONDERRY"):
		case joaat("CS_SOOTHSAYER"):
		case joaat("CS_TAVISHGRAY"):
		case joaat("CS_JOEBUTLER"):
		case joaat("CS_BANDDRUMMER"):
		case joaat("CS_LILLYMILLET"):
		case joaat("CS_ANSEL_ATHERTON"):
		case joaat("CS_RHODEPUTY_02"):
		case joaat("CS_EDMUNDLOWRY"):
		case joaat("CS_DISGUISEDDUSTER_02"):
		case joaat("CS_MAGNIFICO"):
		case joaat("CS_ARTAPPRAISER"):
		case joaat("CS_FORGIVENHUSBAND_01"):
		case joaat("CS_REVERENDFORTHERINGHAM"):
		case joaat("CS_DAVEYCALLENDER"):
		case joaat("CS_DESMOND"):
		case joaat("CS_ADAMGRAY"):
		case joaat("CS_JIMCALLOWAY"):
		case joaat("CS_SDSALOONDRUNK_01"):
		case joaat("CS_NBXDRUNK"):
		case joaat("CS_GERMANMOTHER"):
		case joaat("CS_RINGMASTER"):
		case joaat("CS_LUCANAPOLI"):
		case joaat("CS_RHODESASSISTANT"):
		case joaat("CS_ABERDEENSISTER"):
		case joaat("CS_NBXEXECUTED"):
		case joaat("CS_FAMOUSGUNSLINGER_06"):
		case joaat("CS_JOHNWEATHERS"):
		case joaat("CS_PROFESSORBELL"):
		case joaat("CS_RHODESSALOONBOUNCER"):
			return true;
		default:
			break;
	}
	return false;
}

void func_207(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_236(iParam0, iParam1))
		{
			if (func_237(iParam0, iParam1))
			{
				if (func_238(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_239(iParam0);
				}
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_208(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("HATS"), 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_209(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_210(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1f);
	}
}

int func_211(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

void func_212(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

int func_213()
{
	return Global_1310750.f_16037;
}

bool func_214(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_215(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

bool func_216(int iParam0)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	if (func_240(64) && func_241(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_217(int iParam0)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_218(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_214(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_242(iParam0);
	Global_1310750.f_16037 = (Global_1310750.f_16037 - 1);
}

void func_219(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

void func_220(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479.f_9)
	{
		return;
	}
	Global_1327479.f_4 = (Global_1327479.f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750.f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479.f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479.f_5 = (Global_1327479.f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

bool func_221(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_222(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("PROP_HITCHINGPOST")))
	{
		return true;
	}
	return false;
}

bool func_223(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_224()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_225(int iParam0)
{
	if (!func_127(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			return 1;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			return 1;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			return 1;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			return 1;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_226(int iParam0)
{
	return func_243(iParam0) == joaat("WEAPON");
}

struct<4> func_227(bool bParam0)
{
	int iVar0;

	iVar0 = func_133(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224215))
		{
			Global_1224215 = { func_132(923904168, func_130(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224223))
		{
			Global_1224223 = { func_132(923904168, func_130(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_132(923904168, func_130(bParam0), -740156546, 0);
}

bool func_228(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_232(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_229(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_244(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

bool func_230(int iParam0, bool bParam1)
{
	if (func_191(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_245(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_231(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_127(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_246(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_247((386 + iVar29), 1);
		if (func_228(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_229(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_232(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_132(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_133(bParam6), &Var0, 0);
	return uVar4;
}

void func_233(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_234(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888.f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888.f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (Global_1058888.f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (Global_1058888.f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

bool func_236(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_237(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_238(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_236(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_239(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_240(int iParam0)
{
	return (Global_1310750.f_16035 && iParam0) != 0;
}

bool func_241(int iParam0)
{
	return func_215(iParam0, Global_1310750.f_16072 | 64);
}

void func_242(int iParam0)
{
	int iVar0;

	if (Global_1310750.f_13321[iParam0 /*9*/] != -1)
	{
		Global_1310750[Global_1310750.f_13321[iParam0 /*9*/] /*111*/].f_48 = 0;
	}
	Global_1310750.f_13321[iParam0 /*9*/] = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_1 = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_2 = { 0f, 0f, 0f };
	Global_1310750.f_13321[iParam0 /*9*/].f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1310750.f_13321[iParam0 /*9*/].f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

int func_243(int iParam0)
{
	vector3 vVar0;

	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_244(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_133(0);
	*uParam1 = { func_132(iParam0, func_227(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_245(int iParam0)
{
	if (!func_248(iParam0))
	{
		return false;
	}
	return func_249(iParam0);
}

struct<5> func_246(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_130(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_243(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_132(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_227(bParam1) };
			if (bParam2 && func_230(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_228(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_228(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_229(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -813824107;
			Var0 = { func_250(bParam1) };
			switch (func_191(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
			if (func_251(iParam0, -1823706425))
			{
				Var0 = { func_132(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_251(iParam0, -1483207246))
			{
				Var0 = { func_132(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_252(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_247(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return joaat("SLOTID_HORSE_BEDROLL");
		case 237:
			return joaat("SLOTID_HORSE_BLANKET");
		case 238:
			return joaat("SLOTID_HORSE_CANTLE");
		case 239:
			return joaat("SLOTID_HORSE_FENDER");
		case 240:
			return joaat("SLOTID_HORSE_HORN");
		case 241:
			return joaat("SLOTID_HORSE_INSURANCE");
		case 242:
			return 802754820;
		case 243:
			return joaat("SLOTID_HORSE_MANE");
		case 244:
			return -1886147520;
		case 245:
			return joaat("SLOTID_HORSE_REINS");
		case 246:
			return joaat("SLOTID_HORSE_SADDLE");
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return joaat("SLOTID_HORSE_SADDLEBAG");
		case 258:
			return 724026534;
		case 259:
			return joaat("SLOTID_HORSE_SEAT");
		case 260:
			return joaat("SLOTID_HORSE_SEX");
		case 261:
			return joaat("SLOTID_HORSE_SKIRT");
		case 262:
			return -1824203570;
		case 263:
			return -1654197998;
		case 264:
			return 798987653;
		case 265:
			return 976923323;
		case 266:
			return 1167442289;
		case 267:
			return joaat("SLOTID_HORSE_STIRRUP");
		case 268:
			return joaat("SLOTID_HORSE_TAIL");
		case 269:
			return -2015960939;
		case 270:
			return 1132377945;
		case 271:
			return 739936401;
		case 272:
			return 1201880974;
		case 273:
			return 819728896;
		case 274:
			return 1746010219;
		case 275:
			return 1433393959;
		case 276:
			return -1287636759;
		case 277:
			return -706917073;
		case 278:
			return -2166805;
		case 279:
			return -1391602433;
		case 280:
			return 1782075221;
		case 281:
			return 1282544585;
		case 282:
			return 1732594027;
		case 283:
			return -1058817012;
		case 284:
			return 1090546265;
		case 285:
			return -1783120823;
		case 286:
			return -1535745896;
		case 287:
			return -2086922122;
		case 288:
			return -1675198649;
		case 289:
			return 1189497682;
		case 290:
			return -1565675519;
		case 291:
			return -268973591;
		case 292:
			return 1039159916;
		case 293:
			return 1111816631;
		case 294:
			return 405591388;
		case 295:
			return 897456793;
		case 296:
			return 104187473;
		case 297:
			return 773808542;
		case 298:
			return -1120669954;
		case 299:
			return -1389278274;
		case 300:
			return 552979403;
		case 301:
			return -1571578784;
		case 302:
			return -708312114;
		case 303:
			return 688823508;
		case 304:
			return -1622147240;
		case 305:
			return 830292162;
		case 306:
			return 226276782;
		case 307:
			return -678416628;
		case 308:
			return -1098528034;
		case 309:
			return 316207340;
		case 310:
			return -1909200748;
		case 311:
			return -939652363;
		case 312:
			return joaat("SLOTID_PROGRESSION");
		case 313:
			return -375447933;
		case 314:
			return 537014919;
		case 315:
			return 1784584921;
		case 316:
			return -140655024;
		case 317:
			return 1084182731;
		case 318:
			return -1045471300;
		case 319:
			return 1617414719;
		case 320:
			return -787761753;
		case 321:
			return -490616606;
		case 322:
			return 1491346514;
		case 323:
			return -1360128126;
		case 324:
			return -1311702610;
		case 325:
			return -904250715;
		case 326:
			return 1034665895;
		case 327:
			return -101524555;
		case 328:
			return 1419152594;
		case 329:
			return -451359317;
		case 330:
			return -1915385310;
		case 331:
			return 1315162488;
		case 332:
			return -361152079;
		case 333:
			return -2041626192;
		case 334:
			return -2077812539;
		case 335:
			return -1371514637;
		case 336:
			return 1730017037;
		case 337:
			return 892816668;
		case 338:
			return -1994943603;
		case 339:
			return 603133554;
		case 340:
			return -30160144;
		case 341:
			return -1248299493;
		case 342:
			return 727393558;
		case 343:
			return 755611221;
		case 344:
			return -170255458;
		case 345:
			return 1011151573;
		case 346:
			return 1122339631;
		case 347:
			return 454815308;
		case 348:
			return 990701735;
		case 349:
			return -246340825;
		case 350:
			return -1410671073;
		case 351:
			return 1547608292;
		case 352:
			return -714132970;
		case 353:
			return 732290690;
		case 354:
			return 971340545;
		case 355:
			return -234132662;
		case 356:
			return -2143057988;
		case 357:
			return -993947465;
		case 358:
			return -486552269;
		case 359:
			return -1156317860;
		case 360:
			return 1229625803;
		case 361:
			return -388596167;
		case 362:
			return -1204639465;
		case 363:
			return -1384685096;
		case 364:
			return -2026728113;
		case 365:
			return -1228057307;
		case 366:
			return 1835126290;
		case 367:
			return 1890833594;
		case 368:
			return -751549960;
		case 369:
			return -1682270750;
		case 370:
			return -1839865333;
		case 371:
			return -1990383629;
		case 372:
			return 1712094016;
		case 373:
			return 1532953697;
		case 374:
			return 1620318083;
		case 375:
			return -307230331;
		case 376:
			return -1034549620;
		case 377:
			return -1293064293;
		case 378:
			return -1540142553;
		case 379:
			return -1769886012;
		case 380:
			return -1983081126;
		case 381:
			return -1106117124;
		case 382:
			return -1873108338;
		case 383:
			return -2097543219;
		case 384:
			return 155413195;
		case 385:
			return -1162387149;
		case 386:
			return 1728382685 /* GXTEntry: "Right" */;
		case 387:
			return -649335959 /* GXTEntry: "Left" */;
		case 388:
			return -1876502240;
		case 389:
			return -2107032155;
		case 390:
			return 1570861011;
		case 391:
			return 1075981185;
		case 392:
			return 960195961;
		case 393:
			return 1150460649;
		case 394:
			return 1689424794;
		case 395:
			return 619103418;
		case 396:
			return 1355448197;
		case 397:
			return 1681762005;
		case 398:
			return 1026887814;
		case 399:
			return 354352628;
		case 400:
			return 1519366642;
		case 401:
			return -82757515;
		case 402:
			return 386306655;
		case 403:
			return 1243962119;
		case 404:
			return 756214903;
		case 405:
			return -718417579;
		case 406:
			return -1445516411;
		case 407:
			return 1232060796;
		case 408:
			return -672392892;
		case 409:
			return 1465341584;
		case 410:
			return -427758369;
		case 411:
			return -735647142;
		case 412:
			return 1535838048;
		case 413:
			return -602272282;
		case 414:
			return 2051264661;
		case 415:
			return 487172188;
		case 416:
			return 282270687;
		case 417:
			return 1607708943;
		case 418:
			return 1686264939;
		case 419:
			return 314786149;
		case 420:
			return 1402841185;
		case 421:
			return 1099170772;
		case 422:
			return 2125676786;
		case 423:
			return -363896735;
		case 424:
			return -468790222;
		case 425:
			return -1779133048;
		case 426:
			return 1732537631;
		case 427:
			return 1755095401;
		case 428:
			return 835771095;
		case 429:
			return 1963317232;
		case 430:
			return 259627919;
		case 431:
			return 1299075397;
		case 432:
			return -1509094230;
		case 433:
			return 61132362;
		case 434:
			return 1549741908;
		case 435:
			return 288484254;
		case 436:
			return -1877032947;
		case 437:
			return -1395676456;
		case 438:
			return 1136146715;
		case 439:
			return 468034421;
		case 440:
			return 1079459546;
		case 441:
			return -140369351;
		case 442:
			return 1822341990;
		case 443:
			return 1219701681;
		case 444:
			return 1601295268;
		case 445:
			return -1692460667;
		case 446:
			return 1471419228;
		case 447:
			return 907446160;
		case 448:
			return -1126482585;
		case 449:
			return 1911050315;
		case 450:
			return -1343525599;
		case 451:
			return 1261891225;
		case 452:
			return 763162704;
		case 453:
			return 1335861197;
		case 454:
			return 526744654;
		case 455:
			return -1177461517;
		case 456:
			return -241638635;
		case 457:
			return 1024262875;
		case 458:
			return 853355463;
		case 459:
			return -337288221;
		case 460:
			return 361381308;
		case 461:
			return -1264898804;
		case 462:
			return -585289073;
		case 463:
			return 1423542233;
		case 464:
			return -948489286;
		case 465:
			return 2063859257;
		case 466:
			return -1652627327;
		case 467:
			return -1959697839;
		case 468:
			return -1532267859;
		case 469:
			return -1410062763;
		case 470:
			return -901428716;
		case 471:
			return -1628873469;
		case 472:
			return 144855571;
		case 473:
			return -617589883;
		case 474:
			return -1306457086;
		case 475:
			return 1713542477;
		case 476:
			return -305542365;
		case 477:
			return 1985390213;
		case 478:
			return -2145069367;
		case 479:
			return -1674390752;
		case 480:
			return -2117214398;
		case 481:
			return 1880805647;
		case 482:
			return -62390436;
		case 483:
			return 1815288415;
		case 484:
			return 196214097;
		case 485:
			return -201958220;
		case 486:
			return 244353594;
		case 487:
			return 302954672;
		case 488:
			return -1870144662;
		case 489:
			return 257892944;
		case 490:
			return -607182722;
		case 491:
			return -13254502;
		case 492:
			return 1400281261;
		case 493:
			return 1601515402;
		case 494:
			return -940704970;
		case 495:
			return -548371721;
		case 496:
			return -1022384613;
		case 497:
			return -357406394;
		case 498:
			return 1077068189;
		case 499:
			return -782241404;
		case 500:
			return 1669853467;
		case 501:
			return 1592019450;
		case 502:
			return 635273153;
		case 503:
			return -1559225678;
		case 504:
			return -266425508;
		case 505:
			return 1117400455;
		case 506:
			return 454332195;
		case 507:
			return -1328061889;
		case 508:
			return 561650932;
		case 509:
			return 256105670;
		case 510:
			return 1976779618;
		case 511:
			return -269095126;
		case 512:
			return 2145617267;
		case 513:
			return 1150213537;
		case 514:
			return 1598825281;
		case 515:
			return -712527121;
		case 516:
			return 1308553072;
		case 517:
			return 852866398;
		case 518:
			return -1794417972;
		case 519:
			return 293062146;
		case 520:
			return 95360094;
		case 521:
			return 807631773;
		case 522:
			return 1603958275;
		case 523:
			return 860052020;
		case 524:
			return -1885979781;
		case 525:
			return 746147970;
		case 526:
			return 666663006;
		case 527:
			return -2096186453;
		case 528:
			return 859409444;
		case 529:
			return -671427187;
		case 530:
			return 100192478;
		case 531:
			return 307812616;
		case 532:
			return 1670843243;
		case 533:
			return 899615863;
		case 534:
			return -298901850;
		case 535:
			return 1379186917;
		case 536:
			return -817206030;
		case 537:
			return -1150323212;
		case 538:
			return -247466821;
		case 539:
			return 427124242;
		case 540:
			return 855418120;
		case 541:
			return -777015093;
		case 542:
			return -722462870;
		case 543:
			return -937454324;
		case 544:
			return -339438116;
		case 545:
			return 2135639035;
		case 546:
			return 1254273765;
		case 547:
			return -792172668;
		case 548:
			return 1905987493;
		case 549:
			return 495693044;
		case 550:
			return -1693422950;
		case 551:
			return -205873076;
		case 552:
			return -2143114654;
		case 553:
			return -1420574021;
		case 554:
			return -1959250381;
		case 555:
			return -1088328663;
		case 556:
			return 513602003;
		case 557:
			return 359221401;
		case 558:
			return 1005272;
		case 559:
			return 1583044470;
		case 560:
			return 348853959;
		case 561:
			return 1045621973;
		case 562:
			return 1084576580;
		case 563:
			return 1651573695;
		case 564:
			return 1463321587;
		case 565:
			return -997505963;
		case 566:
			return -1649851713;
		case 567:
			return -386012962;
		case 568:
			return 1386101789;
		case 569:
			return 1227915917;
		case 570:
			return -218846335;
		case 571:
			return -352578118;
		case 572:
			return 1426626782;
		case 573:
			return -714081520;
		case 574:
			return 74547781;
		case 575:
			return 1271463052;
		case 576:
			return 1983140194;
		case 577:
			return 677262775;
		case 578:
			return -832337898;
		case 579:
			return -319249747;
		case 580:
			return -16955722;
		case 581:
			return -1535425646;
		case 582:
			return -1063641743;
		case 583:
			return -1041133401;
		case 584:
			return 1380479304;
		case 585:
			return 600890828;
		case 586:
			return 733333190;
		case 587:
			return 1843035435;
		case 588:
			return -304127320;
		case 589:
			return 122470371;
		case 590:
			return 0;
		case 591:
			return -1591664384;
		case 592:
			return -673000374;
		case 593:
			return -1150938404;
		case 594:
			return -1756997214;
		case 595:
			return -813824107;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_248(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_249(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

struct<4> func_250(bool bParam0)
{
	int iVar0;

	iVar0 = func_133(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224219))
		{
			Global_1224219 = { func_132(271701509, func_130(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return func_132(271701509, func_130(bParam0), 12999093, 0);
}

bool func_251(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_191(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_252(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_133(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}


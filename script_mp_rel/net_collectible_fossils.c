#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	struct<10> Local_16 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = -1;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1(&Local_16, vScriptParam_0);
	if (func_2() == -1)
	{
	}
	else
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		if (func_4(func_3(0)) != 7)
		{
		}
		else
		{
			func_5(&Local_16);
		}
	}
	if (func_2() == -1)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		{
			func_5(&Local_16);
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_16.f_9))
	{
		func_5(&Local_16);
	}
	while (func_6(&Local_16))
	{
		if (func_7())
		{
			func_5(&Local_16);
		}
		if (func_8(&Local_16))
		{
			func_5(&Local_16);
		}
		BUILTIN::WAIT(0);
	}
	func_5(&Local_16);
}

void func_1(var uParam0, vector3 vParam1)
{
	NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(4);
	uParam0->f_12 = func_9(vParam1);
	*uParam0 = func_10(vParam1, uParam0);
	func_11(uParam0, 2);
	uParam0->f_13 = "script@mech@treasure_hunting@grab";
	uParam0->f_14 = "PBL_GRAB_01";
	uParam0->f_2 = 0;
	uParam0->f_22 = func_12(vParam1, uParam0);
	uParam0->f_10 = vParam1.x;
	uParam0->f_9 = vParam1.y;
	uParam0->f_6 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_9, true) };
	func_13(&(uParam0->f_27), uParam0->f_6);
	func_14(*uParam0, uParam0->f_12);
	func_15();
}

int func_2()
{
	return Global_1572887.f_13;
}

struct<2> func_3(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

int func_4(var uParam0, var uParam1)
{
	return uParam0;
}

void func_5(var uParam0)
{
	func_16(&(uParam0->f_15), 1, 1);
	func_17(uParam0);
	func_18(uParam0->f_6);
	func_19(*uParam0, uParam0->f_12, 1);
	func_19(*uParam0, uParam0->f_12, 32);
	func_20();
	func_21();
	func_22(&(uParam0->f_27));
	func_23(0);
	func_24(&(uParam0->f_27));
	if (!func_25(uParam0, 4))
	{
		SCRIPTS::_0xE7282390542F570D(uParam0->f_10);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_6(var uParam0)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_5(uParam0);
		return false;
	}
	return true;
}

bool func_7()
{
	return false;
}

bool func_8(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if (func_26(uParam0) < 10)
	{
		if (func_27(*uParam0) && func_28(uParam0))
		{
			func_29(uParam0, 11);
			if (func_30(uParam0->f_15))
			{
				func_16(&(uParam0->f_15), 1, 1);
			}
			func_21();
		}
	}
	bVar1 = (func_26(uParam0) <= 6 && !func_31(uParam0->f_15, 1));
	bVar2 = !func_25(uParam0, 32);
	if (func_32(func_25(uParam0, 2)) && func_33(uParam0))
	{
		if (func_25(uParam0, 2))
		{
			func_34(uParam0->f_15, uParam0->f_6);
		}
		else
		{
			func_35(&(uParam0->f_27), uParam0->f_6, bVar1, bVar2, 1, 0);
		}
	}
	func_36(uParam0->f_15);
	func_37(uParam0->f_6, *uParam0, uParam0->f_12, 1092616192 /* Float: 10f */);
	func_38(uParam0);
	switch (func_26(uParam0))
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("MP005_P_COLLECTORSHOVEL01"), false);
			if (func_25(uParam0, 1))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_21, false);
			}
			func_39(&(uParam0->f_27.f_7), uParam0->f_6, 1.5f, 1, 319, 0);
			if (func_25(uParam0, 32))
			{
				func_29(uParam0, 1);
			}
			else if (!func_40(uParam0->f_6))
			{
				func_29(uParam0, 14);
			}
			else
			{
				func_29(uParam0, 1);
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(joaat("MP005_P_COLLECTORSHOVEL01")))
			{
				if (func_25(uParam0, 1))
				{
					if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_21))
					{
						return false;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						uParam0->f_20 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_21, uParam0->f_6, true, true, false, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						return false;
					}
					if (!MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(uParam0->f_6 + Vector(1f, 0f, 0f), &(uParam0->f_26), &(uParam0->f_23)))
					{
						return false;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						ENTITY::SET_ENTITY_ROTATION(uParam0->f_20, func_41(uParam0->f_23, 0), 2, true);
					}
				}
				func_29(uParam0, 2);
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_11))
			{
				uParam0->f_11 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_13, 64, uParam0->f_14, true, true);
			}
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_11))
			{
				return false;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_11);
			func_29(uParam0, 3);
			break;
		case 3:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_11, true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, uParam0->f_6, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "player", PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
				if (func_25(uParam0, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "MOUND", uParam0->f_20, 0);
					}
				}
				func_42(uParam0);
				func_29(uParam0, 4);
			}
			break;
		case 4:
			if (func_32(func_25(uParam0, 2)) && func_33(uParam0))
			{
				if (func_25(uParam0, 1))
				{
					func_43(uParam0->f_20, uParam0->f_20, 0);
					MAP::_0x7563CBCA99253D1A(uParam0->f_20, joaat("BLIP_MP_ROLE_COLLECTOR_ILO"));
					func_29(uParam0, 5);
				}
				else
				{
					func_29(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_44(uParam0, 1097859072 /* Float: 15f */))
			{
				if (!func_30(uParam0->f_15))
				{
					uParam0->f_15 = func_45("UC_CLT_DIG", joaat("INPUT_CONTEXT_X"), uParam0->f_6, 1070386381 /* Float: 1.6f */, 3, 1, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
				func_29(uParam0, 6);
			}
			break;
		case 6:
			if (func_30(uParam0->f_15))
			{
				if (!func_25(uParam0, 32))
				{
					func_46(uParam0->f_15, &(uParam0->f_27.f_6));
				}
				if (func_47(uParam0->f_15, 1))
				{
					if (func_48(*uParam0, uParam0->f_12, 32))
					{
						func_23(1);
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
						{
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
						}
						func_16(&(uParam0->f_15), 1, 1);
						func_49(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_HIDE_PED_WEAPONS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, false);
						func_19(*uParam0, uParam0->f_12, 32);
						func_29(uParam0, 7);
					}
				}
				else if (func_28(uParam0))
				{
					if (func_50(uParam0->f_15, 1) > 0f)
					{
						func_51();
						func_53(func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1));
					}
					else if (func_50(uParam0->f_15, 1) == 0f)
					{
						func_21();
					}
				}
			}
			break;
		case 7:
			func_51();
			if ((((func_54(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == joaat("WEAPON_UNARMED") && func_54(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1, 0) == joaat("WEAPON_UNARMED")) && !PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::_IS_PED_CARRYING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::IS_PED_USING_ANY_SCENARIO(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				func_17(uParam0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, uParam0->f_6, 0f, 0f, func_55(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), uParam0->f_6, 1), 2);
				func_29(uParam0, 8);
			}
			break;
		case 8:
			func_56();
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, uParam0->f_6, 0);
			TASK::TASK_ENTER_ANIM_SCENE(0, uParam0->f_11, "player", uParam0->f_14, 1069379748 /* Float: 1.48f */, 1, 128, 20000, -1082130432 /* Float: -1f */);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar3);
			func_29(uParam0, 9);
			break;
		case 9:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_11, false))
			{
				func_29(uParam0, 10);
			}
			break;
		case 10:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_11, false) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_11, false))
			{
				if (!func_57(uParam0))
				{
					return false;
				}
				func_58(uParam0->f_9);
				func_59(func_25(uParam0, 1), func_25(uParam0, 2));
				func_23(0);
				func_24(&(uParam0->f_27));
				func_18(uParam0->f_6);
				func_58(uParam0->f_9);
				func_21();
				if (func_25(uParam0, 2) && func_25(uParam0, 32))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), joaat("WEAPON_KIT_METAL_DETECTOR"), false, 0, false, false);
				}
				func_29(uParam0, 14);
			}
			break;
		case 11:
			if (func_48(*uParam0, uParam0->f_12, 1))
			{
				if (func_60())
				{
					func_19(*uParam0, uParam0->f_12, 1);
					func_29(uParam0, 12);
				}
				else if (!func_27(*uParam0))
				{
					func_29(uParam0, 4);
					func_19(*uParam0, uParam0->f_12, 1);
				}
			}
			break;
		case 12:
			if (func_30(uParam0->f_15))
			{
				func_16(&(uParam0->f_15), 1, 1);
			}
			iVar0 = func_61();
			if (!func_62(iVar0, 0))
			{
				return false;
			}
			uParam0->f_5 = iVar0;
			uParam0->f_22 = func_63(uParam0->f_5);
			if (!func_25(uParam0, 16))
			{
				func_11(uParam0, 16);
			}
			func_19(*uParam0, uParam0->f_12, 1);
			func_29(uParam0, 4);
			break;
	}
	return false;
}

int func_9(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = Param0.f_1;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
	{
		iVar0 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iVar1));
		Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_2 = iVar0;
	}
	return iVar0;
}

int func_10(vector3 vParam0, var uParam3)
{
	int iVar0;

	switch (vParam0.z)
	{
		case joaat("WB_DIG_BURIED_RANDOM_MUD"):
			iVar0 = 7;
			break;
		case joaat("WB_DIG_BURIED_RANDOM_SNOW"):
			iVar0 = 8;
			break;
		case joaat("WB_DIG_BURIED_RANDOM_SNOW_DIRT"):
			iVar0 = 9;
			break;
		case joaat("WB_DIG_BURIED_RANDOM_WATER_FRESH"):
			iVar0 = 10;
			break;
	}
	return iVar0;
}

void func_11(var uParam0, int iParam1)
{
	if (!func_64(uParam0->f_16, iParam1))
	{
		func_65(&(uParam0->f_16), iParam1);
	}
}

int func_12(vector3 vParam0, var uParam3)
{
	int iVar0;
	bool bVar1;

	bVar1 = UNLOCK::_UNLOCK_IS_VISIBLE(-296143697);
	switch (vParam0.z)
	{
		case joaat("WB_DIG_BURIED_RANDOM_MUD"):
			if (bVar1)
			{
				iVar0 = 918540366;
			}
			else
			{
				iVar0 = -710563358;
			}
			break;
		case joaat("WB_DIG_BURIED_RANDOM_SNOW"):
			if (bVar1)
			{
				iVar0 = -2101458121;
			}
			else
			{
				iVar0 = 1197515594;
			}
			break;
		case joaat("WB_DIG_BURIED_RANDOM_SNOW_DIRT"):
			if (bVar1)
			{
				iVar0 = 1374885161;
			}
			else
			{
				iVar0 = -2106156849;
			}
			break;
		case joaat("WB_DIG_BURIED_RANDOM_WATER_FRESH"):
			if (bVar1)
			{
				iVar0 = 1391373953;
			}
			else
			{
				iVar0 = 2109394729;
			}
			break;
	}
	return iVar0;
}

void func_13(var uParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_8))
	{
		uParam0->f_8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		POPULATION::_0xB56D41A694E42E86(uParam0->f_8, 6, 0, 0, -1, -1, 0);
	}
}

void func_14(var uParam0, var uParam1)
{
	Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_1 = uParam0;
}

void func_15()
{
	Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
	Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
	Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_7 = 0;
}

void func_16(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_30(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_66(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_67(iVar0);
	*uParam0 = 0;
}

void func_17(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
	{
		func_68(uParam0->f_20, uParam0->f_20, 0);
	}
}

void func_18(vector3 vParam0)
{
	if (func_69(Global_1212889, vParam0))
	{
		Global_1212889 = { 0f, 0f, 0f };
	}
}

void func_19(int iParam0, int iParam1, int iParam2)
{
	func_70(&(Global_1212893[iParam0 /*2251*/][iParam1 /*9*/]), iParam2);
}

void func_20()
{
	Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
	Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
	Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
}

void func_21()
{
	if (Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
		Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
		Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	}
}

void func_22(var uParam0)
{
	func_71(uParam0);
	func_72(&(uParam0->f_7), 1);
}

void func_23(bool bParam0)
{
	if (bParam0)
	{
		func_73(0, 6);
	}
	else
	{
		func_74(0, 6, 0);
	}
}

void func_24(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_8);
	}
}

bool func_25(var uParam0, int iParam1)
{
	return func_64(uParam0->f_16, iParam1);
}

int func_26(var uParam0)
{
	return uParam0->f_2;
}

bool func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	fVar2 = -1f;
	iVar4 = PLAYER::PLAYER_ID();
	if (Global_1212600[iVar4 /*9*/].f_1 != iParam0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar5 = iVar1;
			if (Global_1212600[iVar5 /*9*/].f_1 == Global_1212600[iVar4 /*9*/].f_1)
			{
				if (Global_1212600[iVar5 /*9*/].f_2 == Global_1212600[iVar4 /*9*/].f_2)
				{
					if (Global_1212600[iVar5 /*9*/].f_4)
					{
						if (fVar2 == -1f || fVar2 >= Global_1212600[iVar5 /*9*/].f_8)
						{
							fVar2 = Global_1212600[iVar5 /*9*/].f_8;
							iVar3 = iVar5;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > 0f)
	{
		if (Global_1296859.f_154[Global_1296859] != Global_1296859.f_154[iVar3])
		{
			if (!func_64(Global_1212893[Global_1212600[iVar4 /*9*/].f_1 /*2251*/][Global_1212600[iVar4 /*9*/].f_2 /*9*/], 1))
			{
				func_65(&(Global_1212893[Global_1212600[iVar4 /*9*/].f_1 /*2251*/][Global_1212600[iVar4 /*9*/].f_2 /*9*/]), 1);
			}
			return true;
		}
		if (!func_64(Global_1212893[Global_1212600[iVar4 /*9*/].f_1 /*2251*/][Global_1212600[iVar4 /*9*/].f_2 /*9*/], 32))
		{
			func_65(&(Global_1212893[Global_1212600[iVar4 /*9*/].f_1 /*2251*/][Global_1212600[iVar4 /*9*/].f_2 /*9*/]), 32);
		}
	}
	return false;
}

bool func_28(var uParam0)
{
	if (!func_25(uParam0, 32))
	{
		return Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0;
	}
	return (Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0 && Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_2 == uParam0->f_12);
}

void func_29(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

bool func_30(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (Global_1951255[iParam0 /*23*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3);
}

bool func_31(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_30(iParam0))
	{
		return false;
	}
	iVar0 = func_66(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(Global_1951255[iVar0 /*23*/].f_3);
}

int func_32(bool bParam0)
{
	if (func_75(joaat("KIT_COLLECTOR_SPADE"), 1))
	{
		if (bParam0)
		{
			if (func_75(joaat("WEAPON_KIT_METAL_DETECTOR"), 1))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

var func_33(var uParam0)
{
	return uParam0->f_36;
}

void func_34(var uParam0, vector3 vParam1)
{
	if (!func_40(vParam1))
	{
		func_18(vParam1);
		return;
	}
	if (func_76(Global_1212889))
	{
		Global_1212889 = { vParam1 };
	}
	else if (!func_69(Global_1212889, vParam1))
	{
		if (BUILTIN::VDIST2(Global_35, vParam1) < BUILTIN::VDIST2(Global_35, Global_1212889))
		{
			Global_1212889 = { vParam1 };
		}
	}
}

void func_35(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_75(joaat("KIT_COLLECTORS_BAG"), 1))
	{
		return;
	}
	if (func_77(0))
	{
		return;
	}
	if (func_78())
	{
		return;
	}
	if (Global_1048576)
	{
		return;
	}
	if (func_79())
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) && TASK::_0xEC7E480FF8BD0BED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		return;
	}
	if (!bParam4 && uParam0->f_1 == 0)
	{
		return;
	}
	if (!func_76(Global_1212889) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1212889, vParam1, true) <= 5f)
	{
		bVar0 = true;
	}
	if (bVar0 && uParam0->f_1 == 0)
	{
		return;
	}
	fVar1 = func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), vParam1, 1);
	fVar2 = 10f;
	fVar2 = (fVar2 * (1f + func_80()));
	switch (uParam0->f_1)
	{
		case 0:
			if (fVar1 < fVar2)
			{
				if (bParam5)
				{
					if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
					{
						uParam0->f_5 = AUDIO::GET_SOUND_ID();
						if (func_54(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) != joaat("WEAPON_KIT_METAL_DETECTOR"))
						{
							AUDIO::_0xDCF5BA95BBF0FABA(uParam0->f_5, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", 0, 0, iParam6);
						}
						func_81(uParam0, 1);
					}
				}
				else
				{
					func_81(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = BUILTIN::FLOOR((500f * ((fVar2 - fVar1) / fVar2)));
			iVar4 = BUILTIN::FLOOR((256f * ((fVar2 - fVar1) / fVar2)));
			if (iVar3 < 0)
			{
				iVar3 = MISC::ABSI(iVar3);
			}
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			if (fVar1 < 3f && bParam7)
			{
				func_82(250);
			}
			PAD::SET_PAD_SHAKE(0, iVar3, iVar4);
			func_83(&(uParam0->f_2));
			func_81(uParam0, 2);
			break;
		case 2:
			if ((fVar1 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_71(uParam0);
				}
				func_81(uParam0, 0);
			}
			else if (func_84(&(uParam0->f_2)) >= 2f)
			{
				func_81(uParam0, 1);
			}
			else if (fVar1 < 3f && bParam7)
			{
				func_82(250);
			}
			break;
	}
}

void func_36(int iParam0)
{
	int iVar0;

	if (func_30(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_1296859.f_8);
		if ((((((((PED::_IS_PED_CARRYING(Global_1296859.f_8) || TASK::IS_PED_GETTING_UP(Global_1296859.f_8)) || PED::IS_PED_RAGDOLL(Global_1296859.f_8)) || !func_85()) || Global_1102219.f_3664) || ENTITY::DOES_ENTITY_EXIST(iVar0)) || PED::IS_PED_JUMPING(Global_1296859.f_8)) || PED::IS_PED_CLIMBING(Global_1296859.f_8)) || PED::IS_PED_FALLING(Global_1296859.f_8))
		{
			if (func_86(iParam0, 0))
			{
				func_87(iParam0, 0, 1, 1);
			}
		}
		else if (!func_86(iParam0, 0))
		{
			func_87(iParam0, 1, 1, 1);
		}
	}
}

void func_37(vector3 vParam0, int iParam3, int iParam4, float fParam5)
{
	if (func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), vParam0, 1) < fParam5)
	{
		if (Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_1 != iParam3)
		{
			Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_1 = iParam3;
		}
		if (Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_2 != iParam4)
		{
			Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_2 = iParam4;
		}
	}
}

void func_38(var uParam0)
{
	uParam0->f_36 = func_88();
}

void func_39(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_89(uParam0))
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_89(uParam0))
		{
		}
	}
}

bool func_40(vector3 vParam0)
{
	return !PERSISTENCE::_0xB6E1A185C2B9319A(vParam0);
}

Vector3 func_41(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;

	vVar0 = { func_90(vParam0) };
	vVar3 = { func_92(func_92(vVar0, func_91((fParam3 - 90f))), vVar0) };
	fVar6 = MISC::ATAN2(vVar3.y, vVar3.x);
	fVar7 = -MISC::ATAN2(vVar3.z, BUILTIN::SQRT(((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y))));
	vVar8 = { -vVar3.y, vVar3.x, 0f };
	vVar11 = { func_92(vVar8, vVar3) };
	fVar14 = (MISC::ATAN2((func_93(vVar8, vVar0) / BUILTIN::VMAG(vVar8)), (func_93(vVar11, vVar0) / BUILTIN::VMAG(vVar11))) + 180f);
	return fVar14, fVar7, fVar6;
}

void func_42(var uParam0)
{
	int iVar0;

	switch (*uParam0)
	{
		case 7:
			iVar0 = 1;
			break;
		case 8:
			iVar0 = 2;
			break;
		case 9:
			iVar0 = 2;
			break;
		case 10:
			iVar0 = 1;
			break;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_11))
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(uParam0->f_11, "_terrain_type", iVar0, false);
	}
}

int func_43(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1297612.f_32))
	{
		Global_1297612.f_32 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam0, Global_1297612.f_32))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1297612.f_32);
	}
	if (!func_94(iParam0))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam0, 0);
		PLAYER::_0x6ECFC621A168424C(iParam0, uParam1, iParam2, 0);
		PLAYER::_0x907B16B3834C69E2(iParam0, 500f);
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1297612[iVar0 /*2*/]))
		{
			Global_1297612[iVar0 /*2*/] = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_44(var uParam0, float fParam1)
{
	if (func_75(joaat("KIT_COLLECTOR_SPADE"), 1))
	{
		if (Global_1102219.f_3664)
		{
			return false;
		}
		if (func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1) > fParam1)
		{
			return false;
		}
		if (func_25(uParam0, 4))
		{
			if ((func_25(uParam0, 2) && func_25(uParam0, 1)) && func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1) <= 1.6f)
			{
				return true;
			}
		}
		if (func_25(uParam0, 2))
		{
			if ((func_54(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == joaat("WEAPON_KIT_METAL_DETECTOR") || func_25(uParam0, 16)) && func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1) <= 1.6f)
			{
				func_11(uParam0, 16);
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

int func_45(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (func_76(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_95(iVar0, 2))
		{
			if (func_96(vParam2, Global_1951255[iVar0 /*23*/].f_6, 0.01f, 1) && iParam1 == Global_1951255[iVar0 /*23*/].f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_97(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_46(int iParam0, var uParam1)
{
	if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
	{
		if (func_31(iParam0, 1))
		{
			if (!*uParam1)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam1 = 1;
			}
		}
		else if (*uParam1)
		{
			*uParam1 = 0;
		}
	}
}

bool func_47(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_30(iParam0))
	{
		return false;
	}
	iVar0 = func_66(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		if (Global_1951255[iVar0 /*23*/].f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(Global_1951255[iVar0 /*23*/].f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(Global_1951255[iVar0 /*23*/].f_3))
		{
			iVar3 = (iVar1 - Global_1951255[iVar0 /*23*/].f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(Global_1951255[iVar0 /*23*/].f_18) * (1f - Global_1951255[iVar0 /*23*/].f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			Global_1951255[iVar0 /*23*/].f_21 = iVar1;
			Global_1951255[iVar0 /*23*/].f_22 = uVar2;
		}
	}
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_48(int iParam0, int iParam1, int iParam2)
{
	return func_64(Global_1212893[iParam0 /*2251*/][iParam1 /*9*/], iParam2);
}

void func_49(int iParam0)
{
	int iVar0;

	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			PED::_0xED00D72F81CF7278(iVar0, 0, 0);
		}
	}
}

float func_50(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_30(iParam0))
	{
		return 0f;
	}
	iVar0 = func_66(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(Global_1951255[iVar0 /*23*/].f_3);
	}
	return HUD::_0x81801291806DBC50(Global_1951255[iVar0 /*23*/].f_3);
}

void func_51()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
}

float func_52(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_53(float fParam0)
{
	if (!Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_4 = 1;
		if (Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_8 < 0f)
		{
			Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_8 = fParam0;
		}
	}
}

int func_54(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

float func_55(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_56()
{
	if (Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_5 = 1;
	}
}

bool func_57(var uParam0)
{
	var uVar0;
	int iVar4;
	vector3 vVar5;

	Global_1212600[PLAYER::PLAYER_ID() /*9*/].f_7 = 1;
	while (!func_98(uParam0->f_22, &uVar0))
	{
		return false;
	}
	vVar5 = { uParam0->f_6 };
	iVar4 = 0;
	while (iVar4 < Global_17411.f_2966.f_1)
	{
		if (func_96(vVar5, Global_17411.f_2966.f_1[iVar4 /*5*/].f_1, 1056964608 /* Float: 0.5f */, 1))
		{
			Global_17411.f_2966.f_1[iVar4 /*5*/] = 1;
		}
		iVar4++;
	}
	func_100(func_99(joaat("COLLECTIBLES_COLLECTED"), joaat("W_SHOVEL")), 1);
	if (func_25(uParam0, 2))
	{
		func_100(func_99(joaat("COLLECTIBLES_COLLECTED"), joaat("W_METAL_DETECTOR")), 1);
	}
	return true;
}

void func_58(var uParam0)
{
	if (PERSISTENCE::_0xFB7CF1DE938A3E22(uParam0))
	{
		return;
	}
	PERSISTENCE::_0x8245C1F3262F4AC2(uParam0);
}

void func_59(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_101(-753305330, 0, 255, 0, 0);
	}
	else if (bParam0)
	{
		func_101(11389876, 0, 255, 0, 0);
	}
}

bool func_60()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar3 = iVar1;
			if (iVar3 != iVar2)
			{
				if (Global_1212600[iVar3 /*9*/].f_1 == Global_1212600[iVar2 /*9*/].f_1)
				{
					if (Global_1212600[iVar3 /*9*/].f_2 == Global_1212600[iVar2 /*9*/].f_2)
					{
						if (Global_1212600[iVar3 /*9*/].f_5)
						{
							return true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

var func_61()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar3 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else
		{
			iVar4 = iVar2;
			if (iVar4 != iVar3)
			{
				if (Global_1212600[iVar4 /*9*/].f_1 == Global_1212600[iVar3 /*9*/].f_1)
				{
					if (Global_1212600[iVar4 /*9*/].f_2 == Global_1212600[iVar3 /*9*/].f_2)
					{
						if (Global_1212600[iVar4 /*9*/].f_6)
						{
							uVar1 = Global_1212600[iVar4 /*9*/].f_3;
							return uVar1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return uVar1;
}

bool func_62(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ARROWHEAD_AGATE"):
			return joaat("COLLECTIBLE_ARROWHEAD_AGATE");
		case joaat("PROVISION_ARROWHEAD_BONE"):
			return joaat("COLLECTIBLE_ARROWHEAD_BONE");
		case joaat("PROVISION_ARROWHEAD_CHIPPED"):
			return joaat("COLLECTIBLE_ARROWHEAD_CHIPPED");
		case joaat("PROVISION_ARROWHEAD_CRUDE"):
			return joaat("COLLECTIBLE_ARROWHEAD_CRUDE");
		case joaat("PROVISION_ARROWHEAD_FELDSPAR"):
			return joaat("COLLECTIBLE_ARROWHEAD_FELDSPAR");
		case joaat("PROVISION_ARROWHEAD_FLINT"):
			return joaat("COLLECTIBLE_ARROWHEAD_FLINT");
		case joaat("PROVISION_ARROWHEAD_OBSIDIAN"):
			return joaat("COLLECTIBLE_ARROWHEAD_OBSIDIAN");
		case joaat("PROVISION_ARROWHEAD_QUARTZ"):
			return joaat("COLLECTIBLE_ARROWHEAD_QUARTZ");
		case joaat("PROVISION_ARROWHEAD_RAW"):
			return joaat("COLLECTIBLE_ARROWHEAD_RAW");
		case joaat("PROVISION_ARROWHEAD_ROUGH"):
			return joaat("COLLECTIBLE_ARROWHEAD_ROUGH");
		case joaat("PROVISION_ARROWHEAD_SLATE"):
			return joaat("COLLECTIBLE_ARROWHEAD_SLATE");
		case joaat("PROVISION_ARROWHEAD_SPLINTERED"):
			return joaat("COLLECTIBLE_ARROWHEAD_SPLINTERED");
		case joaat("PROVISION_HRLM_BRUSH_BOAR"):
			return joaat("COLLECTIBLE_HRLM_BRUSH_BOAR");
		case joaat("PROVISION_HRLM_BRUSH_EBONY"):
			return joaat("COLLECTIBLE_HRLM_BRUSH_EBONY");
		case joaat("PROVISION_HRLM_BRUSH_GOATHAIR"):
			return joaat("COLLECTIBLE_HRLM_BRUSH_GOATHAIR");
		case joaat("PROVISION_HRLM_BRUSH_HORSEHAIR"):
			return joaat("COLLECTIBLE_HRLM_BRUSH_HORSEHAIR");
		case joaat("PROVISION_HRLM_BRUSH_ROSEWOOD"):
			return joaat("COLLECTIBLE_HRLM_BRUSH_ROSEWOOD");
		case joaat("PROVISION_HRLM_BRUSH_ROSEWOOD_NG"):
			return joaat("COLLECTIBLE_HRLM_BRUSH_ROSEWOOD_NG");
		case joaat("PROVISION_HRLM_COMB_BOXWOOD"):
			return joaat("COLLECTIBLE_HRLM_COMB_BOXWOOD");
		case joaat("PROVISION_HRLM_COMB_CHERRYWOOD"):
			return joaat("COLLECTIBLE_HRLM_COMB_CHERRYWOOD");
		case joaat("PROVISION_HRLM_COMB_IVORY"):
			return joaat("COLLECTIBLE_HRLM_COMB_IVORY");
		case joaat("PROVISION_HRLM_COMB_TORTOISESHELL"):
			return joaat("COLLECTIBLE_HRLM_COMB_TORTOISESHELL");
		case joaat("PROVISION_HRLM_HAIRPIN_EBONY"):
			return joaat("COLLECTIBLE_HRLM_HAIRPIN_EBONY");
		case joaat("PROVISION_HRLM_HAIRPIN_IVORY"):
			return joaat("COLLECTIBLE_HRLM_HAIRPIN_IVORY");
		case joaat("PROVISION_HRLM_HAIRPIN_JADE"):
			return joaat("COLLECTIBLE_HRLM_HAIRPIN_JADE");
		case joaat("PROVISION_HRLM_HAIRPIN_METAL"):
			return joaat("COLLECTIBLE_HRLM_HAIRPIN_METAL");
		case joaat("PROVISION_HRLM_HAIRPIN_WOODEN"):
			return joaat("COLLECTIBLE_HRLM_HAIRPIN_WOODEN");
		case joaat("PROVISION_JEWELRY_AMETHYST_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_AMETHYST_NECKLACE");
		case joaat("PROVISION_JEWELRY_BLCK_PEARL_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_BLCK_PEARL_NECKLACE");
		case joaat("PROVISION_JEWELRY_CARVED_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_CARVED_BRACELET");
		case joaat("PROVISION_JEWELRY_CORAL_DNGL_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_CORAL_DNGL_EARRING");
		case joaat("PROVISION_JEWELRY_CORAL_RING"):
			return joaat("COLLECTIBLE_JEWELRY_CORAL_RING");
		case joaat("PROVISION_JEWELRY_DMND_BNGLE_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_DMND_BNGLE_BRACELET");
		case joaat("PROVISION_JEWELRY_DMND_PENDT_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_DMND_PENDT_EARRING");
		case joaat("PROVISION_JEWELRY_DROP_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_DROP_EARRING");
		case joaat("PROVISION_JEWELRY_ELK_TOOTH_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_ELK_TOOTH_EARRING");
		case joaat("PROVISION_JEWELRY_EMERALD_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_EMERALD_EARRING");
		case joaat("PROVISION_JEWELRY_EMERALD_RING"):
			return joaat("COLLECTIBLE_JEWELRY_EMERALD_RING");
		case joaat("PROVISION_JEWELRY_FRENCH_DMND_RING"):
			return joaat("COLLECTIBLE_JEWELRY_FRENCH_DMND_RING");
		case joaat("PROVISION_JEWELRY_GLD_BNGLE_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_GLD_BNGLE_BRACELET");
		case joaat("PROVISION_JEWELRY_GLD_CROSS_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_GLD_CROSS_NECKLACE");
		case joaat("PROVISION_JEWELRY_GLD_PEARL_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_GLD_PEARL_NECKLACE");
		case joaat("PROVISION_JEWELRY_GLD_PENDT_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_GLD_PENDT_NECKLACE");
		case joaat("PROVISION_JEWELRY_GRNET_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_GRNET_BRACELET");
		case joaat("PROVISION_JEWELRY_GRNET_POST_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_GRNET_POST_EARRING");
		case joaat("PROVISION_JEWELRY_MOON_RING"):
			return joaat("COLLECTIBLE_JEWELRY_MOON_RING");
		case joaat("PROVISION_JEWELRY_MTHR_PEARL_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_MTHR_PEARL_NECKLACE");
		case joaat("PROVISION_JEWELRY_ONYX_RING"):
			return joaat("COLLECTIBLE_JEWELRY_ONYX_RING");
		case joaat("PROVISION_JEWELRY_PEARL_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_PEARL_BRACELET");
		case joaat("PROVISION_JEWELRY_PEARL_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_PEARL_EARRING");
		case joaat("PROVISION_JEWELRY_PEARL_RING"):
			return joaat("COLLECTIBLE_JEWELRY_PEARL_RING");
		case joaat("PROVISION_JEWELRY_PERS_TURQ_RING"):
			return joaat("COLLECTIBLE_JEWELRY_PERS_TURQ_RING");
		case joaat("PROVISION_JEWELRY_PORCELAIN_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_PORCELAIN_NECKLACE");
		case joaat("PROVISION_JEWELRY_QN_DMND_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_QN_DMND_EARRING");
		case joaat("PROVISION_JEWELRY_RUDY_DNGL_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_RUDY_DNGL_EARRING");
		case joaat("PROVISION_JEWELRY_SLVR_PEARL_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_SLVR_PEARL_NECKLACE");
		case joaat("PROVISION_JEWELRY_SPHR_BNGLE_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_SPHR_BNGLE_BRACELET");
		case joaat("PROVISION_JEWELRY_SPHR_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_SPHR_BRACELET");
		case joaat("PROVISION_JEWELRY_TOPAZ_NECKLACE"):
			return joaat("COLLECTIBLE_JEWELRY_TOPAZ_NECKLACE");
		case joaat("PROVISION_JEWELRY_TOPAZ_RING"):
			return joaat("COLLECTIBLE_JEWELRY_TOPAZ_RING");
		case joaat("PROVISION_JEWELRY_TURQ_STUD_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_TURQ_STUD_EARRING");
		case joaat("PROVISION_JEWELRY_TURQUOISE_BRACELET"):
			return joaat("COLLECTIBLE_JEWELRY_TURQUOISE_BRACELET");
		case joaat("PROVISION_JEWELRY_TURQUOISE_RING"):
			return joaat("COLLECTIBLE_JEWELRY_TURQUOISE_RING");
		case joaat("PROVISION_JEWELRY_WHT_DMND_EARRING"):
			return joaat("COLLECTIBLE_JEWELRY_WHT_DMND_EARRING");
		case joaat("PROVISION_JEWELRY_WHTGLD_DMND_RING"):
			return joaat("COLLECTIBLE_JEWELRY_WHTGLD_DMND_RING");
		case joaat("PROVISION_JEWELRY_YLWGLD_DMND_RING"):
			return joaat("COLLECTIBLE_JEWELRY_YLWGLD_DMND_RING");
		case joaat("PROVISION_COIN_1700_NY_TKN"):
			return joaat("COLLECTIBLE_COIN_1700_NY_TKN");
		case joaat("PROVISION_COIN_1787_CENT_TKN"):
			return joaat("COLLECTIBLE_COIN_1787_CENT_TKN");
		case joaat("PROVISION_COIN_1789_PNY"):
			return joaat("COLLECTIBLE_COIN_1789_PNY");
		case joaat("PROVISION_COIN_1792_NICKEL"):
			return joaat("COLLECTIBLE_COIN_1792_NICKEL");
		case joaat("PROVISION_COIN_1792_LIB_QTR"):
			return joaat("COLLECTIBLE_COIN_1792_QTR");
		case joaat("PROVISION_COIN_1794_SLV_DLR"):
			return joaat("COLLECTIBLE_COIN_1794_SLV_DLR");
		case joaat("PROVISION_COIN_1795_HLF_EAG"):
			return joaat("COLLECTIBLE_COIN_1795_HLF_EAG");
		case joaat("PROVISION_COIN_1796_HLF_PNY"):
			return joaat("COLLECTIBLE_COIN_1796_HLF_PNY");
		case joaat("PROVISION_COIN_1797_GLD_EAG"):
			return joaat("COLLECTIBLE_COIN_1797_GLD_EAG");
		case joaat("PROVISION_COIN_1798_SLV_DLR"):
			return joaat("COLLECTIBLE_COIN_1798_SLV_DLR");
		case joaat("PROVISION_COIN_1800_FIVE_DLR"):
			return joaat("COLLECTIBLE_COIN_1800_FIVE_DLR");
		case joaat("PROVISION_COIN_1800_GLD_DLR"):
			return joaat("COLLECTIBLE_COIN_1800_GLD_DLR");
		case joaat("PROVISION_COIN_1800_GLD_QTR"):
			return joaat("COLLECTIBLE_COIN_1800_GLD_QTR");
		case joaat("PROVISION_COIN_1800_HLF_DIME"):
			return joaat("COLLECTIBLE_COIN_1800_HLF_DIME");
		case joaat("PROVISION_CONDOR_EGG"):
			return joaat("COLLECTIBLE_EGG_CONDOR");
		case joaat("PROVISION_DUCK_EGG"):
			return joaat("COLLECTIBLE_EGG_DUCK");
		case joaat("PROVISION_EAGLE_EGG"):
			return joaat("COLLECTIBLE_EGG_EAGLE");
		case joaat("PROVISION_EGRET_EGG"):
			return joaat("COLLECTIBLE_EGG_EGRET");
		case joaat("PROVISION_GOOSE_EGG"):
			return joaat("COLLECTIBLE_EGG_GOOSE");
		case joaat("PROVISION_HAWK_EGG"):
			return joaat("COLLECTIBLE_EGG_HAWK");
		case joaat("PROVISION_HERON_EGG"):
			return joaat("COLLECTIBLE_EGG_HERON");
		case joaat("PROVISION_LOON_EGG"):
			return joaat("COLLECTIBLE_EGG_LOON");
		case joaat("PROVISION_SPOONBILL_EGG"):
			return joaat("COLLECTIBLE_EGG_SPOONBILL");
		case joaat("PROVISION_VULTURE_EGG"):
			return joaat("COLLECTIBLE_EGG_VULTURE");
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_BIVALVE"):
			return -1926116512;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_BRACHIOPOD"):
			return 1832068122;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_BROW_HORN"):
			return 237248172;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_CEPHALOPOD"):
			return 1798945032;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_CORAL"):
			return 151002497;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_NEO"):
			return -1199922785;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_PET_WOOD"):
			return -408379377;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_PET_WOOD_RAINBOW"):
			return -1465903195;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_PET_WOOD_YELLOW"):
			return -930591306;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_SEA_LILY"):
			return -1021507854;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_SEA_SCORPION"):
			return -14146038;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_STONE"):
			return -1189402959;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_TAIL_SPIKE"):
			return 1925678741;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_TOE_CLAW"):
			return 1736254176;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_TOOTH_MEGA"):
			return 732479966;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_TOOTH_SERRATED"):
			return 256108181;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_TOOTH_TREX"):
			return -1668855818;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_TRILOBITE_CRYPTO"):
			return -14631498;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_TRILOBITE_ISO"):
			return -1747721085;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_TULLY_MONSTER"):
			return -754054823;
		default:
			break;
	}
	return joaat("COLLECTIBLE_ARROWHEAD_AGATE");
}

bool func_64(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_65(var uParam0, int iParam1)
{
	func_102(uParam0, iParam1);
}

int func_66(int iParam0)
{
	return iParam0;
}

void func_67(int iParam0)
{
	if (!func_103(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1951255[iParam0 /*23*/].f_3);
	}
	Global_1951255[iParam0 /*23*/].f_4 = 0;
	Global_1951255[iParam0 /*23*/] = 1;
	Global_1951255[iParam0 /*23*/].f_16 = 0;
	Global_1951255[iParam0 /*23*/].f_1 = 0;
	Global_1951255[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_9 = 0f;
	Global_1951255[iParam0 /*23*/].f_10 = 0;
	Global_1951255[iParam0 /*23*/].f_11 = 0;
	Global_1951255[iParam0 /*23*/].f_2 = 1;
	Global_1951255[iParam0 /*23*/].f_15 = -1f;
}

int func_68(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ITEMSET::IS_ITEMSET_VALID(Global_1297612.f_32) && ITEMSET::IS_IN_ITEMSET(iParam0, Global_1297612.f_32))
	{
		ITEMSET::REMOVE_FROM_ITEMSET(iParam0, Global_1297612.f_32);
	}
	PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iParam0);
	PLAYER::_0xDC5E09D012D759C4(iParam0, uParam1, iParam2);
	Var1.f_1 = -1082130432;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1297612[iVar0 /*2*/]) && Global_1297612[iVar0 /*2*/] == iParam0)
		{
			MISC::_COPY_MEMORY(&(Global_1297612[iVar0 /*2*/]), &Var1, 2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_69(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_70(var uParam0, int iParam1)
{
	func_104(uParam0, iParam1);
}

void func_71(var uParam0)
{
	if (uParam0->f_5 != -1)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_5);
		PAD::STOP_PAD_SHAKE(0);
		uParam0->f_5 = -1;
	}
	AUDIO::_0x531A78D6BF27014B("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

void func_72(var uParam0, int iParam1)
{
	if (func_89(uParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(uParam0, iParam1);
	}
}

void func_73(int iParam0, int iParam1)
{
	if (!func_105(iParam0, iParam1))
	{
		MISC::SET_BIT(&(Global_1071686.f_22538.f_385[iParam0 /*11*/]), iParam1);
		Global_1071686.f_22538.f_385[iParam0 /*11*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_106();
	}
}

void func_74(int iParam0, int iParam1, bool bParam2)
{
	if (func_105(iParam0, iParam1) && (!bParam2 || Global_1071686.f_22538.f_385[iParam0 /*11*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(&(Global_1071686.f_22538.f_385[iParam0 /*11*/]), iParam1);
		Global_1071686.f_22538.f_385[iParam0 /*11*/].f_1[iParam1] = 0;
		func_106();
	}
}

bool func_75(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_62(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_107(iParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_108(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_109(iParam0))
			{
				return true;
			}
			break;
	}
	return func_110(iParam0, 0, 0, 0) >= iParam1;
}

bool func_76(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_77(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715.f_20638;
	}
	return (Global_1915715.f_20638 || Global_1915715.f_22504.f_1);
}

bool func_78()
{
	return func_111() != -1;
}

bool func_79()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

float func_80()
{
	return Global_1146212.f_2169[89 /*205*/].f_201;
}

void func_81(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_82(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738.f_3948 = MISC::GET_GAME_TIMER();
	Global_1896738.f_3948.f_1 = iParam0;
}

void func_83(var uParam0)
{
	func_112(uParam0, 0f);
}

float func_84(var uParam0)
{
	if (!func_113(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_114(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_115() - uParam0->f_1);
}

bool func_85()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_34)) && !func_116(Global_34, 1369124074)) && !func_116(Global_34, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_34)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		return true;
	}
	return false;
}

bool func_86(int iParam0, bool bParam1)
{
	if (bParam1 && !func_30(iParam0))
	{
		return false;
	}
	return !func_95(iParam0, 4);
}

void func_87(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_30(iParam0))
	{
		return;
	}
	iVar0 = func_66(iParam0);
	if (bParam1)
	{
		func_117(iParam0, 4);
		if (bParam3)
		{
			func_118(iVar0, 1);
		}
		func_119(iVar0, 1);
	}
	else
	{
		func_120(iParam0, 4);
		func_119(iVar0, 0);
	}
}

int func_88()
{
	if (!((UNLOCK::_UNLOCK_IS_VISIBLE(-474252899) || UNLOCK::_UNLOCK_IS_VISIBLE(294305054)) || UNLOCK::_UNLOCK_IS_VISIBLE(-296143697)))
	{
		return 0;
	}
	else if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("DOCUMENT_COLLECTOR_MAP_FOSSILS")))
	{
		return 0;
	}
	return 1;
}

bool func_89(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

Vector3 func_90(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

Vector3 func_91(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

Vector3 func_92(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_93(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_94(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar13;
	int iVar14;
	int iVar15;

	if (func_121() == 0)
	{
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(func_121()))
	{
		return false;
	}
	Var0 = func_121();
	Var0.f_2 = 0;
	Var0.f_3 = 0;
	Var0.f_4 = 0;
	Var0.f_1 = 0;
	iVar13 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar14 = 0;
	while (iVar14 < 30)
	{
		Var0.f_1 = 0;
		Var0.f_3 = iVar14;
		Var0.f_2 = 0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 1;
			if (DATAFILE::_DATAFILE_GET_STRING(&uVar5, &Var0))
			{
				iVar15 = MISC::GET_HASH_KEY(&uVar5);
				if (iVar13 == iVar15)
				{
					return true;
				}
			}
		}
		iVar14++;
	}
	return false;
}

bool func_95(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

bool func_96(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_97(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	int iVar0;

	Global_1951255[iParam0 /*23*/].f_4 = iParam1;
	Global_1951255[iParam0 /*23*/] = iParam4;
	Global_1951255[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951255[iParam0 /*23*/].f_2 = iParam5;
	Global_1951255[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1951255[iParam0 /*23*/].f_9 = fParam9;
	Global_1951255[iParam0 /*23*/].f_10 = iParam10;
	Global_1951255[iParam0 /*23*/].f_11 = iParam11;
	Global_1951255[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_5 = iParam12;
	Global_1951255[iParam0 /*23*/].f_1 = 2;
	Global_1951255[iParam0 /*23*/].f_17 = -1;
	Global_1951255[iParam0 /*23*/].f_18 = iParam16;
	Global_1951255[iParam0 /*23*/].f_19 = iParam15;
	Global_1951255[iParam0 /*23*/].f_20 = bParam25;
	Global_1951255[iParam0 /*23*/].f_22 = 0f;
	if (bParam25)
	{
		Global_1951255[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1951255[iParam0 /*23*/].f_21 = MISC::_GET_SYSTEM_TIME();
	}
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
			HUD::_0xA3F2149AA24F3D8E(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1951255[iParam0 /*23*/].f_3 = iVar0;
	func_118(iParam0, 1);
	func_119(iParam0, 1);
	func_120(iParam0, 128);
}

bool func_98(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	func_122(&Var0, joaat("LOOT_TYPE_NORMAL"));
	return func_123(iParam0, &Var0, uParam1, 0, 0);
}

struct<2> func_99(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_100(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_101(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_124(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_102(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_103(int iParam0)
{
	return func_95(iParam0, 2);
}

void func_104(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_105(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1071686.f_22538.f_385[iParam0 /*11*/], iParam1);
}

void func_106()
{
	SCRIPTS::_0x20F4CB76689ACDBC(&(Global_1071686.f_21416.f_260));
}

int func_107(int iParam0)
{
	vector3 vVar0;

	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_108(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_62(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258.f_6)
	{
		return false;
	}
	iVar0 = func_125(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_126("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_127(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_128(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_129(iVar1);
				return true;
			}
			iVar3++;
		}
		func_129(iVar1);
	}
	return false;
}

bool func_109(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_62(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_130(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_131(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_132(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_133(iParam0);
	iVar2 = func_132(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == Global_17411.f_55.f_644.f_1354.f_5[iVar2 /*17*/];
}

int func_110(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_107(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_125(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_134(iParam0, 0);
	}
	if (func_135(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_136(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_137(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_136(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_111()
{
	return Global_1138962.f_137;
}

void func_112(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_115() - fParam1);
	func_138(uParam0, 1);
	func_139(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_113(var uParam0)
{
	return func_140(*uParam0, 1);
}

bool func_114(var uParam0)
{
	return func_140(*uParam0, 2);
}

float func_115()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_116(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_117(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_118(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_95(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_119(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_120(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

int func_121()
{
	return Global_1071686.f_28448[47 /*4*/].f_3;
}

void func_122(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_MALE") || uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_FEMALE"))
				{
					bVar0 = true;
				}
				break;
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[iVar1] == joaat("LOOT_TYPE_NORMAL") || uParam0->f_1[iVar1] == joaat("LOOT_TYPE_SKINNING"))
				{
					bVar0 = true;
				}
				break;
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if ((uParam0->f_1[iVar1] == joaat("FISHING_RESULT_NORMAL") || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_RUINED")) || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_LEGENDARY"))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_123(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_141(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_142(uParam2, iParam0, Var1);
	return 1;
}

int func_124(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (GANG::_0xD6F6ACF4392187FB(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && GANG::_0x0F99F6436528A089(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_143(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_144(uParam1, iParam0, Var3);
	return 1;
}

int func_125(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_107(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_145(iParam0, 1399091007))
	{
		func_146(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_126(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_136(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_127(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_128(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_129(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_130(int iParam0)
{
	struct<2> Var0;

	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 241235545;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 1827902148;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 1301555144;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -2056583192;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 1015239729;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -340627321;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -875805376;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -768760704;
		case joaat("CLOTHING_BLEND_FACIAL_HAIR_NONE"):
			return -2118203104;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
		case -643819742:
			return -559080197;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -1180698265;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -487028314;
		case 1687431937:
			return -1811760631;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_132(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_133(int iParam0)
{
	int iVar0;

	iVar0 = func_130(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_134(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_147(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_149(&Var0, func_148(0));
	}
	if (!func_150(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_129(iVar14);
	return uVar15;
}

int func_135(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_136(bool bParam0)
{
	if (func_2() == -1)
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

struct<4> func_137(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_151(iParam0, bParam1, 0) };
	return func_152(iParam0, Var0, Var0.f_4, bParam1);
}

void func_138(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_139(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_140(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_141(var uParam0)
{
	func_122(uParam0, joaat("MULTIPLAYER_GAME"));
	if (func_153() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_122(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_122(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_142(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_154(uParam0))
	{
		return;
	}
	if (Global_1293346.f_2538 < 20)
	{
		Global_1293346.f_2538++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_2538.f_1[iVar0 /*22*/] = { Global_1293346.f_2538.f_1[iVar0 + 1 /*22*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1293346.f_2538.f_1[(Global_1293346.f_2538 - 1) /*22*/] = { Var1 };
}

void func_143(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		return;
	}
}

void func_144(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_154(uParam0))
	{
		return;
	}
	if (Global_1293346.f_2011 < 20)
	{
		Global_1293346.f_2011++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_2011.f_1[iVar0 /*24*/] = { Global_1293346.f_2011.f_1[iVar0 + 1 /*24*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	Global_1293346.f_2011.f_1[(Global_1293346.f_2011 - 1) /*24*/] = { Var1 };
}

int func_145(int iParam0, int iParam1)
{
	if (!func_62(iParam0, 0))
	{
		return func_156(func_155(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

void func_146(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

struct<14> func_147(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
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
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

struct<4> func_148(bool bParam0)
{
	int iVar0;

	iVar0 = func_136(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_152(923904168, func_157(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_152(923904168, func_157(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_152(923904168, func_157(bParam0), -740156546, 0);
}

void func_149(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_150(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_136(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<5> func_151(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_157(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_107(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_152(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_148(bParam1) };
			if (bParam2 && func_158(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_159(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_159(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_160(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -1591664384;
			Var0 = { func_161(bParam1) };
			switch (func_130(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
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
		case joaat("DOG"):
			if (func_162(iParam0, -1823706425))
			{
				Var0 = { func_152(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_162(iParam0, -1483207246))
			{
				Var0 = { func_152(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_152(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_162(iParam0, -1653629781))
			{
				Var0 = { func_152(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			break;
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
				Var28.f_9 = -1591664384;
				if (!func_163(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_162(iParam0, -1653629781))
			{
				Var0 = { func_152(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
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

struct<4> func_152(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_62(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_136(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_153()
{
	return Global_1952637.f_1;
}

bool func_154(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_155(int iParam0)
{
	return iParam0;
}

int func_156(int iParam0, int iParam1)
{
	if (!func_164(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

struct<4> func_157(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_136(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_152(joaat("CHARACTER"), func_165(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_152(joaat("CHARACTER"), func_165(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_152(joaat("CHARACTER"), func_165(), -1591664384, bParam0);
}

bool func_158(int iParam0, bool bParam1)
{
	if (func_130(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_166();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_159(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_167(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_160(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_168(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_161(bool bParam0)
{
	int iVar0;

	iVar0 = func_136(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_152(271701509, func_157(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_152(271701509, func_157(bParam0), 12999093, 0);
}

bool func_162(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_130(iParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_169(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_163(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_170(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_164(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

struct<4> func_165()
{
	struct<4> Var0;

	return Var0;
}

bool func_166()
{
	return (func_171(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_172(func_152(joaat("WARDROBE"), func_157(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_167(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_135(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_152(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_136(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_136(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_168(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_136(0);
	*uParam1 = { func_152(iParam0, func_148(0), iParam3, 0) };
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

bool func_169(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			return false;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

bool func_170(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_136(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_171(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_173(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_136(bParam1), iParam0, iParam3);
}

int func_172(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_174(&uParam0, iParam4, bParam5, iParam6);
}

bool func_173(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_174(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_175(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_175(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_136(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_170(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}


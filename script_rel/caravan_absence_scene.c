#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
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
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	struct<2> ScriptParam_0 = { 0, 73 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar10;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	vector3 vVar16;
	char* sVar28;
	float fVar29;
	float fVar30;
	int iVar31;
	int iVar32;

	iVar0 = 0;
	func_1(&Global_1935630, 8388608);
	iVar6 = 0;
	vVar7 = { -2593.506f, 457.0906f, 145.9973f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&iVar6);
		func_3(&Global_1935630, 8388608);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		HUD::_0xC9CAEAEEC1256E54(1331687942);
		HUD::_0x5651516D947ABC53();
		switch (iVar0)
		{
			case 0:
				CAM::DO_SCREEN_FADE_OUT(1500);
				func_4(0);
				WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
				func_5(&iVar0, 1);
				break;
			case 1:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, true);
					if (func_6(Global_35))
					{
						iVar4 = PED::GET_MOUNT(Global_35);
						PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar4, -2589.782f, 466.6921f, 145.0417f, 75.2096f, true, false, true);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						iVar3 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
						PED::_0xE0B61ED8BB37712F(Global_35);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar3, -2618.071f, 460.2562f, 144.8576f, 7.2663f, true, false, true);
					}
					func_4(1);
					WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 1);
					func_7();
					func_8(0);
					func_5(&iVar0, 2);
				}
				break;
			case 2:
				iVar6 = func_9(ScriptParam_0);
				sVar28 = func_10(iVar6);
				if (MISC::IS_STRING_NULL_OR_EMPTY(sVar28))
				{
					iVar6 = 0;
				}
				if (iVar6 != 0)
				{
					iVar2 = ANIMSCENE::_CREATE_ANIM_SCENE(func_12(func_11("cutscene@", sVar28, 1, 63)), 256, sVar28, false, true);
					if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar2))
					{
						iVar6 = 0;
					}
					else
					{
						ANIMSCENE::LOAD_ANIM_SCENE(iVar2);
					}
				}
				iVar1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@fast_travel@sky@skytl_0900_01clear", 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(iVar1);
				if (iVar6 == 2)
				{
					func_13(&uVar5, 0);
				}
				else if (iVar6 != 1)
				{
				}
				else
				{
					func_14(&uVar5, 0);
				}
				Global_40.f_4283.f_574 = (Global_40.f_4283.f_574 || iVar6);
				func_5(&iVar0, 3);
				break;
			case 3:
				bVar13 = func_15(iVar6);
				bVar14 = (iVar6 == 0 || (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar2, true, false) && ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iVar2, "JOHN", &vVar16, false, 0, 2)));
				bVar15 = ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar1, true, false);
				if (((bVar14 && bVar13) && bVar15) && func_16(iVar6))
				{
					if (iVar6 != 0)
					{
						func_17(iVar2, iVar6);
					}
					switch (iVar6)
					{
						case 8:
						case 16:
							func_17(iVar2, iVar6);
							vVar10 = { vVar16 };
							func_5(&iVar0, 9);
							break;
						case 0:
							vVar10 = { vVar7 };
							func_5(&iVar0, 11);
							break;
						case 1:
						case 2:
						case 4:
							func_17(iVar2, iVar6);
							vVar10 = { vVar16 };
							func_5(&iVar0, 4);
							break;
					}
					if (func_18(Global_35, 0))
					{
						ENTITY::SET_ENTITY_COORDS(Global_35, vVar10, true, false, true, true);
						ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
					}
				}
				break;
			case 4:
				func_19(Global_35, ScriptParam_0.f_1, 1, 1, 0);
				CLOCK::ADVANCE_CLOCK_TIME_TO(func_20(), 0, 0);
				func_5(&iVar0, 5);
				break;
			case 5:
				ANIMSCENE::START_ANIM_SCENE(iVar1);
				AUDIO::START_AUDIO_SCENE("Mission_Transition_Clouds_Scene");
				func_5(&iVar0, 6);
				break;
			case 6:
				fVar29 = ANIMSCENE::_GET_ANIM_SCENE_TIME(iVar1);
				if ((fVar29 > 1.2f && !CAM::IS_SCREEN_FADED_IN()) && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				if (fVar29 > 8.7f)
				{
					func_5(&iVar0, 7);
				}
				break;
			case 7:
				ANIMSCENE::START_ANIM_SCENE(iVar2);
				AUDIO::STOP_AUDIO_SCENE("Mission_Transition_Clouds_Scene");
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				func_5(&iVar0, 8);
				break;
			case 8:
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iVar2) > 0.9f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 0);
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iVar2))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					if (iVar6 != 4)
					{
						func_5(&iVar0, 18);
					}
					else
					{
						func_5(&iVar0, 17);
					}
				}
				break;
			case 9:
				CAM::DO_SCREEN_FADE_IN(500);
				ANIMSCENE::START_ANIM_SCENE(iVar2);
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				func_5(&iVar0, 10);
				break;
			case 10:
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iVar2) > 0.9f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 0);
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iVar2))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					func_5(&iVar0, 13);
				}
				break;
			case 11:
				ANIMSCENE::START_ANIM_SCENE(iVar1);
				AUDIO::START_AUDIO_SCENE("Mission_Transition_Clouds_Scene");
				func_5(&iVar0, 12);
				break;
			case 12:
				fVar30 = ANIMSCENE::_GET_ANIM_SCENE_TIME(iVar1);
				if ((fVar30 > 1.3f && !CAM::IS_SCREEN_FADED_IN()) && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				if (fVar30 > 8.5f)
				{
					func_5(&iVar0, 13);
				}
				break;
			case 13:
				func_19(Global_35, ScriptParam_0.f_1, 1, 1, 0);
				CLOCK::ADVANCE_CLOCK_TIME_TO(func_20(), 0, 0);
				func_5(&iVar0, 14);
				break;
			case 14:
				func_21();
				if (iVar6 == 8 || iVar6 == 16)
				{
					CAM::_0x69D65E89FFD72313(0, 0);
					CAM::DO_SCREEN_FADE_IN(1500);
				}
				else
				{
					AUDIO::STOP_AUDIO_SCENE("Mission_Transition_Clouds_Scene");
				}
				func_22(&uLocal_12, 0);
				func_5(&iVar0, 15);
				break;
			case 15:
				if (!CAM::IS_SCREEN_FADED_OUT() && func_23(&uLocal_12) > 6f)
				{
					if (iVar6 != 0)
					{
						func_5(&iVar0, 16);
					}
					else
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
						func_5(&iVar0, 18);
					}
				}
				break;
			case 16:
				ENTITY::SET_ENTITY_COORDS(Global_35, -2571.372f, 454.4025f, 144.7018f, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, 266.6689f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 266.3258f, false, true);
				func_5(&iVar0, 21);
				break;
			case 18:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (CAM::DOES_CAM_EXIST(iLocal_15))
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::SET_CAM_ACTIVE(iLocal_15, false);
						CAM::DESTROY_CAM(iLocal_15, false);
					}
					iVar31 = 0;
					if (TASK::_0x6EEAD6AF637DA752(-2519.942f, 420.925f, 146.9122f, joaat("WORLD_HUMAN_LEAN_POST_RIGHT"), 2f, 1))
					{
						iVar31 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(-2519.942f, 420.925f, 146.9122f, joaat("WORLD_HUMAN_LEAN_POST_RIGHT"), 2f, 1, false);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar31))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, iVar31, 0, 1300, false, true, 0, false, -1f, false);
						func_22(&uLocal_19, 0);
						func_5(&iVar0, 19);
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(Global_35, -2519.942f, 420.925f, 146.9122f, true, false, true, true);
						ENTITY::SET_ENTITY_HEADING(Global_35, 90f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						func_5(&iVar0, 20);
					}
				}
				break;
			case 19:
				if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, -76381094, true) == 1 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
				{
					if (!func_24(&uLocal_16))
					{
						func_22(&uLocal_16, 0);
					}
					else if (func_25(&uLocal_16) > 0.3f)
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-165f, 1f);
						func_5(&iVar0, 20);
					}
				}
				else if (func_25(&uLocal_19) > 2f)
				{
					ENTITY::SET_ENTITY_COORDS(Global_35, -2519.942f, 420.925f, 146.9122f, true, false, true, true);
					ENTITY::SET_ENTITY_HEADING(Global_35, 90f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					func_5(&iVar0, 20);
				}
				break;
			case 20:
				CAM::DO_SCREEN_FADE_IN(800);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 90f, false, true);
				func_5(&iVar0, 21);
				break;
			case 17:
				ENTITY::SET_ENTITY_COORDS(Global_35, -2564.423f, 403.3554f, 147.3823f, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, 148f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 148f, false, true);
				CAM::DO_SCREEN_FADE_IN(800);
				func_5(&iVar0, 21);
				break;
			case 21:
				iVar32 = func_26(iLocal_10, 709, 714, 0);
				if (func_27(iVar32, 1))
				{
					func_28(iVar32, 1, 1, 0, 0);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_15))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(iLocal_15, false);
					CAM::DESTROY_CAM(iLocal_15, false);
				}
				if (iVar6 != 2)
				{
					if (iVar6 == 1)
					{
						func_14(&uVar5, 1);
					}
				}
				else
				{
					func_13(&uVar5, 1);
				}
				if (!func_29(1))
				{
					func_30(joaat("WEATHER_GROUP_LIGHT_PRECIPITATION"), 1, 0, 1103626240 /* Float: 25f */);
				}
				func_2(&iVar6);
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_5(&iVar0, 22);
				break;
			case 22:
				SCRIPTS::_0x7DE4643157AD646C(SCRIPTS::GET_ID_OF_THIS_THREAD());
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_3(&Global_1935630, 8388608);
}

void func_1(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_2(int iParam0)
{
	func_31(*iParam0);
}

void func_3(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_4(bool bParam0)
{
	if (func_32())
	{
		Global_1357509 = 1;
	}
	if (func_33(joaat("CAMERA_ITEM")))
	{
	}
	if (bParam0 && Global_1935630.f_44 == joaat("WEAPON_KIT_CAMERA"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = joaat("WEAPON_UNARMED");
	}
}

void func_5(int iParam0, int iParam1)
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
	}
}

bool func_6(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_7()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	iVar0 = func_34();
	bVar1 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		bVar1 = true;
	}
	iVar2 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar2))
	{
		return;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar2);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar2);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
	if (iVar3 == 0)
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2);
		iVar6 = iVar5;
		if (ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			PED::_0xED00D72F81CF7278(iVar6, 0, 0);
			if (bVar1 && iVar6 == iVar0)
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar6, -2589.73f, 462.719f, 145.099f, 1.44f, true, false, true);
			}
			else
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar6, -2595.92f, 474.3518f, 144.948f, 83.4473f, true, false, true);
			}
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar2);
}

void func_8(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (Global_43891)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_35(Global_35, iVar0, 0, 1);
		if (WEAPON::IS_WEAPON_VALID(iVar1))
		{
			if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar1) || func_36(iVar1))
			{
				if (!bParam0 || (iVar0 != 7 && iVar0 != 9))
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar1);
				}
			}
		}
		iVar0++;
	}
}

int func_9(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = 0;
		MISC::SET_BIT(&iVar2, iVar1);
		iVar0 = iVar2;
		if (func_37(uParam0, iVar0))
		{
			if (func_38(iVar0))
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return 0;
}

char* func_10(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 8:
			sVar0 = "PTL_MCS1";
			break;
		case 16:
			sVar0 = "PTL_MCS2";
			break;
		case 4:
			sVar0 = "PTL_MCS3";
			break;
		case 1:
			sVar0 = "PTL_MCS5";
			break;
		case 2:
			sVar0 = "PTL_MCS4";
			break;
	}
	return sVar0;
}

struct<8> func_11(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> Var18;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

var func_12(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_13(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!bParam1)
	{
		func_39(202123401, -1f, 1);
		func_40(202123401, 4, 0);
		iVar4 = VOLUME::_CREATE_VOLUME_BOX(-2547.044f, 419.8942f, 147.9372f, 0f, 0f, 0f, 25f, 25f, 3f);
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = ENTITY::_0x886171A12F400B89(iVar4, *uParam0, 1);
		if (iVar3 == 0)
		{
			return;
		}
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, *uParam0);
			iVar1 = iVar0;
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam1);
			}
			iVar2++;
		}
		func_41(iVar4);
	}
	else
	{
		func_39(202123401, 0f, 1);
		func_40(202123401, 0, 0);
		iVar3 = ITEMSET::GET_ITEMSET_SIZE(*uParam0);
		if (iVar3 == 0)
		{
			return;
		}
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, *uParam0);
			iVar1 = iVar0;
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam1);
			}
			iVar2++;
		}
		ITEMSET::DESTROY_ITEMSET(*uParam0);
	}
}

void func_14(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!bParam1)
	{
		iVar4 = VOLUME::_CREATE_VOLUME_BOX(-2514.243f, 432.0485f, 146.8721f, 0f, 0f, 0f, 2f, 2f, 2f);
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = ENTITY::_0x886171A12F400B89(iVar4, *uParam0, 1);
		if (iVar3 == 0)
		{
			return;
		}
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, *uParam0);
			iVar1 = iVar0;
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam1);
			}
			iVar2++;
		}
		func_41(iVar4);
	}
	else
	{
		iVar3 = ITEMSET::GET_ITEMSET_SIZE(*uParam0);
		if (iVar3 == 0)
		{
			return;
		}
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, *uParam0);
			iVar1 = iVar0;
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam1);
			}
			iVar2++;
		}
		ITEMSET::DESTROY_ITEMSET(*uParam0);
	}
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			STREAMING::REQUEST_MODEL(joaat("CART06"), false);
			STREAMING::REQUEST_MODEL(joaat("P_HAYBALE03X"), false);
			if (STREAMING::HAS_MODEL_LOADED(joaat("CART06")) && STREAMING::HAS_MODEL_LOADED(joaat("P_HAYBALE03X")))
			{
				return 1;
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"), false);
			STREAMING::REQUEST_MODEL(joaat("P_BRUSHHORSE01X"), false);
			if (STREAMING::HAS_MODEL_LOADED(joaat("A_C_HORSE_AMERICANPAINT_TOBIANO")) && STREAMING::HAS_MODEL_LOADED(joaat("P_BRUSHHORSE01X")))
			{
				return 1;
			}
			break;
		case 1:
			STREAMING::REQUEST_MODEL(joaat("A_C_COW"), false);
			STREAMING::REQUEST_MODEL(joaat("P_CS_BUCKET01X"), false);
			STREAMING::REQUEST_MODEL(joaat("P_STOOL02X"), false);
			STREAMING::REQUEST_MODEL(joaat("P_VAL_GATE2M02X"), false);
			if (((STREAMING::HAS_MODEL_LOADED(joaat("A_C_COW")) && STREAMING::HAS_MODEL_LOADED(joaat("P_CS_BUCKET01X"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_STOOL02X"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_VAL_GATE2M02X")))
			{
				return 1;
			}
			break;
		case 0:
		case 8:
		case 16:
			return 1;
	}
	return 0;
}

bool func_16(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_10))
					{
						if (func_42(709, 0))
						{
							iLocal_10 = func_43(709, 1, 0, 1, 1, 1);
						}
					}
					else
					{
						return true;
					}
				}
				else
				{
					iLocal_3 = OBJECT::CREATE_OBJECT(joaat("P_BRUSHHORSE01X"), -2552.5f, 422.8f, 148.7f, true, true, false, false, true);
				}
			}
			else
			{
				iLocal_2 = func_44(joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"), 2552.5f, 424.8f, 148.7f, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_10))
					{
						if (func_42(710, 0))
						{
							iLocal_10 = func_43(710, 1, 0, 1, 1, 1);
						}
					}
					else
					{
						return true;
					}
				}
				else
				{
					iLocal_1 = OBJECT::CREATE_OBJECT(joaat("P_HAYBALE03X"), -2565.166f, 404.6969f, 147.5132f, true, true, false, false, true);
					return false;
				}
			}
			else
			{
				iLocal_0 = VEHICLE::CREATE_VEHICLE(joaat("CART06"), -2564.759f, 405.6364f, 147.536f, 0f, true, true, false, false);
				return false;
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_4))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6))
					{
						if (iLocal_7 != 0)
						{
							if (ENTITY::_0x1FF441D7954F8709(iLocal_7))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_10))
								{
									if (func_42(714, 0))
									{
										iLocal_10 = func_43(714, 1, 0, 1, 1, 1);
									}
								}
								else
								{
									return true;
								}
							}
						}
						else
						{
							if (iLocal_11 == 0)
							{
								iLocal_11 = 1;
								iLocal_7 = ENTITY::_0x6F3068258A499E52(joaat("P_VAL_GATE2M02X"), -2515.028f, 430.2761f, 146.9727f, 11);
							}
							return false;
						}
					}
					else
					{
						iLocal_6 = OBJECT::CREATE_OBJECT(joaat("P_STOOL02X"), -2515.2f, 415.7121f, 146.7645f, true, true, false, false, true);
						return false;
					}
				}
				else
				{
					iLocal_5 = OBJECT::CREATE_OBJECT(joaat("P_CS_BUCKET01X"), -2515.2f, 415.7121f, 146.7645f, true, true, false, false, true);
					return false;
				}
			}
			else
			{
				iLocal_4 = func_44(joaat("A_C_COW"), -2513.196f, 414.9384f, 146.8074f, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_4))
				{
					PED::_SET_PED_SCALE(iLocal_4, 1f);
				}
				return false;
			}
			break;
		case 8:
			if (iLocal_8 != 0)
			{
				if (ENTITY::_0x1FF441D7954F8709(iLocal_8))
				{
					return true;
				}
			}
			else
			{
				if (iLocal_11 == 0)
				{
					iLocal_11 = 1;
					iLocal_8 = ENTITY::_0x6F3068258A499E52(joaat("P_DOOR04X"), -2590.841f, 457.838f, 146.014f, 15);
				}
				return false;
			}
			break;
		case 16:
			if (iLocal_8 != 0)
			{
				if (ENTITY::_0x1FF441D7954F8709(iLocal_8))
				{
					return true;
				}
			}
			else
			{
				if (iLocal_11 == 0)
				{
					iLocal_11 = 1;
					iLocal_8 = ENTITY::_0x6F3068258A499E52(joaat("P_DOOR04X"), -2590.841f, 457.838f, 146.014f, 15);
				}
				return false;
			}
			break;
		case 0:
			return true;
	}
	return false;
}

void func_17(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 8:
		case 16:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "JOHN", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "ABIGAILROBERTS", func_45(13), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_door04x", ENTITY::_0x4735E2A4BB83D9DA(iLocal_8), 0);
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "JOHN", Global_35, 0);
			if (iLocal_9 == 0)
			{
				iLocal_10 = PERSCHAR::_0x31C70A716CAE1FEE(PERSCHAR::_0x112DDF56300BC6E5(joaat("PHR_DAVID_GEDDES")));
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "DavidGeddes", iLocal_10, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "Horse_01", iLocal_2, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_brushHorse01x", iLocal_3, 0);
			break;
		case 4:
			if (iLocal_9 == 0)
			{
				iLocal_10 = PERSCHAR::_0x31C70A716CAE1FEE(PERSCHAR::_0x112DDF56300BC6E5(joaat("PHR_TOM_DICKENS")));
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "JOHN", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "TomDickens", iLocal_10, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "CART06", iLocal_0, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_hayBale03x", iLocal_1, 0);
			break;
		case 1:
			if (iLocal_9 == 0)
			{
				iLocal_10 = PERSCHAR::_0x31C70A716CAE1FEE(PERSCHAR::_0x112DDF56300BC6E5(joaat("PHR_ABE")));
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "JOHN", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "ABE", iLocal_10, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "cow", iLocal_4, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_cs_bucket01x", iLocal_5, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_stool02x", iLocal_6, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_val_gate2m02x", ENTITY::_0x4735E2A4BB83D9DA(iLocal_7), 0);
			break;
	}
}

bool func_18(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_46(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_46(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_46(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_46(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_46(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_46(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_46(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_46(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_19(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_47(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_48(iParam1);
	}
	if ((bParam3 && func_49(iParam1, 4096)) && Global_1946804.f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_50(iVar0, Global_1946804.f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_51(Global_40.f_7729, 4096);
		func_52(Global_1905941, 4096);
		Global_40.f_7729 = Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		func_53(iParam0);
	}
	func_54();
	if (!func_55(iParam1))
	{
		func_57(iVar0, iParam0, func_56(iParam1), 1, 0, 1);
	}
	func_58(iParam0);
	return 1;
}

int func_20()
{
	if (func_59(Global_1835011[64 /*74*/].f_1, 1))
	{
		return 15;
	}
	return 9;
}

void func_21()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
	{
		case 0:
			vVar0 = { -2630.748f, 494.9098f, 166.4427f };
			vVar3 = { -5.5882f, -0.6052f, -136.2172f };
			fVar6 = 26.8916f;
			break;
		case 1:
			vVar0 = { -2607.747f, 313.8794f, 150.8527f };
			vVar3 = { 2.8811f, 0f, -29.0874f };
			fVar6 = 37.8065f;
			break;
		case 2:
			vVar0 = { -2593.301f, 516.9439f, 145.0856f };
			vVar3 = { 1.1034f, -0.6875f, -150.0637f };
			fVar6 = 26.922f;
			break;
		case 3:
			vVar0 = { -2578.31f, 439.7971f, 146.6813f };
			vVar3 = { 8.7918f, -0.4415f, -129.2381f };
			fVar6 = 37.8087f;
			break;
		case 4:
			vVar0 = { -2584.975f, 399.6115f, 150.8719f };
			vVar3 = { 1.2934f, -0.2442f, -55.7509f };
			fVar6 = 26.8832f;
			break;
		case 5:
		default:
			vVar0 = { -2524.076f, 428.6737f, 148.6333f };
			vVar3 = { 3.7283f, -0.5313f, 119.6752f };
			fVar6 = 42.8312f;
			break;
	}
	iLocal_15 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar0, vVar3, fVar6, true, 2);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	CAM::SHAKE_CAM(iLocal_15, "HAND_SHAKE", 0.1f);
}

void func_22(var uParam0, bool bParam1)
{
	if (bParam1 || !func_24(uParam0))
	{
		func_60(uParam0);
	}
}

float func_23(var uParam0)
{
	if (!func_24(uParam0))
	{
		return 0f;
	}
	if (func_61(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_62() - uParam0->f_1);
}

bool func_24(var uParam0)
{
	return func_63(*uParam0, 1);
}

float func_25(var uParam0)
{
	if (!func_24(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_61(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_62() - uParam0->f_1);
}

int func_26(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = PERSCHAR::_0x32A1E3B83D501096(iParam0);
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_64(iVar2) != 0 && PERSCHAR::_0x800DF3FC913355F3(func_65(iVar2)))
		{
			if (func_65(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_27(int iParam0, bool bParam1)
{
	if (func_66() != -1)
	{
		return false;
	}
	if (!func_67(iParam0))
	{
		return false;
	}
	if (!func_68(iParam0) && bParam1)
	{
		return false;
	}
	return func_69(iParam0, 1);
}

void func_28(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_67(iParam0))
	{
		return;
	}
	if (!func_69(iParam0, 1))
	{
		return;
	}
	if (!func_69(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_68(iParam0)) && func_70(iParam0))
	{
		return;
	}
	func_71(iParam0, 1);
	func_72(iParam0);
	if (func_73(func_64(iParam0)))
	{
		iVar0 = func_65(iParam0);
		if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_0xEB98B38CA60742D7(iVar0))
		{
			PERSCHAR::_0x631CD2D77FDC0316(iVar0);
		}
		iVar1 = PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
		}
		func_71(iParam0, 16);
	}
	if (func_69(iParam0, 128) && !bParam3)
	{
		func_74(iParam0, 0);
	}
}

bool func_29(int iParam0)
{
	int iVar0;

	if (Global_1934765.f_337 == 0)
	{
		return false;
	}
	iVar0 = func_75(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 == Global_1934765.f_338;
}

void func_30(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_76(iParam0, iParam1, bParam2, fParam3);
}

void func_31(int iParam0)
{
	switch (iParam0)
	{
		case 8:
		case 16:
			if (ENTITY::_0x1FF441D7954F8709(iLocal_8))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_DOOR04X"));
				ENTITY::_0xD2B9C78537ED5759(iLocal_8);
			}
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1))
			{
				OBJECT::DELETE_OBJECT(&iLocal_1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_HAYBALE03X"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CART06"));
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2))
			{
				PED::DELETE_PED(&iLocal_2);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3))
			{
				OBJECT::DELETE_OBJECT(&iLocal_3);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_BRUSHHORSE01X"));
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5))
			{
				OBJECT::DELETE_OBJECT(&iLocal_5);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_BUCKET01X"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_4))
			{
				PED::DELETE_PED(&iLocal_4);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_COW"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6))
			{
				OBJECT::DELETE_OBJECT(&iLocal_6);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_STOOL02X"));
			}
			if (ENTITY::_0x1FF441D7954F8709(iLocal_7))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_VAL_GATE2M02X"));
				ENTITY::_0xD2B9C78537ED5759(iLocal_7);
			}
			break;
	}
}

bool func_32()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_ITEM")) > 0)
	{
		return true;
	}
	return false;
}

bool func_33(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1934603[iVar0 /*16*/].f_10)))
		{
			func_77(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_34()
{
	return Global_1900383.f_393;
}

int func_35(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_36(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

bool func_37(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_38(int iParam0)
{
	switch (iParam0)
	{
		case 8:
		case 16:
			if (func_78(13, 1, 1))
			{
				return true;
			}
			break;
		case 1:
			if (func_27(714, 0))
			{
				return false;
			}
			return true;
		case 2:
			if (func_27(709, 0))
			{
				return false;
			}
			return true;
		case 4:
			if (func_27(710, 0))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_39(int iParam0, float fParam1, bool bParam2)
{
	func_79(iParam0, 0, 0);
	if (func_80(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam2);
	}
}

void func_40(int iParam0, int iParam1, bool bParam2)
{
	func_79(iParam0, 0, 0);
	if (func_80(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != iParam1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, iParam1);
		}
	}
}

void func_41(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

bool func_42(int iParam0, bool bParam1)
{
	if (!func_67(iParam0))
	{
		return false;
	}
	if (!func_69(iParam0, 2))
	{
		return false;
	}
	if (func_69(iParam0, 32) && !bParam1)
	{
		func_81(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_64(iParam0)));
		if (func_66() == -1)
		{
			if (func_69(iParam0, 2048))
			{
				PERSCHAR::_0x49A8C2CD97815215(func_65(iParam0));
				func_71(iParam0, 2048);
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_65(iParam0));
		}
		return false;
	}
	if (!func_82(iParam0) && func_66() == -1)
	{
		return false;
	}
	if (PERSCHAR::_0x800DF3FC913355F3(func_65(iParam0)))
	{
		func_71(iParam0, 128);
		return true;
	}
	func_81(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_64(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_65(iParam0));
	if (func_69(iParam0, 2048))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_65(iParam0));
		func_71(iParam0, 2048);
	}
	return true;
}

int func_43(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_83(iParam0, 1))
	{
		return 0;
	}
	if (func_73(func_64(iParam0)))
	{
		iVar1 = func_65(iParam0);
		if (!PERSCHAR::_0x800DF3FC913355F3(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PERSCHAR::_0xEB98B38CA60742D7(iVar1))
			{
				PERSCHAR::_0x49A8C2CD97815215(iVar1);
			}
		}
		PERSCHAR::_0x6759BEE6762E140B(iVar1);
		iVar0 = PERSCHAR::_0x0CADC3A977997472(iVar1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_68(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_84(iParam0, 1);
	func_85(iParam0);
	if (bParam3)
	{
		func_84(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

int func_44(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_86(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_45(int iParam0)
{
	if (!func_87(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

bool func_46(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_47(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return joaat("CLOTHING_FANCY_SUIT");
		case 6:
			return joaat("CLOTHING_GUNSLINGER_OUTFIT");
		case 7:
			return joaat("CLOTHING_WINTER_OUTFIT");
		case 8:
			return 1160643979 /* GXTEntry: "The Winter Gunslinger" */;
		case 9:
			return joaat("CLOTHING_WARM_WEATHER_OUTFIT");
		case 10:
			return joaat("CLOTHING_ISLAND_OUTFIT");
		case 11:
			return 294553332 /* GXTEntry: "Island Outfit" */;
		case 12:
			return 1788874135 /* GXTEntry: "Island Outfit Shackles" */;
		case 15:
			return joaat("CLOTHING_ROBBERY_OUTFIT");
		case 16:
			return joaat("CLOTHING_HEIST_OUTFIT");
		case 17:
			return 1902428294 /* GXTEntry: "The Wittemore" */;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return joaat("CLOTHING_POLICE_OUTFIT");
		case 0:
			return joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
		case 1:
			return 1383300684 /* GXTEntry: "Saved Custom Outfit One" */;
		case 2:
			return 2051441678 /* GXTEntry: "Saved Custom Outfit Two" */;
		case 3:
			return 162509669 /* GXTEntry: "Saved Custom Outfit Three" */;
		case 4:
			return 635948769 /* GXTEntry: "Saved Custom Outfit Four" */;
		case 5:
			return 274995506 /* GXTEntry: "Saved Custom Outfit Five" */;
		case 24:
			return -1826731591 /* GXTEntry: "Brawler\'s Outfit" */;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778 /* GXTEntry: "The Rebel" */;
		case 27:
			return 1964379549 /* GXTEntry: "The Innocent" */;
		case 28:
			return 1201189539 /* GXTEntry: "The Pursuer" */;
		case 21:
			return 1351927599 /* GXTEntry: "The Grizzlies Outlaw" */;
		case 22:
			return 2032023096 /* GXTEntry: "The Nuevo Paraiso" */;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555 /* GXTEntry: "The Homesteader" */;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021 /* GXTEntry: "The Winter Cowboy" */;
		case 93:
			return 890706995 /* GXTEntry: "The Cowhand" */;
		case 90:
			return 1156438275 /* GXTEntry: "The Rancher" */;
		case 91:
			return -1611873049 /* GXTEntry: "The Rancher" */;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024 /* GXTEntry: "The Cowboy" */;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653 /* GXTEntry: "The Homesteader" */;
		case 29:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H");
		case 30:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L");
		case 31:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H");
		case 32:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L");
		case 33:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H");
		case 34:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L");
		case 35:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H");
		case 36:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L");
		case 37:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_H");
		case 38:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_L");
		case 39:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_H");
		case 40:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_L");
		case 41:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H");
		case 42:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L");
		case 43:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H");
		case 44:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L");
		case 45:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H");
		case 46:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L");
		case 47:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H");
		case 48:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L");
		case 49:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H");
		case 50:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L");
		case 51:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H");
		case 52:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L");
		case 53:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H");
		case 54:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L");
		case 55:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H");
		case 56:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L");
		case 57:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H");
		case 58:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_L");
		case 59:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H");
		case 60:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L");
		default:
			break;
	}
	return 0;
}

int func_48(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_88();
	}
	if (func_66() == -1)
	{
		return Global_26796.f_26[iParam0 /*120*/].f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0 /*120*/].f_1;
}

bool func_49(int iParam0, int iParam1)
{
	if (!func_89(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_50(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_90(iParam1);
	func_91(&(Global_1946804.f_964), iVar0, iParam0, -897569541, 1, iParam1);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
	return DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804.f_964));
}

void func_51(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_89(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0 /*3*/] && iParam1);
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] - iVar0);
}

void func_52(int iParam0, int iParam1)
{
	if (!func_89(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

void func_53(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_54()
{
	char* sVar0;

	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return;
	}
	if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
	{
		return;
	}
	if (!func_92(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946804.f_859)
	{
		case 1:
			sVar0 = "outfit_change_longarms";
			break;
		case 0:
			sVar0 = "outfit_change_offhand";
			break;
		case 2:
			sVar0 = "outfit_change_unarmed";
			break;
	}
	TASK::TASK_PLAY_ANIM(Global_35, func_93(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_94(1);
	STREAMING::REMOVE_ANIM_DICT(func_93());
}

bool func_55(int iParam0)
{
	return false;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_57(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_95(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_66() != -1)
	{
		return;
	}
	func_96();
	if (bParam5)
	{
		if (!func_97(&(Global_1946804.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_92(32768) && Global_1946804.f_1378.f_1[10 /*3*/] != Global_1946804.f_57[10 /*11*/])
	{
		func_98();
	}
	func_99(iVar3, 1, 1, 1, 1, 1);
	func_100(31, 0, 0, 0, 0);
	func_101(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			func_100(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_100(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_102(&(Global_1946804.f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_58(int iParam0)
{
	PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, true, true);
	PED::CLEAR_PED_ENV_DIRT(iParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

bool func_59(int iParam0, bool bParam1)
{
	switch (func_103(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_60(var uParam0)
{
	func_104(uParam0, 0f);
}

bool func_61(var uParam0)
{
	return func_63(*uParam0, 2);
}

float func_62()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_63(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_64(int iParam0)
{
	if (!func_67(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

int func_65(int iParam0)
{
	if (!func_67(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

int func_66()
{
	return Global_1572887.f_12;
}

bool func_67(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_68(int iParam0)
{
	if (!func_67(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_69(int iParam0, int iParam1)
{
	if (func_66() != -1)
	{
		return false;
	}
	if (!func_67(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] && iParam1) != 0;
}

bool func_70(int iParam0)
{
	if (!func_67(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_71(int iParam0, int iParam1)
{
	if (func_66() != -1)
	{
		return;
	}
	if (!func_67(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] - (Global_24887[iParam0 /*2*/] && iParam1));
}

void func_72(int iParam0)
{
	int iVar0;

	if (!func_67(iParam0))
	{
		return;
	}
	iVar0 = func_105(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

bool func_73(int iParam0)
{
	return iParam0 != 0;
}

int func_74(int iParam0, bool bParam1)
{
	if (!func_67(iParam0))
	{
		return 0;
	}
	if (!func_69(iParam0, 2))
	{
		return 0;
	}
	if (func_64(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_65(iParam0)))
	{
		return 1;
	}
	if (func_69(iParam0, 1) && !bParam1)
	{
		func_84(iParam0, 128);
		return 1;
	}
	func_71(iParam0, 129);
	func_72(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_65(iParam0));
	func_81(iParam0, 0);
	return 1;
}

int func_75(int iParam0)
{
	int iVar0;

	if (Global_1934765.f_337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1934765.f_337)
	{
		if (Global_1934765.f_318[iVar0 /*3*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_76(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_75(iParam1);
	if (iVar0 == -1)
	{
		func_106(iParam0, iParam1, fParam3);
		func_107(bParam2, fParam3);
		return;
	}
	if (iParam0 != Global_1934765.f_318[iVar0 /*3*/])
	{
		func_108(iVar0);
		func_106(iParam0, iParam1, fParam3);
		Global_1934765.f_338 = -1;
		func_107(bParam2, fParam3);
		return;
	}
}

void func_77(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iParam0 /*16*/].f_10)))
	{
		return;
	}
	Global_1934603[iParam0 /*16*/] = { Var0 };
	Global_1934603.f_161 = (Global_1934603.f_161 - 1);
	if (Global_1934603.f_161 < 0)
	{
		Global_1934603.f_161 = 0;
	}
}

bool func_78(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_87(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return func_109(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_18(func_45(iParam0), 0))
		{
			return false;
		}
	}
	if (!func_110(iParam0, 1, 0))
	{
		return false;
	}
	if (func_109(iParam0, 44, 1))
	{
		return false;
	}
	return true;
}

int func_79(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, false, false, 0, 0, false);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

bool func_80(int iParam0)
{
	if (func_111(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_81(int iParam0, int iParam1)
{
	if (!func_67(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

bool func_82(int iParam0)
{
	if (!func_67(iParam0))
	{
		return false;
	}
	if (!func_69(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_83(int iParam0, bool bParam1)
{
	if (!func_67(iParam0))
	{
		return false;
	}
	if ((func_69(iParam0, 1) && !func_68(iParam0)) && func_70(iParam0))
	{
		return false;
	}
	if (!func_69(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_112(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_84(int iParam0, int iParam1)
{
	if (func_66() != -1)
	{
		return;
	}
	if (!func_67(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] || iParam1);
}

void func_85(int iParam0)
{
	if (!func_67(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_86(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_113(iParam1))
		{
			func_114(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_115(iParam0, 0, 1);
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
			func_116(iParam0, 0);
			bVar0 = true;
		}
		func_117(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_87(int iParam0)
{
	return iParam0 > -1;
}

int func_88()
{
	if (func_66() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

bool func_89(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

int func_90(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_118();
	}
	if (func_66() == -1)
	{
		if (iParam0 == 1160113249)
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

void func_91(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_92(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

char* func_93()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

void func_94(int iParam0)
{
	Global_1946804 = (Global_1946804 - (Global_1946804 && iParam0));
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_FANCY_SUIT"):
			return 14;
		case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
			return 6;
		case joaat("CLOTHING_WINTER_OUTFIT"):
			return 7;
		case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
			return 9;
		case joaat("CLOTHING_ISLAND_OUTFIT"):
			return 10;
		case joaat("CLOTHING_ROBBERY_OUTFIT"):
			return 15;
		case joaat("CLOTHING_HEIST_OUTFIT"):
			return 16;
		case joaat("CLOTHING_POLICE_OUTFIT"):
			return 20;
		case joaat("CLOTHING_CUSTOM_ONE_OUTFIT"):
			return 0;
		case -1826731591: /* GXTEntry: "Brawler\'s Outfit" */
			return 24;
		case 2119049229:
			return 25;
		case 1352942778: /* GXTEntry: "The Rebel" */
			return 26;
		case 1964379549: /* GXTEntry: "The Innocent" */
			return 27;
		case 1201189539: /* GXTEntry: "The Pursuer" */
			return 28;
		case 1351927599: /* GXTEntry: "The Grizzlies Outlaw" */
			return 21;
		case 2032023096: /* GXTEntry: "The Nuevo Paraiso" */
			return 22;
		case 1784889667:
			return 13;
		case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
			return 8;
		case 1383300684: /* GXTEntry: "Saved Custom Outfit One" */
			return 1;
		case 2051441678: /* GXTEntry: "Saved Custom Outfit Two" */
			return 2;
		case 162509669: /* GXTEntry: "Saved Custom Outfit Three" */
			return 3;
		case 635948769: /* GXTEntry: "Saved Custom Outfit Four" */
			return 4;
		case 274995506: /* GXTEntry: "Saved Custom Outfit Five" */
			return 5;
		case 1902428294: /* GXTEntry: "The Wittemore" */
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332: /* GXTEntry: "Island Outfit" */
			return 11;
		case 1788874135: /* GXTEntry: "Island Outfit Shackles" */
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555: /* GXTEntry: "The Homesteader" */
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021: /* GXTEntry: "The Winter Cowboy" */
			return 70;
		case 890706995: /* GXTEntry: "The Cowhand" */
			return 93;
		case 1156438275: /* GXTEntry: "The Rancher" */
			return 90;
		case -1611873049: /* GXTEntry: "The Rancher" */
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024: /* GXTEntry: "The Cowboy" */
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653: /* GXTEntry: "The Homesteader" */
			return 65;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H"):
			return 29;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L"):
			return 30;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H"):
			return 31;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L"):
			return 32;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H"):
			return 33;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L"):
			return 34;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H"):
			return 35;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L"):
			return 36;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_H"):
			return 37;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_L"):
			return 38;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_H"):
			return 39;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_L"):
			return 40;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H"):
			return 41;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L"):
			return 42;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H"):
			return 43;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L"):
			return 44;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H"):
			return 45;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L"):
			return 46;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H"):
			return 47;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L"):
			return 48;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H"):
			return 49;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L"):
			return 50;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H"):
			return 51;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L"):
			return 52;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H"):
			return 53;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L"):
			return 54;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H"):
			return 55;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L"):
			return 56;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H"):
			return 57;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_L"):
			return 58;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H"):
			return 59;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L"):
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

void func_96()
{
	int iVar0;

	Global_1946804.f_1378 = Global_1946804.f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946804.f_1378.f_1[iVar0 /*3*/] = { Global_1946804.f_1497.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_97(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!func_119(uParam0, iParam3, iParam2) && !func_120(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_92(32768))
	{
		if (!*bParam1 || (*bParam1 && uParam0->f_1[iVar0 /*3*/] != Global_1946804.f_57[iVar0 /*11*/]))
		{
			func_121(1108822547);
		}
		else
		{
			func_122(1108822547);
		}
	}
	func_123(uParam0, 0, 0);
	func_124(iParam5);
	return true;
}

void func_98()
{
	func_125(&(Global_1946804.f_2776));
	func_94(32768);
	func_126(1108822547, 8, 6);
}

void func_99(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_88()) || bParam5)
		{
			func_127();
		}
	}
	if (func_66() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_128(Global_1946804.f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = func_47(Global_40.f_7729);
				Global_1946804.f_1378 = func_47(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_56(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_129(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_130(0, 1);
	}
	func_124(0);
}

void func_100(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_131(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_132(Var0);
}

void func_101(int iParam0)
{
	struct<4> Var0;

	if (func_133(iParam0, 4096))
	{
		Global_1946804.f_858++;
	}
	if (Global_1946804.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_134(Var0);
}

void func_102(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_66() != -1;
	Global_1946804.f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477.f_189 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(iParam1, Global_1347477.f_189);
			}
			if ((Global_1946804.f_1 == -2125499975 || Global_1946804.f_1 == -449205311) && Global_1347477.f_190 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(iParam1, Global_1347477.f_190);
			}
			func_131(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_135(iParam1, 29, bVar4, 1, 0);
			func_135(iParam1, 31, bVar4, 1, 0);
			func_135(iParam1, 30, bVar4, 1, 0);
			func_135(iParam1, 22, bVar4, 1, 0);
			func_135(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_92(32768) && func_136(1108822547, 8)) && func_137(10, iParam3))
	{
		func_138(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = Global_1946804.f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_139(iVar1, 1);
			if (func_136(iVar3, 8))
			{
			}
			else if (Global_1946804.f_57[iVar1 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!func_137(iVar1, iParam3))
				{
				}
				else if ((func_136(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
				{
					if (!func_136(iVar3, 1) || bParam2)
					{
						Global_1946804.f_857++;
						if (!bParam6)
						{
							func_135(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
						{
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = 289238755;
						}
						func_140(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_2456[iVar1 /*2*/]) && uParam0->f_1[iVar1 /*3*/].f_1 == Global_1946804.f_2456[iVar1 /*2*/].f_1)
						{
						}
						else
						{
							if (Global_1946804.f_57[iVar1 /*11*/].f_1 > 1)
							{
								func_135(iParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946804.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (func_136(iVar3, 1))
							{
								func_126(iVar3, 1, 6);
							}
							Global_1946804.f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(iParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1 /*3*/].f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, uParam0->f_1[iVar1 /*3*/].f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804.f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

int func_103(int iParam0)
{
	if (!func_141(iParam0))
	{
		return -1;
	}
	return func_142(iParam0);
}

void func_104(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_62() - fParam1);
	func_143(uParam0, 1);
	func_144(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_105(int iParam0)
{
	int iVar0;

	iVar0 = func_65(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		return 0;
	}
	return PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
}

void func_106(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	if (Global_1934765.f_337 >= 6)
	{
		return;
	}
	Global_1934765.f_318[Global_1934765.f_337 /*3*/] = iParam0;
	Global_1934765.f_318[Global_1934765.f_337 /*3*/].f_1 = iParam1;
	Global_1934765.f_318[Global_1934765.f_337 /*3*/].f_2 = fParam2;
	Global_1934765.f_337++;
}

void func_107(bool bParam0, float fParam1)
{
	int iVar0;

	if (MISC::IS_BIT_SET(Global_1934765.f_301, 1))
	{
		return;
	}
	iVar0 = func_145();
	if (iVar0 < 0)
	{
		return;
	}
	if (iVar0 >= 6)
	{
		return;
	}
	if (iVar0 == Global_1934765.f_338)
	{
		return;
	}
	if (func_146(Global_1934765.f_318[iVar0 /*3*/], bParam0, fParam1))
	{
		Global_1934765.f_338 = iVar0;
	}
}

void func_108(int iParam0)
{
	int iVar0;

	if (Global_1934765.f_337 == 0)
	{
		return;
	}
	if (Global_1934765.f_337 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_1934765.f_337 - 2))
		{
			MISC::_COPY_MEMORY(&(Global_1934765.f_318[iVar0 /*3*/]), &(Global_1934765.f_318[iVar0 + 1 /*3*/]), 3);
			iVar0++;
		}
	}
	Global_1934765.f_337 = (Global_1934765.f_337 - 1);
}

bool func_109(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_87(iParam0))
		{
			return false;
		}
	}
	func_147(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

bool func_110(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_87(iParam0))
	{
		return false;
	}
	if (func_148(iParam0, 32, 1))
	{
		return false;
	}
	if (!func_148(iParam0, 2, 1))
	{
		return false;
	}
	if (!func_148(iParam0, 4, 1))
	{
		return false;
	}
	if (func_109(iParam0, 33, 1))
	{
		return false;
	}
	if (func_149(iParam0))
	{
		return false;
	}
	if (func_150(iParam0))
	{
		if (!bParam2)
		{
			return false;
		}
	}
	if (!bParam1)
	{
		if (Global_1357549.f_1497 == iParam0)
		{
			return false;
		}
	}
	return true;
}

bool func_111(int iParam0)
{
	return iParam0 != 0;
}

bool func_112(int iParam0, bool bParam1)
{
	if (func_66() != -1)
	{
		return false;
	}
	if (!func_67(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_65(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_105(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_0xEB98B38CA60742D7(func_65(iParam0));
}

bool func_113(int iParam0)
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

void func_114(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_151(iParam0, iParam1))
		{
			if (func_152(iParam0, iParam1))
			{
				if (func_153(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_53(iParam0);
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

void func_115(int iParam0, int iParam1, bool bParam2)
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

void func_116(int iParam0, bool bParam1)
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

void func_117(int iParam0, int iParam1)
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

int func_118()
{
	return Global_1946804.f_1;
}

bool func_119(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_48(iParam1) != iParam2)
	{
		return false;
	}
	if (func_154(2, iParam1))
	{
		func_155(uParam0, iParam1);
		return true;
	}
	return false;
}

bool func_120(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;

	Var4 = func_90(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946804.f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_157(uParam0, func_156(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_158(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("COMPONENT")))
			{
			}
			else
			{
				Global_1946804.f_2612[Global_1946804.f_2652] = iVar1;
				Global_1946804.f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_159(iVar3) && func_160(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804.f_2652)
						{
							func_161(uParam0, uParam0->f_1[Global_1946804.f_2612[iVar1] /*3*/], Global_1946804.f_2612[iVar1], 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

void func_121(int iParam0)
{
	func_126(iParam0, 8, 6);
}

void func_122(int iParam0)
{
	func_140(iParam0, 8, 6);
}

void func_123(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_66() != -1;
	iVar7 = func_162(0);
	if (func_92(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = Global_1946804.f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_139(iVar0, 1);
			if (func_136(iVar5, 8))
			{
			}
			else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_136(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_163(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_164(uParam0);
				if (iVar3 > 0)
				{
					if (!func_92(524288))
					{
						func_131(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = Global_1946804.f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_139(iVar0, 1);
							if (func_136(iVar5, 8))
							{
							}
							else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_136(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_163(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_165(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_94(524288);
				}
			}
		}
	}
}

void func_124(int iParam0)
{
	Global_1946804.f_978 = iParam0;
}

void func_125(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_126(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_158(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[func_158(iParam0, 1) /*11*/].f_10 - (Global_1946804.f_57[func_158(iParam0, 1) /*11*/].f_10 && iParam1));
}

void func_127()
{
	int iVar0;

	Global_1946804.f_1497 = Global_1946804.f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946804.f_1497.f_1[iVar0 /*3*/] = { Global_1946804.f_1378.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_128(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_90(0);
	iVar1 = 0;
	func_91(&(Global_1946804.f_964), iVar0, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804.f_964)))
	{
		return false;
	}
	if (!DATAFILE::_0xA63CD20F19B961AB(&iVar1, &(Global_1946804.f_964), -1516819610))
	{
		return false;
	}
	return iVar1;
}

void func_129(int iParam0, bool bParam1, int iParam2)
{
	func_166(&(Global_1946804.f_1378), iParam0);
	func_167(2, iParam0, 6);
	if (bParam1)
	{
		func_130(0, 1);
	}
}

void func_130(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_124(0);
	}
	if (bParam0)
	{
		func_131(8);
		func_131(512);
	}
	else
	{
		func_131(8);
		func_131(16);
	}
}

void func_131(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_132(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
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
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804.f_850 >= 25)
			{
				return;
			}
			if (func_168(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804.f_850)
				{
					iVar1 = ((Global_1946804.f_855 + iVar0) % 25);
					if ((Global_1946804.f_668[iVar1 /*4*/] == Param0 && Global_1946804.f_668[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1946804.f_668[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_169(Param0);
			Global_1946804.f_668[Global_1946804.f_856 /*4*/] = { Param0 };
			Global_1946804.f_850++;
			Global_1946804.f_856 = (Global_1946804.f_856 + 1 % 25);
			func_131(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804.f_851 >= 25)
			{
				return;
			}
			if (func_168(Param0))
			{
				return;
			}
			func_169(Param0);
			Global_1946804.f_567[Global_1946804.f_851 /*4*/] = { Param0 };
			Global_1946804.f_851++;
			func_131(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_170(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

bool func_133(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_134(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804.f_852 >= 20)
	{
		return;
	}
	if (func_168(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_852)
		{
			iVar1 = ((Global_1946804.f_853 + iVar0) % 20);
			if (((Global_1946804.f_769[iVar1 /*4*/] == Param0 && Global_1946804.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946804.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946804.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946804.f_769[iVar1 /*4*/] == 34 && func_168(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_169(Param0);
	Global_1946804.f_769[Global_1946804.f_854 /*4*/] = { Param0 };
	Global_1946804.f_852++;
	Global_1946804.f_854 = (Global_1946804.f_854 + 1 % 20);
	func_131(8);
}

void func_135(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_139(iParam1, 1);
	if (!bParam2 && iVar2 == joaat("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_171(iParam4);
		}
		else if (iParam4 != Global_1946804.f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_GET_PED_COMPONENT_CATEGORY(iParam4, PED::_GET_METAPED_TYPE(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::_0xDF631E4BCE1B1FC4(iParam0, Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0], 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::_SET_PED_COMPONENT_DISABLED(iParam0, Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0], 0);
			}
			iVar0++;
		}
	}
}

bool func_136(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[func_158(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

bool func_137(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

void func_138(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_136(1108822547, 6))
	{
		if (bParam2)
		{
			func_135(iParam0, iVar0, func_66() != -1, 0, 0);
			func_140(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1946804.f_2776.f_1, Global_1946804.f_2776.f_3[0], Global_1946804.f_2776.f_3[1], Global_1946804.f_2776.f_3[2], Global_1946804.f_2776.f_8, Global_1946804.f_2776.f_9, Global_1946804.f_2776.f_10, Global_1946804.f_2776.f_11);
		func_126(1108822547, 1, 6);
	}
	Global_1946804.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
}

int func_139(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
		case 5:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
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

void func_140(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_158(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[func_158(iParam0, 1) /*11*/].f_10 || iParam1);
}

bool func_141(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_142(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_172(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

void func_143(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_144(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_145()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = -1;
	iVar1 = -1;
	if (Global_1934765.f_337 <= 0)
	{
		return -1;
	}
	iVar2 = (Global_1934765.f_337 - 1);
	while (iVar2 >= 0)
	{
		iVar3 = func_173(Global_1934765.f_318[iVar2 /*3*/].f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

int func_146(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!MISC::IS_BIT_SET(Global_1934765.f_301, 0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1934765.f_301, 1))
	{
		return 0;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		MISC::_0x243CEDE8F916B994();
		return 0;
	}
	iVar0 = func_174(iParam0, 1);
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = func_175(iVar1, 1);
		if (iVar2 == 0 || iVar2 == -1439599467)
		{
		}
		else if (MISC::IS_BIT_SET(Global_1934765.f_302[iVar0], iVar1))
		{
			MISC::_0xD3F943B88F55376A(iVar2);
		}
		else
		{
			MISC::_0x2916B30DC6C41179(iVar2);
		}
		iVar1++;
	}
	return func_176(iParam0, bParam1, fParam2);
}

int func_147(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_148(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_87(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

bool func_149(int iParam0)
{
	return func_148(iParam0, 16, 1);
}

bool func_150(int iParam0)
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
	{
		return true;
	}
	return false;
}

bool func_151(int iParam0, int iParam1)
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

bool func_152(int iParam0, int iParam1)
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

bool func_153(int iParam0, int iParam1)
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
	if (!func_151(iParam0, iVar0))
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

bool func_154(int iParam0, int iParam1)
{
	if (func_66() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26796.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36638.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return false;
}

void func_155(var uParam0, int iParam1)
{
	int iVar0;

	if (func_66() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		*uParam0 = Global_26796.f_26[iParam1 /*120*/].f_1;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uParam0->f_1[iVar0 /*3*/] = { Global_26796.f_26[iParam1 /*120*/].f_1.f_1[iVar0 /*3*/] };
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	*uParam0 = Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 128;
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 256;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 512;
		case -915377750:
			return 1024;
		case -1283403230:
			return 2048;
		case 1024778115:
			return 4096;
		case 75507907:
			return 8192;
		case -1678578495:
			return 16384;
		case -1925540957:
			return 32768;
		case -2125161702:
			return 131072;
		case 1929486675:
			return 262144;
		case -1932005642:
			return 65536;
		case 315750675:
			return 524288;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 1136;
		case -141044514:
			return 4208;
		case 884232794:
			return 8304;
		case 836721350:
			return 20480;
		case -1062102573:
			return 32833;
		case -884591393:
			return 96;
		case -1886898087:
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_157(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_177(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			iVar7 = func_139(iVar0, 1);
			if (func_137(iVar0, iParam1))
			{
				vVar4 = { func_178(iVar0, -1) };
				if ((vVar4.x != Global_1946804.f_57[iVar0 /*11*/] && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_136(iVar7, 4))
				{
					func_126(iVar7, 4, 6);
				}
			}
			else
			{
				func_140(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = Global_1946804.f_57[iVar0 /*11*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

int func_158(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case -1197751823:
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case -1130865351:
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case -893163968:
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case 304805134:
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_159(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1946804.f_964.f_2 = 0;
	if (func_66() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_91(&(Global_1946804.f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1946804.f_964), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_160(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return 1;
}

void func_161(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_179(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_137(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_165(iVar1, iVar3);
		}
	}
	if (func_180(-1586649372) && func_137(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_165(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_165(iVar1, iVar3);
					}
				}
			}
			func_181(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_181(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE") || uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_165(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_181(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_165(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_165(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_181(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_181(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_165(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_181(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
				if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_165(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_165(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_179(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_165(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_182(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && -923693316 == func_179(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_165(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && func_183(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_165(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 1228
				iVar1 = 36;
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_165(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && (func_182(Global_1946804.f_1497.f_1[iVar1 /*3*/]) || func_183(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_165(iVar1, iVar3);
					}
				}
			}
			switch (func_179(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_179(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_165(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_179(uParam0->f_1[iVar1 /*3*/]) || func_183(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_165(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_162(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_118();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_163(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946804.f_57[func_158(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_92(524288))
	{
		switch (iParam1)
		{
			case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
				iVar0++;
				break;
			case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, joaat("BASE"), iParam2, bParam3));
	return iVar0;
}

int func_164(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1946804.f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1946804.f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_165(int iParam0, int iParam1)
{
	func_184(&(Global_1946804.f_2589), iParam0, iParam1);
}

void func_166(var uParam0, int iParam1)
{
	int iVar0;

	if (func_66() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_185(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_186(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_167(int iParam0, int iParam1, int iParam2)
{
	if (func_66() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1 /*120*/] = (Global_26796.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36638.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

bool func_168(int iParam0)
{
	return Global_1946804.f_529[iParam0] > 0;
}

void func_169(int iParam0)
{
	Global_1946804.f_529[iParam0]++;
}

void func_170(var uParam0, var uParam1, var uParam2)
{
	struct<4> Var0;

	Var0.f_1 = uParam2;
	Var0 = uParam0;
	Var0.f_2 = uParam1;
	func_134(Var0);
}

int func_171(int iParam0)
{
	int iVar0;

	iVar0 = func_179(iParam0);
	switch (iVar0)
	{
		case -2061583405:
			return joaat("HATS");
		case -525676072:
			return joaat("MASKS_LARGE");
		default:
			break;
	}
	return 0;
}

int func_172(int iParam0)
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

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 5;
		case 2:
			return 4;
		case 3:
			return 3;
		case 4:
			return 2;
		case 5:
			return 1;
		default:
			break;
	}
	return -1;
}

int func_174(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WEATHER_GROUP_CH2_END"):
			return 3;
		case joaat("WEATHER_GROUP_CH2_MID"):
			return 4;
		case joaat("WEATHER_GROUP_CH3_DROUGHT"):
			return 6;
		case joaat("WEATHER_GROUP_GOOD_VISIBILITY"):
			return 8;
		case joaat("WEATHER_GROUP_GOOD"):
			return 7;
		case joaat("WEATHER_GROUP_LIGHT_PRECIPITATION"):
			return 10;
		case joaat("WEATHER_GROUP_IN_CAMP"):
			return 9;
		case 0:
			return 13;
		case 15:
			return 14;
		case joaat("WEATHER_GROUP_BAD_VISIBILITY"):
			return 2;
		case joaat("WEATHER_GROUP_NO_PRECIPITATION"):
			return 11;
		case joaat("WEATHER_GROUP_ATMOSPHERIC"):
			return 0;
		case joaat("WEATHER_GROUP_THUNDERSTORM"):
			return 12;
		case joaat("WEATHER_GROUP_BAD"):
			return 1;
		case joaat("WEATHER_GROUP_CH2_START"):
			return 5;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_175(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("BLIZZARD");
		case 1:
			return joaat("CLOUDS");
		case 2:
			return joaat("DRIZZLE");
		case 3:
			return joaat("FOG");
		case 4:
			return joaat("GROUNDBLIZZARD");
		case 5:
			return joaat("HAIL");
		case 6:
			return joaat("HIGHPRESSURE");
		case 7:
			return joaat("HURRICANE");
		case 8:
			return joaat("MISTY");
		case 9:
			return joaat("OVERCAST");
		case 10:
			return joaat("OVERCASTDARK");
		case 11:
			return joaat("RAIN");
		case 12:
			return joaat("SANDSTORM");
		case 13:
			return joaat("SHOWER");
		case 14:
			return joaat("SLEET");
		case 15:
			return joaat("SNOW");
		case 16:
			return joaat("SNOWCLEARING");
		case 17:
			return joaat("SNOWLIGHT");
		case 18:
			return joaat("SUNNY");
		case 19:
			return joaat("THUNDER");
		case 20:
			return joaat("THUNDERSTORM");
		case 21:
			return joaat("WHITEOUT");
		case 22:
			return 0;
		case 23:
			return -1439599467;
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

int func_176(int iParam0, bool bParam1, float fParam2)
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
	int iVar10;
	int iVar11;

	if (!MISC::IS_BIT_SET(Global_1934765.f_301, 0))
	{
		return 0;
	}
	iVar0 = func_174(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return 0;
	}
	iVar1 = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
	iVar2 = func_187(iVar1, 1);
	if (iVar2 < 0 || iVar2 > 31)
	{
		return 0;
	}
	iVar3 = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();
	iVar4 = func_187(iVar3, 1);
	if (iVar4 < 0 || iVar4 > 31)
	{
		return 0;
	}
	MISC::_0xDD560ABEF5D3784C(&iVar5, &iVar6);
	iVar7 = func_187(iVar5, 1);
	if (iVar6 != 0 && !bParam1)
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (MISC::IS_BIT_SET(Global_1934765.f_302[iVar0], iVar7))
		{
			return 1;
		}
	}
	else if (MISC::IS_BIT_SET(Global_1934765.f_302[iVar0], iVar2) && MISC::IS_BIT_SET(Global_1934765.f_302[iVar0], iVar4))
	{
		return 1;
	}
	iVar8 = 0;
	while (iVar8 < 20)
	{
		iVar8++;
		iVar9 = MISC::_0x7F4CE164D9A11DFE();
		if (!MISC::IS_BIT_SET(Global_1934765.f_302[iVar0], iVar9))
		{
		}
		else
		{
			iVar10 = func_175(iVar9, 1);
			if (iVar10 == 0 || iVar10 == -1439599467)
			{
			}
			else
			{
				if (bParam1)
				{
					MISC::_SET_WEATHER_TYPE(iVar10, true, false, false, 0f, false);
				}
				else
				{
					MISC::_SET_WEATHER_TYPE(iVar10, true, false, true, fParam2, false);
				}
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("WEATHER_GROUP_ATMOSPHERIC"):
			iVar11 = joaat("MISTY");
			break;
		case joaat("WEATHER_GROUP_BAD"):
			iVar11 = joaat("RAIN");
			break;
		case joaat("WEATHER_GROUP_BAD_VISIBILITY"):
			iVar11 = joaat("FOG");
			break;
		case joaat("WEATHER_GROUP_CH2_END"):
			iVar11 = joaat("HIGHPRESSURE");
			break;
		case joaat("WEATHER_GROUP_CH2_MID"):
			iVar11 = joaat("SUNNY");
			break;
		case joaat("WEATHER_GROUP_CH2_START"):
			iVar11 = joaat("CLOUDS");
			break;
		case joaat("WEATHER_GROUP_CH3_DROUGHT"):
			iVar11 = joaat("SUNNY");
			break;
		case joaat("WEATHER_GROUP_GOOD"):
			iVar11 = joaat("SUNNY");
			break;
		case joaat("WEATHER_GROUP_GOOD_VISIBILITY"):
			iVar11 = joaat("HIGHPRESSURE");
			break;
		case joaat("WEATHER_GROUP_IN_CAMP"):
			iVar11 = joaat("CLOUDS");
			break;
		case joaat("WEATHER_GROUP_LIGHT_PRECIPITATION"):
			iVar11 = joaat("OVERCAST");
			break;
		case joaat("WEATHER_GROUP_NO_PRECIPITATION"):
			iVar11 = joaat("CLOUDS");
			break;
		case joaat("WEATHER_GROUP_THUNDERSTORM"):
			iVar11 = joaat("THUNDERSTORM");
			break;
		default:
			iVar11 = joaat("OVERCAST");
			break;
	}
	if (bParam1)
	{
		MISC::_SET_WEATHER_TYPE(iVar11, true, false, false, 0f, false);
	}
	else
	{
		MISC::_SET_WEATHER_TYPE(iVar11, false, false, true, fParam2, false);
	}
	return 1;
}

bool func_177(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

Vector3 func_178(int iParam0, int iParam1)
{
	if (func_66() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		return Global_26796.f_26[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	return Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

int func_179(int iParam0)
{
	struct<2> Var0;

	if (!func_188(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_180(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946804.f_1497.f_1[func_158(iParam0, 1) /*3*/] != Global_1946804.f_57[func_158(iParam0, 1) /*11*/];
}

void func_181(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if (uParam0->f_1[iVar3 /*3*/].f_1 == 1216705912 || uParam0->f_1[iVar3 /*3*/].f_1 == 654181853)
	{
		if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
		{
			uParam0->f_1[iVar3 /*3*/].f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[iVar3 /*3*/].f_1 = -1539589426;
			uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
		}
		if (bParam2)
		{
			func_165(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_165(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_165(iVar2, iVar0);
		}
	}
}

bool func_182(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_HL_PLAYER_BOOT_007_1"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_009_1"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_2"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_3"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_4"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_183(int iParam0, int iParam1)
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

void func_184(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_189(uParam0, 1))
	{
		func_190(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

void func_185(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_186(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

int func_187(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
			return 2;
		case -1439599467:
			return 23;
		case joaat("SANDSTORM"):
			return 12;
		case joaat("THUNDER"):
			return 19;
		case joaat("OVERCAST"):
			return 9;
		case joaat("FOG"):
			return 3;
		case joaat("SHOWER"):
			return 13;
		case joaat("SNOW"):
			return 15;
		case joaat("HIGHPRESSURE"):
			return 6;
		case 0:
			return 22;
		case joaat("SLEET"):
			return 14;
		case joaat("OVERCASTDARK"):
			return 10;
		case joaat("SNOWLIGHT"):
			return 17;
		case joaat("BLIZZARD"):
			return 0;
		case joaat("WHITEOUT"):
			return 21;
		case joaat("CLOUDS"):
			return 1;
		case joaat("HURRICANE"):
			return 7;
		case joaat("RAIN"):
			return 11;
		case joaat("MISTY"):
			return 8;
		case joaat("SUNNY"):
			return 18;
		case joaat("SNOWCLEARING"):
			return 16;
		case joaat("HAIL"):
			return 5;
		case joaat("THUNDERSTORM"):
			return 20;
		case joaat("GROUNDBLIZZARD"):
			return 4;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_188(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_189(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_190(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}


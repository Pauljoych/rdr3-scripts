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
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
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
	var uLocal_48 = 1;
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
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	bool bLocal_73 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_13 = 1;
	fLocal_63 = 1f;
	fLocal_64 = 1f;
	iLocal_15 = vScriptParam_0.x;
	iLocal_16 = vScriptParam_0.y;
	uLocal_17 = vScriptParam_0.z;
	func_1();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(iLocal_15);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_8();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_3()
{
	if (iLocal_14 != 0)
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iLocal_14) == 0)
		{
			return iLocal_13;
		}
		else
		{
			return true;
		}
	}
	return iLocal_13;
}

void func_4()
{
}

void func_5()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(2))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(2, iVar0))
		{
			case -45008988:
				func_9(iVar0);
				break;
			case -456923784:
				func_10(iVar0);
				break;
			case -843555838:
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	var uVar0;
	bool bVar1;

	func_12();
	if (!ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		switch (iLocal_66)
		{
			case 0:
				PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 42, 0, 1);
				func_13(&iLocal_66, 1);
				break;
			case 1:
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336))
				{
					if (!PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &uVar0, 0, 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_ITEM")) == 0)
					{
						HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_34, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
						if (func_14() == 0)
						{
							if (func_15(joaat("UPGRADE_UPG_MORTAR_PESTLE"), 1) && (!func_16(0, 0, 1) || func_17()))
							{
								iLocal_67 = func_18("CAMP_CRAFT", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
								func_19(iLocal_67, 342152817, 0, 1);
								MISC::SET_BIT(&(Global_1957959.f_1), 2);
								MISC::CLEAR_BIT(&(Global_1957959.f_1), 3);
							}
						}
						else
						{
							if (!(func_20("simple_crafting") || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SIMPLE_CRAFTING")) > 0))
							{
								if (func_15(-1448210800 /* GXTEntry: "Crafting Tools" */, 1) && (!func_16(0, 0, 1) || func_17()))
								{
									if (!func_21())
									{
										iLocal_67 = func_18("CAMP_CRAFT", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
										func_19(iLocal_67, 342152817, 0, 1);
									}
								}
								if (func_22(0, 0) && (func_15(joaat("KIT_CAMP"), 1) || func_15(joaat("KIT_CAMP_SIMPLE"), 1)))
								{
									iLocal_68 = func_18("SET_CAMP", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
									func_19(iLocal_68, 342152817, 0, 1);
								}
							}
							MISC::SET_BIT(&(Global_1957959.f_1), 2);
							MISC::CLEAR_BIT(&(Global_1957959.f_1), 3);
						}
						iLocal_69 = func_18("LEAVE", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
						func_23(iLocal_69, 17, 1, 1);
						func_19(iLocal_69, 342152817, 0, 1);
						func_13(&iLocal_66, 2);
					}
				}
				break;
			case 2:
				if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &uVar0, 0, 0) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_ITEM")) > 0)
				{
					func_24();
					func_13(&iLocal_66, 1);
					return;
				}
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
				HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_34, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
				bVar1 = PED::IS_PED_IN_COMBAT(Global_34, 0);
				if ((func_25(joaat("SIMPLE_CRAFTING")) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SIMPLE_CRAFTING")) > 0) || Global_1913694.f_1581)
				{
					func_24();
					MISC::CLEAR_BIT(&(Global_1957959.f_1), 2);
					func_13(&iLocal_66, 3);
					return;
				}
				else if (func_26())
				{
					func_24();
					MISC::CLEAR_BIT(&(Global_1957959.f_1), 2);
					func_13(&iLocal_66, 4);
					return;
				}
				else if (func_27())
				{
					func_24();
					MISC::CLEAR_BIT(&(Global_1957959.f_1), 2);
					func_13(&iLocal_66, 5);
					return;
				}
				else if (TASK::_0xEC7E480FF8BD0BED(Global_34))
				{
					func_24();
					MISC::CLEAR_BIT(&(Global_1957959.f_1), 2);
					func_13(&iLocal_66, 6);
					return;
				}
				if (func_28(iLocal_67, 1))
				{
					func_29(0);
					func_24();
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					MISC::CLEAR_BIT(&(Global_1957959.f_1), 2);
					func_13(&iLocal_66, 3);
				}
				else if (func_28(iLocal_68, 1))
				{
					if ((func_15(joaat("KIT_CAMP"), 1) && func_30(joaat("KIT_CAMP"), 0, 0, 0, 1, 0, 0)) || (func_15(joaat("KIT_CAMP_SIMPLE"), 1) && func_30(joaat("KIT_CAMP_SIMPLE"), 0, 0, 0, 1, 0, 0)))
					{
						func_24();
						MISC::CLEAR_BIT(&(Global_1957959.f_1), 2);
					}
				}
				else if (func_31(iLocal_69, 1) || bVar1)
				{
					if (!bVar1)
					{
						PED::_0xD65FDC686A031C83(Global_34, joaat("DYNAMIC_KNEEL_SLOW_EXIT"), 2f);
					}
					TASK::CLEAR_PED_TASKS(Global_34, false, false);
					func_24();
				}
				if (!func_32(&uLocal_70))
				{
					if (func_33())
					{
						func_34(&uLocal_70);
					}
				}
				else if (!func_33())
				{
					bLocal_73 = false;
					func_35(&uLocal_70);
				}
				else if (!func_36(&uLocal_70, 0.15f))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_SPRINT")))
					{
						bLocal_73 = true;
					}
				}
				else if (!bLocal_73)
				{
					PED::_0xD65FDC686A031C83(Global_34, joaat("DYNAMIC_KNEEL_SLOW_EXIT"), 0.2f);
				}
				break;
			case 3:
				if ((!func_20("simple_crafting") && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SIMPLE_CRAFTING")) == 0) && !Global_1913694.f_1581)
				{
					func_13(&iLocal_66, 1);
				}
				break;
			case 4:
				if (!func_26())
				{
					func_13(&iLocal_66, 1);
				}
				break;
			case 5:
				if (!func_27())
				{
					func_13(&iLocal_66, 1);
				}
				break;
			case 6:
				if (!TASK::_0xEC7E480FF8BD0BED(Global_34))
				{
					func_13(&iLocal_66, 1);
				}
				break;
		}
		if ((!PED::IS_PED_USING_ANY_SCENARIO(Global_34) || (iLocal_66 > 1 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1))) || TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_34, false) != iLocal_16)
		{
			iLocal_13 = 0;
		}
	}
}

void func_7()
{
	HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_34, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
	func_24();
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 42, 0, 0);
	MISC::CLEAR_BIT(&(Global_1957959.f_1), 2);
}

void func_8()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_37(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_38(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_39(&iVar0);
	}
}

void func_12()
{
	func_40(0);
}

void func_13(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

int func_14()
{
	return Global_1572887.f_13;
}

bool func_15(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_41(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_42(iParam0);
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
			if (!func_43(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_44(iParam0))
			{
				return true;
			}
			break;
	}
	return func_45(iParam0, 0, 0, 0) >= iParam1;
}

bool func_16(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887.f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900736.f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900736.f_68;
		}
		if (func_46())
		{
			return true;
		}
		if (Global_1071686.f_3 && !Global_1572887.f_9)
		{
			if ((Global_1056141[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*471*/].f_463 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900736.f_67;
		}
		else
		{
			return Global_1900736.f_68;
		}
	}
	if (iParam0 == 0 && func_48(func_47(0)))
	{
		return true;
	}
	if ((Global_1940258 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1900871)
		{
			return true;
		}
	}
	switch (func_49(func_47(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

bool func_17()
{
	return Global_1913694.f_1578;
}

int func_18(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_50(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_51(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_19(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_52(iParam0))
	{
		return;
	}
	iVar0 = func_53(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1951255[iVar0 /*23*/].f_3, iParam1, iParam2);
}

bool func_20(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493.f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1939493[iVar0 /*16*/].f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_21()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return false;
	}
	if (!PED::IS_PED_IN_ANY_TRAIN(Global_34))
	{
		return false;
	}
	return false;
}

bool func_22(int iParam0, int iParam1)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940311.f_1433.f_54.f_85);
}

void func_23(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_52(iParam0))
	{
		return;
	}
	iVar0 = func_53(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1951255[iVar0 /*23*/].f_3, iParam1, iParam2);
}

void func_24()
{
	if (func_52(iLocal_67))
	{
		func_54(&iLocal_67, 1, 1);
	}
	if (func_52(iLocal_68))
	{
		func_54(&iLocal_68, 1, 1);
	}
	if (func_52(iLocal_69))
	{
		func_54(&iLocal_69, 1, 1);
	}
}

bool func_25(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1939493[iVar0 /*16*/].f_10)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_26()
{
	return (Global_1940311.f_1 || Global_1940311 == 1);
}

bool func_27()
{
	return Global_1896738.f_382;
}

bool func_28(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_52(iParam0))
	{
		return false;
	}
	iVar0 = func_53(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

void func_29(bool bParam0)
{
	if ((func_14() != -1 || !bParam0) || func_55(Global_34))
	{
		func_56();
		return;
	}
}

bool func_30(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	int iVar26;
	var uVar27;
	bool bVar28;
	int iVar29;
	bool bVar30;
	bool bVar31;
	int iVar32;

	if (func_57())
	{
		Global_1940311.f_10894 = iParam0;
		func_58(iParam0, 1, -142743235, 0, 0);
		return false;
	}
	if (!func_59(iParam0, bParam4))
	{
		return false;
	}
	if (func_60(iParam0))
	{
		return false;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 108107462))
	{
		return false;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (iParam0 == joaat("KIT_MOONSHINER_MAGGIES_MAP"))
	{
		UIAPPS::_LAUNCH_APP_WITH_ENTRY("player_menu", "mp_moonshine_selection");
	}
	if (func_61(iParam0))
	{
		Global_1913502 = iParam0;
		Global_1913693 = MISC::GET_GAME_TIMER();
		Global_1913503 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}
	if (func_62(iParam0, -2081717885))
	{
		func_63(iParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_62(iParam0, -1909684001))
	{
		func_64(iParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_62(iParam0, 587975446))
	{
		func_65(iParam0, Var10);
	}
	else if (func_62(iParam0, 566155764))
	{
		if (!func_66(iParam0))
		{
			return false;
		}
	}
	if (func_67(iParam0, bParam5, bParam6, bParam1))
	{
		Global_1913502 = iParam0;
		Global_1913693 = MISC::GET_GAME_TIMER();
		return true;
	}
	if (func_62(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_68(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_62(iParam0, -1472964441) || func_62(iParam0, -228153877)) || func_62(iParam0, 566155764))
	{
	}
	else if (func_62(iParam0, 1919582297))
	{
		if (((func_69() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1)) || TASK::_0x0C3CB2E600C8977D(Global_34, 1)) || !PED::IS_PED_ON_FOOT(Global_34))
		{
			return false;
		}
		switch (iParam0)
		{
			case joaat("CONSUMABLE_HERBIVORE_BAIT"):
			case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case joaat("CONSUMABLE_PREDATOR_BAIT"):
			case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
			case joaat("CONSUMABLE_ROLE_NATURALIST_LEGENDARY_ANIMAL_PHEROMONE"):
				StringCopy(&(Var10.f_10), "item_legendary_animal_pheromone", 32);
				break;
		}
		Var0.f_1 = iParam0;
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_68(Var10, 0);
		bVar28 = false;
	}
	else if (func_70(iParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_71(Global_1071686.f_28357.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_68(Var10, 0);
		iVar29 = 1;
	}
	else if (func_42(iParam0) == joaat("CLOTHING"))
	{
		if (!func_72(iParam0))
		{
			func_73("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_74(iParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_75();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_76(PLAYER::PLAYER_ID()))
			{
				func_73("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_73("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1952637.f_1675 != iParam0)
			{
				func_77(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_78(iParam0, 0);
					return iVar29;
				case -2061583405:
					func_79(iParam0);
					func_77(35, 0, 0, 0, 0);
					return true;
				case -1719060085:
					if (iParam0 == Global_1952637.f_1675.f_1[23 /*3*/])
					{
						func_80(Global_34, joaat("CLOTHING_ITEM_GLOVES_NONE"), 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "PlayUnequipGlovesFidget", true, 15);
						func_81(iParam0, 0, 0);
						return true;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "PlayEquipGlovesFidget", true, 15);
						func_81(iParam0, 1, 0);
					}
					break;
				case 119907797:
				case 1388798186:
					if (iParam0 == Global_1952637.f_1675.f_1[10 /*3*/])
					{
						func_80(Global_34, Global_1952637.f_83[10 /*12*/], 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						func_81(iParam0, 0, 0);
						return true;
					}
					else
					{
						func_81(iParam0, 1, 0);
						func_82(-2061583405, 0);
						if (iVar32 == 1388798186)
						{
							func_82(119907797, 0);
						}
						else if (iVar32 == 119907797)
						{
							func_82(1388798186, 0);
						}
					}
					break;
				default:
					if (!func_62(iParam0, 160827531))
					{
					}
					else
					{
						func_78(iParam0, 0);
					}
					break;
			}
			func_80(Global_34, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("CUSTOM_SATCHEL"):
				func_83(1);
				break;
			case joaat("KIT_WARDROBE"):
				if (func_14() != -1)
				{
				}
				else if (!func_72(iParam0))
				{
					func_73("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_84(7, iParam0);
					bVar31 = func_84(1, iParam0);
					if (bVar31 && !bVar30)
					{
						if (MAP::DOES_BLIP_EXIST(Global_17332))
						{
							MAP::REMOVE_BLIP(&Global_17332);
						}
						Global_17332 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::_BLIP_SET_MODIFIER(Global_17332, 673950256);
						func_73(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_17332), 10000, 0, 0, 0, 1);
					}
					else if (!func_85(7))
					{
						func_73("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_87(Global_34, func_86(7), 0))
						{
							func_73("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_17332))
							{
								MAP::REMOVE_BLIP(&Global_17332);
							}
							Global_17332 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
							MAP::_BLIP_SET_MODIFIER(Global_17332, 673950256);
							func_73(MISC::_CREATE_VAR_STRING(0, -482898802, Global_17332), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = joaat("PLAYER_WARDROBE");
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							func_68(Var10, 0);
						}
						Jump @2398; //curOff = 1780
						func_88();
						Jump @2398; //curOff = 1787
						if (func_72(joaat("KIT_CAMP")))
						{
							if (func_89(1, 1))
							{
								func_90(2, 1);
							}
							else if (func_91(1))
							{
								func_73("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
							}
							else if (func_92())
							{
								func_73("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
								{
									func_93();
								}
								else
								{
									func_73("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								}
								func_94(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
						}
						else if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
						{
							func_73("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
							func_94(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
						}
						else if (func_92())
						{
							func_73("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_73("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
						}
						Jump @2398; //curOff = 2008
						if (!WEAPON::_IS_WEAPON_BINOCULARS(func_95(Global_34, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iParam0, false, 0, false, false);
						}
						return true;
						Jump @2398; //curOff = 2046
						if (func_95(Global_34, 1, 0, 0) != iParam0)
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iParam0, false, 0, false, false);
						}
						return true;
						Jump @2398; //curOff = 2081
						Jump @2398; //curOff = 2084
						func_96(535, 1);
						Jump @2398; //curOff = 2095
						func_29(1);
						Jump @2398; //curOff = 2103
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("DOCUMENT_PLAYER_JOURNAL"), 1928812891, 1, 0, -1082130432 /* Float: -1f */);
						bVar28 = false;
						return true;
						Jump @2398; //curOff = 2138
						UIAPPS::_LAUNCH_APP_BY_HASH(joaat("COLLECTORS"));
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("COLLECTORS")) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							func_68(Var10, 0);
						}
						return true;
						Jump @2398; //curOff = 2214
						UIAPPS::_CLOSE_APP_BY_HASH(joaat("SATCHEL"));
						if (SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() == joaat("SATCHEL_UI_EVENT_HANDLER"))
						{
							UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(1976336482, 1261159557);
						}
						else
						{
							UIAPPS::_LAUNCH_APP_BY_HASH(1976336482);
						}
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FIELD_GUIDE")) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_3 = !SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() != joaat("SATCHEL_UI_EVENT_HANDLER");
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "field_guide", 32);
							Var10.f_14 = 1024;
							func_68(Var10, 0);
						}
						return true;
						Jump @2398; //curOff = 2344
						if (Global_1138048[PLAYER::PLAYER_ID() /*8*/].f_4)
						{
							func_73("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_97();
						}
						return true;
						Jump @2398; //curOff = 2389
						iVar29 = 0;
					}
				}
				if (bVar28)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar29;
				default:
					break;
		}
	}
}

bool func_31(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_52(iParam0))
	{
		return false;
	}
	iVar0 = func_53(iParam0);
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

bool func_32(var uParam0)
{
	return func_98(*uParam0, 1);
}

bool func_33()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
	fVar2 = ((fVar0 * fVar0) + (fVar1 * fVar1));
	if (fVar2 >= (0.1f * 0.1f))
	{
		return true;
	}
	return false;
}

void func_34(var uParam0)
{
	func_99(uParam0, 0f);
}

void func_35(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_36(var uParam0, float fParam1)
{
	if (func_100(uParam0, fParam1))
	{
		func_35(uParam0);
		return true;
	}
	return false;
}

void func_37(int iParam0)
{
}

void func_38(int iParam0)
{
}

void func_39(int iParam0)
{
}

void func_40(bool bParam0)
{
	if (bParam0)
	{
		func_101(4);
	}
	func_101(2);
	MISC::SET_BIT(&(Global_1957959.f_1), 0);
}

bool func_41(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_42(int iParam0)
{
	vector3 vVar0;

	if (!func_41(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_43(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_41(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258.f_6)
	{
		return false;
	}
	iVar0 = func_102(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_103("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_104(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_105(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_106(iVar1);
				return true;
			}
			iVar3++;
		}
		func_106(iVar1);
	}
	return false;
}

bool func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_41(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_74(iParam0);
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
	iVar1 = func_107(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_108(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_109(iParam0);
	iVar2 = func_108(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == Global_17411.f_55.f_644.f_1354.f_5[iVar2 /*17*/];
}

int func_45(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_41(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_42(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_102(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_110(iParam0, 0);
	}
	if (func_111(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_112(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_113(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_112(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_46()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_4)
	{
		return true;
	}
	if (Global_2883584)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (!func_48(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_47(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

bool func_48(struct<2> Param0)
{
	if (!func_114(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_115(Param0))
	{
		return false;
	}
	return true;
}

int func_49(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_50(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_51(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
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
	func_116(iParam0, 1);
	func_117(iParam0, 1);
	func_118(iParam0, 128);
}

bool func_52(int iParam0)
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

int func_53(int iParam0)
{
	return iParam0;
}

void func_54(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_52(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_53(*iParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_119(iVar0);
	*iParam0 = 0;
}

bool func_55(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_56()
{
	Global_1913694.f_1583 = MISC::GET_GAME_TIMER();
	Global_1913694.f_1581 = 1;
}

bool func_57()
{
	if (Global_1940311.f_36 == 3)
	{
		return true;
	}
	return false;
}

bool func_58(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_41(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_111(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_120(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_121(iParam0, bParam4, 0) };
	Var6 = { func_122(iParam0, Var1, Var1.f_4, bParam4) };
	return func_123(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

bool func_59(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_41(iParam0, 0))
	{
		return false;
	}
	if (Global_1940311.f_7)
	{
		return false;
	}
	if (((iParam0 != joaat("CUSTOM_SATCHEL") && iParam0 != joaat("KIT_CAMP")) && iParam0 != joaat("KIT_CAMP_SIMPLE")) && bParam1)
	{
		iVar0 = func_124(iParam0);
		if (func_62(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_125(1, iVar0))
		{
			return false;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == joaat("UPGRADE_UPG_MORTAR_PESTLE"))
	{
		if (func_126())
		{
			return false;
		}
	}
	if (!func_15(iParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

bool func_60(int iParam0)
{
	if (func_70(iParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x3D10D7179D7034AF(func_112(0), iParam0, func_127(0)))
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("KIT_CAMP"):
		case joaat("KIT_CAMP_SIMPLE"):
			func_22(1, 1);
			TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
			return true;
		case joaat("KIT_HANDHELD_CATALOG"):
			if (func_128() != -1)
			{
				func_73(func_129(), 10000, 0, 0, 0, 1);
				func_130(-1);
			}
			break;
	}
	return true;
}

bool func_61(int iParam0)
{
	struct<16> Var0;

	if (iParam0 == joaat("DOCUMENT_MAP_ROLE_NATURALIST_LEGENDARY_ANIMAL"))
	{
		StringCopy(&(Var0.f_10), "legendary_animal_map", 32);
		Var0.f_14 = 512;
		func_68(Var0, 0);
		return true;
	}
	return false;
}

bool func_62(int iParam0, int iParam1)
{
	if (!func_41(iParam0, 0))
	{
		return func_132(func_131(iParam0), iParam1);
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

void func_63(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_64(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_65(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

bool func_66(int iParam0)
{
	if (func_14() == 0 && func_134(func_133(iParam0), 1, 0) != 0)
	{
		func_73("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

bool func_67(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_135(iParam0, bParam1, 0, 0, -1082130432 /* Float: -1f */))
	{
		Global_1913503 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}
	switch (func_136(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1245009814, 1, 0, -1082130432 /* Float: -1f */);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_137())
				{
					if (func_138(&Global_34))
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("APPLY_POMADE_WITH_HAT"), 1, 0, -1082130432 /* Float: -1f */);
					}
					else
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("APPLY_POMADE_WITH_NO_HAT"), 1, 0, -1082130432 /* Float: -1f */);
					}
					return true;
				}
				else
				{
					func_73("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 280850861, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1087288635, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1913503 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -268993254, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -1401979141, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1913503 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1834614641, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 136592566, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1913503 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_139(iParam0);
				}
				else
				{
					func_140(iParam0);
				}
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_141(iParam0, 1);
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_142(iParam0, 1);
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_143(iParam0);
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_139(iParam0);
				}
				else
				{
					func_144(iParam0);
				}
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_139(iParam0);
				}
				else
				{
					func_145(iParam0);
				}
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_139(iParam0);
				}
				else
				{
					func_146(iParam0);
				}
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_139(iParam0);
				}
				else
				{
					func_147(iParam0);
				}
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("POCKET_WATCH_INSPECT_UNHOLSTER"), 1, 0, -1082130432 /* Float: -1f */);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_148(iParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_149(iParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_150(iParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_139(iParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_151(iParam0, bParam3);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_152(iParam0, bParam3);
				return true;
			}
			break;
	}
	return false;
}

void func_68(struct<16> Param0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1939493.f_161 >= 10)
	{
		return;
	}
	if (!func_153(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_20(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939493[iVar0 /*16*/].f_10)))
		{
			Global_1939493[iVar0 /*16*/] = { Param0 };
			Global_1939493.f_161++;
			func_154(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_69()
{
	return Global_1893587 & 2 != 0;
}

bool func_70(int iParam0)
{
	if (!func_41(iParam0, 0))
	{
		return false;
	}
	if (func_42(iParam0) == joaat("EMOTE"))
	{
		return true;
	}
	return false;
}

int func_71(int iParam0)
{
	return func_155(iParam0);
}

bool func_72(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (func_42(iParam0) == joaat("CLOTHING"))
	{
		if (func_74(iParam0) == -999503751)
		{
		}
	}
	return true;
}

var func_73(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_74(int iParam0)
{
	struct<2> Var0;

	if (!func_41(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_75()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::_GET_MOUNT_OF_PLAYER(iVar0);
	iVar2 = PLAYER::GET_PLAYER_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(iVar2) || PED::IS_PED_SWIMMING(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(iVar2))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar1, false) != iVar2)
		{
			return 0;
		}
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
	vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vVar6, true) < 2f && PED::_0xD543D3A8FDE4F185(iVar2, iVar1))
	{
		return 1;
	}
	return 0;
}

bool func_76(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar1 = PLAYER::_GET_MOUNT_OF_PLAYER(iParam0);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar1, false) == iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_156(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_157(Var0);
}

int func_78(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_158())
	{
		return 0;
	}
	if (!func_159(iParam0))
	{
		return 0;
	}
	if (func_160(iParam0))
	{
		iVar0 = 0;
		if ((func_74(iParam0) == 81053684 || func_62(iParam0, 160827531)) && !func_62(iParam0, -1303648999))
		{
			if (bParam1)
			{
				func_161(&iVar0, 2);
			}
		}
		return func_162(iParam0, iVar0);
	}
	return 0;
}

void func_79(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 10;
	iVar1 = Global_1952637.f_1675.f_1[iVar0 /*3*/];
	if (iVar1 == iParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "PlayUnequipHatFidget", true, 15);
		func_80(Global_34, joaat("CLOTHING_ITEM_HAT_NONE"), 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
		func_81(iParam0, 0, 0);
		return;
	}
	PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "PlayEquipHatFidget", true, 15);
	func_80(Global_34, iParam0, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
	if (func_163(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_34, false, true, false, true);
		func_164();
		func_156(128);
		return;
	}
	if (iVar1 == Global_1952637.f_83[iVar0 /*12*/])
	{
		func_81(iParam0, 1, 0);
		return;
	}
	if (func_165(-2061583405, 0))
	{
		if (func_166(iVar1))
		{
			func_81(iVar1, 0, 0);
		}
		else
		{
			func_167(iVar1, 1, 1, 0, 0, 0);
		}
		func_81(iParam0, 1, 0);
		return;
	}
	if (func_166(iVar1))
	{
		func_81(iVar1, 0, 0);
		func_81(iParam0, 1, 0);
	}
	else if (func_166(iParam0))
	{
		if (iParam0 != func_168(0))
		{
			func_169(iParam0, iVar1, 0, 0, 0);
			func_81(iParam0, 0, 0);
			func_81(iVar1, 0, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_34, false, true, false, true);
			func_156(128);
			func_81(iParam0, 1, 0);
		}
	}
}

int func_80(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_121(iParam1, 1, 0) };
		iParam3 = func_170(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_172(iParam1, iParam2, func_171(iParam3, 1), bParam4, 1, 0, 1))
	{
		return 0;
	}
	func_173(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_174(iParam1, 0))
		{
			func_175(Global_1952637.f_1675.f_1[func_171(iParam3, 1) /*3*/], 0, 0);
		}
		else
		{
			func_175(iParam1, 1, 0);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && iParam1 != Global_1952637.f_83[func_171(iParam3, 1) /*12*/])
			{
				func_77(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_163(32768))
			{
				func_164();
				func_77(21, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_176(iParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_177(&iVar5, 4);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_77(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_77(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_81(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_121(iParam0, bParam2, 0) };
	Var5 = { func_122(iParam0, Var0, Var0.f_4, bParam2) };
	if (func_178(iParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_112(bParam2), &Var5, iParam1);
}

int func_82(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	struct<4> Var8;

	iVar2 = 0;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar7))
	{
		return 0;
	}
	Var8 = { func_122(joaat("WARDROBE"), func_179(bParam1), 1034665895, bParam1) };
	iVar0 = 0;
	while (iVar0 < Global_1952637.f_3334.f_26)
	{
		iVar1 = Global_1952637.f_3334[iVar0];
		if (func_74(iVar1) == iParam0 || (iParam0 == 81053684 && func_62(iVar1, 160827531)))
		{
			Var3 = { func_122(iVar1, Var8, iVar7, bParam1) };
			if (INVENTORY::_0x70E3A884ED000A01(func_112(bParam1), &Var3))
			{
				iVar2 = iVar1;
				INVENTORY::_0x65A5F70F4A292EBE(func_112(bParam1), &Var3, 0);
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_83(bool bParam0)
{
	if (bParam0)
	{
		Global_1940311 = 1;
	}
	else
	{
		Global_1940311 = 2;
	}
}

int func_84(int iParam0, int iParam1)
{
	int iVar0;

	iParam0 = func_180(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_86(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_34) || PED::IS_PED_SWIMMING(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar0, false) == Global_34)
		{
			if (iParam1 == joaat("KIT_WARDROBE"))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_181(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_85(int iParam0)
{
	int iVar0;

	iParam0 = func_180(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_86(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_182())
		{
			return true;
		}
		return false;
	}
	if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

int func_86(int iParam0)
{
	iParam0 = func_180(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903136[iParam0 /*43*/];
}

bool func_87(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return false;
}

void func_88()
{
	int iVar0;

	if (func_183())
	{
		return;
	}
	if (func_184(8))
	{
		switch (Global_1051439.f_3629)
		{
			case 0:
				if (func_184(16))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(Global_34))
					{
						PED::_0xF1C03A5352243A30(Global_34);
						TASK::CLEAR_PED_TASKS(Global_34, true, false);
					}
					func_185(16);
				}
				func_186(1);
				break;
			case 1:
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_34))
				{
				}
				else
				{
					func_185(8);
					func_186(0);
				}
		}
		return;
	}
	if (func_187())
	{
		TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("KIT_HANDHELD_CATALOG"), joaat("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1082130432 /* Float: -1f */);
		Global_1915715.f_22504.f_1 = 1;
		Global_1051439.f_43 = 0;
		func_188();
	}
	else
	{
		iVar0 = func_190(func_189());
		if (iVar0 != -1)
		{
			func_73(func_129(), 10000, 0, 0, 0, 1);
			Global_1051439.f_3628 = 0;
			Global_1051439.f_3629 = 0;
			func_191(0);
			func_130(-1);
		}
	}
}

bool func_89(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_192() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return false;
	}
	if (!func_193(16))
	{
		return false;
	}
	if (func_194())
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
		{
			return false;
		}
	}
	if (!func_195())
	{
		return false;
	}
	if (func_196(16))
	{
		return false;
	}
	iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!GANG::_0xD6F6ACF4392187FB(iVar0) || !GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (iParam0 == 1 && func_197(Global_1137047.f_8, 1))
	{
		return false;
	}
	if (func_92())
	{
		return false;
	}
	return true;
}

int func_90(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_198();
	}
	if (!func_199(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_200(iParam0);
	Global_1896738.f_386 = 1;
	Global_1896738.f_387 = bParam1;
	return 1;
}

bool func_91(int iParam0)
{
	return func_197(Global_1137047.f_8, iParam0);
}

bool func_92()
{
	int iVar0;

	iVar0 = func_201(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (Global_1131196[iVar0 /*27*/].f_18.f_1 != 0 && func_197(Global_1131196[iVar0 /*27*/].f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_93()
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_47(0) };
	if (func_48(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_202(PLAYER::PLAYER_ID(), 0);
			if (iVar2 != -1)
			{
				if (func_203(iVar2) == joaat("POSSE_VERSUS"))
				{
					func_73("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_73("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_73("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_73("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_94(int iParam0)
{
	struct<19> Var0;

	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_205(Var0, func_204(0, 8), 0, 0);
}

int func_95(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

void func_96(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_206(iParam0, &iVar0, &iVar1);
	if (!func_207(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_208(iVar0, iVar1);
}

void func_97()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	func_209(1, iVar0);
}

bool func_98(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_99(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_210() - fParam1);
	func_211(uParam0, 1);
	func_212(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_100(var uParam0, float fParam1)
{
	if (!func_32(uParam0))
	{
		return false;
	}
	if (func_213(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_101(int iParam0)
{
	Global_1903136.f_302 = (Global_1903136.f_302 || iParam0);
}

int func_102(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_41(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_42(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_62(iParam0, 1399091007))
	{
		func_214(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_103(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_112(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_104(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_105(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_106(int iParam0)
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

int func_107(int iParam0)
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

int func_108(var uParam0, int iParam1)
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

int func_109(int iParam0)
{
	int iVar0;

	iVar0 = func_74(iParam0);
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

int func_110(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_215(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_217(&Var0, func_216(0));
	}
	if (!func_218(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_106(iVar14);
	return uVar15;
}

int func_111(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_112(bool bParam0)
{
	if (func_14() == -1)
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

struct<4> func_113(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_121(iParam0, bParam1, 0) };
	return func_122(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_114(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1071686.f_636.f_601;
		case 3:
			return Global_1071686.f_636.f_2103;
		case 4:
			return Global_1071686.f_636.f_12605;
		case 5:
			return Global_1071686.f_636.f_12907;
		case 6:
			return Global_1071686.f_636.f_15909;
		case 7:
			return Global_1071686.f_636.f_16511;
		case 8:
			return Global_1071686.f_636.f_18913;
		default:
			break;
	}
	return -1;
}

void func_116(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_50(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_117(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_118(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

void func_119(int iParam0)
{
	if (!func_219(iParam0))
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

int func_120(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<16> Var65;
	struct<17> Var81;

	if (func_220(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_111(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_221(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_222(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_223(iParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_224(joaat("USE"), &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = bParam3;
			Var81.f_7 = iParam2;
			func_225(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_112(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_121(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_179(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_42(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_122(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_216(bParam1) };
			if (bParam2 && func_226(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_227(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_227(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_228(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_229(bParam1) };
			switch (func_74(iParam0))
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
			if (func_230(iParam0, -1823706425))
			{
				Var0 = { func_122(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_230(iParam0, -1483207246))
			{
				Var0 = { func_122(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_122(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_230(iParam0, -1653629781))
			{
				Var0 = { func_122(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_231(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_230(iParam0, -1653629781))
			{
				Var0 = { func_122(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_122(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_41(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_112(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_123(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_220(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_231(*uParam1, &Var0, bParam6, 0, -1))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_221(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_14() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_224(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_225(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_112(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_124(int iParam0)
{
	if (func_62(iParam0, 1573112293))
	{
		return func_232(iParam0);
	}
	if (func_233(iParam0))
	{
		return func_234();
	}
	switch (func_74(iParam0))
	{
		case -77448735:
			if (func_235(iParam0))
			{
				return func_232(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_232(iParam0);
		case -1520388130:
		case 1802292908:
			return func_236();
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_237();
		case -525676072:
			return func_237();
		case 1779021115:
			if (iParam0 == joaat("WEAPON_KIT_CAMERA") || iParam0 == joaat("WEAPON_KIT_CAMERA_ADVANCED"))
			{
				return func_238();
			}
			return func_239();
		case -1823706425:
			if (iParam0 == joaat("KIT_CAMP_WILDERNESS"))
			{
				return func_240();
			}
			else
			{
				return func_241();
			}
			break;
		case -854348463:
			return func_242();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_243();
		default:
			if (func_41(iParam0, 0))
			{
				if (func_62(iParam0, 1919582297))
				{
					return func_244();
				}
				else if (iParam0 == joaat("UPGRADE_UPG_MORTAR_PESTLE") || iParam0 == -1448210800)
				{
					return func_245();
				}
				else if (iParam0 == joaat("KIT_HORSE_BRUSH"))
				{
					return func_246();
				}
				else if (func_62(iParam0, 1147021565))
				{
					return func_247();
				}
			}
			return func_248();
	}
	return func_248();
}

bool func_125(bool bParam0, int iParam1)
{
	int iVar0;

	if ((Global_1940258.f_6 || PED::IS_PED_DEAD_OR_DYING(Global_34, true)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return false;
	}
	if (func_14() == 0)
	{
		if (func_249(131072))
		{
			return false;
		}
	}
	if (!func_250(iParam1, 1))
	{
		if (func_249(1024))
		{
			return false;
		}
	}
	if (Global_1940258.f_16)
	{
		return false;
	}
	if (!func_250(iParam1, 2) && func_249(32))
	{
		return false;
	}
	if (!func_250(iParam1, 4))
	{
		if (func_249(4096))
		{
			return false;
		}
	}
	if (!func_250(iParam1, 8) && func_249(512))
	{
		return false;
	}
	if (!func_250(iParam1, 512) && !func_251(bParam0))
	{
		return false;
	}
	if (!func_250(iParam1, 262144) && !func_252(bParam0, func_250(iParam1, 524288)))
	{
		return false;
	}
	if (!func_250(iParam1, 64) && !func_253(bParam0, iParam1, 1))
	{
		return false;
	}
	if (!func_250(iParam1, 128))
	{
		if (func_254(Global_34, 1868526510) || PED::IS_PED_ON_MOUNT(Global_34))
		{
			if (bParam0)
			{
				func_73("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_250(iParam1, 16))
	{
		if (func_255(Global_34))
		{
			iVar0 = PED::GET_MOUNT(Global_34);
			if (!func_256(iVar0, 1))
			{
				if (bParam0)
				{
					func_73("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return false;
			}
		}
	}
	if (!func_250(iParam1, 256) && func_249(8192))
	{
		return false;
	}
	if (!func_250(iParam1, 1024) && func_249(65536))
	{
		if (bParam0)
		{
			func_73("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_250(iParam1, 2048))
	{
		if (func_249(32768))
		{
			return false;
		}
	}
	if (!func_250(iParam1, 4096))
	{
		if (func_249(16384))
		{
			return false;
		}
	}
	if (!func_250(iParam1, 8192))
	{
		if (!func_249(16))
		{
			return false;
		}
	}
	if (!func_250(iParam1, 67108864))
	{
		if (!func_249(268435456))
		{
			return false;
		}
	}
	if (!func_250(iParam1, 16384))
	{
		if (func_249(256))
		{
			return false;
		}
	}
	if (!func_250(iParam1, 32768))
	{
		if (func_26())
		{
			if (bParam0)
			{
				func_73("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_250(iParam1, 131072))
	{
		if (!func_249(524288))
		{
			return false;
		}
	}
	if (!func_250(iParam1, 65536))
	{
		if (!func_249(262144))
		{
			return false;
		}
	}
	if (!func_250(iParam1, 1048576))
	{
		if (!func_249(2097152))
		{
			return false;
		}
	}
	if (!func_250(iParam1, 2097152))
	{
		if (!func_249(8388608))
		{
			return false;
		}
	}
	if (!func_250(iParam1, 4194304))
	{
		if (!func_249(16777216))
		{
			return false;
		}
	}
	if (!func_250(iParam1, 8388608))
	{
		if (func_249(33554432))
		{
			return false;
		}
	}
	if (!func_250(iParam1, 16777216))
	{
		if (func_249(67108864))
		{
			return false;
		}
	}
	if (!func_250(iParam1, 33554432))
	{
		if (func_249(134217728))
		{
			return false;
		}
	}
	if (func_249(64))
	{
		return false;
	}
	else if (func_249(128))
	{
		return false;
	}
	else if (func_249(1048576))
	{
		return false;
	}
	else if (func_249(4))
	{
		return false;
	}
	if (!func_250(iParam1, 134217728))
	{
		if (func_257(256))
		{
			return false;
		}
	}
	return true;
}

bool func_126()
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return false;
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_34);
		iVar1 = iVar0;
		if (iVar1 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL") && iVar1 != joaat("WORLD_PLAYER_MP_STEW_POT_DONATION"))
		{
			return true;
		}
	}
	return false;
}

var func_127(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715.f_20638;
	}
	return (Global_1915715.f_20638 || Global_1915715.f_22504.f_1);
}

int func_128()
{
	return Global_1915715.f_22504.f_5;
}

char* func_129()
{
	int iVar0;
	struct<2> Var1;
	int iVar3;

	iVar0 = func_128();
	switch (iVar0)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 3:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 5:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 6:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 9:
			return "SHOPS_HANDHELD_FAIL_WAIT_FOR_FREEROAM";
		case 7:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 8:
			return "SHOPS_HANDHELD_FAIL_SHOPS_DISABLED_THIS_FRAME";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TURRET";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 16:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 17:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 18:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 19:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 20:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		case 21:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BRUSHING";
		case 22:
			return "SHOPS_HANDHELD_FAIL_IN_DEEP_WATER";
		case 23:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME";
		case 24:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ARCHERY";
		case 25:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CHALLENGE";
		case 26:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_DEAD_DROP";
		case 27:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_GOLDEN_SHOWDOWN";
		case 28:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_HOT_PROPERTY";
		case 29:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_CASTLE";
		case 30:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_RAILS";
		case 31:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WRECKAGE";
		case 32:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CONDOR_EGG";
		case 33:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ANIMAL_TAGGING";
		case 35:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_PROTECT_LEGENDARY_ANIMAL";
		case 34:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WILDLIFE_PHOTOGRAPHER";
		case 37:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV";
		case 39:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_BIGGEST_FISH";
		case 40:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_FLYING_BIRD";
		case 41:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HERBALIST";
		case 36:
			return "SHOPS_HANDHELD_FAIL_MISSION_FEUD";
		case 38:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HUNT_THE_POSSE_LEADER";
		case 42:
			return "SHOPS_HANDHELD_FAIL_PLAYER_MATCHMAKING";
		case 46:
			Var1 = -1;
			Var1.f_1 = -1;
			Var1 = { func_47(0) };
			if (!func_48(Var1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			iVar3 = func_258(&Var1, 1);
			if (iVar3 == -1)
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			if (!func_259(iVar3, 461218520, 1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			return func_261(func_260(iVar3, 461218520));
	}
	return "";
}

void func_130(int iParam0)
{
	Global_1915715.f_22504.f_5 = iParam0;
}

int func_131(int iParam0)
{
	return iParam0;
}

int func_132(int iParam0, int iParam1)
{
	if (!func_262(iParam0, 2))
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

int func_133(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_263(iVar0, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_134(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_264(iParam0))
	{
		return 1;
	}
	if (!func_265(iParam0))
	{
		return 5;
	}
	if (!bParam1 && Global_1211392.f_48[iParam0 /*21*/].f_17)
	{
		if (bParam2 || Global_1211392.f_1.f_20 != 0)
		{
			return 2;
		}
	}
	if (!bParam2 && !func_266(iParam0))
	{
		return 3;
	}
	if (func_267(iParam0) && !func_268())
	{
		return 4;
	}
	return 0;
}

bool func_135(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	switch (func_136(iParam0, -949239683))
	{
		case -1420737577:
			if (!bParam1)
			{
				iVar0 = 2129866661;
				if (bParam2)
				{
					iVar0 = 1607869040;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_INTRO");
				if (bParam2)
				{
					iVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_BASE");
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_INTRO");
				if (bParam2)
				{
					iVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE");
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
	}
	return false;
}

int func_136(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42 /*2*/].f_1 == iParam1)
			{
				return Var0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

bool func_137()
{
	return Global_1952637.f_1675.f_1[1 /*3*/].f_1 == joaat("POMADE");
}

bool func_138(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (func_269(*uParam0, joaat("HATS"), 0))
	{
		return true;
	}
	return false;
}

void func_139(int iParam0)
{
	int iVar0;

	iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
	switch (func_270())
	{
		case 0:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (func_62(iParam0, 1573112293))
		{
			func_272(func_271(iParam0), 1, 1);
		}
		func_273(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_274(iParam0);
		func_275(iParam0, 1, 0, 562618531);
	}
}

void func_140(int iParam0)
{
	int iVar0;

	iVar0 = 16939881;
	switch (func_270())
	{
		case 0:
			iVar0 = 16939881;
			break;
		case 1:
			iVar0 = -1165614444;
			break;
		case 3:
			iVar0 = 968591133;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_273(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_274(iParam0);
		func_275(iParam0, 1, 0, 562618531);
	}
}

void func_141(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -45077177;
	switch (func_270())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -2137817968;
			}
			else
			{
				iVar0 = -45077177;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = -1947358597;
			}
			else
			{
				iVar0 = 36807409;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = -750686877;
			}
			else
			{
				iVar0 = 1293288723;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_273(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_274(iParam0);
		func_275(iParam0, 1, 0, 562618531);
	}
}

void func_142(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1700817728;
	switch (func_270())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -447623645;
			}
			else
			{
				iVar0 = 1700817728;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = 1880532390;
			}
			else
			{
				iVar0 = -480771797;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = 468890170;
			}
			else
			{
				iVar0 = 764367205;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_273(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_274(iParam0);
		func_275(iParam0, 1, 0, 562618531);
	}
}

void func_143(int iParam0)
{
	int iVar0;

	iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
	switch (func_270())
	{
		case 0:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_273(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_274(iParam0);
		func_275(iParam0, 1, 0, 562618531);
	}
}

void func_144(int iParam0)
{
	int iVar0;

	iVar0 = 2105609037;
	switch (func_270())
	{
		case 0:
			iVar0 = 2105609037;
			break;
		case 3:
			iVar0 = -457187977;
			break;
		case 1:
			iVar0 = -1595716047;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_273(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_274(iParam0);
		func_275(iParam0, 1, 0, 562618531);
	}
}

void func_145(int iParam0)
{
	int iVar0;

	iVar0 = 1964324114;
	switch (func_270())
	{
		case 0:
			iVar0 = 1964324114;
			break;
		case 3:
			iVar0 = -654111932;
			break;
		case 1:
			iVar0 = 1826089606;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_273(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_274(iParam0);
		func_275(iParam0, 1, 0, 562618531);
	}
}

void func_146(int iParam0)
{
	int iVar0;

	iVar0 = -1530144981;
	switch (func_270())
	{
		case 0:
			iVar0 = -1530144981;
			break;
		case 3:
			iVar0 = -389189374;
			break;
		case 1:
			iVar0 = -312546963;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_273(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_274(iParam0);
		func_275(iParam0, 1, 0, 562618531);
	}
}

void func_147(int iParam0)
{
	int iVar0;

	iVar0 = -1074475556;
	switch (func_270())
	{
		case 0:
			iVar0 = -1074475556;
			break;
		case 3:
			iVar0 = 392506445;
			break;
		case 1:
			iVar0 = -1846586910;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_273(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_274(iParam0);
		func_275(iParam0, 1, 0, 562618531);
	}
}

void func_148(int iParam0)
{
	int iVar0;

	iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
	switch (func_270())
	{
		case 0:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_273(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_274(iParam0);
		func_275(iParam0, 1, 0, 562618531);
	}
}

void func_149(int iParam0)
{
	int iVar0;

	iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
	switch (func_270())
	{
		case 0:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_273(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_274(iParam0);
		func_275(iParam0, 1, 0, 562618531);
	}
}

void func_150(int iParam0)
{
	int iVar0;

	iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
	switch (func_270())
	{
		case 0:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_273(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_274(iParam0);
		func_275(iParam0, 1, 0, 562618531);
	}
}

void func_151(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
	switch (func_270())
	{
		case 0:
			iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_TONIC_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_TONIC_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_273(Global_34, iParam0, iVar0, 1, 0) && bParam1)
		{
			func_274(iParam0);
			func_275(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_274(iParam0);
		func_275(iParam0, 1, 0, 562618531);
	}
}

void func_152(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
	switch (func_270())
	{
		case 0:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_273(Global_34, iParam0, iVar0, 1, bParam1) && bParam1)
		{
			func_274(iParam0);
			func_275(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_274(iParam0);
		func_275(iParam0, 1, 0, 562618531);
	}
}

bool func_153(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_154(int iParam0)
{
	if (func_153(iParam0, 1))
	{
		func_276(1);
	}
}

int func_155(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
	return -1;
}

void func_156(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

void func_157(struct<4> Param0)
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
		case 23:
			if (Global_1952637.f_918 >= 25)
			{
				return;
			}
			if (func_277(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637.f_918)
				{
					iVar1 = ((Global_1952637.f_923 + iVar0) % 25);
					if ((Global_1952637.f_736[iVar1 /*4*/] == Param0 && Global_1952637.f_736[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1952637.f_736[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_278(Param0);
			Global_1952637.f_736[Global_1952637.f_924 /*4*/] = { Param0 };
			Global_1952637.f_918++;
			Global_1952637.f_924 = (Global_1952637.f_924 + 1 % 25);
			func_156(8);
			break;
		case 24:
		case 25:
			if (Global_1952637.f_919 >= 25)
			{
				return;
			}
			if (func_277(Param0))
			{
				return;
			}
			func_278(Param0);
			Global_1952637.f_635[Global_1952637.f_919 /*4*/] = { Param0 };
			Global_1952637.f_919++;
			func_156(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1952637.f_920 >= 20)
			{
				return;
			}
			if (func_277(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637.f_920)
				{
					iVar1 = ((Global_1952637.f_921 + iVar0) % 20);
					if ((Global_1952637.f_837[iVar1 /*4*/] == Param0 && Global_1952637.f_837[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1952637.f_837[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_278(Param0);
			Global_1952637.f_837[Global_1952637.f_922 /*4*/] = { Param0 };
			Global_1952637.f_920++;
			Global_1952637.f_922 = (Global_1952637.f_922 + 1 % 20);
			func_156(8);
			break;
			break;
	}
}

bool func_158()
{
	return Global_1952637.f_3484;
}

bool func_159(int iParam0)
{
	if (func_279())
	{
		return false;
	}
	if (!func_41(iParam0, 0))
	{
		return false;
	}
	if (!func_15(iParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_160(int iParam0)
{
	return func_280(iParam0);
}

void func_161(int iParam0, int iParam1)
{
	func_281(iParam0, iParam1);
}

int func_162(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_282(iParam0);
	if (func_74(iParam0) == -525676072 || func_62(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_283(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_284();
			}
			else
			{
				iVar0 = func_285();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_286();
		}
		else
		{
			iVar0 = func_287();
		}
	}
	else if (func_288(&iVar2))
	{
		if (func_62(iVar2, -1303648999) || func_74(iVar2) == -525676072)
		{
			iVar0 = func_284();
		}
		else
		{
			iVar0 = func_285();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_286();
	}
	else
	{
		iVar0 = func_287();
	}
	if (iVar0 != 0)
	{
		Global_1952637.f_3483 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_34, iParam0, iVar0, 1, iParam1, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

bool func_163(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

void func_164()
{
	Global_1952637.f_3467 = 0;
	Global_1952637.f_3467.f_1 = 0;
	Global_1952637.f_3467.f_8 = 0;
	Global_1952637.f_3467.f_2 = 0;
	Global_1952637.f_3467.f_3[0] = 0;
	Global_1952637.f_3467.f_3[1] = 0;
	Global_1952637.f_3467.f_3[2] = 0;
	Global_1952637.f_3467.f_3[3] = 0;
	Global_1952637.f_3467.f_9 = 0;
	Global_1952637.f_3467.f_10 = 0;
	Global_1952637.f_3467.f_11 = 0;
	if (Global_1952637.f_3467.f_12)
	{
		PED::_0x13E7320C762F0477(Global_1952637.f_3467.f_13);
	}
	Global_1952637.f_3467.f_12 = 0;
	func_289(32768);
	func_290(1108822547, 8, 6);
}

bool func_165(int iParam0, bool bParam1)
{
	return func_291(iParam0, 0) < func_292(iParam0, bParam1);
}

bool func_166(int iParam0)
{
	var uVar0;

	return func_293(iParam0, &uVar0);
}

void func_167(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_74(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			if (func_62(iParam0, 1584357097))
			{
				return;
			}
			bVar1 = func_294(iParam0, &(Global_1952637.f_3334.f_28), Global_1952637.f_3334.f_33.f_1, bParam1, bParam5);
			break;
		case 81053684:
			bVar1 = func_294(iParam0, &(Global_1952637.f_3334.f_30), 1, bParam1, bParam5);
			break;
		case -999503751:
			bVar1 = func_294(iParam0, &(Global_1952637.f_3334.f_27), Global_1952637.f_3334.f_33, bParam1, bParam5);
			break;
		case -525676072:
			bVar1 = func_294(iParam0, &(Global_1952637.f_3334.f_29), Global_1952637.f_3334.f_33.f_2, bParam1, bParam5);
			break;
		case -1719060085:
			bVar1 = func_294(iParam0, &(Global_1952637.f_3334.f_31), 1, bParam1, bParam5);
			break;
		case 119907797:
			bVar1 = func_294(iParam0, &(Global_1952637.f_3334.f_32), 1, bParam1, bParam5);
			break;
		case 1388798186:
			bVar1 = func_294(iParam0, &(Global_1952637.f_3334.f_33.f_7), 1, bParam1, bParam5);
			break;
		default:
			if (func_62(iParam0, 160827531))
			{
				bVar1 = func_294(iParam0, &(Global_1952637.f_3334.f_30), 1, bParam1, bParam5);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	func_295();
	if (func_296(iVar0) || (iVar0 != -999503751 && func_62(iParam0, -166674229)))
	{
		INVENTORY::_0x766315A564594401(func_112(bParam5), iParam0, 0);
	}
	func_81(iParam0, iParam3, bParam5);
	if (bParam4)
	{
		func_297(1, iParam0);
	}
	if (bParam2)
	{
		func_298(0, 0);
	}
}

int func_168(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_299();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

void func_169(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (func_300(iParam0, iParam1))
	{
		func_301(iParam0, iParam1, 1, bParam2, iParam3, bParam4);
		return;
	}
}

int func_170(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637.f_83[iVar0 /*12*/].f_9 == iParam0)
		{
			return func_302(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_171(int iParam0, int iParam1)
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
		case 735520874:
			return 5;
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

bool func_172(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_303();
	if (iParam2 == 39)
	{
		Var0 = { func_121(iParam0, 1, 0) };
		iParam2 = func_171(func_170(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_163(32768) && iParam2 == 10)
	{
		func_304(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_174(iParam0, 1))
	{
		func_305(&(Global_1952637.f_1556), &iParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_306(iParam2);
	}
	func_307(iParam2, iVar5);
	func_308(&(Global_1952637.f_1556.f_1[iParam2 /*3*/]), 4, 6);
	func_308(&(Global_1952637.f_1675.f_1[iParam2 /*3*/]), 4, 6);
	func_309(&(Global_1952637.f_1556), iParam0, iParam2, 1, iVar5);
	if (iParam1 == 0)
	{
		iParam1 = Global_1952637.f_1556.f_1[iParam2 /*3*/].f_1;
	}
	Global_1952637.f_1556.f_1[iParam2 /*3*/] = iParam0;
	Global_1952637.f_1556.f_1[iParam2 /*3*/].f_1 = func_310(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1952637.f_2897)
		{
			if (Global_1952637.f_2897.f_2[iVar6 /*2*/] >= 0 && Global_1952637.f_2897.f_2[iVar6 /*2*/] < 39)
			{
				Global_1952637.f_2764[Global_1952637.f_2897.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1952637.f_2764[Global_1952637.f_2897.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_290(func_302(Global_1952637.f_2897.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_173(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_311(&(Global_1952637.f_2897), bParam0, bParam1, bParam2, bParam3);
}

bool func_174(int iParam0, bool bParam1)
{
	if (!func_41(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == joaat("CLOTHING_ITEM_HAIR_NONE") || iParam0 == joaat("CLOTHING_ITEM_BEARD_NONE")))
	{
		return false;
	}
	if (func_62(iParam0, 265372629))
	{
		return true;
	}
	return false;
}

bool func_175(int iParam0, int iParam1, bool bParam2)
{
	struct<4> Var0;
	struct<5> Var4;
	int iVar9;

	Var4 = { func_121(iParam0, bParam2, 0) };
	if (func_174(iParam0, 0))
	{
		iVar9 = func_312(Var4, Var4.f_4, bParam2, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_121(iVar9, bParam2, 0) };
			Var0 = { func_122(iVar9, Var4, Var4.f_4, bParam2) };
			return func_313(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_122(iParam0, Var4, Var4.f_4, bParam2) };
	return func_313(Var0, iParam1, bParam2);
}

int func_176(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_171(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (Global_1952637.f_1675.f_1[iVar1 /*3*/] == Global_1952637.f_83[iVar1 /*12*/] || Global_1952637.f_1556.f_1[iVar1 /*3*/] == Global_1952637.f_83[iVar1 /*12*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_177(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_178(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_41(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_111(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_122(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_112(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_112(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

struct<4> func_179(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_112(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_122(joaat("CHARACTER"), func_314(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_122(joaat("CHARACTER"), func_314(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_122(joaat("CHARACTER"), func_314(), -1591664384, bParam0);
}

int func_180(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_181(int iParam0)
{
	int iVar0;

	iParam0 = func_180(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_86(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	if (func_315(iVar0))
	{
		return true;
	}
	return false;
}

int func_182()
{
	return Global_39.f_281.f_3222;
}

bool func_183()
{
	return Global_1915715.f_22504.f_1;
}

bool func_184(int iParam0)
{
	return (Global_1051439.f_3628 && iParam0) != 0;
}

void func_185(int iParam0)
{
	Global_1051439.f_3628 = (Global_1051439.f_3628 - (Global_1051439.f_3628 && iParam0));
}

void func_186(int iParam0)
{
	Global_1051439.f_3629 = iParam0;
}

bool func_187()
{
	return Global_1915715.f_22504;
}

void func_188()
{
	PAD::_SET_CONTROL_CONTEXT(4, joaat("HANDHELDCATALOGUE"));
}

bool func_189()
{
	return func_184(4);
}

int func_190(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_316())
	{
		return 3;
	}
	if ((SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("PAUSE_MENU")) > 0 && Global_1051439.f_3630 == 0) && !bParam0)
	{
		return 45;
	}
	if (Global_1915715.f_20638)
	{
		return 10;
	}
	if (Global_1051439.f_3718 != 0)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		return 12;
	}
	if ((func_317(1106247680 /* Float: 30f */, 0) || PED::_IS_PED_HOGTIED(Global_34)) || PED::_IS_PED_HOGTYING(Global_34))
	{
		return 13;
	}
	if (PED::_0x1D46B417F926D34D(Global_34) || PED::IS_PED_IN_ANY_TRAIN(Global_34))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_USING(Global_34);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			switch (iVar2)
			{
				case joaat("BREACH_CANNON"):
				case joaat("GATLING_GUN"):
				case joaat("GATLINGMAXIM02"):
				case joaat("HOTCHKISS_CANNON"):
					return 14;
			}
		}
		return 11;
	}
	if (TASK::_0x038B1F1674F0E242(Global_34) && !Global_1915715.f_22504.f_1)
	{
		return 16;
	}
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		return 17;
	}
	if (TASK::_0xD04241BBF6D03A5E(PLAYER::PLAYER_PED_ID()) != 0)
	{
		return 18;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_34))
	{
		iVar3 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_34);
		if ((iVar3 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL") && iVar3 != joaat("PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE")) && iVar3 != joaat("PROP_PLAYER_SEAT_CHAIR_DYNAMIC"))
		{
			return 19;
		}
	}
	if (func_318(255))
	{
		return 3;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 44;
	}
	if ((Global_1108365.f_935.f_28 != -1 && Global_1108365.f_935.f_28 != 6) && Global_1108365.f_935.f_28 != 8)
	{
		if (func_319(Global_1108365.f_935.f_28))
		{
			return 36;
		}
		else
		{
			return 37;
		}
	}
	if (PED::_0x2942457417A5FD24(Global_34) >= 1f)
	{
		return 22;
	}
	if (Global_1572887.f_106.f_75 >= 11 && Global_1572887.f_106.f_75 < 15)
	{
		return 42;
	}
	if (((PED::IS_PED_FALLING(Global_34) || PED::IS_PED_CLIMBING(Global_34)) || PED::_IS_PED_SLIDING(Global_34)) || PED::IS_PED_SWIMMING(Global_34))
	{
		return 15;
	}
	if (PED::_0x7FC84E85D98F063D(Global_34))
	{
		return 21;
	}
	if (func_320())
	{
		return 43;
	}
	return -1;
}

void func_191(int iParam0)
{
	int iVar0;

	if (!func_189())
	{
		func_321(1);
	}
	Global_1051439.f_3630 = iParam0;
	iVar0 = func_190(1);
	if (iVar0 != -1)
	{
		func_130(iVar0);
		func_322(0);
	}
	else
	{
		func_322(1);
	}
}

bool func_192()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1071686.f_3;
}

bool func_193(int iParam0)
{
	return func_197(Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

bool func_194()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_195()
{
	return !func_193(2);
}

bool func_196(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

bool func_197(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_198()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

bool func_199(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_324(bParam2, func_323(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_200(int iParam0)
{
	Global_1896738.f_390 = iParam0;
}

int func_201(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

int func_202(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1196339.f_1[iVar1 /*26*/].f_1 != -1 && func_325(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (Global_1196898.f_78[iVar1 /*20*/] >= 2)
					{
						return Global_1196339.f_1[iVar1 /*26*/].f_1;
					}
				}
				else if (Global_1196898.f_78[iVar1 /*20*/] >= 5)
				{
					return Global_1196339.f_1[iVar1 /*26*/].f_1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_203(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1196898.f_1[iParam0 /*4*/];
}

var func_204(int iParam0, int iParam1)
{
	return func_326(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_205(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	struct<21> Var0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				func_327(&(Global_1071686.f_23044), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_206(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_207(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_328(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_329(iParam0))
	{
		return false;
	}
	if (func_330(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_331(iParam0, 1)) || func_332(32768))
	{
		if (!func_331(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_333())
	{
		return false;
	}
	return true;
}

void func_208(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

void func_209(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	Global_1138048[iVar0 /*8*/].f_7 = (Global_1138048[iVar0 /*8*/].f_7 || iParam0);
}

float func_210()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_211(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_212(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_213(var uParam0)
{
	if (!func_32(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_334(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_210() - uParam0->f_1);
}

void func_214(int iParam0, var uParam1, var uParam2)
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

struct<14> func_215(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_216(bool bParam0)
{
	int iVar0;

	iVar0 = func_112(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_122(923904168, func_179(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_122(923904168, func_179(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_122(923904168, func_179(bParam0), -740156546, 0);
}

void func_217(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_218(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_112(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_219(int iParam0)
{
	return func_50(iParam0, 2);
}

bool func_220(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_221(bool bParam0)
{
	if (func_14() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_112(bParam0));
}

bool func_222(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_111(iParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_335(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_223(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_122(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_224(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_336(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_338(func_337(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_339(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_225(int iParam0, struct<17> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 1 || Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 5)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

bool func_226(int iParam0, bool bParam1)
{
	if (func_74(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_340();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_227(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_178(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_228(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_341(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_229(bool bParam0)
{
	int iVar0;

	iVar0 = func_112(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_122(271701509, func_179(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_122(271701509, func_179(bParam0), 12999093, 0);
}

bool func_230(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_74(iParam0);
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
			if (func_342(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_231(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_343(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_232(int iParam0)
{
	if (func_41(iParam0, 0))
	{
		if (func_62(iParam0, -1242251796))
		{
			if (func_62(iParam0, 2060589226))
			{
				return func_344();
			}
			return func_345();
		}
		else if (func_62(iParam0, 1919582297))
		{
			return func_244();
		}
		else if (func_62(iParam0, 1647670816))
		{
			return func_346();
		}
		else if (func_62(iParam0, 1147021565))
		{
			return func_247();
		}
	}
	if (Global_1940144.f_12)
	{
		return func_345();
	}
	else
	{
		return func_247();
	}
	return func_247();
}

bool func_233(int iParam0)
{
	return (iParam0 == joaat("KIT_ROLE_NATURALIST_COMPENDIUM") || iParam0 == joaat("KIT_COLLECTORS_BAG"));
}

int func_234()
{
	return 234350720;
}

bool func_235(int iParam0)
{
	if ((((((((((func_62(iParam0, 1147021565) || func_62(iParam0, -136654233)) || func_62(iParam0, -524514947)) || func_62(iParam0, -1238310989)) || func_62(iParam0, 1765172170)) || func_62(iParam0, 1490540191)) || func_62(iParam0, 1573112293)) || func_62(iParam0, -1242251796)) || func_62(iParam0, 1919582297)) || func_62(iParam0, -2085281117)) || iParam0 == joaat("CONSUMABLE_OFFAL"))
	{
		return true;
	}
	return false;
}

int func_236()
{
	return 234086528;
}

int func_237()
{
	return 234339573;
}

int func_238()
{
	return 226211840;
}

int func_239()
{
	return 234596496;
}

int func_240()
{
	return 150191252;
}

int func_241()
{
	return 217554935;
}

int func_242()
{
	return 234596352;
}

int func_243()
{
	return 167247871;
}

int func_244()
{
	return 99859463;
}

int func_245()
{
	return 233516164;
}

int func_246()
{
	return 232407015;
}

int func_247()
{
	return 234339543;
}

int func_248()
{
	return 234348672;
}

bool func_249(int iParam0)
{
	return func_197(Global_1940144.f_7, iParam0);
}

bool func_250(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_251(bool bParam0)
{
	int iVar0;

	if (func_249(1))
	{
		if (bParam0)
		{
			func_73("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_249(2) && MISC::GET_GAME_TIMER() >= Global_17388)
	{
		if (bParam0)
		{
			iVar0 = func_347(Global_34);
			if (iVar0 != 0)
			{
				if (ENTITY::_0x9A100F1CF4546629(iVar0))
				{
					func_73("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return false;
				}
			}
			func_73("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_249(4194304))
	{
		return false;
	}
	return true;
}

bool func_252(bool bParam0, bool bParam1)
{
	struct<2> Var0;

	if (PED::_IS_PED_CARRYING(Global_34))
	{
		PED::_0x6B67320E0D57856A(Global_34, &Var0, 2, 0);
		if (bParam1)
		{
			switch (Var0.f_1)
			{
				case 4:
					return true;
				default:
					break;
			}
		}
		if (bParam0)
		{
			func_73("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_253(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (PED::_0x1D46B417F926D34D(Global_34))
	{
		return false;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_34, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
		{
			return false;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_34);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case joaat("ROWBOAT"):
			case joaat("HANDCART"):
				if (bParam0)
				{
					func_73("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return false;
			case joaat("BREACH_CANNON"):
			case joaat("GATLING_GUN"):
			case joaat("GATLINGMAXIM02"):
			case joaat("HOTCHKISS_CANNON"):
				if (bParam0)
				{
					func_73("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return false;
		}
		if (!func_250(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_34))
		{
			if (bParam2 || VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iVar0) == Global_34)
			{
				return false;
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_34))
	{
		return false;
	}
	return true;
}

bool func_254(int iParam0, int iParam1)
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

bool func_255(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return false;
}

bool func_256(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
		{
			return false;
		}
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	fVar1 = PED::_0xCA95924C893A0C91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return true;
	}
	return false;
}

bool func_257(int iParam0)
{
	return (Global_1958000 && iParam0) != 0;
}

int func_258(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_48(*iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	iVar5 = func_348(*iParam0);
	switch (*iParam0)
	{
		case 4:
			iVar2 = iVar5;
			iVar1 = func_349(iVar2);
			if (iVar1 == -1)
			{
			}
			else
			{
				iVar0 = func_350(iVar1);
			}
			break;
		case 3:
			iVar3 = func_351(iVar5);
			iVar4 = func_352(iVar3);
			if (iVar4 == -1)
			{
			}
			else
			{
				iVar0 = func_353(iVar4);
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_259(int iParam0, int iParam1, bool bParam2)
{
	return !MISC::_IS_STRING_SPACE(func_261(func_354(iParam0, iParam1, bParam2)));
}

struct<8> func_260(int iParam0, int iParam1)
{
	return func_354(iParam0, iParam1, 1);
}

char* func_261(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_262(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_263(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_264(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

bool func_265(int iParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (Global_17411.f_2966 == 1)
	{
		if (iParam0 == -1)
		{
			return false;
		}
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_17411.f_2966.f_1[iVar1 /*5*/].f_4 == 0)
			{
			}
			else if (func_355(Global_17411.f_2966.f_1[iVar1 /*5*/].f_1))
			{
			}
			else
			{
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_355(Global_1211392.f_48[iParam0 /*21*/][iVar2 /*4*/].f_1))
					{
					}
					else
					{
						fVar0 = func_356(Global_17411.f_2966.f_1[iVar1 /*5*/].f_1, Global_1211392.f_48[iParam0 /*21*/][iVar2 /*4*/].f_1);
						if (fVar0 < 300f)
						{
							return false;
						}
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	if (func_357(4))
	{
		return false;
	}
	if (func_268())
	{
		return true;
	}
	if (func_358())
	{
		return false;
	}
	if (func_359(1, 255))
	{
		return false;
	}
	if (func_48(func_360()) && Global_1211392.f_1.f_20 != 3)
	{
		return false;
	}
	return true;
}

bool func_266(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && func_15(Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0], 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_267(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && func_361(Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_268()
{
	return func_362(func_47(0));
}

bool func_269(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_IS_METAPED_USING_COMPONENT(iParam0, iParam1);
}

int func_270()
{
	int iVar0;
	int iVar1;

	if (PED::_IS_PED_CARRYING(Global_34))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("WEAPON_UNARMED"))
	{
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_363(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_34, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_34, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_363(iVar0)) || WEAPON::_IS_WEAPON_LASSO(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_271(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HERB_GINSENG"):
			return 2;
		case joaat("CONSUMABLE_HERB_BAY_BOLETE"):
			return 4;
		case joaat("CONSUMABLE_HERB_BLACK_BERRY"):
			return 5;
		case joaat("CONSUMABLE_HERB_CURRANT"):
			return 6;
		case joaat("CONSUMABLE_HERB_BURDOCK_ROOT"):
			return 7;
		case joaat("CONSUMABLE_HERB_CHANTERELLES"):
			return 8;
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
			return 11;
		case joaat("CONSUMABLE_HERB_CREEPING_THYME"):
			return 12;
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
			return 15;
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
			return 16;
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"):
			return 21;
		case joaat("CONSUMABLE_HERB_MILKWEED"):
			return 24;
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
			return 27;
		case joaat("CONSUMABLE_HERB_OREGANO"):
			return 28;
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
			return 29;
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			return 30;
		case joaat("CONSUMABLE_HERB_RAMS_HEAD"):
			return 32;
		case joaat("CONSUMABLE_HERB_RED_RASPBERRY"):
			return 34;
		case joaat("CONSUMABLE_HERB_SAGE"):
			return 35;
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			return 38;
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
			return 39;
		case joaat("CONSUMABLE_HERB_WILD_CARROTS"):
			return 49;
		case joaat("CONSUMABLE_HERB_WILD_FEVERFEW"):
			return 50;
		case joaat("CONSUMABLE_HERB_WILD_MINT"):
			return 51;
		case joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY"):
			return 52;
		case joaat("CONSUMABLE_HERB_YARROW"):
			return 53;
		case joaat("PROVISION_WLDFLWR_AGARITA"):
			return 40;
		case joaat("PROVISION_WLDFLWR_TEXAS_BLUE_BONNET"):
			return 41;
		case joaat("PROVISION_WLDFLWR_BITTERWEED"):
			return 42;
		case joaat("PROVISION_WLDFLWR_BLOOD_FLOWER"):
			return 43;
		case joaat("PROVISION_WLDFLWR_CARDINAL_FLOWER"):
			return 44;
		case joaat("PROVISION_WLDFLWR_CHOCOLATE_DAISY"):
			return 45;
		case joaat("PROVISION_WLDFLWR_CREEK_PLUM"):
			return 46;
		case joaat("PROVISION_WLDFLWR_WILD_RHUBARB"):
			return 47;
		case joaat("PROVISION_WLDFLWR_WISTERIA"):
			return 48;
	}
	return 0;
}

void func_272(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_364(iParam0);
	iVar1 = func_271(iVar0);
	if (iVar1 != iParam0)
	{
		func_365(iVar1, 4);
	}
	if (!func_366(iParam0))
	{
		return;
	}
	if (func_367(iParam0))
	{
		return;
	}
	func_365(iParam0, 4);
	func_368(iParam0, bParam1);
	if (!func_369(iParam0))
	{
		func_370(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_16(0, 0, 1))
		{
			func_371(1, 6);
		}
	}
}

bool func_273(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (TASK::_0x2D19BC4DF626CBE7(iParam0, iParam1, iParam2, iParam3))
	{
		TASK::_TASK_ITEM_INTERACTION(iParam0, iParam1, iParam2, iParam3, 0, -1082130432 /* Float: -1f */);
		Global_1940144.f_26 = 1;
		return true;
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	return false;
}

void func_274(int iParam0)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;

	Var0.f_1 = 20;
	if ((func_62(iParam0, 1573112293) || func_62(iParam0, 672467738)) || func_62(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_42(iParam0) == joaat("CONSUMABLE"))
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0);
		ATTRIBUTE::_0xD962F8579D702DB5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar29], &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = func_372(0, Var22.f_2);
				func_373(Var22.f_2);
				bVar39 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = func_372(2, Var22.f_2);
				func_374(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = func_372(1, Var22.f_2);
				func_375(Var22.f_2);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_376(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_377(0, fVar33, 1, 1, bVar37);
				bVar39 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_376(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_377(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_376(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_377(1, fVar35, 1, 1, bVar37);
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_378(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_379(19, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_378(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_379(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_378(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_379(18, fVar36, 1, 1);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_378(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_379(0, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_378(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_379(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_378(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_379(1, fVar36, 1, 1);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_380(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar39 || func_62(iParam0, -537818634))
		{
			func_382(func_381(joaat("MEDICINE_ITEMS_USED")), 1);
		}
		if (func_62(iParam0, -1457797660))
		{
			func_382(func_381(joaat("PROVISION_ITEMS_USED")), 1);
		}
		if (bVar38)
		{
			func_382(func_381(joaat("DEADEYE_ITEMS_USED")), 1);
		}
		switch (iParam0)
		{
			case -1735850413: /* GXTEntry: "Pickled Egg" */
			case -241345764: /* GXTEntry: "Almonds" */
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_SALOONSNACK_00"), 1);
				break;
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

int func_275(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_41(iParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_383(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_102(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_34, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_384(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_15(iParam0, 1))
	{
		return 0;
	}
	Var5 = { func_385(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_45(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_45(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_275(iParam0, func_45(iParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_42(iParam0) == joaat("WEAPON"))
	{
		if (!func_386(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_58(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_121(iParam0, 0, 0) };
		if (func_221(0) && Var7.f_4 == 1084182731)
		{
			func_387(1, 0, 0);
		}
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1940144.f_21 = 0;
	}
	if (!func_221(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_384(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

void func_276(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

bool func_277(int iParam0)
{
	return Global_1952637.f_595[iParam0] > 0;
}

void func_278(int iParam0)
{
	Global_1952637.f_595[iParam0]++;
}

bool func_279()
{
	if (Global_1952637.f_3485)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1952637.f_3483)) < 1250)
	{
		return true;
	}
	if (func_388())
	{
		return true;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34))
	{
		return true;
	}
	return false;
}

int func_280(int iParam0)
{
	int iVar0;

	iVar0 = func_74(iParam0);
	if (((iVar0 == 81053684 || iVar0 == -525676072) || func_62(iParam0, 160827531)) || func_62(iParam0, -1303648999))
	{
		return 1;
	}
	return 0;
}

void func_281(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_282(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_288(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_283(int iParam0)
{
	if (-1829635046 == func_389(81053684))
	{
		if (func_288(iParam0))
		{
			return true;
		}
	}
	else if (func_390(-525676072, iParam0) || func_62(func_391(1742327865), -1303648999))
	{
		if (func_288(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_284()
{
	int iVar0;

	iVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (func_270())
	{
		case 0:
			iVar0 = joaat("MASK_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_285()
{
	int iVar0;

	iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (func_270())
	{
		case 0:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_286()
{
	int iVar0;

	iVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (func_270())
	{
		case 0:
			iVar0 = joaat("MASK_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_287()
{
	int iVar0;

	iVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (func_270())
	{
		case 0:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_288(int iParam0)
{
	if (func_390(81053684, iParam0))
	{
		return true;
	}
	if (func_390(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

void func_289(int iParam0)
{
	Global_1952637 = (Global_1952637 - (Global_1952637 && iParam0));
}

void func_290(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[func_171(iParam0, 1) /*12*/].f_11 = (Global_1952637.f_83[func_171(iParam0, 1) /*12*/].f_11 - (Global_1952637.f_83[func_171(iParam0, 1) /*12*/].f_11 && iParam1));
}

int func_291(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1952637.f_3334.f_28;
		case 81053684:
			return Global_1952637.f_3334.f_30;
		case -525676072:
			return Global_1952637.f_3334.f_29;
		case -1719060085:
			return Global_1952637.f_3334.f_31;
		case 1388798186:
			return Global_1952637.f_3334.f_33.f_7;
		case 119907797:
			return Global_1952637.f_3334.f_32;
		case -999503751:
			if (bParam1)
			{
				return Global_1952637.f_3334.f_27;
			}
			else
			{
				return func_392();
			}
			break;
	}
	return 0;
}

int func_292(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1952637.f_3334.f_33.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1952637.f_3334.f_33.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1952637.f_3334.f_33;
			break;
		case 1388798186:
			iVar0 = 1;
			break;
		case 119907797:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

bool func_293(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1952637.f_3334.f_26)
	{
		if (iParam0 == Global_1952637.f_3334[*uParam1])
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

int func_294(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1952637.f_3334.f_26 >= 25)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_293(iVar1, &uVar0))
	{
		return 0;
	}
	if (!func_393(iParam0, 0))
	{
		return 0;
	}
	if (bParam3 && !func_394(iParam0, 0, bParam4))
	{
		return 0;
	}
	Global_1952637.f_3334[Global_1952637.f_3334.f_26] = iVar1;
	Global_1952637.f_3334.f_26++;
	*uParam1++;
	return 1;
}

void func_295()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1952637.f_3334.f_26)
	{
		Global_17411.f_55.f_644[iVar0] = Global_1952637.f_3334[iVar0];
		iVar0++;
	}
	Global_17411.f_55.f_644.f_27 = Global_1952637.f_3334.f_27;
	Global_17411.f_55.f_644.f_28 = Global_1952637.f_3334.f_28;
	Global_17411.f_55.f_644.f_29 = Global_1952637.f_3334.f_29;
	Global_17411.f_55.f_644.f_30 = Global_1952637.f_3334.f_30;
	Global_17411.f_55.f_644.f_31 = Global_1952637.f_3334.f_31;
	Global_17411.f_55.f_644.f_32 = Global_1952637.f_3334.f_32;
	Global_17411.f_55.f_644.f_26 = Global_1952637.f_3334.f_26;
}

bool func_296(int iParam0)
{
	return func_396(func_395(iParam0));
}

void func_297(bool bParam0, int iParam1)
{
	struct<2> Var0;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char* sVar10;

	if (!func_41(iParam1, 0))
	{
		return;
	}
	iVar7 = -1;
	if (!func_397(iParam1, &Var0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		Var0 = "_PLACEHOLDER";
		Var0.f_1 = "inventory_items";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var0))
	{
		return;
	}
	if (bParam0)
	{
		sVar4 = "Transaction_Positive";
		iVar6 = joaat("COLOR_PURE_WHITE");
		iVar7 = func_398(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_399(4, iVar7))
		{
			sVar3 = "OUTFIT_STORED_LITERAL";
			sVar5 = func_261(func_400(iVar7));
		}
		else
		{
			iVar8 = func_401(iParam1);
			if (func_41(iVar8, 0))
			{
				iParam1 = iVar8;
			}
			sVar3 = "ITEM_STORED";
			sVar5 = MISC::_CREATE_VAR_STRING(0, func_402(iParam1));
		}
	}
	else
	{
		sVar4 = "Transaction_Positive";
		iVar6 = joaat("COLOR_PURE_WHITE");
		iVar7 = func_398(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_399(4, iVar7))
		{
			sVar3 = "OUTFIT_REMOVED_LITERAL";
			sVar5 = func_261(func_400(iVar7));
		}
		else
		{
			iVar9 = func_401(iParam1);
			if (func_41(iVar9, 0))
			{
				iParam1 = iVar9;
			}
			sVar3 = "ITEM_REMOVED";
			sVar5 = MISC::_CREATE_VAR_STRING(0, func_402(iParam1));
		}
	}
	sVar10 = func_403(MISC::_CREATE_VAR_STRING(10, sVar3, sVar5), iVar6);
	func_404(sVar10, Var0.f_1, MISC::GET_HASH_KEY(Var0), 0, iVar6, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

void func_298(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_405();
	}
	if (bParam0)
	{
		func_156(8);
		func_156(512);
	}
	else
	{
		func_156(8);
		func_156(16);
	}
}

int func_299()
{
	return Global_1952637.f_1;
}

bool func_300(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_74(iParam1);
	iVar1 = func_74(iParam0);
	if (iVar0 == iVar1)
	{
		return true;
	}
	if (func_406(iParam1) && func_406(iParam0))
	{
		return true;
	}
	return false;
}

void func_301(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	func_407(iParam0, 0, 0, bParam3, bParam5);
	func_167(iParam1, 1, bParam2, iParam4, bParam3, bParam5);
}

int func_302(int iParam0, int iParam1)
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
			return 735520874;
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

void func_303()
{
	int iVar0;

	Global_1952637.f_1556 = Global_1952637.f_1675;
	Global_1952637.f_1552 = Global_1952637.f_1554;
	Global_1952637.f_1552.f_1 = Global_1952637.f_1554.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1952637.f_1556.f_1[iVar0 /*3*/] = { Global_1952637.f_1675.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

void func_304(int iParam0)
{
	func_290(iParam0, 8, 6);
}

void func_305(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		if ((*iParam1 == joaat("CLOTHING_ITEM_OVERALLS_NONE") || *iParam1 == joaat("CLOTHING_ITEM_PANTS_NONE")) || *iParam1 == 750544038)
		{
			iVar0 = 16;
			if (func_74(uParam0->f_1[iVar0 /*3*/]) != 1882579758)
			{
				return;
			}
			iVar1 = func_408(uParam0->f_1[iVar0 /*3*/]);
			if (iVar1 != 0 && iVar1 != Global_1952637.f_83[iParam2 /*12*/])
			{
				*iParam1 = iVar1;
				return;
			}
		}
		if (!func_409(*iParam1, iParam2))
		{
			*iParam1 = Global_1952637.f_1675.f_1[iParam2 /*3*/];
			return;
		}
	}
	*iParam1 = Global_1952637.f_83[iParam2 /*12*/];
}

void func_306(int iParam0)
{
	func_410(&(Global_1952637.f_2897), iParam0);
}

void func_307(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_411(&(Global_1952637.f_2897), iParam0, iParam1);
}

void func_308(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_309(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;

	iVar0 = iParam1;
	bVar1 = func_174(iVar0, 1);
	if (bParam3 && func_62(uParam0->f_1[iParam2 /*3*/], 343781202))
	{
		func_412(uParam0, uParam0->f_1[iParam2 /*3*/]);
	}
	switch (func_302(iParam2, 1))
	{
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_413(uParam0, iVar0, iParam2, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_414(uParam0, iVar0, iParam2);
			break;
		case -338487716:
			func_415(uParam0, iVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_416(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1742327865:
			func_417(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1250092473:
			func_418(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -893163968:
			func_419(uParam0, bVar1, iVar0, iParam4);
			break;
		case -450913544:
			func_420(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_421(uParam0, bVar1, iVar0, iParam4);
			break;
		case 304805134:
			func_422(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1145151482:
			func_423(uParam0, bVar1, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_424(uParam0, bVar1, iVar0, iParam4);
			break;
		case -426430150:
			func_425(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_426(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1958421083:
			func_427(uParam0, bVar1, iVar0, iParam4);
			break;
		case -1944638739:
			func_428(uParam0, bVar1, iVar0, iParam4);
			break;
	}
}

int func_310(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	if (func_299() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_429(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_430(iParam0, func_302(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_311(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (*uParam0 <= 0)
	{
		return;
	}
	if (func_163(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_431(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1952637.f_1675 != 491602716 || !func_399(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_62(Global_1952637.f_1675, -166674229) && (Global_1952637.f_1675 != 491602716 || !func_399(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1952637.f_1675 = 491602716; /* GXTEntry: "Custom Outfit" */
			Global_1952637.f_1556 = 491602716; /* GXTEntry: "Custom Outfit" */
			func_432(-1, 0, 6);
			func_77(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_298(0, 1);
	}
}

int func_312(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_433(&uParam0, iParam4, bParam5, iParam6);
}

bool func_313(struct<4> Param0, int iParam4, bool bParam5)
{
	struct<11> Var0;

	if (!func_221(0))
	{
		return func_434(&Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_231(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_112(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

struct<4> func_314()
{
	struct<4> Var0;

	return Var0;
}

bool func_315(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (func_435(Global_34, iParam0, 0, 1) < 2f && PED::_0xD543D3A8FDE4F185(Global_34, iParam0))
	{
		return true;
	}
	return false;
}

bool func_316()
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SHOP_ANYWHERE_HANDHELD")))
	{
		func_130(2);
		return false;
	}
	if (!func_194())
	{
		func_130(9);
		return false;
	}
	if (Global_1051439.f_72[34 /*75*/].f_1 & 128 != 0)
	{
		func_130(3);
		return false;
	}
	Var0 = { func_47(0) };
	if (func_48(Var0))
	{
		iVar2 = -1;
		switch (Var0)
		{
			case 6:
				iVar3 = func_202(PLAYER::PLAYER_ID(), 0);
				if (iVar3 != -1)
				{
					iVar2 = func_436(iVar3);
				}
				break;
			case 3:
			case 4:
				iVar4 = func_258(&Var0, 0);
				if (iVar4 != -1)
				{
					if (func_259(iVar4, 461218520, 0))
					{
						iVar2 = 46;
					}
				}
				break;
		}
		if (iVar2 != -1)
		{
			func_130(iVar2);
			return false;
		}
	}
	if (func_437())
	{
		func_130(4);
		return false;
	}
	if (func_359(4, PLAYER::NETWORK_PLAYER_ID_TO_INT()) && Global_1051439.f_72[34 /*75*/].f_49 & 1073741824 == 0)
	{
		func_130(5);
		return false;
	}
	if (func_438(131072, 255))
	{
		func_130(7);
		return false;
	}
	if (func_439())
	{
		func_130(8);
		return false;
	}
	return true;
}

bool func_317(int iParam0, int iParam1)
{
	if (((PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::IS_PED_IN_MELEE_COMBAT(Global_34)) || func_250(iParam1, 1024)) && PED::_0x336B3D200AB007CB(Global_34, Global_35, iParam0, iParam1) > 0)
	{
		return true;
	}
	return false;
}

bool func_318(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219.f_3 & 32 != 0;
	}
	return func_438(32, iParam0);
}

bool func_319(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

bool func_320()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

void func_321(bool bParam0)
{
	if (bParam0)
	{
		func_440(4);
	}
	else
	{
		func_185(4);
	}
}

void func_322(bool bParam0)
{
	if (!(bParam0 && Global_1915715.f_22504))
	{
		if (bParam0)
		{
			INVENTORY::_0x6A564540FAC12211(2, joaat("KIT_HANDHELD_CATALOG"));
		}
		else
		{
			INVENTORY::_0x766315A564594401(2, joaat("KIT_HANDHELD_CATALOG"), 0);
		}
	}
	Global_1915715.f_22504 = bParam0;
}

bool func_323()
{
	return Global_1915715.f_20643;
}

int func_324(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!bParam7 && UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return 0;
	}
	iVar0 = Global_1296859.f_154[Global_1296859];
	iVar1 = Global_1296859.f_8;
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = PED::_0xB655DB7582AEC805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::_0xEC7E480FF8BD0BED(Global_34))
			{
				return 0;
			}
			if (PED::_GET_PED_BLACKBOARD_BOOL(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(iVar0))
		{
			if (bParam6 && Global_1102219.f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915715.f_20638 || Global_1915715.f_22504.f_1)
		{
			return 0;
		}
		if (TASK::_0xD04241BBF6D03A5E(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_441())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1940144.f_10 || Global_1940144.f_11) || Global_1940144.f_12) || Global_1940144.f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1248240.f_9297 != -1)
		{
			return 0;
		}
		if (Global_1128574[iVar4 /*56*/].f_34 & 1 != 0 && Global_1128574[iVar4 /*56*/].f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1130634.f_293)
		{
			return 0;
		}
		if (Global_1572887.f_106.f_75 > 11 && Global_1572887.f_106.f_75 < 15)
		{
			return 0;
		}
		else if (Global_1572887.f_106.f_75 > 15)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if (Global_1048576 || Global_2883584)
			{
				return 0;
			}
			if (Global_1048581)
			{
				return 0;
			}
			if (Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_325(int iParam0, int iParam1, int iParam2)
{
	return func_197(Global_1196567[iParam2 /*10*/][iParam0], iParam1);
}

var func_326(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_442() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1296859.f_10;
	iVar6 = Global_1296859.f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_443());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_443());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_443());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_444(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar2]))
		{
			iVar10 = Global_1296859.f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_445(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (Global_1296859.f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_446(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (GANG::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_447(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

int func_327(var uParam0, struct<21> Param1)
{
	if (!func_448(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*21*/] = { Param1 };
	*uParam0++;
	return 1;
}

bool func_328(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_329(int iParam0)
{
	if (func_331(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_330(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (iVar1 - Global_39.f_3534[iVar0 /*3*/]);
			if (Global_39.f_3534[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_331(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_332(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_333()
{
	if (!func_194())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

bool func_334(var uParam0)
{
	return func_98(*uParam0, 2);
}

bool func_335(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((uParam0[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((uParam0[iVar0 /*6*/])->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_449(uParam0[iVar0 /*6*/]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(uParam0[*iParam1 /*6*/]) = { *(uParam0[iVar0 /*6*/]) };
				(uParam0[*iParam1 /*6*/])->f_4 = (uParam0[iVar0 /*6*/])->f_4;
			}
			if ((uParam0[iVar0 /*6*/])->f_5 > iParam2)
			{
				(uParam0[*iParam1 /*6*/])->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(uParam0[*iParam1 /*6*/])->f_5 = (uParam0[iVar0 /*6*/])->f_5;
				iParam2 = (iParam2 - (uParam0[*iParam1 /*6*/])->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(uParam0[iVar0 /*6*/]) = { func_314() };
				(uParam0[iVar0 /*6*/])->f_4 = 0;
				(uParam0[iVar0 /*6*/])->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

bool func_336(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_450(uParam1->f_8, iParam0, uVar0, 2048) || func_450(uParam1->f_8, iParam0, uVar0, 32768)) || func_450(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_450(uParam1->f_8, iParam0, uVar0, 4) || func_450(uParam1->f_8, iParam0, uVar0, 256)) || func_450(uParam1->f_8, iParam0, uVar0, 65536)) || func_450(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_450(uParam1->f_8, iParam0, uVar0, 1) || func_450(uParam1->f_8, iParam0, uVar0, 8)) || func_450(uParam1->f_8, iParam0, uVar0, 65536)) || func_450(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_450(uParam1->f_8, iParam0, uVar0, 1) || func_450(uParam1->f_8, iParam0, uVar0, 16)) || func_450(uParam1->f_8, iParam0, uVar0, 2)) || func_450(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_450(uParam1->f_8, iParam0, uVar0, 8) || func_450(uParam1->f_8, iParam0, uVar0, 4096)) || func_450(uParam1->f_8, iParam0, uVar0, 256)) || func_450(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_337(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_338(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_451(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_451(iParam1, 2, 0, 0);
	return -1;
}

int func_339(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_451(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_340()
{
	return (func_452(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_312(func_122(joaat("WARDROBE"), func_179(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_341(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_112(0);
	*uParam1 = { func_122(iParam0, func_216(0), iParam3, 0) };
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

bool func_342(int iParam0, int iParam1, int iParam2)
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

bool func_343(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_112(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_344()
{
	return 232341495;
}

int func_345()
{
	return 232439799;
}

int func_346()
{
	return 230145239;
}

int func_347(int iParam0)
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

int func_348(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_453(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_349(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_454(&Var1, iParam0))
	{
		iVar0 = ((func_455() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_350(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1257541[iParam0 /*5*/].f_1;
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1336837986;
		case 1:
			return 2124631622;
		case 2:
			return joaat("ROBBERY_TRAIN");
		case 3:
			return 1443764480;
		case 4:
			return -668110249;
		case 5:
			return -1381389849;
		case 6:
			return 536699577;
		case 7:
			return 541147288;
		case 8:
			return 377122918;
		case 9:
			return 1158195437;
		case 10:
			return joaat("AMBUSH");
		case 11:
			return -621956193;
		case 12:
			return joaat("GANG_EVENT_SHOWDOWN");
		case 13:
			return joaat("GANG_EVENT_IMPROMPTU_RACE");
		case 14:
			return -867762478;
		case 15:
			return 602097925;
		case 16:
			return joaat("TRAIN_ESCORT");
		case 17:
			return joaat("IWD_1V1");
		case 18:
			return joaat("IWD_PVP");
		case 20:
			return joaat("IWD_PF");
		case 21:
			return joaat("IWD_PLF");
		case 28:
			return joaat("IWD_F");
		case 19:
			return joaat("IWD_INF");
		case 22:
			return joaat("ASSASSINATION");
		case 23:
			return joaat("ASSASSINATION_TRACKING");
		case 24:
			return joaat("ASSASSINATION_PVP_PLAYER");
		case 25:
			return joaat("ASSASSINATION_PVP_POSSE");
		case 26:
			return joaat("COACH_HOLDUP_ROBBERY");
		case 27:
			return joaat("COACH_HOLDUP_KIDNAPPING");
		case 30:
			return 1518877519;
		default:
			break;
	}
	return 0;
}

var func_352(int iParam0)
{
	int iVar0;

	iVar0 = func_457(0, (func_456() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_458(iVar0);
}

int func_353(int iParam0)
{
	return Global_1109804.f_5737[iParam0 /*5*/];
}

struct<8> func_354(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	struct<8> Var5;

	if (!func_459(iParam0))
	{
		return Var5;
	}
	if (!func_460(&Var0))
	{
		return Var5;
	}
	if (!func_461(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_461(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_461(Var0, &(Var0.f_1), 19, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_461(Var0, &(Var0.f_1), 21, iParam1, 0, bParam2))
	{
		if (bParam2)
		{
		}
		return Var5;
	}
	return func_462(Var0);
}

bool func_355(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_356(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_357(int iParam0)
{
	return func_197(Global_1211392.f_1196, iParam0);
}

bool func_358()
{
	return Global_263042[Global_1296859 /*70*/] > 2;
}

bool func_359(int iParam0, int iParam1)
{
	if (!Global_1071686.f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1197355[iParam1 /*12*/] && iParam0) != 0;
}

struct<2> func_360()
{
	if (Global_1196205.f_129 <= 0)
	{
		return func_47(0);
	}
	if (Global_1196205.f_130 < 0 || Global_1196205.f_131 == 0)
	{
		return func_47(0);
	}
	return Global_1196205[Global_1196205.f_130 /*4*/].f_1;
}

bool func_361(int iParam0)
{
	if (func_463(iParam0) == -1)
	{
		return false;
	}
	return true;
}

bool func_362(struct<2> Param0)
{
	return func_464(Param0, 1, 4);
}

bool func_363(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 3:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 4:
			return joaat("CONSUMABLE_HERB_BAY_BOLETE");
		case 5:
			return joaat("CONSUMABLE_HERB_BLACK_BERRY");
		case 6:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 7:
			return joaat("CONSUMABLE_HERB_BURDOCK_ROOT");
		case 8:
			return joaat("CONSUMABLE_HERB_CHANTERELLES");
		case 11:
			return joaat("CONSUMABLE_HERB_COMMON_BULRUSH");
		case 12:
			return joaat("CONSUMABLE_HERB_CREEPING_THYME");
		case 13:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 15:
			return joaat("CONSUMABLE_HERB_ENGLISH_MACE");
		case 16:
			return joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 19:
			return joaat("CONSUMABLE_HERB_HARRIETUM");
		case 20:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 21:
			return joaat("CONSUMABLE_HERB_INDIAN_TOBACCO");
		case 24:
			return joaat("CONSUMABLE_HERB_MILKWEED");
		case 27:
			return joaat("CONSUMABLE_HERB_OLEANDER_SAGE");
		case 28:
			return joaat("CONSUMABLE_HERB_OREGANO");
		case 29:
			return joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM");
		case 30:
			return joaat("CONSUMABLE_HERB_PRAIRIE_POPPY");
		case 32:
			return joaat("CONSUMABLE_HERB_RAMS_HEAD");
		case 34:
			return joaat("CONSUMABLE_HERB_RED_RASPBERRY");
		case 35:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 38:
			return joaat("CONSUMABLE_HERB_VANILLA_FLOWER");
		case 39:
			return joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP");
		case 49:
			return joaat("CONSUMABLE_HERB_WILD_CARROTS");
		case 50:
			return joaat("CONSUMABLE_HERB_WILD_FEVERFEW");
		case 51:
			return joaat("CONSUMABLE_HERB_WILD_MINT");
		case 52:
			return joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY");
		case 53:
			return joaat("CONSUMABLE_HERB_YARROW");
		case 40:
			return joaat("PROVISION_WLDFLWR_AGARITA");
		case 41:
			return joaat("PROVISION_WLDFLWR_TEXAS_BLUE_BONNET");
		case 42:
			return joaat("PROVISION_WLDFLWR_BITTERWEED");
		case 43:
			return joaat("PROVISION_WLDFLWR_BLOOD_FLOWER");
		case 44:
			return joaat("PROVISION_WLDFLWR_CARDINAL_FLOWER");
		case 45:
			return joaat("PROVISION_WLDFLWR_CHOCOLATE_DAISY");
		case 46:
			return joaat("PROVISION_WLDFLWR_CREEK_PLUM");
		case 47:
			return joaat("PROVISION_WLDFLWR_WILD_RHUBARB");
		case 48:
			return joaat("PROVISION_WLDFLWR_WISTERIA");
		default:
			break;
	}
	return 0;
}

void func_365(int iParam0, int iParam1)
{
	if (!func_366(iParam0))
	{
		return;
	}
	if (func_14() != -1)
	{
		Global_17411[iParam0] = (Global_17411[iParam0] || iParam1);
		return;
	}
	Global_39.f_4667[iParam0] = (Global_39.f_4667[iParam0] || iParam1);
}

bool func_366(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_367(int iParam0)
{
	if (!func_366(iParam0))
	{
		return false;
	}
	return func_465(iParam0, 4, 1);
}

void func_368(int iParam0, bool bParam1)
{
	if (!func_366(iParam0))
	{
		return;
	}
	if (func_466(iParam0))
	{
		return;
	}
	func_365(iParam0, 2);
	if (bParam1)
	{
		if (!func_16(0, 0, 1))
		{
			if (func_14() == -1)
			{
				func_371(1, 6);
			}
			else
			{
				func_467(1, 1017438712);
			}
		}
	}
}

bool func_369(int iParam0)
{
	if (!func_366(iParam0))
	{
		return false;
	}
	return func_465(iParam0, 1, 1);
}

void func_370(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_366(iParam0))
	{
		return;
	}
	if (func_369(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_468(iParam0);
	}
	if (!bParam1)
	{
		func_469(iParam0);
	}
	func_365(iParam0, 1);
	func_368(iParam0, 1);
	if (bParam2)
	{
		if (!func_16(0, 0, 1))
		{
			func_371(1, 6);
		}
	}
}

void func_371(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_470(&Global_0, 8);
	}
	if (!func_471() || func_14() != -1)
	{
		return;
	}
	func_470(&Global_0, 1);
}

float func_372(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_34));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_34, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_GET_PED_STAMINA(Global_34);
			fVar2 = PED::_GET_PED_MAX_STAMINA(Global_34);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar2 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_373(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_472(2);
	func_473(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_374(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_474(2);
	func_475(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_375(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_476(2);
	func_477(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

float func_376(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_377(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_478(iParam0, fParam1, 1);
	}
	func_480(iParam0, (func_479(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_378(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

int func_379(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_481(iParam0, fParam1, bParam2, bParam3);
}

void func_380(float fParam0, bool bParam1)
{
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_482())
	{
		func_483(fParam0, 0);
	}
	if (bParam1)
	{
		Global_17411.f_55.f_2439.f_41++;
		if (5 == Global_17411.f_55.f_2439.f_41)
		{
			func_96(109, 0);
		}
	}
}

struct<2> func_381(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_382(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_383(int iParam0)
{
	return func_42(iParam0) == joaat("CONSUMABLE");
}

void func_384(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	char* sVar21;
	char cVar22[128];

	if (!func_41(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_484() || bParam6)
	{
		func_485(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_486(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_486(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_487(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_42(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if (((((((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER")) && iParam0 != joaat("AMMO_HATCHET_HUNTER")) && iParam0 != joaat("AMMO_TOMAHAWK_ANCIENT")) && iParam0 != joaat("AMMO_BOLAS")) && iParam0 != joaat("AMMO_POISONBOTTLE")) && iParam0 != joaat("AMMO_MOONSHINEJUG_MP"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	iVar12 = func_74(iParam0);
	if (((((((iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION")) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_397(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar13 = joaat("COLOR_PURE_WHITE");
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = joaat("COLOR_GREYMID");
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_62(iParam0, 474910316))
	{
		sVar17 = func_488(iParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	if (func_62(iParam0, 1816585950))
	{
		iVar13 = joaat("COLOR_OBJECTIVE");
	}
	if (func_489(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_YELLOW");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	iVar18 = func_402(iParam0);
	if ((func_490(iVar12) && func_62(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_491(iParam0);
	}
	else if (func_42(iParam0) == joaat("CLOTHING"))
	{
		iVar19 = func_401(iParam0);
		if (func_41(iVar19, 0))
		{
			iVar18 = func_402(iVar19);
		}
	}
	if (func_492(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_493(iParam0, -915411861, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_403(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != joaat("CLOTHING_ITEM_HAIR_NONE")) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE")) && iParam0 != joaat("CLOTHING_ITEM_BEARD_NONE"))) || (iVar12 == 252325943 && iParam0 != joaat("CLOTHING_BLEND_LIPSTICK_NONE"))) || (iVar12 == -636562458 && iParam0 != joaat("CLOTHING_BLEND_EYESHADOW_NONE")))
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, func_494(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_495(iParam0, &cVar22))
		{
			sVar21 = func_497(func_496(cVar22), joaat("COLOR_PURE_WHITE"));
		}
	}
	func_404(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_385(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_41(iParam0, 0))
	{
		return Var0;
	}
	if (func_62(iParam0, -305066475))
	{
		if (func_14() == -1)
		{
			if (func_62(iParam0, -537818634))
			{
				return func_381(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_381(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_62(iParam0, -537818634))
	{
		return func_381(joaat("MEDICINE_ITEMS"));
	}
	if (func_62(iParam0, 2084895747))
	{
		return func_381(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

bool func_386(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	Var0 = { func_215(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_217(&Var0, func_216(0));
	}
	if (!func_218(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_104(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_123(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_106(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

void func_387(int iParam0, bool bParam1, int iParam2)
{
	Global_1940311.f_4 = iParam0;
	Global_1940311.f_34 = iParam2;
	if (bParam1 || (func_498() && iParam2 == 0))
	{
		func_499(1);
		func_500(1);
	}
}

bool func_388()
{
	int iVar0;

	iVar0 = Global_1952637.f_595[8];
	iVar0 = (iVar0 + Global_1952637.f_595[10]);
	iVar0 = (iVar0 + Global_1952637.f_595[1]);
	iVar0 = (iVar0 + Global_1952637.f_595[2]);
	iVar0 = (iVar0 + Global_1952637.f_595[5]);
	iVar0 = (iVar0 + Global_1952637.f_595[25]);
	iVar0 = (iVar0 + Global_1952637.f_595[23]);
	iVar0 = (iVar0 + Global_1952637.f_595[18]);
	iVar0 = (iVar0 + Global_1952637.f_595[19]);
	return iVar0 > 0;
}

int func_389(int iParam0)
{
	int iVar0;

	iVar0 = func_171(func_501(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1952637.f_1675.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_390(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_171(func_501(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1952637.f_1675.f_1[iVar1 /*3*/] != 0 && Global_1952637.f_1675.f_1[iVar1 /*3*/] != Global_1952637.f_83[iVar1 /*12*/])
	{
		iVar0 = Global_1952637.f_1675.f_1[iVar1 /*3*/];
		if (func_74(iVar0) == iParam0 || (iParam0 == 81053684 && func_62(iVar0, 160827531)))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_391(int iParam0)
{
	return Global_1952637.f_1675.f_1[func_171(iParam0, 1) /*3*/];
}

int func_392()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1952637.f_3334.f_26)
	{
		iVar1 = Global_1952637.f_3334[iVar0];
		if (func_74(iVar1) == -999503751)
		{
			if (func_502() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_393(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iParam1 = func_503(0);
	}
	if (func_74(iParam0) == -999503751 && func_398(iParam0) != -1)
	{
		return true;
	}
	if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		return func_62(iParam0, -287432114);
	}
	else if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		return func_62(iParam0, -133342564);
	}
	return false;
}

bool func_394(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_121(iParam0, bParam2, 0) };
	Var5 = { func_122(iParam0, Var0, Var0.f_4, bParam2) };
	if (func_178(iParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(func_112(bParam2), &Var5, iParam1);
	return true;
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case 119907797:
			return 32;
		case 1388798186:
			return 64;
		default:
			break;
	}
	return 0;
}

bool func_396(int iParam0)
{
	return (Global_1952637.f_3334.f_33.f_6 && iParam0) != 0;
}

bool func_397(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*sParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_398(int iParam0)
{
	switch (iParam0)
	{
		case 491602716: /* GXTEntry: "Custom Outfit" */
			return 0;
		case 217155793: /* GXTEntry: "Outfit One" */
			return 1;
		case 97391779: /* GXTEntry: "Outfit Two" */
			return 2;
		case -808817534: /* GXTEntry: "Outfit Three" */
			return 3;
		case 1270922359: /* GXTEntry: "Outfit Four" */
			return 4;
		case -2011879201: /* GXTEntry: "Outfit Five" */
			return 5;
		case -1063340820: /* GXTEntry: "Outfit Six" */
			return 6;
		case 2127262701:
			return 7;
		case -1323870201: /* GXTEntry: "Outfit Eight" */
			return 8;
		case 1632140501: /* GXTEntry: "Outfit Nine" */
			return 9;
		case 967218463: /* GXTEntry: "Outfit Ten" */
			return 10;
		default:
			break;
	}
	return -1;
}

bool func_399(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_17411.f_55.f_644.f_33[iParam1 /*120*/] && iParam0) != 0;
	}
	return false;
}

struct<8> func_400(int iParam0)
{
	char cVar0[64];

	if (func_399(4, iParam0))
	{
		return Global_17411.f_2625[iParam0 /*8*/];
	}
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT_BY_HASH(func_504(iParam0)), 64);
	return cVar0;
}

int func_401(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	iVar0 = func_505(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_506(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_507(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar13, &iVar14) && func_508(iVar14))
			{
				func_509(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_509(iVar11);
	}
	return 0;
}

int func_402(int iParam0)
{
	int iVar0;

	if (!func_41(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_510(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

char* func_403(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

var func_404(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_511(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_405()
{
	Global_1952637.f_1057 = 0;
}

int func_406(int iParam0)
{
	if (!func_41(iParam0, 0))
	{
		return 0;
	}
	if (func_62(iParam0, 160827531) || func_74(iParam0) == 81053684)
	{
		return 1;
	}
	return 0;
}

void func_407(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<2> Var1;
	var uVar120;
	int iVar121;
	int iVar122;

	bVar0 = false;
	switch (func_74(iParam0))
	{
		case -2061583405:
			bVar0 = func_512(iParam0, &(Global_1952637.f_3334.f_28), bParam4);
			break;
		case 81053684:
			bVar0 = func_512(iParam0, &(Global_1952637.f_3334.f_30), bParam4);
			break;
		case -999503751:
			bVar0 = func_512(iParam0, &(Global_1952637.f_3334.f_27), bParam4);
			if (func_62(iParam0, -166674229))
			{
				Var1.f_1 = 39;
				if (func_513(&Var1, iParam0, &uVar120, 0, 1, 0, 0, 0, 1, 8))
				{
					iVar121 = 0;
					while (iVar121 < 39)
					{
						iVar122 = Var1.f_1[iVar121 /*3*/];
						if (func_41(iVar122, 0))
						{
							func_407(iVar122, 0, 0, 0, 0);
						}
						iVar121++;
					}
				}
			}
			break;
		case -525676072:
			bVar0 = func_512(iParam0, &(Global_1952637.f_3334.f_29), bParam4);
			break;
		case -1719060085:
			bVar0 = func_512(iParam0, &(Global_1952637.f_3334.f_31), bParam4);
			break;
		case 119907797:
			bVar0 = func_512(iParam0, &(Global_1952637.f_3334.f_32), bParam4);
			break;
		case 1388798186:
			bVar0 = func_512(iParam0, &(Global_1952637.f_3334.f_33.f_7), bParam4);
			break;
		default:
			if (func_62(iParam0, 160827531))
			{
				bVar0 = func_512(iParam0, &(Global_1952637.f_3334.f_30), bParam4);
			}
			break;
	}
	if (bParam3 && bVar0)
	{
		func_297(0, iParam0);
	}
	if (bParam2)
	{
		func_295();
	}
	if (bParam1)
	{
		func_298(0, 0);
	}
}

int func_408(int iParam0)
{
	var uVar0;
	var uVar1;

	func_514(&uVar1, 9044914, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&uVar1);
	while (DATAFILE::_0xED4413CEE1BF142C(&uVar1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &uVar1, -1168434056))
		{
			return 0;
		}
		return uVar0;
	}
	return 0;
}

bool func_409(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_74(Global_1952637.f_1675.f_1[iParam1 /*3*/]);
	if (func_74(iParam0) == iVar0)
	{
		return true;
	}
	else if (iParam0 == joaat("CLOTHING_ITEM_BANDANA_NONE"))
	{
		return func_62(Global_1952637.f_1675.f_1[iParam1 /*3*/], 160827531);
	}
	else if (iParam0 == 491480257)
	{
		return (iVar0 == -2061583405 || iVar0 == 2086043523);
	}
	else if (iParam0 == joaat("CLOTHING_ITEM_CHAPS_NONE"))
	{
		return iVar0 == -923693316;
	}
	else if (iParam0 == joaat("CLOTHING_ITEM_SHIRT_NONE"))
	{
		return iVar0 == 1882579758;
	}
	return false;
}

void func_410(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_1952637.f_2897.f_35[iVar0 /*2*/] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_515(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_515(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_516(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
				}
				Global_1952637.f_2897.f_35[iVar1 /*2*/] = { uParam0->f_2[iVar0 /*2*/] };
				iVar1++;
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				uParam0->f_2[iVar0 /*2*/] = { Global_1952637.f_2897.f_35[iVar0 /*2*/] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_411(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_517(uParam0, 1))
	{
		func_518(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_2[iVar0 /*2*/] == iParam1)
		{
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			return;
		}
		if (Global_1952637.f_83[uParam0->f_2[iVar0 /*2*/] /*12*/].f_2 > Global_1952637.f_83[iParam1 /*12*/].f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				uParam0->f_2[iVar1 /*2*/] = { uParam0->f_2[(iVar1 - 1) /*2*/] };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0 /*2*/] = iParam1;
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

void func_412(var uParam0, var uParam1)
{
	struct<4> Var0;
	int iVar7;
	int iVar8;

	Var0 = func_519(0);
	Var0.f_1 = uParam1;
	Var0.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var0))
	{
		return;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var0))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, 1409451727))
		{
		}
		else
		{
			iVar8 = func_171(iVar7, 1);
			if (iVar8 < 0 || iVar8 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("COMPONENT")))
			{
			}
			else if (uParam0->f_1[iVar8 /*3*/] != iVar7)
			{
			}
			else
			{
				uParam0->f_1[iVar8 /*3*/] = Global_1952637.f_83[iVar8 /*12*/];
				uParam0->f_1[iVar8 /*3*/].f_1 = 0;
				func_307(iVar8, 0);
			}
		}
	}
}

void func_413(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (iParam1 == -230310728 || iParam1 == 1326838792)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("BASE");
	}
	iVar0 = 10;
	iVar1 = func_74(uParam0->f_1[iVar0 /*3*/]);
	if (iVar1 == 119907797)
	{
		if (func_62(iParam1, 458991572))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_307(iVar0, iParam3);
		}
	}
	else if (iVar1 == 2086043523)
	{
		if (func_62(iParam1, -93469181))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_307(iVar0, iParam3);
		}
	}
	iVar0 = 11;
	if (func_62(uParam0->f_1[iVar0 /*3*/], -1446529222) && func_62(iParam1, -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_62(iParam1, -93469181)) && func_62(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
}

void func_414(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == joaat("CLOTHING_ITEM_M_BEARD_STUBBLE"))
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("BASE");
	}
}

void func_415(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (!func_174(iVar1, 0) && func_62(iVar1, -180472385))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	iVar0 = 10;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((iVar1 != Global_1952637.f_83[iVar0 /*12*/] && func_74(iVar1) == 2086043523) && func_62(iParam1, -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
}

void func_416(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_74(iParam2))
	{
		case -525676072:
			func_520(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_521(uParam0, bParam1, iParam3);
			break;
	}
}

void func_417(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_74(uParam0->f_1[iVar0 /*3*/]) == 912453393)
	{
		func_307(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	if (func_74(iParam2) == 81053684 || func_62(iParam2, 160827531))
	{
		func_522(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_62(iParam2, -180472385) && !func_174(uParam0->f_1[iVar0 /*3*/], 0))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	if (func_62(iParam2, -1303648999))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_307(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
		{
			func_307(iVar0, iParam3);
		}
	}
	else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
		func_307(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
		{
			func_307(iVar0, iParam3);
		}
	}
}

void func_418(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 12;
	iVar1 = 0;
	if (func_299() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	if (joaat("NECKTIES") == PED::_GET_PED_COMPONENT_CATEGORY(uParam0->f_1[iVar0 /*3*/], iVar1, true))
	{
		if ((bParam1 || func_62(iParam2, 1872585553)) || func_74(iParam2) == 1882579758)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_307(iVar0, iParam4);
		}
	}
	iVar0 = 17;
	if (!func_174(uParam0->f_1[iVar0 /*3*/], 0) && func_62(iParam2, 1467402774))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam4);
	}
	iVar0 = 29;
	if (!func_174(uParam0->f_1[iVar0 /*3*/], 0) && func_62(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam4);
	}
	iVar0 = 34;
	iVar2 = uParam0->f_1[iVar0 /*3*/];
	if (func_74(iVar2) == 1759215194 && func_74(iParam2) == 1882579758)
	{
		uParam0->f_1[iVar0 /*3*/] = func_408(iParam2);
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam4);
	}
	else if (func_523(iVar2, bParam1, iVar1))
	{
		iVar2 = uParam0->f_1[18 /*3*/];
		iVar3 = 0;
		if (func_74(iVar2) == 912453393 && func_524(32))
		{
			iVar3 |= 1;
		}
		if (func_62(iParam2, 525391395))
		{
			iVar3 |= 2;
		}
		iVar2 = func_525(Global_1952637.f_83[iVar0 /*12*/].f_9, iVar3);
		if (iVar2 != 0)
		{
			uParam0->f_1[iVar0 /*3*/] = iVar2;
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_307(iVar0, iParam4);
			func_426(uParam0, 0, iVar2, iParam4);
		}
	}
	iVar0 = 21;
	if (func_174(uParam0->f_1[iVar0 /*3*/], 0))
	{
		return;
	}
	func_307(iVar0, iParam4);
	if (uParam0->f_1[iParam3 /*3*/].f_1 == -1539589426 || uParam0->f_1[iParam3 /*3*/].f_1 == 1334603721)
	{
		return;
	}
	if (uParam0->f_1[iParam3 /*3*/].f_1 == 0 || uParam0->f_1[iParam3 /*3*/].f_1 == joaat("BASE"))
	{
		if (func_429(iParam2, iVar1, -1539589426) >= 0)
		{
			uParam0->f_1[iParam3 /*3*/].f_1 = -1539589426;
			return;
		}
	}
	if (func_429(iParam2, iVar1, 1334603721) >= 0)
	{
		uParam0->f_1[iParam3 /*3*/].f_1 = 1334603721;
	}
}

void func_419(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_62(iParam2, 358628372))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
}

void func_420(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	switch (func_74(iParam2))
	{
		case 698653232:
			func_526(uParam0, bParam1, iParam2, iParam4);
			break;
		case 912453393:
			func_527(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_421(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_74(iParam2))
	{
		case -1080198344:
		case 1868067663:
			func_528(uParam0, bParam1, iParam2, iParam3);
			break;
		case 294388917:
			func_529(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_422(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 18;
	if (func_74(uParam0->f_1[iVar0 /*3*/]) == 912453393)
	{
		func_307(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar1 = 0;
	if (func_299() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	iVar0 = 23;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_62(iParam2, 1537768121))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_307(iVar0, iParam3);
		if (uParam0->f_1[iVar0 /*3*/].f_1 == -1539589426 || uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			return;
		}
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 0 || uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE"))
		{
			if (func_429(uParam0->f_1[iVar0 /*3*/], iVar1, -1539589426) >= 0)
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
				return;
			}
		}
		if (func_429(uParam0->f_1[iVar0 /*3*/], iVar1, 1334603721) >= 0)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1334603721;
		}
	}
}

void func_423(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 21;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_62(uParam0->f_1[iVar0 /*3*/], 1537768121))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam2);
	}
}

void func_424(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	if (func_530(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) && func_62(iParam2, -1230785684))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	iVar0 = 32;
	if (!func_174(uParam0->f_1[iVar0 /*3*/], 0) && func_62(iParam2, 1016511012))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
}

void func_425(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_62(uParam0->f_1[iVar0 /*3*/], 358628372))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam2);
	}
}

void func_426(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_74(iParam2))
	{
		case 1759215194:
			func_531(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_532(uParam0, bParam1, iParam2, iParam3);
			break;
		case 684307653:
			func_533(uParam0, bParam1, iParam2, iParam3);
			break;
		case 502936876:
			func_534(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_535(uParam0, bParam1, iParam2, iParam3);
			break;
		case 344283346:
			func_536(uParam0, bParam1, iParam3);
			break;
	}
}

void func_427(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_74(iParam2))
	{
		case 1769055947:
			func_537(uParam0, bParam1, iParam2, iParam3);
			break;
		case -923693316:
			func_538(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_428(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		func_539(uParam0, iParam3, 0, 1);
		return;
	}
	iVar0 = 35;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((func_62(iParam2, 813132419) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/]) && func_74(iVar1) == -923693316)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	if ((func_62(iParam2, -1650340550) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/]) && func_74(iVar1) == 1769055947)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	iVar0 = 37;
	if (func_62(iParam2, -1278198125) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
}

int func_429(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, iParam1, 1))
	{
		if (PED::_0x6243635AF2F1B826(iParam0, iVar0, iParam1, 1) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_430(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

void func_431(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1952637.f_1675.f_1[iParam0 /*3*/] = { Global_1952637.f_1556.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	func_540(&(Global_1952637.f_1675.f_1[iParam0 /*3*/]), iParam0, Global_17411.f_55.f_644.f_1777);
}

void func_432(int iParam0, bool bParam1, int iParam2)
{
	func_541(&(Global_1952637.f_1556), iParam0);
	func_542(2, iParam0, 6);
	if (bParam1)
	{
		func_298(0, 1);
	}
}

int func_433(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_543(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_434(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	struct<28> Var16;
	struct<25> Var44;
	struct<17> Var69;
	struct<16> Var86;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_231(*uParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_42(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_544(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_545(joaat("UPDATE"), &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("COACH"))
	{
		Var44 = { func_546(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_547(joaat("UPDATE"), &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var69 = { func_548(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_549(joaat("UPDATE"), &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_550(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_224(joaat("UPDATE"), &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

float func_435(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

int func_436(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 24;
		case 1:
			return 25;
		case 2:
			return 26;
		case 3:
			return 27;
		case 4:
			return 28;
		case 5:
			return 29;
		case 6:
			return 30;
		case 18:
			return 38;
		case 16:
			return 39;
		case 17:
			return 40;
		case 15:
			return 41;
		case 11:
			return 31;
		case 12:
			return 32;
		case 13:
			return 33;
		case 14:
			return 35;
		case 7:
			return 34;
		default:
			break;
	}
	if (func_203(iParam0) == joaat("POSSE_VERSUS"))
	{
		return 37;
	}
	return 23;
}

bool func_437()
{
	if ((func_46() || Global_1572887.f_106.f_75 > 10) || func_551())
	{
		if ((!func_268() && Global_265377.f_124517.f_71.f_21.f_2 != -504335712) && !func_552(Global_265377.f_124517.f_71.f_21.f_3))
		{
			return true;
		}
	}
	return false;
}

bool func_438(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219.f_3 && iParam0) != 0;
	}
	return (Global_1100469[iParam1 /*53*/].f_3 && iParam0) != 0;
}

bool func_439()
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	return (Global_1051439.f_3259 == iVar0 || Global_1051439.f_3259 == (iVar0 - 1));
}

void func_440(int iParam0)
{
	Global_1051439.f_3628 = (Global_1051439.f_3628 || iParam0);
}

bool func_441()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_26538) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_26538, false));
}

int func_442()
{
	return Global_1051252.f_12;
}

char* func_443()
{
	return "unnamed";
}

int func_444(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_445(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_553(36, iParam0);
}

int func_446(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219.f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (Global_1296859.f_22[iParam0])
	{
		return Global_1100469[iParam0 /*53*/].f_1;
	}
	return 26;
}

bool func_447(int iParam0)
{
	if (func_554(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_555(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

bool func_448(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

bool func_449(var uParam0)
{
	if (!func_556(uParam0))
	{
		return false;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

int func_450(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_197(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_451(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_557(iParam0, iParam1, iParam2, iParam3);
}

int func_452(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_558(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_112(bParam1), iParam0, iParam3);
}

bool func_453(struct<2> Param0, var uParam2)
{
	if (!func_48(Param0))
	{
		return false;
	}
	func_559(uParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636[Param0.f_1 /*3*/]), 3);
			return true;
		case 3:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_602[Param0.f_1 /*3*/]), 3);
			return true;
		case 4:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_2104[Param0.f_1 /*3*/]), 3);
			return true;
		case 5:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_12606[Param0.f_1 /*3*/]), 3);
			return true;
		case 6:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_12908[Param0.f_1 /*3*/]), 3);
			return true;
		case 7:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_15910[Param0.f_1 /*3*/]), 3);
			return true;
		case 8:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_16512[Param0.f_1 /*3*/]), 3);
			return true;
		default:
			break;
	}
	return false;
}

bool func_454(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541.f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_455()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1257541.f_8863;
	vVar1.f_2 = -1041770777;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_456()
{
	return Global_1109804.f_5737.f_632;
}

int func_457(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < Global_1109804.f_5737.f_451[iVar0 /*2*/])
	{
		return func_457(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > Global_1109804.f_5737.f_451[iVar0 /*2*/])
	{
		return func_457(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_458(int iParam0)
{
	return Global_1109804.f_5737.f_451[iParam0 /*2*/].f_1;
}

bool func_459(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

bool func_460(var uParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = func_560();
	if (!DATAFILE::_0x7907969497EA92F5(uVar0))
	{
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return false;
	}
	MISC::_COPY_MEMORY(uParam0, &uVar1, 5);
	*uParam0 = uVar0;
	return true;
}

bool func_461(struct<5> Param0, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(bParam5, &Param0))
	{
		return false;
	}
	return true;
}

struct<8> func_462(struct<5> Param0)
{
	return func_561(Param0, 52, 1);
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_5"):
			return 0;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_5"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_3"):
			return 1;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_5"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_1"):
			return 2;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_5"):
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_464(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_48(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_562(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_465(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_366(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887.f_13 != -1)
	{
		return (Global_17411[iParam0] && iParam1) != 0;
	}
	return (Global_39.f_4667[iParam0] && iParam1) != 0;
}

bool func_466(int iParam0)
{
	if (!func_366(iParam0))
	{
		return false;
	}
	return func_465(iParam0, 2, 1);
}

int func_467(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102219.f_16)
	{
		return 0;
	}
	if (!func_563())
	{
		return 0;
	}
	if (!func_194())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_470(&Global_0, 8);
	}
	func_470(&Global_0, 1);
	return 1;
}

int func_468(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 22:
		case 23:
		case 25:
		case 26:
		case 31:
		case 33:
		case 36:
		case 37:
			return 1;
		default:
			return 0;
	}
	return 0;
}

void func_469(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_96(239, 0);
			break;
		case 16:
			func_96(240, 0);
			break;
		case 34:
			func_96(241, 0);
			break;
		case 52:
			func_96(242, 0);
			break;
		case 2:
			func_96(243, 0);
			break;
		case 3:
			func_96(244, 0);
			break;
		case 53:
			func_96(245, 0);
			break;
		case 15:
			func_96(246, 0);
			break;
		case 24:
			func_96(247, 0);
			break;
		case 38:
			func_96(248, 0);
			break;
		case 27:
			func_96(249, 0);
			break;
		case 13:
			func_96(250, 0);
			break;
		case 19:
			func_96(251, 0);
			break;
		case 20:
			func_96(252, 0);
			break;
		case 35:
			func_96(253, 0);
			break;
		case 39:
			func_96(254, 0);
			break;
		case 50:
			func_96(255, 0);
			break;
		case 7:
			func_96(256, 0);
			break;
		case 21:
			func_96(257, 0);
			break;
		case 18:
			func_96(258, 0);
			break;
		case 6:
			func_96(259, 0);
			break;
		case 30:
			func_96(260, 0);
			break;
		case 49:
			func_96(261, 0);
			break;
		case 11:
			break;
		case 4:
			func_96(263, 0);
			break;
		case 8:
			func_96(264, 0);
			break;
		case 29:
			func_96(265, 0);
			break;
		case 32:
			func_96(266, 0);
			break;
		case 12:
			func_96(267, 0);
			break;
		case 28:
			func_96(268, 0);
			break;
		case 51:
			func_96(269, 0);
			break;
	}
}

void func_470(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_471()
{
	return true;
	if (Global_1572887.f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

int func_472(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_564(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200.f_1546;
		case 1:
			return Global_1956200.f_1565.f_136;
		default:
			break;
	}
	return -1;
}

void func_473(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859.f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

int func_474(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_564(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200.f_1546.f_1;
		case 1:
			return Global_1956200.f_1565.f_136.f_1;
		default:
			break;
	}
	return -1;
}

void func_475(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_565(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if ((PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f) && !bParam2)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_0xAB3773E7AA1E9DCC(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		PLAYER::_0x200114E99552462B(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, fVar2);
	}
}

int func_476(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_564(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200.f_1546.f_2;
		case 1:
			return Global_1956200.f_1565.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_477(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859.f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	PED::_CHARGE_PED_STAMINA(iParam1, fParam0);
}

float func_478(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_566();
	func_567(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_568(iParam0, 2);
	if (func_570(iVar0, func_569(iParam0, 2), 1))
	{
		func_571(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_96(103, bParam2);
		return 0f;
	}
	func_572(iParam0, func_566(), 2);
	func_571(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_479(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_564(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200.f_1431.f_6[iParam0 /*3*/];
		case 1:
			return Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/];
		default:
			break;
	}
	return -1f;
}

int func_480(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_564(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_573(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 100f)
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_574(iParam0, 7000, iParam5);
		}
		func_575(iVar0, iParam0, fParam1);
		func_576(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

int func_481(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_577(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_578(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_373(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_578(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_579(joaat("STATUS_EFFECT__TRACKING"));
			func_375(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_578(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_374(-1, 0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_579(joaat("STATUS_EFFECT__POISON"));
			func_580(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_580(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_580(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2 /*2*/].f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_482()
{
	if (Global_1956200.f_1431.f_107 == -15)
	{
		return true;
	}
	return func_581(Global_1956200.f_1431.f_107, 0);
}

void func_483(float fParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_582(13, 2);
	iVar1 = func_583(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_584(fVar0, 0f, 100f);
	iVar2 = func_583(fVar0);
	if (iVar1 != iVar2)
	{
		Global_1956200.f_1431.f_107 = func_566();
		func_585(&(Global_1956200.f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_586(13, fVar0, 2);
	Global_1956200.f_1431.f_99 = iParam1;
}

bool func_484()
{
	return !Global_1913504;
}

void func_485(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1913504.f_3)
	{
		if ((((Global_1913504.f_4[iVar0 /*6*/] == iParam0 && Global_1913504.f_4[iVar0 /*6*/].f_2 == bParam2) && Global_1913504.f_4[iVar0 /*6*/].f_3 == bParam3) && Global_1913504.f_4[iVar0 /*6*/].f_4 == bParam4) && Global_1913504.f_4[iVar0 /*6*/].f_5 == bParam5)
		{
			Global_1913504.f_4[iVar0 /*6*/].f_1 = (Global_1913504.f_4[iVar0 /*6*/].f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913504.f_3 < 19)
	{
		Global_1913504.f_4[Global_1913504.f_3 /*6*/] = iParam0;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_1 = iParam1;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_2 = bParam2;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_3 = bParam3;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_4 = bParam4;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_5 = bParam5;
		Global_1913504.f_3++;
	}
}

char* func_486(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_487(int iParam0, int iParam1)
{
	if (!func_41(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

char* func_488(int iParam0)
{
	if (func_62(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_62(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_62(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_62(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_62(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_62(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_62(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_62(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_62(iParam0, -352095726) || func_62(iParam0, -2014783736)) || func_62(iParam0, -545064757)) || func_62(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_489(int iParam0)
{
	if (func_62(iParam0, -189374246))
	{
		if (((func_587(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_ALBINO")) || func_587(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_MELANISTIC"))) || func_587(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_PATTERNED"))) || func_587(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_RED_BLONDE")))
		{
			return true;
		}
	}
	if (func_62(iParam0, -753854379) || func_62(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_490(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_491(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_41(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35 /*2*/].f_1 == 14460646)
			{
				if (Var0.f_18[iVar35 /*2*/] != 0)
				{
					return Var0.f_18[iVar35 /*2*/];
				}
			}
			iVar35++;
		}
	}
	return 0;
}

bool func_492(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, -949239683))
	{
		return true;
	}
	return false;
}

int func_493(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_41(iParam0, 0) && !func_262(func_131(iParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_494(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_588(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_495(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_41(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_589(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_590(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_591(iParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_496(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_497(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_403(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_498()
{
	if ((Global_1940311.f_10901 != (Global_1940311.f_38.f_203 - 1) || func_593(func_592(0), Global_1940311.f_10893, 0, 1, 1) > 0) || Global_1940311.f_10901 == 15)
	{
		return true;
	}
	func_594();
	if (Global_1940311.f_6)
	{
		return true;
	}
	return false;
}

void func_499(int iParam0)
{
	Global_1940311.f_10 = iParam0;
}

void func_500(int iParam0)
{
	Global_1940311.f_9 = iParam0;
}

int func_501(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_170(iVar0);
}

int func_502()
{
	return Global_1952637.f_1675;
}

int func_503(bool bParam0)
{
	struct<4> Var0;
	int iVar14;
	struct<4> Var15;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<14> Var22;

	Var0.f_9 = -1591664384;
	iVar14 = 0;
	Var15 = { func_122(joaat("WARDROBE"), func_179(1), 1034665895, 1) };
	iVar19 = func_312(Var15, 552979403, 1, -1);
	if (iVar19 != 0)
	{
		if (iVar19 == joaat("CLOTHING_MP_FEMALE_PLAYER_CHARACTER"))
		{
			iVar14 = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
		}
		else if (iVar19 == joaat("CLOTHING_MP_MALE_PLAYER_CHARACTER"))
		{
			iVar14 = joaat("MPC_PLAYER_TYPE_MP_MALE");
		}
		return iVar14;
	}
	Var22 = { func_215(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };
	if (func_218(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_104(&Var0, 0, iVar20, iVar21))
		{
			if (Var0.f_4 == joaat("CLOTHING_MP_FEMALE_PLAYER_CHARACTER"))
			{
				iVar14 = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
			}
			else if (Var0.f_4 == joaat("CLOTHING_MP_MALE_PLAYER_CHARACTER"))
			{
				iVar14 = joaat("MPC_PLAYER_TYPE_MP_MALE");
			}
			else
			{
				func_106(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_313(Var0, 1, 0);
			}
			func_106(iVar20);
			return iVar14;
		}
		func_106(iVar20);
	}
	return 0;
}

int func_504(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 217155793 /* GXTEntry: "Outfit One" */;
		case 2:
			return 97391779 /* GXTEntry: "Outfit Two" */;
		case 3:
			return -808817534 /* GXTEntry: "Outfit Three" */;
		case 4:
			return 1270922359 /* GXTEntry: "Outfit Four" */;
		case 5:
			return -2011879201 /* GXTEntry: "Outfit Five" */;
		case 6:
			return -1063340820 /* GXTEntry: "Outfit Six" */;
		case 7:
			return 2127262701;
		case 8:
			return -1323870201 /* GXTEntry: "Outfit Eight" */;
		case 9:
			return 1632140501 /* GXTEntry: "Outfit Nine" */;
		case 10:
			return 967218463 /* GXTEntry: "Outfit Ten" */;
		default:
			break;
	}
	return 0;
}

int func_505(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_41(iParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(iParam0, -442898163, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

struct<10> func_506(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_507(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_508(int iParam0)
{
	if (!func_41(iParam0, 0))
	{
	}
	if (func_62(iParam0, -393037696))
	{
		return 1;
	}
	return 0;
}

int func_509(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_510(int iParam0)
{
	switch (iParam0)
	{
		case joaat("KIT_POUCH_REMEDIES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case joaat("KIT_POUCH_INGREDIENTS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case joaat("KIT_POUCH_MATERIALS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case joaat("KIT_POUCH_VALUABLES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case joaat("KIT_POUCH_KIT"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case joaat("KIT_POUCH_PROVISIONS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

void func_511(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_512(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	if (*uParam1 <= 0)
	{
		*uParam1 = 0;
		return false;
	}
	if (Global_1952637.f_3334.f_26 <= 1)
	{
		Global_1952637.f_3334.f_26 = 0;
		*uParam1 = 0;
		Global_1952637.f_3334[0] = 0;
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1952637.f_3334.f_26 - 1))
	{
		if (iParam0 == Global_1952637.f_3334[iVar0])
		{
			bVar1 = true;
		}
		if (bVar1 && iVar0 < (Global_1952637.f_3334.f_26 - 1))
		{
			Global_1952637.f_3334[iVar0] = Global_1952637.f_3334[iVar0 + 1];
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_1952637.f_3334.f_26 = (Global_1952637.f_3334.f_26 - 1);
		*uParam1 = (*uParam1 - 1);
		Global_1952637.f_3334[Global_1952637.f_3334.f_26] = 0;
		func_394(iParam0, 1, bParam2);
	}
	return bVar1;
}

bool func_513(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	int iVar11;

	iVar11 = 0;
	Var4 = func_519(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_596(uParam0, func_595(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_306(-1);
		}
		if (DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, -1212855483))
		{
			iVar11 = func_595(iVar0);
		}
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_171(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("COMPONENT")))
			{
			}
			else
			{
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bVar2)
				{
					func_597(iVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @362; //curOff = 297
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_598(iVar3) && func_430(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					iVar1 = 16;
					if (bVar2)
					{
						if (!bParam8)
						{
							func_600(uParam0, iVar11, func_599(iParam1) != 0, iParam9);
						}
					}
					else if ((((func_299() == joaat("MPC_PLAYER_TYPE_MP_FEMALE") && uParam0->f_1[iVar1 /*3*/] == Global_1952637.f_83[iVar1 /*12*/]) && func_599(uParam0->f_1[34 /*3*/]) == 0) && !func_163(32)) && !func_163(64))
					{
						uParam0->f_1[iVar1 /*3*/] = func_525(-1293064293, 0);
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
						func_309(uParam0, uParam0->f_1[iVar1 /*3*/], iVar1, 0, iParam9);
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

void func_514(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_515(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_516(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_517(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_518(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_519(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_299();
	}
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		return -1806335803;
	}
	else if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		return -971050805;
	}
	return 0;
}

void func_520(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (func_62(iVar1, 160827531) || func_74(iVar1) == 81053684)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam2);
	}
}

void func_521(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_62(uParam0->f_1[iVar0 /*3*/], -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam2);
	}
}

void func_522(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (-525676072 == func_74(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam2);
	}
}

bool func_523(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_74(iParam0);
	if (iParam2 == 0)
	{
		return (iVar0 == 1759215194 || iVar0 == 344283346);
	}
	return (!bParam1 && (iVar0 == -1740828670 || iVar0 == 344283346));
}

bool func_524(int iParam0)
{
	return (Global_17411.f_55.f_644.f_1734 && iParam0) != 0;
}

int func_525(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	iVar2 = 0;
	Var3 = { func_215(0, -1591664384, iParam0, -1591664384, 0, 0, 0) };
	if (func_218(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_601(iVar0, iVar1, iParam1);
		}
		func_106(iVar0);
	}
	return iVar2;
}

void func_526(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_62(iParam2, -1527414429)) && !func_62(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430 || uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721) && func_62(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			func_307(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
			func_307(iVar0, iParam3);
		}
	}
}

void func_527(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	if (uParam0->f_1[iParam2 /*3*/].f_1 != -2081918609)
	{
		iVar0 = 34;
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_62(iVar1, 1583165364))
		{
			uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
			func_307(iParam2, iParam3);
		}
		else
		{
			iVar0 = 35;
			iVar1 = uParam0->f_1[iVar0 /*3*/];
			if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && 1769055947 == func_74(iVar1))
			{
				uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
				func_307(iParam2, iParam3);
			}
		}
	}
}

void func_528(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 16;
	func_307(iVar0, iParam3);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_307(iVar0, iParam3);
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
		{
			func_307(iVar0, iParam3);
			func_422(uParam0, 0, uParam0->f_1[iVar0 /*3*/], iParam3);
		}
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_62(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_62(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
		}
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_62(iParam2, -1527414429)) && !func_62(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
}

void func_529(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_307(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && !func_62(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	iVar0 = 13;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_62(iParam2, 675650051))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
}

bool func_530(int iParam0)
{
	return Global_1952637.f_1675.f_1[func_171(iParam0, 1) /*3*/] != Global_1952637.f_83[func_171(iParam0, 1) /*12*/];
}

void func_531(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam1);
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_307(iVar0, iParam1);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_307(iVar0, iParam1);
	}
}

void func_532(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam1)
	{
		return;
	}
	bVar2 = false;
	iVar3 = 0;
	if (func_299() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar3 = 1;
	}
	if (func_299() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1952637.f_83[iVar0 /*12*/] && func_74(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[iVar0 /*3*/] = func_525(Global_1952637.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_307(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	func_307(iVar0, iParam3);
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_62(iParam2, -1473580422))
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_62(iVar1, 1469783911))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		}
		else if (func_429(uParam0->f_1[iVar0 /*3*/], iVar3, -2081918609) != -1)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_74(iVar1) == 912453393)
		{
			bVar2 = true;
			if (func_62(iParam2, 1583165364))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
				func_307(iVar0, iParam3);
			}
		}
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (iVar1 != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_74(iVar1) == 1868067663 && func_62(iParam2, -1016441646))
		{
			func_602(uParam0, iVar0, iParam3);
		}
		else if (bVar2)
		{
			func_307(iVar0, iParam3);
		}
	}
	iVar0 = 34;
	if (1759215194 == func_74(uParam0->f_1[iVar0 /*3*/]))
	{
		func_307(16, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_62(iParam2, -1650340550))
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_74(iVar1) == 1769055947)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_307(iVar0, iParam3);
		}
	}
}

void func_533(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	if (func_299() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1952637.f_83[iVar0 /*12*/] && func_74(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[iVar0 /*3*/] = func_525(Global_1952637.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_307(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_62(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_539(uParam0, iParam3, 1, 0);
		}
		else if (func_62(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
	}
	func_307(iVar0, iParam3);
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_62(iVar1, 1090938458)) && func_62(iParam2, 475297062))
	{
		func_602(uParam0, iVar0, iParam3);
	}
}

void func_534(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	func_307(36, iParam2);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam2);
	}
	if (func_299() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1952637.f_83[iVar0 /*12*/])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0 /*3*/] = func_525(Global_1952637.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_307(iVar0, iParam2);
		}
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (iVar1 != Global_1952637.f_83[iVar0 /*12*/] && func_62(iVar1, 353024991))
	{
		func_602(uParam0, iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && 1769055947 == func_74(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam2);
	}
}

void func_535(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_74(iVar1) == 294388917)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	iVar0 = 18;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_74(iVar1) == 912453393)
		{
			if (uParam0->f_1[iVar0 /*3*/].f_1 != joaat("BASE"))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
				func_307(iVar0, iParam3);
			}
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_307(iVar0, iParam3);
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_62(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_539(uParam0, iParam3, 1, 0);
		}
		else if (func_62(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
	}
}

void func_536(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_602(uParam0, iVar0, iParam2);
	}
	iVar0 = 21;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam2);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam2);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam2);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_62(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_539(uParam0, iParam2, 1, 0);
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			func_307(iVar0, iParam2);
		}
	}
}

void func_537(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 34;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_307(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
		func_307(iVar0, iParam3);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_62(iParam2, -1278198125))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (912453393 == func_74(iVar1) && uParam0->f_1[iVar0 /*3*/].f_1 != -2081918609)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
			func_307(iVar0, iParam3);
		}
	}
}

void func_538(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_62(iParam2, -1278198125) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam3);
	}
}

void func_539(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam1);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam1);
	}
	iVar0 = 38;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -923693316 == func_74(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_307(iVar0, iParam1);
	}
}

void func_540(var uParam0, int iParam1, int iParam2)
{
	Global_17411.f_55.f_644.f_33[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
}

void func_541(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	Global_17411.f_55.f_644.f_33[iParam1 /*120*/].f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_540(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_542(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17411.f_55.f_644.f_33[iParam1 /*120*/] = (Global_17411.f_55.f_644.f_33[iParam1 /*120*/] || iParam0);
	}
}

bool func_543(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_112(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_343(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

struct<28> func_544(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<28> Var0;
	struct<29> Var28;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_112(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_550(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_545(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_336(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_338(func_603(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_339(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_546(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<25> Var0;
	struct<24> Var25;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_112(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_550(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_547(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_338(func_604(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_339(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_548(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<17> Var0;
	struct<15> Var17;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_112(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_550(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_549(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_336(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_338(func_605(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_339(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_550(var uParam0, bool bParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_111(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_314() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_551()
{
	return func_48(Global_1051213);
}

bool func_552(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

bool func_553(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_606(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_607())
	{
		return func_606(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_606(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_554(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_555(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!Global_1296859.f_22[iVar0])
	{
		func_608(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_609(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

bool func_556(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_557(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346.f_20 < 20)
	{
		Global_1293346.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_20.f_1[iVar0 /*21*/] = { Global_1293346.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_610(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

bool func_558(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_559(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

var func_560()
{
	return Global_1071686.f_28448[32 /*4*/].f_3;
}

struct<8> func_561(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	struct<8> Var0;

	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_STRING(&Var0, &vParam0))
	{
	}
	return Var0;
}

int func_562(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_348(Param0);
	}
	return -1;
}

bool func_563()
{
	return !Global_1572887.f_9;
}

int func_564(int iParam0)
{
	return func_612(func_611(iParam0));
}

bool func_565(int iParam0)
{
	float fVar0;

	fVar0 = (func_613(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

int func_566()
{
	return Global_1902818;
}

void func_567(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_614(*iParam0);
	iVar1 = func_615(*iParam0);
	iVar2 = func_616(*iParam0);
	iVar3 = func_617(*iParam0);
	iVar4 = func_618(*iParam0);
	iVar5 = func_619(*iParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_620(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_621(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_568(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_564(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200.f_1431.f_6[iParam0 /*3*/].f_2;
		case 1:
			return Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/].f_2;
		default:
			break;
	}
	return -1;
}

int func_569(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_564(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200.f_1431.f_6[iParam0 /*3*/].f_1;
		case 1:
			return Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/].f_1;
		default:
			break;
	}
	return -15;
}

bool func_570(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_622(iParam1) || !func_622(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_571(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_564(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_572(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_564(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
		default:
			break;
	}
}

bool func_573(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_623(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_574(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_564(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_16[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_575(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_624(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_625(iParam1), fParam2, -1);
	}
}

void func_576(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_564(2);
	}
	uVar0 = Global_1296859.f_21;
	func_626(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_627(iParam0, uVar0, iParam3);
	}
}

bool func_577(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

char* func_578(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_579(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	iVar1 = Global_1146212.f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = Global_1146212.f_47689.f_1[iVar2 /*2*/];
		iVar3 = func_628(iVar0, 1);
		if (Global_1146212.f_35859.f_919[iVar3 /*12*/] == iParam0)
		{
			func_629(iVar0);
			Global_1146212.f_47689.f_1.f_42 = (Global_1146212.f_47689.f_1.f_42 - 1);
		}
		else
		{
			Var6[iVar4 /*2*/] = { Global_1146212.f_47689.f_1[iVar2 /*2*/] };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		Global_1146212.f_47689.f_1[iVar5 /*2*/] = { Var6[iVar5 /*2*/] };
		iVar5++;
	}
}

void func_580(int iParam0, bool bParam1, bool bParam2)
{
	func_480(iParam0, 100f, bParam1, bParam2, 1, 2);
}

bool func_581(int iParam0, bool bParam1)
{
	return func_570(func_566(), iParam0, bParam1);
}

float func_582(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_564(1);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200.f_1431.f_26[iParam0];
		case 1:
			return Global_1956200.f_1565.f_2.f_26[iParam0];
		default:
			break;
	}
	return -1f;
}

int func_583(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return BUILTIN::ROUND(((fVar0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

float func_584(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_585(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_614(*iParam0);
	iVar1 = func_615(*iParam0);
	iVar2 = func_616(*iParam0);
	iVar3 = func_617(*iParam0);
	iVar4 = func_618(*iParam0);
	iVar5 = func_619(*iParam0);
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
	iVar6 = func_620(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_620(iVar1, iVar0);
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
	func_621(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_586(int iParam0, float fParam1, int iParam2)
{
	if (!func_630(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_564(2);
	}
	func_631(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1296859.f_8))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1296859.f_8, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

int func_587(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1224357681))
	{
		return 1;
	}
	return 0;
}

int func_588(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43 /*2*/].f_1 == iParam1)
			{
				iVar41 = Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_589(int iParam0)
{
	int iVar0;

	if (!func_41(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_402(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

bool func_590(int iParam0)
{
	if (func_74(iParam0) == -126813555 || func_74(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_591(int iParam0)
{
	int iVar0;

	if (!func_41(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_491(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

int func_592(int iParam0)
{
	return PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_593(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_45(iParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_632(iParam0, iParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_633(iParam1, bParam4));
	}
	return iVar0;
}

void func_594()
{
	if (!func_41(Global_1940311.f_10893, 0))
	{
		Global_1940311.f_6 = 0;
	}
	else if ((((func_136(Global_1940311.f_10893, 1224357681) != 0 && Global_1940311.f_10892 != 0) && Global_1940311.f_10892 != -2074770370) && !Global_1915715.f_20638) && !Global_1915715.f_22504.f_1)
	{
		Global_1940311.f_6 = 1;
	}
	else
	{
		Global_1940311.f_6 = 0;
	}
}

int func_595(int iParam0)
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
			return 256;
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 512;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 1024;
		case -915377750:
			return 2048;
		case -1283403230:
			return 4096;
		case 1024778115:
			return 8192;
		case 75507907:
			return 16384;
		case -1678578495:
			return 32768;
		case -1925540957:
			return 65536;
		case -1932005642:
			return 131072;
		case -803648582:
			return 128;
		case 351949263:
			return 262144;
		case -597281578:
			return 524288;
		case 465720259:
			return 1048576;
		case 396349281:
			return 2097152;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 2160;
		case -141044514:
			return 8304;
		case 884232794:
			return 16496;
		case 836721350:
			return 40960;
		case -1062102573:
			return 65601;
		case -884591393:
			return 96;
		case -1886898087:
			return 32880;
		case -1629261761:
			return 2049;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_596(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_634(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			if (func_635(iVar0, iParam1))
			{
				vVar4 = { func_636(iVar0, -1) };
				if (((!bParam4 && vVar4.x != Global_1952637.f_83[iVar0 /*12*/]) && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_637(iVar0, 4))
				{
					func_638(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_639(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = Global_1952637.f_83[iVar0 /*12*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

void func_597(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[func_171(iParam0, 1) /*12*/].f_11 = (Global_1952637.f_83[func_171(iParam0, 1) /*12*/].f_11 || iParam1);
}

bool func_598(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1952637.f_1043.f_2 = 0;
	iVar0 = 1226838104;
	func_514(&(Global_1952637.f_1043), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1952637.f_1043));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1952637.f_1043), 1409451727))
	{
		return false;
	}
	return true;
}

int func_599(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_41(iParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(iParam0, 761377030, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

void func_600(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (func_62(uParam0->f_1[34 /*3*/], -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_637(iVar0, 16);
		if (bVar1)
		{
			func_638(iVar0, 16, 9);
		}
		if (Global_1952637.f_83[iVar0 /*12*/].f_3[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_307(iVar0, iParam3);
			}
			if (!bParam2 && func_599(uParam0->f_1[iVar0 /*3*/]) != 0)
			{
			}
			else if (func_635(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
				func_309(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 1, iParam3);
				func_307(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_309(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_601(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<10> Var1;
	int iVar15;
	int iVar16;

	Var1.f_9 = -1591664384;
	iVar16 = 0;
	if (func_299() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_104(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (PED::_GET_PED_COMPONENT_CATEGORY(Var1.f_4, iVar16, true) == 0)
		{
			if ((Var1.f_4 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE") && Var1.f_4 != 1326838792) && Var1.f_4 != -230310728)
			{
			}
			else if (func_599(Var1.f_4) != 0)
			{
			}
			else if (func_62(Var1.f_4, -166674229))
			{
			}
			else if (func_62(Var1.f_4, 525391395))
			{
			}
			else
			{
				iVar15 = func_74(Var1.f_4);
				if (func_641(iParam2, func_640(iVar15)))
				{
				}
				else
				{
					return Var1.f_4;
				}
			}
			iVar0++;
			return 0;
		}
	}
}

void func_602(var uParam0, int iParam1, int iParam2)
{
	if (func_62(uParam0->f_1[iParam1 /*3*/], 343781202))
	{
		func_412(uParam0, uParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		uParam0->f_1[iParam1 /*3*/] = Global_1952637.f_83[iParam1 /*12*/];
		uParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_307(iParam1, iParam2);
	}
}

bool func_603(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

bool func_604(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_605(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_606(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_607()
{
	return Global_1102219.f_3672;
}

void func_608(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_609(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_609(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

void func_610(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_642(&(uParam0->f_4));
}

bool func_611(int iParam0)
{
	return func_606(&(Global_1956200.f_1565), iParam0, 1);
}

int func_612(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_613(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_643(2)));
}

int func_614(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_644(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_615(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_616(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_617(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_618(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_619(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_620(int iParam0, int iParam1)
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

void func_621(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_645(iParam0, iParam6);
	func_646(iParam0, iParam5);
	func_647(iParam0, iParam4);
	func_648(iParam0, iParam3);
	func_649(iParam0, iParam2);
	func_650(iParam0, iParam1);
}

bool func_622(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_619(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_618(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_617(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_614(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_615(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_616(iParam0);
	if (iVar5 < 1 || iVar5 > func_620(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_623(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

char* func_624(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_625(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_626(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_564(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_6[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_627(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_564(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_16[iParam0 /*3*/].f_2 = uParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_16[iParam0 /*3*/].f_2 = uParam1;
			break;
		default:
			break;
	}
}

int func_628(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2059285007:
			return 167;
		case -2006026692:
			return 176;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 173;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1685270562:
			return 181;
		case -1631930150:
			return 166;
		case -1629969648:
			return 174;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1391865428:
			return 171;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1196069774:
			return 180;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 172;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -813902658:
			return 182;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -340578116:
			return 169;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 177;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -46116991:
			return 163;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 183;
		case 320758674:
			return 158;
		case 352539363:
			return 179;
		case 362862598:
			return 170;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 456199285:
			return 168;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 175;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1281707602:
			return 164;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1449867002:
			return 162;
		case 1498983922:
			return 84;
		case 1547488310:
			return 161;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1636352616:
			return 151;
		case 1662680949:
			return 178;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1865781806:
			return 165;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

int func_629(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_651(iParam0))
	{
		return 0;
	}
	iVar0 = func_628(iParam0, 1);
	if (!func_652(Global_1146212.f_35859.f_919[iVar0 /*12*/]))
	{
		return 1;
	}
	iVar3 = func_653(Global_1146212.f_35859.f_919[iVar0 /*12*/], 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212.f_35859[iVar3 /*6*/].f_5)
	{
		iVar1 = Global_1146212.f_35859[iVar3 /*6*/][iVar4];
		switch (func_654(iParam0, iVar1))
		{
			case 0:
				func_655(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1146212.f_35859.f_11700)
				{
					if (Global_1146212.f_35859.f_9503[iVar5 /*3*/] != iVar1 || Global_1146212.f_35859.f_9503[iVar5 /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_655(iVar1, iParam0, iVar4);
						func_656(&(Global_1146212.f_35859.f_9503[iVar5 /*3*/]));
						Global_1146212.f_35859.f_11700 = (Global_1146212.f_35859.f_11700 - 1);
						Global_1146212.f_35859.f_9503[iVar5 /*3*/] = { Global_1146212.f_35859.f_9503[Global_1146212.f_35859.f_11700 /*3*/] };
						func_656(&(Global_1146212.f_35859.f_9503[Global_1146212.f_35859.f_11700 /*3*/]));
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_657(iVar1, 1);
				func_658(iVar2, -1);
				if (Global_1146212.f_35859.f_3116[iVar2 /*31*/].f_29 <= 0)
				{
					func_659(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1146212.f_35859.f_9502)
					{
						if (Global_1146212.f_35859.f_9302[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1146212.f_35859.f_9302[iVar6] = -1;
							Global_1146212.f_35859.f_9502 = (Global_1146212.f_35859.f_9502 - 1);
							Global_1146212.f_35859.f_9302[iVar6] = Global_1146212.f_35859.f_9302[Global_1146212.f_35859.f_9502];
							Global_1146212.f_35859.f_9302[Global_1146212.f_35859.f_9502] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1146212.f_35859.f_919[iVar0 /*12*/] = -1;
			func_660(&(Global_1146212.f_35859.f_919[iVar0 /*12*/]));
			return 1;
		}

bool func_630(int iParam0)
{
	if (func_577(iParam0))
	{
		return true;
	}
	else if (func_661(iParam0))
	{
		return true;
	}
	return false;
}

void func_631(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_564(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

int func_632(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_662(iParam1))
		{
			iVar0 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (Global_1904087.f_113[iVar1 /*96*/].f_1 == iParam1)
				{
					iVar0++;
				}
				iVar1++;
			}
			return iVar0;
		}
		else
		{
			return func_663(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), iParam1);
		}
	}
	return 0;
}

int func_633(int iParam0, bool bParam1)
{
	if (!bParam1 || func_664())
	{
		return func_178(iParam0, func_179(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

bool func_634(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_635(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1952637.f_83[iParam0 /*12*/].f_10 && iParam1) != 0;
}

Vector3 func_636(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	return Global_17411.f_55.f_644.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

bool func_637(int iParam0, int iParam1)
{
	return (Global_1952637.f_83[iParam0 /*12*/].f_11 && iParam1) != 0;
}

void func_638(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[iParam0 /*12*/].f_11 = (Global_1952637.f_83[iParam0 /*12*/].f_11 - (Global_1952637.f_83[iParam0 /*12*/].f_11 && iParam1));
}

void func_639(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[iParam0 /*12*/].f_11 = (Global_1952637.f_83[iParam0 /*12*/].f_11 || iParam1);
}

int func_640(int iParam0)
{
	switch (iParam0)
	{
		case 502936876:
			return 1;
		case 684307653:
			return 2;
		case 1759215194:
			return 4;
		case -1740828670:
			return 8;
		case 344283346:
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_641(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_642(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

int func_643(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_472(2) * 2;
		case 1:
			return func_476(2) * 2;
		case 2:
			return func_474(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_644(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_645(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_646(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_647(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_615(*iParam0);
	iVar1 = func_614(*iParam0);
	if (iParam1 < 1 || iParam1 > func_620(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_648(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_649(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_650(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_651(int iParam0)
{
	int iVar0;

	iVar0 = func_628(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_652(int iParam0)
{
	int iVar0;

	iVar0 = func_653(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_653(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3"):
			return 100;
		case joaat("CONTENT__PREDATOR__LEVEL_0"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3"):
			return 63;
		case -2082434331:
			return 152;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2"):
			return 65;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2"):
			return 93;
		case -2038430863:
			return 151;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1"):
			return 64;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2"):
			return 35;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3"):
			return 6;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2"):
			return 56;
		case joaat("CONTENT__PREDATOR__LEVEL_3"):
			return 139;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3"):
			return 54;
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS"):
			return 110;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2"):
			return 78;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1"):
			return 80;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2"):
			return 62;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME"):
			return 73;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2"):
			return 41;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1"):
			return 25;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1"):
			return 92;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2"):
			return 47;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1"):
			return 61;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3"):
			return 3;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1"):
			return 49;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY"):
			return 148;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS"):
			return 107;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS"):
			return 111;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1"):
			return 55;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3"):
			return 9;
		case joaat("CONTENT__PREDATOR__LEVEL_1"):
			return 137;
		case -1246069683:
			return 124;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1"):
			return 46;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1"):
			return 74;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3"):
			return 69;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1"):
			return 7;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_7"):
			return 143;
		case -1105699593:
			return 153;
		case -1047626954:
			return 118;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1"):
			return 1;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3"):
			return 79;
		case -980934770:
			return 125;
		case joaat("CONTENT__PREDATOR__LEVEL_4"):
			return 140;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5"):
			return 132;
		case joaat("CONTENT__PREDATOR__LEVEL_6"):
			return 142;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3"):
			return 60;
		case -821191074:
			return 115;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1"):
			return 40;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3"):
			return 48;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1"):
			return 77;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2"):
			return 17;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2"):
			return 2;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3"):
			return 72;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM"):
			return 121;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2"):
			return 59;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3"):
			return 85;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3"):
			return 94;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1"):
			return 4;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2"):
			return 68;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1"):
			return 58;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY"):
			return 119;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1"):
			return 10;
		case joaat("CONTENT__HUNTED__MASKED"):
			return 146;
		case joaat("CONTENT__PASSIVE_MODE"):
			return 135;
		case -193167881:
			return 127;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3"):
			return 30;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN"):
			return 122;
		case joaat("CONSUMABLE__DAILY_STEW"):
			return 150;
		case joaat("CONTENT__PREDATOR__LEVEL_5"):
			return 141;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1"):
			return 67;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1"):
			return 43;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS"):
			return 106;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3"):
			return 39;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2"):
			return 8;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2"):
			return 11;
		case 130533095:
			return 126;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3"):
			return 18;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2"):
			return 44;
		case 158579484:
			return 117;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE"):
			return 101;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3"):
			return 15;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS"):
			return 113;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6"):
			return 133;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1"):
			return 86;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2"):
			return 71;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2"):
			return 29;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS"):
			return 105;
		case joaat("STATUS_EFFECT__POISON"):
			return 102;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7"):
			return 134;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS"):
			return 109;
		case 549687162:
			return 145;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1"):
			return 28;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1"):
			return 16;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2"):
			return 26;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1"):
			return 98;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF"):
			return 149;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3"):
			return 45;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3"):
			return 88;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3"):
			return 36;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2"):
			return 90;
		case joaat("CONTENT__PREDATOR__LEVEL_8"):
			return 144;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2"):
			return 81;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS"):
			return 114;
		case 808176588:
			return 116;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2"):
			return 38;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1"):
			return 70;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3"):
			return 21;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2"):
			return 14;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2"):
			return 96;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3"):
			return 82;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2"):
			return 87;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS"):
			return 104;
		case 1130659268:
			return 123;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2"):
			return 20;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2"):
			return 75;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1"):
			return 31;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3"):
			return 97;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1"):
			return 19;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2"):
			return 32;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2"):
			return 129;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS"):
			return 112;
		case joaat("CONTENT__PREDATOR__LEVEL_2"):
			return 138;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1"):
			return 83;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF"):
			return 147;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3"):
			return 57;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1"):
			return 22;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3"):
			return 33;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3"):
			return 130;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1"):
			return 13;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2"):
			return 84;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1"):
			return 95;
		case joaat("EQUIPMENT__NED_KELLY_COOP"):
			return 120;
		case joaat("STATUS_EFFECT__TRACKING"):
			return 103;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2"):
			return 23;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2"):
			return 99;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3"):
			return 66;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1"):
			return 52;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3"):
			return 27;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3"):
			return 76;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2"):
			return 5;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3"):
			return 42;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1"):
			return 37;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1"):
			return 34;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS"):
			return 108;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2"):
			return 53;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3"):
			return 91;
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

int func_654(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_665(iParam0);
	iVar1 = Global_1296859;
	iVar2 = func_657(iParam1, 1);
	switch (Global_1146212.f_35859.f_3116[iVar2 /*31*/].f_1)
	{
		case joaat("ON_DISABLE"):
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("DURATION"):
		case joaat("DURATION_OR_MISS"):
		case joaat("ALLY_LEAVE_DEADEYE"):
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_655(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_651(iParam1))
	{
		return 0;
	}
	if (!func_666(iParam0))
	{
		return 0;
	}
	iVar0 = func_657(iParam0, 1);
	func_667(iParam0, iParam1, iParam2);
	if (func_668(Global_1146212.f_35859.f_3116[iVar0 /*31*/]) && func_669(iParam0, Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		vVar1 = { func_670(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (func_671(vVar1))
		{
			if (func_672(vVar1.x, vVar1.y, vVar1.z))
			{
				func_673(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_674(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4);
			}
		}
		else
		{
			func_674(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4);
		}
	}
	return 1;
}

void func_656(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_657(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT"):
			return 145;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT"):
			return 108;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT"):
			return 90;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT"):
			return 79;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT"):
			return 60;
		case joaat("STATUS_EFFECT__POISON_EFFECT"):
			return 137;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT"):
			return 91;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT"):
			return 75;
		case -2019073637:
			return 198;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT"):
			return 26;
		case joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS"):
			return 180;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT"):
			return 92;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT"):
			return 194;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT"):
			return 28;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT"):
			return 130;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT"):
			return 49;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT"):
			return 22;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT"):
			return 55;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR"):
			return 6;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT"):
			return 134;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT"):
			return 29;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT"):
			return 16;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT"):
			return 112;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT"):
			return 106;
		case joaat("ABILITY_CARD__HANGMAN_INDICATOR"):
			return 30;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR"):
			return 8;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT"):
			return 111;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT"):
			return 96;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT"):
			return 45;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT"):
			return 63;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT"):
			return 38;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS"):
			return 188;
		case joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES"):
			return 156;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT"):
			return 117;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT"):
			return 39;
		case joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS"):
			return 182;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT"):
			return 109;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT"):
			return 33;
		case -1394912816:
			return 199;
		case -1391351739:
			return 166;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT"):
			return 27;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT"):
			return 110;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST"):
			return 1;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY"):
			return 46;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST"):
			return 2;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT"):
			return 132;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT"):
			return 119;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT"):
			return 76;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA"):
			return 61;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT"):
			return 173;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT"):
			return 47;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT"):
			return 74;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT"):
			return 31;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT"):
			return 123;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT"):
			return 124;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT"):
			return 11;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR"):
			return 103;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT"):
			return 21;
		case joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS"):
			return 184;
		case -749371485:
			return 164;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT"):
			return 142;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT"):
			return 81;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT"):
			return 148;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT"):
			return 193;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT"):
			return 57;
		case joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS"):
			return 181;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT"):
			return 48;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT"):
			return 59;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT"):
			return 97;
		case joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS"):
			return 185;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT"):
			return 104;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT"):
			return 19;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT"):
			return 133;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT"):
			return 113;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR"):
			return 23;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT"):
			return 160;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR"):
			return 5;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA"):
			return 13;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST"):
			return 66;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR"):
			return 4;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT"):
			return 172;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY"):
			return 68;
		case -254950601:
			return 152;
		case -242870769:
			return 163;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT"):
			return 35;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT"):
			return 105;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT"):
			return 41;
		case joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS"):
			return 155;
		case -124368414:
			return 197;
		case -106398498:
			return 153;
		case -97000889:
			return 86;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT"):
			return 169;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT"):
			return 56;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT"):
			return 125;
		case joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR"):
			return 9;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT"):
			return 69;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT"):
			return 15;
		case joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT"):
			return 177;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST"):
			return 64;
		case joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS"):
			return 175;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT"):
			return 98;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT"):
			return 77;
		case 275909046:
			return 151;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT"):
			return 171;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR"):
			return 54;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT"):
			return 127;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT"):
			return 129;
		case 558636891:
			return 187;
		case joaat("CONSUMABLE__DAILY_STEW_EFFECT"):
			return 196;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT"):
			return 80;
		case 634217179:
			return 150;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT"):
			return 70;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT"):
			return 95;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT"):
			return 195;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT"):
			return 107;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT"):
			return 139;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT"):
			return 20;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT"):
			return 82;
		case joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS"):
			return 178;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT"):
			return 65;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT"):
			return 58;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT"):
			return 83;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT"):
			return 149;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT"):
			return 18;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST"):
			return 102;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT"):
			return 170;
		case joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS"):
			return 186;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT"):
			return 84;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT"):
			return 100;
		case joaat("CONTENT__HUNTED__MASKED_EFFECTS"):
			return 192;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR"):
			return 93;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS"):
			return 183;
		case joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS"):
			return 157;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT"):
			return 17;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT"):
			return 122;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT"):
			return 115;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT"):
			return 34;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT"):
			return 32;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT"):
			return 43;
		case joaat("STATUS_EFFECT__TRACKING_EFFECT"):
			return 138;
		case joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS"):
			return 176;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT"):
			return 42;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT"):
			return 10;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA"):
			return 73;
		case 1256374770:
			return 165;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT"):
			return 36;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT"):
			return 37;
		case joaat("CONTENT__PREDATOR__BASE_IMMUNITIES"):
			return 190;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT"):
			return 114;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT"):
			return 99;
		case 1305406380:
			return 162;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT"):
			return 144;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT"):
			return 25;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT"):
			return 88;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT"):
			return 143;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT"):
			return 140;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR"):
			return 94;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT"):
			return 168;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT"):
			return 85;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT"):
			return 87;
		case 1462245043:
			return 154;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE"):
			return 189;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT"):
			return 146;
		case joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS"):
			return 191;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT"):
			return 147;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST"):
			return 62;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT"):
			return 78;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR"):
			return 126;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR"):
			return 116;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES"):
			return 72;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT"):
			return 67;
		case joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR"):
			return 101;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT"):
			return 158;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT"):
			return 71;
		case joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS"):
			return 179;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT"):
			return 135;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST"):
			return 3;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT"):
			return 121;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT"):
			return 141;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT"):
			return 167;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT"):
			return 40;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR"):
			return 7;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST"):
			return 53;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT"):
			return 118;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT"):
			return 44;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT"):
			return 161;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST"):
			return 52;
		case joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS"):
			return 174;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT"):
			return 120;
		case joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT"):
			return 159;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT"):
			return 14;
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

void func_658(int iParam0, int iParam1)
{
	Global_1146212.f_35859.f_3116[iParam0 /*31*/].f_29 = (Global_1146212.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1);
}

void func_659(int iParam0, int iParam1)
{
	Global_1146212.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
}

void func_660(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0 /*2*/] = 0;
		uParam0->f_1[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
}

bool func_661(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return true;
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

bool func_662(int iParam0)
{
	if (!func_492(iParam0, 1955773996))
	{
		return false;
	}
	if (!func_675(iParam0, 1))
	{
		return false;
	}
	return true;
}

int func_663(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_41(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_676(iParam0, iParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, 0);
	return iVar4;
}

bool func_664()
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!func_677(iVar0))
	{
		return false;
	}
	return true;
}

int func_665(int iParam0)
{
	if (func_678(iParam0))
	{
		return (func_679(iParam0) % 32);
	}
	return Global_1296859;
}

bool func_666(int iParam0)
{
	int iVar0;

	iVar0 = func_657(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

int func_667(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_628(iParam1, 1);
	iVar1 = func_657(iParam0, 1);
	iVar2 = func_653(Global_1146212.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1146212.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	if (!Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return 1;
	}
	Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_680(iVar3, 1);
		if (!func_681(iVar3))
		{
		}
		else
		{
			Global_1146212.f_2169[iVar5 /*205*/].f_1[iVar1] = (Global_1146212.f_2169[iVar5 /*205*/].f_1[iVar1] - 1);
			Global_1146212.f_2169[iVar5 /*205*/].f_201 = (Global_1146212.f_2169[iVar5 /*205*/].f_201 - func_682(&(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_683(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_684(iVar6))
		{
		}
		else
		{
			iVar8 = func_685(iVar6, 1);
			Global_1146212.f_21645[iVar8 /*209*/][iVar1] = (Global_1146212.f_21645[iVar8 /*209*/][iVar1] - 1);
			if (Global_1146212.f_21645[iVar8 /*209*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&(Global_1146212.f_21645[iVar8 /*209*/].f_200), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&(Global_1146212.f_21645[iVar8 /*209*/].f_200)))
			{
				Global_1146212.f_21645[iVar8 /*209*/].f_208 = 0;
				func_686(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_668(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_669(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_666(iParam0))
	{
		return false;
	}
	if (!func_687(iParam1))
	{
		return false;
	}
	iVar0 = func_688(iParam1, 1);
	return Global_1146212.f_35859.f_9286[iVar0 /*3*/] == iParam0;
}

Vector3 func_670(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_689(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return Global_1146212.f_35859.f_9503[iVar0 /*3*/];
}

bool func_671(vector3 vParam0)
{
	if (!func_666(vParam0.x))
	{
		return false;
	}
	if (!func_651(vParam0.y))
	{
		return false;
	}
	if (!func_690(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_672(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_628(iParam1, 1);
	iVar1 = func_657(iParam0, 1);
	iVar2 = func_653(Global_1146212.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1146212.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		return false;
	}
	Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1296859.f_21;
	if (Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return true;
	}
	Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_680(iVar3, 1);
		if (!func_681(iVar3))
		{
		}
		else
		{
			Global_1146212.f_2169[iVar5 /*205*/].f_1[iVar1]++;
			Global_1146212.f_2169[iVar5 /*205*/].f_201 = (Global_1146212.f_2169[iVar5 /*205*/].f_201 + func_682(&(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_691(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_684(iVar6))
		{
		}
		else if (!func_692(&(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/])))
		{
		}
		else
		{
			iVar8 = func_685(iVar6, 1);
			Global_1146212.f_21645[iVar8 /*209*/][iVar1]++;
			MISC::_0xE84AAC1B22A73E99(&(Global_1146212.f_21645[iVar8 /*209*/].f_200), iVar1);
			if (!Global_1146212.f_21645[iVar8 /*209*/].f_208)
			{
				Global_1146212.f_21645[iVar8 /*209*/].f_208 = 1;
				func_693(iVar6);
			}
		}
		iVar7++;
	}
	func_694(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_2);
	return true;
}

void func_673(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_687(iParam0))
	{
		return;
	}
	iVar0 = func_688(iParam0, 1);
	if (!func_666(iParam1))
	{
		return;
	}
	if (!func_651(iParam2))
	{
		return;
	}
	if (!func_690(iParam3))
	{
		return;
	}
	Global_1146212.f_35859.f_9286[iVar0 /*3*/] = iParam1;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_1 = iParam2;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_2 = iParam3;
}

void func_674(int iParam0)
{
	int iVar0;

	if (!func_687(iParam0))
	{
		return;
	}
	iVar0 = func_688(iParam0, 1);
	Global_1146212.f_35859.f_9286[iVar0 /*3*/] = -1;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_1 = 0;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_2 = -1;
}

bool func_675(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_695(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

struct<4> func_676(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_696(iParam0) };
	return func_697(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_677(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("HUNTERCART01"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_678(int iParam0)
{
	int iVar0;

	iVar0 = func_628(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_679(int iParam0)
{
	int iVar0;

	iVar0 = func_628(iParam0, 1);
	if (func_678(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_698(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_699(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_700(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_701(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_702(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_703(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_680(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
		case joaat("MDEFENSE__BULLET"):
			return 49;
		case -1936069272:
			return 47;
		case joaat("MHEALTH__REGEN_RATE"):
			return 42;
		case joaat("MHORSE__TRAMPLE_DAMAGE"):
			return 58;
		case joaat("ADEADEYE_COST_PER_SHOT"):
			return 2;
		case joaat("MWEAPON__BOW_STAMINA_DRAIN"):
			return 41;
		case joaat("MDEFENSE__BULLET_USING_MELEE_WEAPON"):
			return 50;
		case joaat("MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 64;
		case joaat("MDAMAGE__DISTANCE_CLOSE"):
			return 37;
		case -1575020444:
			return 94;
		case -1572802418:
			return 71;
		case joaat("ALASSO__DAMAGE_DEALT_PER_SECOND"):
			return 78;
		case joaat("MDEFENSE__EXPLOSIVE"):
			return 53;
		case -1349331938:
			return 43;
		case joaat("MDAMAGE__MISSING_HEALTH_CONVERSION"):
			return 29;
		case joaat("ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT"):
			return 22;
		case joaat("ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT"):
			return 7;
		case joaat("MHORSE__DEFENSE"):
			return 56;
		case joaat("ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT"):
			return 23;
		case joaat("MDEFENSE__RANGED"):
			return 46;
		case joaat("MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON"):
			return 25;
		case joaat("MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 51;
		case joaat("MEAGLE_EYE__DEPLETION_RATE"):
			return 67;
		case joaat("MDEFENSE__FIRE"):
			return 52;
		case joaat("AHEALTH__GAIN_ON_KILL_PERCENT"):
			return 11;
		case joaat("MRPG_ATTIRBUTE_CORE_DRAIN_RATE"):
			return 66;
		case joaat("MDAMAGE__EXPLOSIVE_WEAPONS"):
			return 36;
		case joaat("MSTAMINA__REGEN_RATE"):
			return 75;
		case joaat("AHEALTH__ALTER_TANK_PER_SECOND_PERCENT"):
			return 14;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER"):
			return 73;
		case -377364039:
			return 60;
		case joaat("MACCURACY__AI_MODIFIER"):
			return 62;
		case joaat("MDAMAGE__FALLOFF"):
			return 39;
		case joaat("AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT"):
			return 15;
		case joaat("ADEADEYE_COST_DURATION"):
			return 1;
		case joaat("MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 65;
		case joaat("MSKILL__PERCEPTION"):
			return 83;
		case -1:
			return 0;
		case 66478954:
			return 93;
		case 91687087:
			return 79;
		case joaat("MSKILL__DISTILLER"):
			return 90;
		case 194431787:
			return 61;
		case joaat("MDEADEYE__GAIN_MULTIPLIER"):
			return 72;
		case joaat("MSKILL__PROTECTION_TRADER"):
			return 85;
		case joaat("MWEAPON__BOW_DRAW_TIME"):
			return 40;
		case joaat("MDEADEYE__DEPLETION_RATE"):
			return 70;
		case joaat("MSKILL__DIVINATION"):
			return 89;
		case 410940916:
			return 92;
		case 447408404:
			return 81;
		case joaat("ADEADEYE__GAIN_ON_HEADSHOT_PERCENT"):
			return 5;
		case joaat("MHEALTH__RECHARGE_RATE"):
			return 44;
		case joaat("MACCURACY__LOCAL_PLAYER_MODIFIER"):
			return 63;
		case joaat("MSKILL__INTUITION"):
			return 88;
		case joaat("MDAMAGE__MELEE"):
			return 30;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 19;
		case joaat("ADEADEYE__GAIN_ON_REVIVE_PERCENT"):
			return 4;
		case joaat("MSKILL__PROTECTION_MOONSHINE"):
			return 86;
		case joaat("MDEFENSE__PLAYERS"):
			return 48;
		case 874892169:
			return 95;
		case joaat("AHEALTH__ALTER_CORE_PER_SECOND_PERCENT"):
			return 16;
		case 920214733:
			return 91;
		case joaat("MINCAPACITATION__BLEEDOUT_TIME"):
			return 68;
		case joaat("ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT"):
			return 6;
		case joaat("MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING"):
			return 27;
		case joaat("ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT"):
			return 8;
		case joaat("MSTAMINA__REGEN_RATE_HEALTH_CONVERSION"):
			return 76;
		case joaat("MDEFENSE__MELEE"):
			return 45;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 20;
		case joaat("AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 10;
		case 1356998909:
			return 80;
		case joaat("MSKILL__FOCUS"):
			return 82;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON"):
			return 74;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 17;
		case 1546732394:
			return 34;
		case joaat("MDEFENSE__STAMINA_CONVERSION"):
			return 55;
		case joaat("MDAMAGE__DISTANCE_FAR"):
			return 38;
		case joaat("MDAMAGE__BULLETS"):
			return 32;
		case joaat("MDEFENSE__STRENGTH_IN_NUMBERS"):
			return 54;
		case 1727267699:
			return 69;
		case joaat("MDAMAGE__STAMINA_CONVERSION"):
			return 28;
		case joaat("ADEADEYE_COST_ACTIVATION"):
			return 3;
		case joaat("MSTAMINA__SPRINT_DEPLETION_RATE"):
			return 77;
		case joaat("ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT"):
			return 21;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 18;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON"):
			return 12;
		case joaat("MDAMAGE__ALL_WEAPONS"):
			return 24;
		case joaat("MDAMAGE__THROWN"):
			return 31;
		case joaat("MSKILL__AWARENESS"):
			return 84;
		case joaat("MHORSE__DEFENSE_PLAYERS"):
			return 57;
		case joaat("ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT"):
			return 9;
		case joaat("MDAMAGE__SHOTGUN"):
			return 33;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON"):
			return 13;
		case joaat("MDAMAGE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 35;
		case joaat("MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT"):
			return 26;
		case joaat("MSKILL__POTENTIAL"):
			return 87;
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

bool func_681(int iParam0)
{
	int iVar0;

	iVar0 = func_680(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_682(var uParam0)
{
	float fVar0;

	if (uParam0->f_2 != 0)
	{
		fVar0 = func_704(794259616, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_683(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_681(iParam0))
	{
		return;
	}
	iVar0 = func_680(iParam0, 1);
	if (!func_705(Global_1146212.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] = (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] - 1);
	if (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] > 0)
	{
		return;
	}
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] = 0;
	Global_1146212.f_2169[iVar0 /*205*/].f_204 = 0;
	if (!func_706(Global_1146212.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_707(Global_1146212.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] = (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] - 1);
	if (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < Global_1146212.f_47561[iVar1 /*25*/].f_23)
	{
		if (Global_1146212.f_47561[iVar1 /*25*/][iVar2] != Global_1146212.f_2169[iVar0 /*205*/])
		{
		}
		else
		{
			Global_1146212.f_47561[iVar1 /*25*/][iVar2] = -1;
			Global_1146212.f_47561[iVar1 /*25*/].f_23 = (Global_1146212.f_47561[iVar1 /*25*/].f_23 - 1);
			Global_1146212.f_47561[iVar1 /*25*/][iVar2] = Global_1146212.f_47561[iVar1 /*25*/][Global_1146212.f_47561[iVar1 /*25*/].f_23];
			Global_1146212.f_47561[iVar1 /*25*/][Global_1146212.f_47561[iVar1 /*25*/].f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

bool func_684(int iParam0)
{
	int iVar0;

	iVar0 = func_685(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_685(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("EAGLE_EYE_HIGHLIGHT_BOUNTIES"):
			return 52;
		case joaat("HEADSHOT_IMMUNITY"):
			return 12;
		case joaat("HAT_BLOCKS_HEADSHOT"):
			return 11;
		case joaat("ANIMAL_TURN_IN_EFFICIENCY"):
			return 64;
		case joaat("DISABLE_HEALTH_REGENERATION"):
			return 2;
		case joaat("FIRE_CAP_INFINTE"):
			return 41;
		case joaat("SLOW_AND_STEADY_AURA"):
			return 28;
		case joaat("EAGLE_EYE_HIGHLIGHT_EARTH"):
			return 53;
		case -1730553768:
			return 3;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return 25;
		case -1651690657:
			return 65;
		case joaat("NO_CRITICAL_DAMAGE_AGAINST_PLAYERS"):
			return 10;
		case -1583192324:
			return 66;
		case joaat("REVIVE_ON_BLEEDOUT"):
			return 34;
		case -1486292178:
			return 67;
		case joaat("LASSO_IMMUNITY"):
			return 5;
		case joaat("DISABLE_JUMPING"):
			return 45;
		case joaat("GRAPPLE_IMMUNITY_FROM_AI"):
			return 31;
		case -1026481003:
			return 6;
		case joaat("TAGGING_IMMUNITY"):
			return 13;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			return 33;
		case joaat("ON_HORSE_SPEED_RESTRICTION_JOG"):
			return 59;
		case joaat("FATAL_MELEE_IMMUNITY"):
			return 32;
		case joaat("FORCE_HEALTH_REGEN"):
			return 1;
		case joaat("CONFUSION_EFFECT"):
			return 14;
		case joaat("FULL_LOCKON_IMMUNITY"):
			return 4;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			return 36;
		case -350459285:
			return 68;
		case joaat("DAMAGE_CAP_INFINTE"):
			return 40;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			return 26;
		case -199042163:
			return 60;
		case joaat("NED_KELLY_ADVERSARY"):
			return 22;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
			return 55;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return 19;
		case -1:
			return 0;
		case joaat("TRAIL_EFFECT"):
			return 17;
		case joaat("POISON_EFFECT"):
			return 20;
		case joaat("ON_HORSE_SPEED_RESTRICTION_WALK"):
			return 61;
		case joaat("SLIPPERY_BASTARD_VFX"):
			return 24;
		case joaat("DISORIENT_EFFECT"):
			return 18;
		case joaat("FOCUS_FIRE_VFX"):
			return 23;
		case joaat("PREDATOR_ICON_DISPLAY"):
			return 39;
		case joaat("WOUND_EFFECT"):
			return 15;
		case 718630298:
			return 56;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			return 48;
		case joaat("NED_KELLY_BASE"):
			return 21;
		case joaat("DISABLE_COMBAT_DIVE"):
			return 46;
		case joaat("SLOW_AND_STEADY_VFX"):
			return 27;
		case joaat("DISABLE_FACIAL_ACTIONS"):
			return 43;
		case joaat("CANNOT_LOCK_ON_PLAYERS"):
			return 7;
		case joaat("GRAPPLE_IMMUNITY_FROM_PLAYERS"):
			return 30;
		case 1037859088:
			return 51;
		case 1066450193:
			return 54;
		case 1159158432:
			return 62;
		case joaat("OVERPOWER_PREDATOR"):
			return 37;
		case 1242495215:
			return 9;
		case joaat("ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS"):
			return 63;
		case 1341326366:
			return 58;
		case joaat("OVERRIDE_INFINITE_DEADEYE"):
			return 35;
		case 1398483650:
			return 50;
		case joaat("PULSE_REPOST_STATE"):
			return 38;
		case joaat("DISABLE_CONSUMABLES"):
			return 42;
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			return 57;
		case joaat("DISABLE_INCAPACITATION"):
			return 44;
		case joaat("DRAIN_EFFECT"):
			return 16;
		case 1898374676:
			return 49;
		case 2067881273:
			return 8;
		case joaat("DISABLE_DROWNING"):
			return 47;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			return 29;
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

void func_686(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_708();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_709();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_REMOVE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, false, 0f);
			GRAPHICS::_0xC5CB91D65852ED7E(func_710(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_710(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_710(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_96(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_710(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
			break;
		case joaat("PULSE_REPOST_STATE"):
			NETWORK::_0x442B4347B6EC36E8(iVar0, 0, true);
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_0x3FC4C027FD0936F4(15);
			break;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_0x5F8E0303C229C84B(iVar1, "");
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_712(func_711(iParam0));
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_0xAF4D239B8903FCBE();
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_0xCE285A4413B00B7F(iVar1, 1);
			break;
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, false);
			break;
		case 1398483650:
			PLAYER::_0xDFC85C5199045026(iVar1, 1f);
			PLAYER::_0x6FA957D1B55941C1(iVar1, -1f);
			break;
		case joaat("NED_KELLY_BASE"):
			func_713();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_705(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_705(16);
			break;
	}
}

bool func_687(int iParam0)
{
	int iVar0;

	iVar0 = func_688(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_688(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FOCUS_FIRE"):
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case joaat("QUITE_AN_INSPIRATION"):
			return 3;
		case 0:
			return 0;
		case 1938826026:
			return 2;
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

int func_689(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_714(iParam0);
	Var1.f_3 = 1065353216;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1065353216;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1146212.f_35859.f_11700)
	{
		iVar64 = func_657(Global_1146212.f_35859.f_9503[iVar65 /*3*/], 1);
		if (Global_1146212.f_35859.f_3116[iVar64 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1146212.f_35859.f_9503[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_715(Global_1146212.f_35859.f_9503[iVar65 /*3*/], Global_1146212.f_35859.f_9503[iVar65 /*3*/].f_1))
		{
		}
		else
		{
			Var1 = { func_716(Global_1146212.f_35859.f_9503[iVar65 /*3*/]) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

bool func_690(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

void func_691(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_681(iParam0))
	{
		return;
	}
	iVar0 = func_680(iParam0, 1);
	if (!func_705(Global_1146212.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0]++;
	Global_1146212.f_2169[iVar0 /*205*/].f_204 = 1;
	if (!func_706(Global_1146212.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_707(Global_1146212.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1]++;
	iVar2 = 0;
	while (iVar2 < Global_1146212.f_47561[iVar1 /*25*/].f_23)
	{
		if (Global_1146212.f_47561[iVar1 /*25*/][iVar2] == Global_1146212.f_2169[iVar0 /*205*/])
		{
			return;
		}
		iVar2++;
	}
	Global_1146212.f_47561[iVar1 /*25*/][Global_1146212.f_47561[iVar1 /*25*/].f_23] = Global_1146212.f_2169[iVar0 /*205*/];
	Global_1146212.f_47561[iVar1 /*25*/].f_23++;
}

bool func_692(var uParam0)
{
	bool bVar0;

	if (uParam0->f_1 != 0)
	{
		bVar0 = func_717(794259616, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_693(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_708();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_709();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, true, 0f);
			GRAPHICS::ANIMPOSTFX_PLAY(func_710(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_710(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_710(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_96(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_710(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_0xFB6E111908502871(15);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_0x5F8E0303C229C84B(iVar1, "focusfire");
			break;
		case joaat("SLIPPERY_BASTARD_VFX"):
			iVar2 = func_711(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_718(iParam0, 0));
			func_719(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_718(iParam0, 1));
			func_719(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_718(iParam0, 2));
			func_719(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_718(iParam0, 3));
			func_719(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			iVar2 = func_711(iParam0);
			func_719(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			iVar2 = func_711(iParam0);
			func_719(iVar2, 4, 1, -1, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_0x249CD6B7285536F2(0f, 2f, 2f);
			PLAYER::_0x768E81AE285A4B67(iVar1, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 25);
			PLAYER::_0x263D69767F76059C(iVar1, 2);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_0xCE285A4413B00B7F(iVar1, 0);
			break;
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, true);
			break;
		case 1398483650:
			PLAYER::_0xDFC85C5199045026(iVar1, 0.5f);
			PLAYER::_0x6FA957D1B55941C1(iVar1, 2f);
			break;
		case joaat("NED_KELLY_BASE"):
			func_720();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_705(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_705(16);
			break;
	}
}

void func_694(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_721(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_722(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::_PLAY_SOUND_FROM_ENTITY(sVar0, Global_1296859.f_8, sVar1, false, 0, 0);
}

int func_695(int iParam0)
{
	var uVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SATCHEL_DATA(iParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

struct<5> func_696(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_697(iParam0, joaat("CHARACTER"), func_314(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_697(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_41(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

bool func_698(int iParam0)
{
	int iVar0;

	iVar0 = func_628(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_699(int iParam0)
{
	int iVar0;

	iVar0 = func_628(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_700(int iParam0)
{
	int iVar0;

	iVar0 = func_628(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_701(int iParam0)
{
	int iVar0;

	iVar0 = func_628(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_702(int iParam0)
{
	int iVar0;

	iVar0 = func_628(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_703(int iParam0)
{
	int iVar0;

	iVar0 = func_628(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_704(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_723(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_705(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1146212.f_2166), iParam0))
	{
		return true;
	}
	if (Global_1146212.f_2165 >= 21)
	{
		return false;
	}
	Global_1146212.f_2143[Global_1146212.f_2165] = iParam0;
	Global_1146212.f_2165++;
	return true;
}

bool func_706(int iParam0)
{
	int iVar0;

	iVar0 = func_707(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_707(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CONSECUTIVE_DAMAGE_DEALT"):
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case joaat("CONSECUTIVE_DAMAGE_TAKEN"):
			return 4;
		case joaat("NEARBY_ALLIES"):
			return 2;
		case 1416591065:
			return 1;
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

void func_708()
{
	bool bVar0;
	bool bVar1;

	if (Global_1146212.f_21645[3 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 550, bVar0);
	if (Global_1146212.f_21645[4 /*209*/].f_208)
	{
		if (!func_197(Global_1298536[Global_1296859 /*87*/].f_86, 1))
		{
			bVar1 = true;
		}
	}
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 556, bVar1);
}

void func_709()
{
	bool bVar0;

	bVar0 = false;
	if (Global_1146212.f_21645[12 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 263, bVar0);
}

char* func_710(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRAIN_EFFECT"):
			return "MP_ArrowDrain";
		case joaat("DISORIENT_EFFECT"):
			return "MP_ArrowDisorient";
		case joaat("TRAIL_EFFECT"):
			return "MP_ArrowTracking";
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_711(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			return -843895567;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return joaat("MOMENT_TO_RECUPERATE_VFX");
		case joaat("SLOW_AND_STEADY_VFX"):
			return joaat("SLOW_AND_STEADY_VFX");
		default:
			break;
	}
	return 0;
}

void func_712(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1193972[iVar0 /*8*/].f_5 == iParam0)
		{
			Global_1193972[iVar0 /*8*/].f_7 = 1;
			Global_1193972[iVar0 /*8*/].f_5 = 0;
		}
		iVar0++;
	}
}

void func_713()
{
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1296859.f_8);
}

int func_714(int iParam0)
{
	int iVar0;

	if (!func_687(iParam0))
	{
		return -1;
	}
	iVar0 = func_688(iParam0, 1);
	return Global_1146212.f_35859.f_9286[iVar0 /*3*/];
}

bool func_715(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_666(iParam0))
	{
		return false;
	}
	iVar0 = func_657(iParam0, 1);
	iVar2 = Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4;
	if (func_668(Global_1146212.f_35859.f_3116[iVar0 /*31*/]))
	{
		iVar3 = Global_1146212.f_35859.f_9286[func_688(iVar2, 1) /*3*/];
		Var4 = { func_716(iVar3) };
		if (iVar3 != iParam0 && Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_5 <= Var4.f_5)
		{
			return false;
		}
	}
	switch (Global_1146212.f_35859.f_3116[iVar0 /*31*/])
	{
		case -1606735498:
		case joaat("ON_HEADSHOT"):
		case joaat("ENTER_WEARING_HAT"):
		case joaat("ENTER_SPRINTING"):
		case joaat("ENTER_MOUNTED"):
		case joaat("ENTER_DUAL_WIELD"):
		case -971275364:
		case joaat("ON_KILL"):
		case joaat("ENTER_SCENARIO"):
		case joaat("ENTER_REVIVER"):
		case -193993646:
		case joaat("ENTER_ALLY_NEARBY"):
		case -23641105:
		case joaat("ON_DAMAGE_TAKEN"):
		case joaat("ENTER_MELEE"):
		case joaat("ON_DAMAGE_DEALT_FROM_HORSEBACK"):
		case 429965152:
		case joaat("ON_DAMAGE_TAKEN_FROM_HORSEBACK"):
		case joaat("ENTER_WINDED"):
		case joaat("ENTER_NO_HAT"):
		case joaat("ON_ENABLE"):
		case joaat("ENTER_EAGLE_EYE"):
		case joaat("ENTER_DEADEYE"):
		case joaat("ENTER_SCOPED"):
		case joaat("ENTER_COVER"):
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case joaat("ENTER_DAMAGED"):
		case joaat("ON_DAMAGE_DEALT"):
		case joaat("ENTER_REVIVED"):
		case joaat("ENTER_LASSOING"):
		case joaat("ENTER_IN_VEHICLE"):
		case 2116793692:
			return true;
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_724() && !func_725())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_724())
			{
				return false;
			}
			return true;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_665(iParam1);
			if (iVar1 == Global_1296859)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_665(iParam1);
			if (iVar1 == Global_1296859)
			{
				return false;
			}
			if (!GANG::_0x424B17A7DC5C90BC(Global_1296859.f_154[Global_1296859]))
			{
				return false;
			}
			if (!GANG::_0x81FB74C83C2ED69F(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			return true;
		case joaat("ALLY_ENTER_DEADEYE"):
			iVar1 = func_665(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			if (iVar1 != Global_1296859 && !func_447(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			if (!func_438(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!Global_1956200.f_1716[8])
			{
				return false;
			}
			iVar1 = func_665(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			if (PED::_0x0C31C51168E80365(Global_1296859.f_8) != PLAYER::GET_PLAYER_PED(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

struct<31> func_716(int iParam0)
{
	int iVar0;

	iVar0 = func_657(iParam0, 1);
	return Global_1146212.f_35859.f_3116[iVar0 /*31*/];
}

bool func_717(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_723(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_718(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_719(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1193972[iVar0 /*8*/]) && !Global_1193972[iVar0 /*8*/].f_6)
		{
			Global_1193972[iVar0 /*8*/].f_5 = iParam0;
			Global_1193972[iVar0 /*8*/].f_1 = iParam1;
			Global_1193972[iVar0 /*8*/].f_2 = iParam2;
			Global_1193972[iVar0 /*8*/].f_3 = iParam3;
			Global_1193972[iVar0 /*8*/].f_4 = iParam4;
			Global_1193972[iVar0 /*8*/].f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_720()
{
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1296859.f_8, 0.7f);
}

char* func_721(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_722(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

bool func_723(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar7;

	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = joaat("NAME");
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("NAME")))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("TYPE"));
		uParam2->f_10.f_3 = func_726(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_10), &Var0, joaat("DEFAULT")))
				{
				}
				break;
			case 1:
				if (!DATAFILE::_0xB2B42607F7867576(&(uParam2->f_10.f_1), &Var0, joaat("DEFAULT")))
				{
				}
				break;
			case 2:
				if (!DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_10.f_2), &Var0, joaat("DEFAULT")))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_14), &Var0, joaat("MIN"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_14.f_1), &Var0, joaat("MIN"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_14.f_2), &Var0, joaat("MIN"));
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_18), &Var0, joaat("MAX"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_18.f_1), &Var0, joaat("MAX"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_18.f_2), &Var0, joaat("MAX"));
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return true;
	}
	return false;
}

bool func_724()
{
	return Global_1572887.f_6;
}

bool func_725()
{
	if (!Global_1048577)
	{
		return false;
	}
	if (!func_48(func_47(0)))
	{
		return false;
	}
	if (Global_3145858 != -504335712)
	{
		return false;
	}
	if (func_552(Global_524288.f_40400))
	{
		return true;
	}
	return false;
}

int func_726(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("INT"):
			iVar0 = 0;
			break;
		case joaat("FLOAT"):
			iVar0 = 1;
			break;
		case joaat("BOOL"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}


#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_26 = false;
	bool bLocal_27 = false;
	bool bLocal_28 = false;
	bool bLocal_29 = false;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	struct<107> Local_33 = { 5, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2 } ;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 570;
	var uLocal_143 = 1065353216;
	var uLocal_144 = -1082130432;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 2;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 570;
	var uLocal_160 = 1065353216;
	var uLocal_161 = -1082130432;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 2;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = -1;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	struct<248> Local_179 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1067450368, 1071644672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 1065353216;
	var uLocal_444 = 1119092736;
	var uLocal_445 = 1092616192;
	var uLocal_446 = 1085276160;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	struct<25> Local_450 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1 } ;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	vector3 vLocal_487[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_512 = 0;
	int iLocal_513 = 0;
	var uLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517[2] = { 0, 0 };
	var uLocal_520 = 2;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	int iLocal_523[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_533 = 0;
	var uLocal_534[5] = { 0, 0, 0, 0, 0 };
	vector3 vLocal_540 = { 0f, 0f, 0f };
	vector3 vLocal_543 = { 0f, 0f, 0f };
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	bool bLocal_549 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_513 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_549 = true;
	}
	while (true)
	{
		func_2(bLocal_549, 965, 0);
		if (bLocal_549)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (Local_179.f_95 < 13)
			{
				if (func_3(&ScriptParam_0))
				{
					func_4(&Local_179, 13);
				}
			}
			if (func_5())
			{
				func_6();
			}
			func_7();
			switch (Local_179.f_95)
			{
				case 0:
					if (func_8(ScriptParam_0))
					{
						func_4(&Local_179, 1);
					}
					break;
				case 1:
					if (func_9())
					{
						if (func_10())
						{
							func_4(&Local_179, 2);
						}
						else if (Local_179.f_217 > 0)
						{
							func_4(&Local_179, 3);
						}
						else if (Local_179.f_218 > 0)
						{
							func_4(&Local_179, 4);
						}
						else if (Local_179.f_216 > 0)
						{
							func_4(&Local_179, 5);
						}
						else
						{
							func_4(&Local_179, 6);
						}
					}
					break;
				case 2:
					if (func_10())
					{
						func_11();
					}
					func_4(&Local_179, 3);
					break;
				case 3:
					if (func_12())
					{
						if (func_13())
						{
							func_4(&Local_179, 4);
						}
					}
					break;
				case 4:
					if (func_14())
					{
						func_4(&Local_179, 5);
					}
					break;
				case 5:
					if (func_15())
					{
						func_4(&Local_179, 6);
					}
					break;
				case 6:
					if (func_16())
					{
						func_4(&Local_179, 7);
					}
					break;
				case 7:
					if (func_17())
					{
						Global_40.f_9632[Local_179.f_151 /*4*/].f_2 = (1 + Global_40.f_9632[Local_179.f_151 /*4*/].f_2);
						if (func_18(&Global_1393447, 65536))
						{
							func_19(&Global_1393447, 65536);
						}
						if (func_18(&Global_1393447, 16))
						{
							func_19(&Global_1393447, 16);
						}
						func_4(&Local_179, 8);
					}
					break;
				case 8:
					if (func_20())
					{
						if (Local_179.f_20 > (100f - 10f))
						{
							func_21();
							func_4(&Local_179, 9);
						}
						else
						{
							func_22(&Local_179, 16);
						}
					}
					break;
				case 9:
					if (func_23())
					{
						Local_179.f_225 = ENTITY::GET_ENTITY_HEALTH(Global_35);
						Local_179.f_226 = func_24();
						if (Global_40.f_9632.f_194 != Local_179.f_151)
						{
							switch (Local_179.f_151)
							{
								case 0:
								case 5:
								case 6:
								case 11:
								case 35:
								case 42:
									break;
								default:
									func_25(&Local_179, 1);
									break;
							}
						}
						func_26();
						func_27(&Local_179);
						Local_179.f_21 = Local_179.f_20;
						func_28(&Local_179, 1);
						PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
						func_22(&Local_179, 16384);
						func_4(&Local_179, 10);
					}
					break;
				case 10:
					func_29();
					if (func_30(&Local_179, 32768) || func_31())
					{
						switch (Local_179.f_151)
						{
							case 0:
							case 5:
							case 6:
							case 11:
							case 35:
							case 42:
								break;
							default:
								func_32(&Local_179, 1);
								break;
						}
						func_33(&Local_179, 1);
						func_34(120, 0, 1);
						func_35(1, -1, 0, 0, 0);
						func_36(&Local_179);
						func_4(&Local_179, 11);
					}
					break;
				case 11:
					func_37(&Local_179);
					func_38();
					if (func_39(&Local_179))
					{
						if (func_18(&Global_1393447, 16))
						{
							func_19(&Global_1393447, 16);
						}
						func_40(&(Local_179.f_244), 0);
						func_4(&Local_179, 12);
					}
					break;
				case 12:
					func_41(&Local_179);
					func_38();
					if (func_42())
					{
						if (func_18(&Global_1393447, 16))
						{
							func_19(&Global_1393447, 16);
						}
						func_4(&Local_179, 13);
					}
					break;
				case 13:
					func_1();
					break;
			}
			BUILTIN::WAIT(0);
		}
	}
}

void func_1()
{
	float fVar0;

	if (func_18(&Global_1393447, 2))
	{
		func_19(&Global_1393447, 2);
	}
	if (func_18(&Global_1393447, 16))
	{
		func_19(&Global_1393447, 16);
	}
	if (func_18(&Global_1393447, 32768))
	{
		func_19(&Global_1393447, 32768);
	}
	if (func_43())
	{
		if (func_30(&Local_179, 4))
		{
			func_44(0);
			func_45(&Local_179, 4);
		}
	}
	fVar0 = 8f;
	if (Local_179.f_151 == 17)
	{
		fVar0 = 12f;
	}
	if (((!func_46() && !func_47(&(Local_179.f_250), fVar0)) && !CAM::IS_SCREEN_FADED_OUT()) && !func_48())
	{
		func_40(&(Local_179.f_250), 0);
		return;
	}
	if (func_47(&(Local_179.f_250), fVar0))
	{
	}
	func_37(&Local_179);
	func_49();
	func_50(&Local_179, 0);
	func_51();
	func_52(&Local_179);
	PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
	func_28(&Local_179, 1);
	func_53(&Local_179, 0);
	if (Local_179.f_93 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_179.f_93);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_179.f_237))
	{
		func_54(&Local_179);
		func_55(Local_179.f_237);
	}
	func_33(&Local_179, 1);
	if (Local_179.f_95 >= 9 && Local_179.f_95 < 11)
	{
		if (func_56(Local_179.f_151))
		{
		}
		else if (func_57(Local_179.f_151, 1) || func_58(Local_179.f_151, 1))
		{
			func_59(&Global_1393447, 2048);
			if (!func_60(&(Local_179.f_244)))
			{
				func_34(120, 0, 1);
			}
		}
	}
	if (func_61(Global_35, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
	}
	if (func_61(Local_179.f_56, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_179.f_56, false);
	}
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_62(Local_179.f_151)))
	{
		MISC::_0x1096603B519C905F("");
	}
	func_63(Local_179.f_151);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_64(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_3(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	var uVar5;

	if (func_65())
	{
		return true;
	}
	if (Global_16)
	{
		return true;
	}
	if (func_66(0, 1, 1))
	{
		return true;
	}
	if (Local_179.f_95 <= 9 && Local_179.f_96 & 2097152 == 0)
	{
		if (func_18(&Global_1393447, 2))
		{
			if (func_67(&Local_179))
			{
				func_19(&Global_1393447, 2);
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	else if (Global_1393447.f_2 & 2 != 0)
	{
		func_19(&Global_1393447, 2);
		return false;
	}
	if (Local_179.f_96 & 16 != 0)
	{
		return true;
	}
	if (Local_179.f_95 < 10 && Local_179.f_96 & 1048576 == 0)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (func_68())
			{
				if (!uParam0->f_8)
				{
					return true;
				}
			}
			if (!func_69(Local_179.f_209))
			{
				if (Local_179.f_20 > 207f)
				{
					if (Local_179.f_223 == 0)
					{
						Local_179.f_223 = MISC::GET_GAME_TIMER() + 1000;
						return false;
					}
					else if (Local_179.f_223 < MISC::GET_GAME_TIMER())
					{
						vVar0 = { func_70(PLAYER::PLAYER_ID()) };
						return true;
					}
				}
				else
				{
					Local_179.f_223 = 0;
				}
			}
		}
	}
	else
	{
		if (func_71())
		{
			return true;
		}
		if (func_72(&uVar5))
		{
			fVar4 = func_73();
			iVar3 = 0;
			while (iVar3 < Local_179.f_215)
			{
				if (Local_179.f_9[iVar3] < fVar4)
				{
					if (func_61(Local_179[iVar3], 0, 1))
					{
						return false;
					}
				}
				iVar3++;
			}
			return true;
		}
	}
	return false;
}

void func_4(int iParam0, int iParam1)
{
	iParam0->f_95 = iParam1;
}

bool func_5()
{
	return false;
}

void func_6()
{
}

void func_7()
{
	func_74();
	func_75();
}

bool func_8(struct<8> Param0, var uParam8)
{
	float fVar0;
	vector3 vVar1;
	bool bVar4;

	if (Global_1879534.f_1)
	{
		return false;
	}
	if (func_69(Local_179.f_209))
	{
		func_76(&(Local_179.f_152));
		func_77(&(Local_179.f_152));
		func_78(&(Local_179.f_152), 0);
		func_79(&(Local_179.f_152), 1);
		func_80(&(Local_179.f_152), 6f);
		Local_179.f_209 = { Param0 };
		Local_179.f_151 = Param0.f_3;
		Local_179.f_221 = Param0.f_4;
		Local_179.f_222 = func_81(Local_179.f_151);
		if (Param0.f_7)
		{
			func_22(&Local_179, 2);
		}
		if (!func_82(Local_179.f_151))
		{
			func_4(&Local_179, 12);
			return false;
		}
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_179.f_209, true);
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (fVar0 < 200f)
		{
			if (func_83())
			{
				vVar1 = { func_84(Local_179.f_151, 0, Local_179.f_221) };
				vVar1 = { func_84(Local_179.f_151, 1, Local_179.f_221) };
				if (func_85())
				{
					if (func_86(&Local_179))
					{
						func_22(&Local_179, 1);
					}
				}
				if (!Local_179.f_227)
				{
					if (func_87(Local_179.f_181, 0))
					{
						Local_179.f_227 = func_88(Local_179.f_181, -1);
					}
				}
				if (func_89(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					func_4(&Local_179, 13);
					return false;
				}
				else
				{
					if (!bVar4)
					{
						func_90(&Local_179);
						func_91(&Local_179, 8672);
					}
					PED::_0xED9582B3DA8F02B4((((Local_179.f_215 + Local_179.f_216) + Local_179.f_217 * 2) + Local_179.f_219) + 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_9()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < Local_179.f_216)
	{
		iVar3 = func_92(iVar1);
		STREAMING::REQUEST_MODEL(iVar3, false);
		if (!STREAMING::HAS_MODEL_LOADED(iVar3))
		{
			bVar0 = false;
		}
		iVar1++;
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 < Local_179.f_216)
		{
			iVar3 = func_92(iVar1);
			iVar2 = func_93(iVar1);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(Local_179.f_66[iVar1]))
			{
				if (iVar2 == func_94())
				{
				}
				else
				{
					Local_179.f_66[iVar1] = PED::_REQUEST_METAPED_OUTFIT(iVar3, iVar2);
					bVar0 = false;
					Jump @162; //curOff = 137
					if (!PED::_0x610438375E5D1801(Local_179.f_66[iVar1]))
					{
						bVar0 = false;
					}
				}
				iVar1++;
				STREAMING::REQUEST_MODEL(joaat("P_LANTERN09X"), false);
				if (!func_95())
				{
					return false;
				}
				iVar1 = 0;
				while (iVar1 < Local_179.f_215)
				{
					iVar2 = func_96(iVar1);
					iVar4 = func_97(iVar1);
					if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(Local_179.f_31[iVar1]))
					{
						if (iVar2 == func_94())
						{
						}
						else
						{
							Local_179.f_31[iVar1] = PED::_REQUEST_METAPED_OUTFIT(iVar4, iVar2);
							bVar0 = false;
							Jump @293; //curOff = 268
							if (!PED::_0x610438375E5D1801(Local_179.f_31[iVar1]))
							{
								bVar0 = false;
							}
						}
						iVar1++;
						if (!STREAMING::HAS_MODEL_LOADED(joaat("P_LANTERN09X")))
						{
							bVar0 = false;
						}
						if (!PED::_0x5E420FF293EE5472())
						{
							bVar0 = false;
						}
						return bVar0;
					}
				}
			}
		}
	}
}

bool func_10()
{
	return false;
}

void func_11()
{
}

bool func_12()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	if (Local_179.f_217 <= 0)
	{
		return true;
	}
	iVar0 = Local_179.f_220;
	iVar1 = func_98(iVar0);
	vVar2 = { func_99(iVar0) };
	fVar5 = func_100(iVar0);
	if (iVar1 != 0)
	{
		if (func_101(iVar0))
		{
			if (!func_102(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		Local_179.f_49[iVar0] = VEHICLE::CREATE_VEHICLE(iVar1, vVar2, fVar5, true, true, false, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_179.f_49[iVar0], 0f);
		ENTITY::SET_ENTITY_VISIBLE(Local_179.f_49[iVar0], true);
		ENTITY::_0x3F08C6163A4AB1D6(Local_179.f_49[iVar0]);
		func_103(Local_179.f_49[iVar0]);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_179.f_49[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_179.f_49[iVar0], true, false);
		}
	}
	Local_179.f_220++;
	if (Local_179.f_220 >= Local_179.f_217)
	{
		Local_179.f_220 = 0;
		return true;
	}
	return false;
}

bool func_13()
{
	return true;
}

bool func_14()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	if (Local_179.f_218 <= 0)
	{
		return true;
	}
	iVar0 = Local_179.f_220;
	iVar1 = func_104(iVar0);
	vVar2 = { func_105(iVar0) };
	fVar5 = func_106(iVar0);
	if (iVar1 != 0)
	{
		if (func_107(iVar0))
		{
			if (!func_102(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		Local_179.f_52[iVar0] = OBJECT::CREATE_OBJECT(iVar1, vVar2, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_179.f_52[iVar0], 0f, 0f, fVar5, 2, true);
		ENTITY::SET_ENTITY_VISIBLE(Local_179.f_52[iVar0], false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_179.f_52[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_179.f_52[iVar0], true, false);
		}
		if (func_107(iVar0))
		{
			OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(Local_179.f_52[iVar0], 0);
		}
	}
	Local_179.f_220++;
	if (Local_179.f_220 >= Local_179.f_218)
	{
		Local_179.f_220 = 0;
		return true;
	}
	return false;
}

bool func_15()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	vector3 vVar12;

	if (Local_179.f_216 <= 0)
	{
		return true;
	}
	iVar0 = Local_179.f_220;
	iVar1 = func_92(iVar0);
	vVar2 = { func_108(iVar0) };
	fVar5 = func_109(iVar0);
	uVar6 = func_93(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_179.f_40[iVar0]))
	{
		if (iVar1 != 0)
		{
			if (func_110(iVar0))
			{
				if (!func_102(&vVar2, 1, 5, 0))
				{
					return false;
				}
			}
			if (func_93(iVar0) == func_94())
			{
				Local_179.f_40[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				Local_179.f_40[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				PED::_SET_PED_BODY_COMPONENT(Local_179.f_40[iVar0], func_93(iVar0));
				PED::_UPDATE_PED_VARIATION(Local_179.f_40[iVar0], false, true, true, true, false);
			}
		}
	}
	if (func_61(Local_179.f_40[iVar0], 0, 1))
	{
		func_112(Local_179.f_40[iVar0], 0);
		if (func_30(&Local_179, 1))
		{
			iVar7 = func_113(iVar0);
			if (iVar7 != 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_179.f_84[iVar0]))
				{
					Local_179.f_84[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_LANTERN09X"), vVar2, true, true, false, false, true);
					func_114(iVar0, iVar7, &vVar9, &vVar12, &iVar8);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_179.f_84[iVar0], Local_179.f_40[iVar0], iVar8, vVar9, vVar12, false, false, false, false, 1, true, false, false);
					return false;
				}
			}
		}
		func_115(&(Local_179.f_152), Local_179.f_40[iVar0], 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_179.f_40[iVar0], true);
		PED::SET_PED_CONFIG_FLAG(Local_179.f_40[iVar0], 277, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(Local_179.f_40[iVar0]);
		ENTITY::SET_ENTITY_VISIBLE(Local_179.f_40[iVar0], false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_179.f_40[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_179.f_40[iVar0], true, false);
		}
		Local_179.f_220++;
		if (Local_179.f_220 >= Local_179.f_216)
		{
			Local_179.f_220 = 0;
			return true;
		}
	}
	return false;
}

bool func_16()
{
	return true;
}

bool func_17()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	int iVar7;

	if (Local_179.f_215 <= 0)
	{
		return true;
	}
	iVar0 = Local_179.f_220;
	iVar1 = func_97(iVar0);
	vVar2 = { func_116(iVar0) };
	fVar5 = func_117(iVar0);
	iVar6 = func_96(iVar0);
	iVar7 = func_118(Local_179.f_181);
	if (iVar1 != 0)
	{
		if (func_119(iVar0))
		{
			if (!func_102(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		if (iVar6 == func_94())
		{
			Local_179[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			Local_179[iVar0] = PED::_0xEAF682A14F8E5F53(Local_179.f_31[iVar0], vVar2, fVar5, 1, 1, 1, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_179[iVar0]))
			{
				Local_179[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_179[iVar0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_179[iVar0], true);
			PED::SET_PED_CONFIG_FLAG(Local_179[iVar0], 277, false);
			PED::SET_PED_CONFIG_FLAG(Local_179[iVar0], 6, true);
			PED::SET_PED_CONFIG_FLAG(Local_179[iVar0], 233, true);
			PED::REQUEST_PED_VISIBILITY_TRACKING(Local_179[iVar0]);
			func_120(&(Local_179.f_152), Local_179[iVar0]);
			func_121(&(Local_179.f_152), Local_179[iVar0], 0);
			ENTITY::SET_ENTITY_VISIBLE(Local_179[iVar0], false);
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_179[iVar0], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_179[iVar0], true, false);
			}
			if (Local_179.f_181 == -1)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_179[iVar0], joaat("REL_PLAYER_DISLIKE"));
			}
			func_122(Local_179[iVar0], 1);
			PED::_0xBD75500141E4725C(Local_179[iVar0], iVar7);
			DECORATOR::DECOR_SET_BOOL(Local_179[iVar0], "bBeatPed", true);
			func_124(func_123(Local_179[iVar0]), Local_179[iVar0]);
		}
		else
		{
			Local_179.f_220 = (Local_179.f_220 - 1);
		}
	}
	Local_179.f_220++;
	if (Local_179.f_220 >= Local_179.f_215)
	{
		Local_179.f_220 = 0;
		return true;
	}
	return false;
}

bool func_18(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

bool func_20()
{
	int iVar0;
	int iVar1;

	if (func_61(Local_179[func_125()], 0, 1))
	{
		func_126(&(Local_179[func_125()]), &(Local_179.f_49[0]), -1, 1);
		func_127(&Local_179, func_125(), -1, -1);
	}
	if (func_61(Local_179[func_128()], 0, 1))
	{
		func_126(&(Local_179[func_128()]), &(Local_179.f_49[0]), 0, 1);
		if (func_129(&uLocal_533, 16384))
		{
			func_130(Local_179[func_128()], joaat("GROUP_REVOLVER"), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		}
		else
		{
			func_130(Local_179[func_128()], joaat("GROUP_REPEATER"), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		}
		func_127(&Local_179, func_128(), -1, -1);
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_215)
	{
		if (func_61(Local_179[iVar0], 0, 1))
		{
			func_132(Local_179[iVar0], func_131(uLocal_533, iLocal_515, iVar0), 0);
		}
		iVar0++;
	}
	iVar1 = 2;
	while (iVar1 <= 2)
	{
		if (func_61(Local_179[iVar1], 0, 1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_179[iVar1], true, 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_179[iVar1], 98, true);
			func_127(&Local_179, iVar1, -1, -1);
		}
		iVar1++;
	}
	if (func_129(&uLocal_533, 16384))
	{
		iVar1 = 3;
		while (iVar1 <= 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_179[iVar1]))
			{
				PED::DELETE_PED(&(Local_179[iVar1]));
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 3;
		while (iVar1 <= 4)
		{
			if (func_61(Local_179[iVar1], 0, 1))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Local_179[iVar1], true, 0, true);
				func_130(Local_179[iVar1], joaat("GROUP_REPEATER"), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_179[iVar1], 98, true);
				func_127(&Local_179, iVar1, -1, -1);
			}
			iVar1++;
		}
	}
	func_133();
	return true;
}

void func_21()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_179.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_179[iVar0]))
		{
			ENTITY::_0xA91E6CF94404E8C9(Local_179[iVar0]);
			if (!func_134(&Local_179, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_179[iVar0], true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_40[iVar0]))
		{
			ENTITY::_0xA91E6CF94404E8C9(Local_179.f_40[iVar0]);
			if (!func_135(&Local_179, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_179.f_40[iVar0], true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_49[iVar0]))
		{
			ENTITY::_0xA91E6CF94404E8C9(Local_179.f_49[iVar0]);
			ENTITY::SET_ENTITY_VISIBLE(Local_179.f_49[iVar0], true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_52[iVar0]))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_179.f_52[iVar0], true);
		}
		iVar0++;
	}
}

void func_22(int iParam0, int iParam1)
{
	iParam0->f_96 = (iParam0->f_96 || iParam1);
}

bool func_23()
{
	vector3 vVar0;

	func_136(&uLocal_30, 30f);
	func_137();
	if (iLocal_447 < 4)
	{
		if (iLocal_449 <= 4 && iLocal_447 > 0)
		{
			if (func_47(&(vLocal_487[5 /*3*/]), 12f) && !func_129(&uLocal_533, 2048))
			{
				func_138(&uLocal_533, 8);
			}
		}
		if (func_139())
		{
			bLocal_26 = true;
			if (func_140())
			{
				func_138(&uLocal_533, 512);
				func_141(&uLocal_533, 128);
				iLocal_447 = 4;
			}
		}
	}
	if (iLocal_447 >= 1)
	{
		if (!func_129(&uLocal_533, 16))
		{
			func_142();
		}
	}
	func_143(&Local_33);
	if (func_129(&uLocal_533, 67108864) && !func_129(&uLocal_533, 8))
	{
		if (func_144(0, 1, Global_35, 1))
		{
			func_138(&uLocal_533, 8);
		}
	}
	if (!bLocal_27)
	{
		if (func_145(&(Local_179.f_152), Local_179.f_49[0], 0))
		{
			bLocal_27 = true;
		}
	}
	switch (iLocal_447)
	{
		case 0:
			vVar0 = { func_146(Global_35, 2f) };
			if (func_147(&vVar0))
			{
				func_148();
				func_149(1);
				func_40(&(vLocal_487[3 /*3*/]), 0);
				func_150(&(vLocal_487[5 /*3*/]));
				iLocal_447 = 1;
			}
			else if (func_151())
			{
				if (func_152())
				{
					func_22(&Local_179, 16);
					func_4(&Local_179, 13);
				}
			}
			break;
		case 1:
			func_153(0);
			if (func_47(&(vLocal_487[3 /*3*/]), 0.5f))
			{
				func_154();
			}
			func_155();
			func_149(1);
			if (func_156() && func_144(0f, 1, Local_179[0], 1))
			{
				if (!func_129(&uLocal_533, 256))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_179[func_128()], Global_35, -1, false, 1);
					if (func_129(&uLocal_533, 16384))
					{
						if (func_129(&uLocal_533, 524288))
						{
							func_157(Local_179[0], Global_35, "CALLOUT_EASY_PICKINGS_MALE", 1, 100f, -500314840);
							func_158(1891783641, Local_179[1], 1);
						}
						else
						{
							func_157(Local_179[0], Global_35, "CALLOUT_EASY_PICKINGS_MALE", 2, 100f, -500314840);
							func_158(1891783641, Local_179[1], 1);
						}
					}
					else
					{
						func_157(Local_179[func_128()], Local_179[func_125()], func_159(iLocal_515), 0, 100f, -500314840);
						func_158(1891783641, Local_179[1], 1);
					}
					func_138(&uLocal_533, 256);
				}
				func_150(&(vLocal_487[0 /*3*/]));
				iLocal_447 = 2;
			}
			break;
		case 2:
			func_154();
			func_155();
			if (func_149(0))
			{
				iLocal_447 = 3;
			}
			break;
		case 3:
			func_160();
			func_150(&(vLocal_487[1 /*3*/]));
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			func_141(&uLocal_533, 128);
			iLocal_447 = 4;
			break;
		case 4:
			ENTITY::FREEZE_ENTITY_POSITION(Local_179.f_49[0], true);
			func_138(&uLocal_533, 268435456);
			func_22(&Local_179, 8388608);
			return true;
	}
	return false;
}

float func_24()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_25(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar17;

	if (!func_18(&Global_1393447, 65536))
	{
		func_59(&Global_1393447, 16);
		func_59(&Global_1393447, 65536);
		func_22(iParam0, 2097152);
		Global_40.f_9632.f_194 = iParam0->f_151;
		func_53(iParam0, 1);
		func_161(-1, 0, 0, 0, 0);
		func_162();
		Var0.f_6 = -1082130432;
		Var0.f_7 = -1082130432;
		Var0.f_8 = -1082130432;
		Var0.f_9 = -1082130432;
		Var0.f_10 = -1082130432;
		Var0.f_11 = -1082130432;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		Var0 = joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW");
		Var0.f_6 = 100f;
		if (!func_69(iParam0->f_212))
		{
			Var0.f_3 = { iParam0->f_212 };
		}
		else
		{
			Var0.f_3 = { iParam0->f_209 };
		}
		if (func_56(iParam0->f_151))
		{
			Var0.f_8 = 40f;
			Var0.f_9 = 40f;
			Var0.f_7 = 40f;
		}
		else
		{
			Var0.f_8 = 120f;
			Var0.f_9 = 120f;
			Var0.f_7 = 120f;
		}
		iParam0->f_93 = EVENT::_CREATE_SHOCKING_EVENT(&Var0);
		if (!func_43())
		{
			func_44(1);
			func_22(iParam0, 4);
		}
		if (bParam1)
		{
			func_35(1, -1, 0, 0, 0);
		}
		else
		{
			func_163();
			func_164();
		}
		if (func_56(iParam0->f_151))
		{
			func_34(30, 0, 1);
		}
		else
		{
			func_166(func_165(joaat("GANG_AMBUSH_ENCOUNTERED")), 1);
			func_33(iParam0, 0);
		}
		MISC::_0x1096603B519C905F(func_62(iParam0->f_151));
		func_167(iParam0);
		func_168(0, 13);
		iVar17 = 0;
		while (iVar17 < iParam0->f_215)
		{
			if (func_61((*iParam0)[iVar17], 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY((*iParam0)[iVar17], Global_35, -1, 0, 51, 0);
			}
			iVar17++;
		}
	}
}

void func_26()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < Local_179.f_216)
	{
		if (func_61(Local_179.f_40[iVar1], 0, 0))
		{
			iVar0 = PED::_GET_RIDER_OF_MOUNT(Local_179.f_40[iVar1], false);
			if (func_61(iVar0, 0, 0))
			{
				PED::_0x931B241409216C1F(iVar0, Local_179.f_40[iVar1], 0);
				func_169(&Local_179, iVar1, 32);
			}
		}
		iVar1++;
	}
}

void func_27(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61((*uParam0)[iVar0], 0, 1))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0], 57, false);
			PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0], 127, true);
		}
		iVar0++;
	}
}

void func_28(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_30(iParam0, 33554432))
		{
			func_170(0);
			func_22(iParam0, 33554432);
		}
	}
	else if (func_30(iParam0, 33554432))
	{
		func_170(1);
		func_45(iParam0, 33554432);
	}
}

void func_29()
{
	int iVar0;

	func_40(&(Local_179.f_247), 0);
	if (func_47(&(Local_179.f_247), 5f))
	{
		func_50(&Local_179, 0);
	}
	if (func_47(&(Local_179.f_247), 3f))
	{
		func_171(&Local_179);
	}
	func_38();
	if (!func_30(&Local_179, 8388608))
	{
		if (!func_30(&Local_179, 4194304))
		{
			if (Local_179.f_181 == 2)
			{
				func_172(&Local_179, 1.1f);
			}
			else
			{
				func_172(&Local_179, 1.2f);
			}
			func_22(&Local_179, 4194304);
		}
		if (func_30(&Local_179, 4194304))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			if ((iVar0 < (Local_179.f_225 - 60) || IntToFloat(iVar0) < (IntToFloat(Local_179.f_225) * 0.7f)) || iVar0 < 80)
			{
				func_172(&Local_179, 1f);
				func_22(&Local_179, 8388608);
			}
		}
	}
}

bool func_30(int iParam0, int iParam1)
{
	return (iParam0->f_96 && iParam1) != 0;
}

bool func_31()
{
	int iVar0;

	func_137();
	func_173(&Local_450);
	func_174();
	if (func_47(&(vLocal_487[1 /*3*/]), 1f))
	{
		if (func_61(Local_179[func_128()], 0, 1))
		{
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_179[func_128()], false, 15f);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_215)
	{
		if (!iLocal_20[iVar0])
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_179[iVar0]))
			{
				if (func_175(Local_179[iVar0]))
				{
					func_176(&(Local_179[iVar0]), &(Local_33[iVar0 /*21*/]), &(Local_33.f_106), 1, 1);
					iLocal_20[iVar0] = 1;
				}
			}
			else
			{
				iLocal_20[iVar0] = 1;
			}
		}
		iVar0++;
	}
	if (func_129(&uLocal_533, 32))
	{
	}
	if (iLocal_448 > 0)
	{
		if (!func_129(&uLocal_533, 4194304))
		{
			if ((func_177() || func_129(&uLocal_533, 32)) || Local_179.f_20 > 40f)
			{
				iVar0 = 0;
				while (iVar0 < Local_179.f_215)
				{
					if (func_61(Local_179[iVar0], 0, 0))
					{
						func_178(Local_179[iVar0]);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_179[iVar0], 98, false);
					}
					iVar0++;
				}
				func_138(&uLocal_533, 4194304);
			}
		}
	}
	func_179(0);
	switch (iLocal_448)
	{
		case 0:
			func_180(&Local_179, 0);
			func_181();
			func_182(&uLocal_30, Local_179[1], 0, 30f);
			if (!ENTITY::IS_ENTITY_DEAD(Local_179.f_49[0]))
			{
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(Local_179.f_49[0], Global_35, 0);
				if (ENTITY::_IS_ENTITY_FROZEN(Local_179.f_49[0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_179.f_49[0], false);
				}
			}
			func_183();
			if (func_129(&uLocal_533, 16384))
			{
				if (func_157(Local_179[0], Global_35, "CALLOUT_JUST_KILL_EM_MALE", 0, -1073741824 /* Float: -2f */, -500314840) || func_47(&(vLocal_487[1 /*3*/]), 4f))
				{
					iLocal_448 = 1;
				}
			}
			else
			{
				iLocal_448 = 1;
			}
			break;
		case 1:
			if (func_184())
			{
				iLocal_448 = 2;
			}
			break;
		case 2:
			if (func_186(&Local_179, &iLocal_513, &(Local_179.f_241), func_185(uLocal_533, iLocal_515, iLocal_513), 1092616192 /* Float: 10f */))
			{
				iLocal_448 = 3;
			}
			break;
		case 3:
			if (ENTITY::_IS_ENTITY_FROZEN(Local_179.f_49[0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_179.f_49[0], false);
			}
			if (func_187(&uLocal_15))
			{
				func_179(1);
				return true;
			}
			else if (func_188(&uLocal_15, &Local_179, 0, Local_179.f_215, 2f, 0))
			{
				func_189();
				func_179(1);
				return true;
			}
			break;
	}
	return false;
}

void func_32(int iParam0, bool bParam1)
{
	if (func_18(&Global_1393447, 65536))
	{
		if (func_87(iParam0->f_181, 0))
		{
			func_190(iParam0->f_181, bParam1);
		}
		func_191(iParam0->f_151, bParam1);
	}
}

void func_33(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_192(1);
		func_45(iParam0, 8192);
	}
	else
	{
		func_193(1);
		func_22(iParam0, 8192);
	}
}

void func_34(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_194(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_5)
		{
			Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

void func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_59(&Global_1393447, 1);
	func_163();
	func_164();
	func_195((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (func_196() / 1000);
		if (Global_1392135.f_1 & 4 != 0)
		{
			Global_1392135.f_1 = (Global_1392135.f_1 - Global_1392135.f_1 & 4);
		}
		func_197();
		if (iParam1 == -1)
		{
			if (func_198(iParam0, 1))
			{
				func_199(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_198(iParam0, 2))
			{
				func_199(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_198(iParam0, 4))
			{
				func_199(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			func_200(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_201(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_201((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

void func_36(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < uParam0->f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_40[iVar0]))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_40[iVar0], 273, false);
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_40[iVar0]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_40[iVar0]));
			}
		}
		iVar0++;
	}
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[iVar0]))
		{
			if (VEHICLE::_0xA19447D83294E29F(uParam0->f_49[iVar0], &iVar1, &iVar2))
			{
				if (iVar1 <= 0)
				{
					Jump @218; //curOff = 142
				}
				else
				{
					iVar4 = 0;
					while (iVar4 < 6)
					{
						iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_49[iVar0], iVar4);
						if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar3);
						}
						iVar4++;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_37(var uParam0)
{
	if (func_30(uParam0, 16384))
	{
		if (func_61(Global_35, 0, 1))
		{
			if (!func_30(uParam0, 1024))
			{
				if (uParam0->f_181 != -1 && !func_56(uParam0->f_151))
				{
					COMPENDIUM::COMPENDIUM_GANG_AMBUSH_SURVIVED(func_202(uParam0->f_181));
					func_22(uParam0, 1024);
				}
			}
		}
	}
}

void func_38()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_179.f_216)
	{
		if (!func_135(&Local_179, iVar0, 16))
		{
			if (func_61(Local_179.f_40[iVar0], 0, 0))
			{
				if (func_203(iVar0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_179.f_40[iVar0], Local_179.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK(Local_179.f_40[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_179.f_40[iVar0], false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_179.f_40[iVar0]));
					func_169(&Local_179, iVar0, 16);
				}
			}
		}
		iVar0++;
	}
}

bool func_39(var uParam0)
{
	return func_41(uParam0);
	return false;
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1 || !func_60(uParam0))
	{
		func_150(uParam0);
	}
}

int func_41(var uParam0)
{
	int iVar0;
	int iVar1;

	func_40(&(uParam0->f_241), 0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61((*uParam0)[iVar0], 0, 1))
		{
			if (MAP::DOES_BLIP_EXIST(uParam0->f_22[iVar0]))
			{
				if (func_204((*uParam0)[iVar0], Global_36, 1) > 40f || func_47(&(uParam0->f_241), 15f))
				{
					func_205(&(uParam0->f_22[iVar0]));
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0[iVar0]);
					return 1;
				}
			}
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= uParam0->f_215)
	{
		return 1;
	}
	return 0;
}

bool func_42()
{
	if (func_47(&(Local_179.f_244), 45f) && func_206())
	{
		func_54(&Local_179);
		func_207(&(Local_179.f_244));
	}
	return false;
}

bool func_43()
{
	return Global_1415398.f_1;
}

void func_44(int iParam0)
{
	Global_1415398.f_1 = iParam0;
}

void func_45(int iParam0, int iParam1)
{
	if (func_30(iParam0, iParam1))
	{
	}
	iParam0->f_96 = (iParam0->f_96 - (iParam0->f_96 && iParam1));
}

bool func_46()
{
	return true;
}

bool func_47(var uParam0, float fParam1)
{
	if (!func_60(uParam0))
	{
		return false;
	}
	if (func_208(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_48()
{
	return Global_1392040.f_6;
}

void func_49()
{
	int iVar0;

	func_209(&Local_179, 1);
	func_179(1);
	iVar0 = 0;
	while (iVar0 < iLocal_517)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_517[iVar0]))
		{
			CAM::DESTROY_CAM(iLocal_517[iVar0], false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_523)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_523[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(iLocal_523[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_179[iVar0]))
		{
			func_176(&(Local_179[iVar0]), &(Local_33[iVar0 /*21*/]), &(Local_33.f_106), 1, 1);
		}
		iVar0++;
	}
	if (ENTITY::_IS_ENTITY_FROZEN(Local_179.f_49[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_179.f_49[0], false);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	func_210(&uLocal_30, &Local_179);
	func_181();
	MAP::DISPLAY_RADAR(true);
}

void func_50(int iParam0, bool bParam1)
{
	if (!func_30(iParam0, 256))
	{
		if (func_30(iParam0, 32) || bParam1)
		{
			if (func_61(iParam0->f_56, 0, 1))
			{
				func_211(iParam0->f_56, 0);
				func_22(iParam0, 256);
			}
		}
	}
}

void func_51()
{
	int iVar0;
	int iVar1;
	int iVar2[8];
	int iVar11;
	int iVar12;
	int iVar13;

	iVar1 = 4748164;
	iVar0 = 0;
	while (iVar0 < Local_179.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_179[iVar0]))
		{
			if (func_212(iVar0))
			{
				iVar2[iVar0] = PED::GET_MOUNT(Local_179[iVar0]);
				PED::DELETE_PED(&(Local_179[iVar0]));
			}
			else
			{
				if (func_61(Local_179[iVar0], 0, 0))
				{
					if (!func_30(&Local_179, 16384))
					{
						func_213(&(Local_179[iVar0]));
					}
					func_122(Local_179[iVar0], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_179[iVar0], 5, true);
					PED::_0x24C82EF607105FAA(Local_179[iVar0], joaat("AGGRESSIVE"));
					PED::_0xB8B6430EAD2D2437(Local_179[iVar0], 993130593);
					if (func_214(Local_179[iVar0]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_179[iVar0], joaat("REL_PLAYER_DISLIKE"));
					}
					PED::_SET_PED_CROUCH_MOVEMENT(Local_179[iVar0], false, 0, false);
					if ((PED::IS_PED_IN_COMBAT(Local_179[iVar0], Global_35) || PED::IS_PED_FLEEING(Local_179[iVar0])) || func_134(&Local_179, iVar0, 256))
					{
						if (PED::IS_PED_IN_COMBAT(Local_179[iVar0], 0))
						{
							TASK::CLEAR_PED_TASKS(Local_179[iVar0], false, false);
							TASK::_TASK_SMART_FLEE_STYLE_PED(Local_179[iVar0], Global_35, 4, iVar1, -1082130432 /* Float: -1f */, -1, 0);
						}
						PED::SET_PED_KEEP_TASK(Local_179[iVar0], true);
					}
					else if ((Local_179.f_215 == Local_179.f_216 && func_61(Local_179.f_40[iVar0], 0, 1)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_179[iVar0], true))
					{
						iVar11 = Local_179.f_40[iVar0];
						PED::_0x931B241409216C1F(Local_179.f_40[iVar0], iVar11, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar12);
						TASK::TASK_MOUNT_ANIMAL(0, Local_179.f_40[iVar0], 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
						if (!func_69(Local_179.f_118[iVar0 /*4*/].f_1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_179.f_118[iVar0 /*4*/].f_1, 2f, 20000, 0.25f, 0, 40000f);
						}
						TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
						func_215(Local_179[iVar0], &iVar12, 0, 0, 1, 1);
						PED::SET_PED_KEEP_TASK(Local_179[iVar0], true);
					}
					else
					{
						iVar11 = 0;
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_179[iVar0], true) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(Local_179[iVar0], true)))
						{
							if (PED::_GET_SEAT_PED_IS_USING(Local_179[iVar0]) == -1)
							{
								iVar13 = PED::GET_VEHICLE_PED_IS_IN(Local_179[iVar0], true);
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								if (!func_69(Local_179.f_118[iVar0 /*4*/].f_1))
								{
									TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iVar13, Local_179.f_118[iVar0 /*4*/].f_1, 7f, 524419, 6, 5f, 7f, 0);
								}
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, -1f, 0, 0);
								func_215(Local_179[iVar0], &iVar12, 0, 0, 1, 1);
							}
						}
						else if (PED::IS_PED_ON_MOUNT(Local_179[iVar0]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar12);
							if (!func_69(Local_179.f_118[iVar0 /*4*/].f_1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_179.f_118[iVar0 /*4*/].f_1, 2f, 20000, 0.25f, 0, 40000f);
							}
							TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
							func_215(Local_179[iVar0], &iVar12, 0, 0, 1, 1);
							PED::SET_PED_KEEP_TASK(Local_179[iVar0], true);
						}
						else
						{
							if (func_216(iVar0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, iVar1, -1082130432 /* Float: -1f */, -1, 0);
								func_215(Local_179[iVar0], &iVar12, 0, 0, 1, 1);
								PED::_0x39A2FC5AF55A52B1(Local_179[iVar0], 2000);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1f, 128, 0);
								func_215(Local_179[iVar0], &iVar12, 0, 0, 1, 1);
							}
							PED::SET_PED_KEEP_TASK(Local_179[iVar0], true);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_179[iVar0], false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(Local_179[iVar0]), -1) == Local_179[iVar0])
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_179[iVar0]));
				}
				else if ((!PED::IS_PED_FLEEING(Local_179[iVar0]) && !PED::IS_PED_IN_COMBAT(Local_179[iVar0], Global_35)) && !func_134(&Local_179, iVar0, 128))
				{
					PED::_0x39A2FC5AF55A52B1(Local_179[iVar0], -1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_179[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_40[iVar0]))
		{
			if (func_217(iVar0, &iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_84[iVar0]))
				{
					OBJECT::DELETE_OBJECT(&(Local_179.f_84[iVar0]));
				}
				PED::DELETE_PED(&(Local_179.f_40[iVar0]));
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_84[iVar0]))
				{
					if (func_218(iVar0))
					{
						OBJECT::DELETE_OBJECT(&(Local_179.f_84[iVar0]));
					}
					else
					{
						ENTITY::DETACH_ENTITY(Local_179.f_84[iVar0], true, true);
						PHYSICS::ACTIVATE_PHYSICS(Local_179.f_84[iVar0]);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_179.f_84[iVar0]));
					}
				}
				if (func_61(Local_179.f_40[iVar0], 0, 1))
				{
					if (func_60(&(Local_179.f_247)))
					{
						if (!func_61(PED::_GET_RIDER_OF_MOUNT(Local_179.f_40[iVar0], false), 0, 0))
						{
							TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_179.f_40[iVar0], Local_179.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
							PED::SET_PED_KEEP_TASK(Local_179.f_40[iVar0], true);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(PED::_0xF103823FFE72BB49(Local_179.f_40[iVar0])) && !ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(Local_179.f_40[iVar0], true)))
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_179.f_40[iVar0], Local_179.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(Local_179.f_40[iVar0], true);
					}
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_179.f_40[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_49[iVar0]))
		{
			if (func_219(iVar0))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_179.f_49[iVar0]));
			}
			else if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == Local_179.f_49[iVar0] && PED::GET_VEHICLE_PED_IS_IN(Global_35, true) == Local_179.f_49[iVar0])
			{
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_179.f_49[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_52[iVar0]))
		{
			if (func_220(&Local_179, Local_179.f_52[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(Local_179.f_52[iVar0]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_179.f_52[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_52(var uParam0)
{
	if (!func_30(uParam0, 128))
	{
		return;
	}
	switch (uParam0->f_181)
	{
		case 0:
			func_221(joaat("G_M_M_UNIDUSTER_01"));
			func_221(joaat("G_M_M_UNIDUSTER_03"));
			break;
		case 2:
			func_221(joaat("G_M_O_UNIEXCONFEDS_01"));
			func_221(joaat("G_M_Y_UNIEXCONFEDS_01"));
			break;
		case 1:
			func_221(joaat("G_M_M_UNIINBRED_01"));
			break;
		case 3:
			func_221(joaat("G_M_M_UNIMOUNTAINMEN_01"));
			break;
		case 4:
			func_221(joaat("G_M_M_UNIRANCHERS_01"));
			break;
		case 5:
			func_221(joaat("G_M_M_UNIBANDITOS_01"));
			break;
	}
}

void func_53(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
		func_22(iParam0, 65536);
	}
	else
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 0);
		func_45(iParam0, 65536);
	}
}

void func_54(var uParam0)
{
	float fVar0;

	fVar0 = func_222(uParam0->f_151);
	func_223(uParam0, fVar0);
}

void func_55(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_224(vVar0, 0);
}

bool func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 11:
			return true;
		default:
			break;
	}
	return false;
}

bool func_57(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;

	if (bParam1)
	{
		if (Global_40.f_9632[iParam0 /*4*/] > 0)
		{
			if (Global_40.f_9632[iParam0 /*4*/] >= func_225(iParam0))
			{
				return true;
			}
			Var2 = { func_165(joaat("TOTAL_PLAYING_TIME")) };
			if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
			{
				iVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
				if (iVar1 >= Global_40.f_9632[iParam0 /*4*/].f_3)
				{
					return false;
				}
			}
		}
	}
	return Global_40.f_9632[iParam0 /*4*/] > 0;
}

bool func_58(int iParam0, bool bParam1)
{
	if (func_57(iParam0, bParam1))
	{
		return true;
	}
	if (Global_40.f_9632[iParam0 /*4*/].f_1 == 0)
	{
		return false;
	}
	if (!bParam1)
	{
		return Global_40.f_9632[iParam0 /*4*/].f_1 > 0;
	}
	if (func_226(iParam0))
	{
		return true;
	}
	return false;
}

void func_59(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_60(var uParam0)
{
	return func_227(*uParam0, 1);
}

bool func_61(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_228(iParam0, iParam1);
}

char* func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GAORP";
		case 1:
		case 2:
		case 36:
			return "GALOA";
		case 3:
		case 4:
		case 38:
			return "GAOWA";
		case 5:
		case 35:
			return "GAOBT";
		case 6:
			return "GAOBB";
		case 42:
			return "GAOBB";
		case 7:
		case 41:
			return "GAOBA";
		case 8:
		case 40:
			return "GAORR";
		case 9:
		case 10:
		case 37:
			return "GAROA";
		case 11:
			return "GALPC";
		case 12:
			return "GALOA";
		case 13:
			return "GAEWB";
		case 14:
			return "GAEWT";
		case 15:
			return "GALBT";
		case 16:
			return "GAHCA";
		case 17:
		case 39:
			return "GAROR";
		case 18:
			return "GAIFA";
		case 19:
			return "GAIFA";
		case 21:
			return "GAMFA";
		case 20:
			return "GAMHA";
		case 23:
			return "GAMBA";
		case 22:
			return "GAMRA";
		case 24:
			return "GASBF";
		case 25:
			return "GATLA";
		case 28:
			return "GASLA";
		case 26:
			return "GASRA";
		case 27:
			return "GASFA";
		case 29:
			return "GALHA";
		case 30:
			return "GALHA";
		case 31:
			return "GABCA";
		case 32:
			return "GABSA";
		case 33:
			return "GABRA";
		case 34:
			return "GAGNR";
		case 43:
			return "GAPTO";
		default:
			break;
	}
	return "";
}

void func_63(var uParam0)
{
	Global_1393447.f_49 = -1;
}

bool func_64(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_229(iVar0))
	{
		return false;
	}
	if (func_230(iVar0, 1) || func_230(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_65()
{
	return false;
}

bool func_66(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164.f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164.f_164;
		}
		if (func_231())
		{
			return true;
		}
		if (Global_1058888.f_3 && !Global_1572887.f_8)
		{
			if (Global_1055058[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/].f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164.f_163;
		}
		else
		{
			return Global_1898164.f_164;
		}
	}
	if (Global_1898164.f_1[0 /*5*/].f_2 == 8)
	{
		iVar0 = func_232(Global_1898164.f_1[0 /*5*/]);
		if (func_233(iVar0) && func_234(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_235(Global_1898164.f_1[0 /*5*/]))
	{
		return true;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1898438)
		{
			return true;
		}
	}
	switch (Global_1898164.f_1[0 /*5*/].f_2)
	{
		case 0:
			return false;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return false;
}

bool func_67(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
		{
			if (func_134(iParam0, iVar0, 8))
			{
				if (func_236((*iParam0)[iVar0], Global_36, 1) < (70f * 70f) || func_237((*iParam0)[iVar0], 70f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_68()
{
	if (func_66(0, 1, 1))
	{
		return true;
	}
	return false;
}

bool func_69(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_70(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_71()
{
	int iVar0;

	if (!func_30(&Local_179, 16384))
	{
		return false;
	}
	iVar0 = func_238();
	switch (iVar0)
	{
		case 105:
			if (func_239() && func_240())
			{
				return true;
			}
			break;
		case 95:
			if (func_239() && func_240())
			{
				return true;
			}
			break;
	}
	if (func_240())
	{
		if (Local_179.f_151 != 43)
		{
			if (func_241())
			{
				if (func_242(iVar0))
				{
					return false;
				}
				switch (iVar0)
				{
					case 82:
						return false;
					case 5:
					case 22:
					case 26:
					case 35:
					case 38:
					case 56:
					case 69:
					case 76:
					case 78:
					case 92:
					case 105:
					case 115:
					case 120:
						func_40(&(Local_179.f_253), 0);
						if (func_47(&(Local_179.f_253), 0.5f))
						{
							return true;
						}
						break;
				}
			}
		}
	}
	return false;
}

bool func_72(var uParam0)
{
	if (Local_179.f_21 == 0f)
	{
		*uParam0 = 210f;
	}
	else if (Local_179.f_21 < (func_73() - 10f))
	{
		*uParam0 = func_73();
	}
	else
	{
		*uParam0 = 210f;
	}
	if (Local_179.f_20 > *uParam0)
	{
		return true;
	}
	switch (Local_179.f_151)
	{
		case 29:
		case 30:
			if (Local_179.f_95 < 10)
			{
				return true;
			}
			break;
		case 0:
		case 11:
			if (!func_30(&Local_179, 512) && !func_30(&Local_179, 16384))
			{
				return true;
			}
			break;
	}
	return false;
}

float func_73()
{
	if (iLocal_448 > 0)
	{
		return (140f * 0.75f);
	}
	return 140f;
}

void func_74()
{
	if (Local_179.f_95 <= 8)
	{
		Local_179.f_20 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_179.f_209, true);
		if (Local_179.f_21 == 0f || Local_179.f_21 > Local_179.f_20)
		{
			Local_179.f_21 = Local_179.f_20;
		}
		return;
	}
	if (Local_179.f_18 < 0)
	{
		Local_179.f_20 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_179.f_209, true);
		if (Local_179.f_21 == 0f || Local_179.f_21 > Local_179.f_20)
		{
			Local_179.f_21 = Local_179.f_20;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_179[Local_179.f_18]))
	{
		Local_179.f_9[Local_179.f_18] = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(Local_179[Local_179.f_18], false, true));
	}
	Local_179.f_18++;
	if (Local_179.f_18 >= Local_179.f_215)
	{
		Local_179.f_18 = -1;
	}
}

void func_75()
{
	int iVar0;

	if (Local_179.f_19 < Local_179.f_215)
	{
		iVar0 = Local_179.f_19;
		if (ENTITY::DOES_ENTITY_EXIST(Local_179[iVar0]))
		{
			if (!func_134(&Local_179, iVar0, 8))
			{
				if (func_237(Local_179[iVar0], 200f, -1082130432 /* Float: -1f */, Local_179.f_9[iVar0], -1082130432 /* Float: -1f */))
				{
					func_243(&Local_179, iVar0, 8);
				}
			}
		}
	}
	else if (Local_179.f_19 < (Local_179.f_215 + Local_179.f_216))
	{
		iVar0 = (Local_179.f_19 - Local_179.f_215);
		if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_40[iVar0]))
		{
			if (!func_135(&Local_179, iVar0, 8))
			{
				if (func_237(Local_179.f_40[iVar0], 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					func_169(&Local_179, iVar0, 8);
				}
			}
		}
	}
	else if (Local_179.f_19 < ((Local_179.f_215 + Local_179.f_216) + Local_179.f_217))
	{
		iVar0 = ((Local_179.f_19 - Local_179.f_215) - Local_179.f_216);
		if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_49[iVar0]))
		{
			if (!func_244(&Local_179, iVar0, 8))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(Local_179.f_49[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_179.f_49[iVar0]))
				{
					if (func_245(Local_179.f_49[iVar0], 200f, -1082130432 /* Float: -1f */))
					{
						func_246(&Local_179, iVar0, 8);
					}
				}
			}
		}
	}
	Local_179.f_19++;
	if (Local_179.f_19 >= ((Local_179.f_215 + Local_179.f_216) + Local_179.f_217))
	{
		Local_179.f_19 = 0;
	}
}

void func_76(var uParam0)
{
	func_248(uParam0, (func_247(uParam0) - 6f));
	func_249(uParam0, 1);
}

void func_77(var uParam0)
{
	func_250(uParam0, 0);
	func_251(uParam0, 0);
	func_78(uParam0, 1);
	func_252(uParam0, 1);
	func_253(uParam0, 0);
	func_254(uParam0, 1);
	func_255(uParam0, 1, 1, 1);
}

void func_78(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(&(uParam0->f_1), 256);
	}
	else
	{
		func_257(&(uParam0->f_1), 256);
	}
}

void func_79(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(&(uParam0->f_1), 4);
	}
	else
	{
		func_257(&(uParam0->f_1), 4);
	}
}

void func_80(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

var func_81(int iParam0)
{
	return Global_40.f_9632[iParam0 /*4*/];
}

bool func_82(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 36:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 38:
			return true;
		case 5:
			return true;
		case 35:
			return true;
		case 6:
			return true;
		case 42:
			return true;
		case 7:
			return true;
		case 41:
			return true;
		case 9:
			return true;
		case 10:
			return true;
		case 37:
			return true;
		case 8:
			return true;
		case 40:
			return true;
		case 11:
			return true;
		case 12:
			return true;
		case 13:
			return true;
		case 14:
			return true;
		case 16:
			return true;
		case 15:
			return true;
		case 17:
			return true;
		case 39:
			return true;
		case 18:
			return true;
		case 19:
			return true;
		case 20:
			return true;
		case 23:
			return true;
		case 22:
			return true;
		case 21:
			return true;
		case 24:
			return true;
		case 25:
			return true;
		case 28:
			return true;
		case 26:
			return true;
		case 27:
			return true;
		case 29:
			return true;
		case 30:
			return true;
		case 31:
			return true;
		case 32:
			return true;
		case 33:
			return true;
		case 34:
			return true;
		case 43:
			return true;
		default:
			break;
	}
	return false;
}

bool func_83()
{
	bool bVar0;

	switch (Local_179.f_221)
	{
		case 1:
			func_138(&uLocal_533, 64);
			func_22(&Local_179, 16);
			return true;
		default:
			break;
	}
	switch (Local_179.f_151)
	{
		case 38:
			func_138(&uLocal_533, 16384);
			func_138(&uLocal_533, 524288);
			break;
		case 4:
			func_138(&uLocal_533, 16384);
			if (func_258(0) || func_30(&Local_179, 2))
			{
				func_138(&uLocal_533, 524288);
			}
			break;
	}
	Local_179.f_215 = 5;
	Local_179.f_217 = 1;
	Local_179.f_218 = 0;
	if (func_129(&uLocal_533, 16384))
	{
		Local_179.f_216 = 1;
	}
	else
	{
		Local_179.f_216 = 0;
	}
	if (func_129(&uLocal_533, 524288))
	{
		Local_179.f_181 = -1;
	}
	else
	{
		Local_179.f_181 = 0;
	}
	iLocal_515 = (Local_179.f_222 % 2);
	if (!func_129(&uLocal_533, 64))
	{
		bVar0 = func_259();
	}
	else
	{
		bVar0 = func_260();
	}
	if (bVar0)
	{
		func_261(&Local_179, &Local_33);
		func_22(&Local_179, 131072);
		func_262();
		func_79(&(Local_179.f_152), 1);
		func_263(&(Local_179.f_152), 1);
		func_264(&(Local_179.f_152), 1);
		func_265(&(Local_179.f_152), 1);
		func_251(&(Local_179.f_152), 1);
		Local_179.f_212 = { func_266(uLocal_533, 0) };
		return true;
	}
	func_4(&Local_179, 12);
	return false;
}

Vector3 func_84(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;

	func_267(iParam0, iParam1, &vVar0, &uVar3, iParam2);
	return vVar0;
}

bool func_85()
{
	return false;
}

bool func_86(var uParam0)
{
	int iVar0;

	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 20)
	{
		return true;
	}
	if (iVar0 < 5)
	{
		return true;
	}
	return false;
}

bool func_87(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return false;
	}
	return true;
}

bool func_88(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_268(iParam0, 1))
	{
		return false;
	}
	if (iParam1 >= 0 && iParam1 <= 100)
	{
		iVar0 = iParam1;
	}
	else if (iParam1 > 100)
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = func_269(iParam0);
	}
	bVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < iVar0;
	return bVar1;
}

int func_89(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_270(bParam1, bParam2, bParam3);
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

void func_90(var uParam0)
{
	float fVar0;

	fVar0 = func_222(uParam0->f_151);
	func_271(uParam0, fVar0);
}

void func_91(var uParam0, int iParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_238))
	{
		uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_209, 0f, 0f, 0f, 80f, 80f, 40f, "volAvoidance");
	}
	func_272(uParam0->f_238, iParam1, 262144, 1, 0);
}

int func_92(int iParam0)
{
	if (Local_179.f_57[iParam0] == 0)
	{
		if (!func_87(Local_179.f_181, 1))
		{
			Local_179.f_57[iParam0] = func_273(joaat("HORSE_CLASS_RIDING"), 1);
		}
		else
		{
			Local_179.f_57[iParam0] = func_274(Local_179.f_181, 0, 1);
		}
	}
	return Local_179.f_57[iParam0];
}

int func_93(int iParam0)
{
	if (Local_179.f_75[iParam0] == 0)
	{
		if (Local_179.f_181 != -1 && Local_179.f_181 != 1)
		{
			Local_179.f_75[iParam0] = func_275(Local_179.f_181, iParam0, 0);
		}
		else
		{
			Local_179.f_75[iParam0] = func_94();
		}
		if (Local_179.f_75[iParam0] == joaat("META_HORSE_SADDLE_ONLY"))
		{
			Local_179.f_75[iParam0] = func_94();
		}
	}
	return Local_179.f_75[iParam0];
}

int func_94()
{
	return joaat("META_OUTFIT_DEFAULT");
}

bool func_95()
{
	char* sVar0;
	int iVar1;

	sVar0 = func_276(uLocal_533);
	STREAMING::REQUEST_MODEL(func_97(0), false);
	PROPSET::_REQUEST_PROPSET(joaat("PG_RE_ODRISCOLLWAGON01X"));
	STREAMING::REQUEST_MODEL(func_98(0), false);
	TASK::REQUEST_WAYPOINT_RECORDING(sVar0);
	iVar1 = 1;
	if (!STREAMING::HAS_MODEL_LOADED(func_97(0)) || !STREAMING::HAS_MODEL_LOADED(func_98(0)))
	{
		iVar1 = 0;
	}
	if (!PROPSET::_HAS_PROPSET_LOADED(joaat("PG_RE_ODRISCOLLWAGON01X")))
	{
		iVar1 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar1 = 0;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sVar0))
	{
		iVar1 = 0;
	}
	return iVar1;
}

int func_96(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_277(iVar0);
}

int func_97(int iParam0)
{
	if (func_258(0) || func_129(&uLocal_533, 524288))
	{
		return joaat("G_M_M_UNICRIMINALS_01");
	}
	return joaat("G_M_M_UNIDUSTER_01");
}

int func_98(int iParam0)
{
	return func_278(iParam0);
}

Vector3 func_99(int iParam0)
{
	return func_279(uLocal_533, iParam0);
}

float func_100(int iParam0)
{
	return func_280(uLocal_533, iParam0);
}

bool func_101(int iParam0)
{
	return true;
}

bool func_102(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_281(*uParam0, 0f, 0f, 0f))
	{
		return true;
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
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

void func_103(int iParam0)
{
	char* sVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
	{
		sVar0 = "wagon_block_honor";
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, sVar0, true);
		}
	}
}

int func_104(var uParam0)
{
	return 0;
}

Vector3 func_105(var uParam0)
{
	return 0f, 0f, 0f;
}

float func_106(var uParam0)
{
	return 0f;
}

bool func_107(int iParam0)
{
	return true;
}

Vector3 func_108(int iParam0)
{
	return func_282(uLocal_533, iParam0);
}

float func_109(int iParam0)
{
	return func_283(uLocal_533, iParam0);
}

bool func_110(int iParam0)
{
	return true;
}

int func_111(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_284(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_112(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_285(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

int func_113(int iParam0)
{
	return 0;
}

void func_114(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case 0:
			if ((iParam0 % 2) == 0)
			{
				iParam1 = 1;
			}
			else
			{
				iParam1 = 2;
			}
			break;
	}
	switch (iParam1)
	{
		case 1:
			*uParam2 = { -0.31f, 0.03f, -0.22f };
			*uParam3 = { 0f, 50f, 90f };
			break;
		case 2:
			*uParam2 = { 0.31f, 0.03f, -0.22f };
			*uParam3 = { 0f, -50f, 90f };
			break;
	}
	*uParam4 = PED::GET_PED_BONE_INDEX(Local_179.f_40[iParam0], 62111);
}

void func_115(var uParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
	DECORATOR::DECOR_SET_INT(iParam1, "HorseScriptCreator", SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
}

Vector3 func_116(int iParam0)
{
	return func_286(uLocal_533, iParam0);
}

float func_117(int iParam0)
{
	return func_287(uLocal_533, iParam0);
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("GANG_ODRISCOLLS");
		case 2:
			return joaat("GANG_LEMOYNE_RAIDERS");
		case 1:
			return joaat("GANG_MURFREE_BROOD");
		case 4:
			return joaat("GANG_LARAMIE");
		case 3:
			return joaat("GANG_SKINNER_BROS");
		case 5:
			return joaat("GANG_DEL_LOBOS");
		case 10:
			return joaat("LAW_PROFESSIONAL");
		default:
			break;
	}
	return joaat("AGGRESSIVE_TOWNSFOLK");
}

bool func_119(int iParam0)
{
	return true;
}

void func_120(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_0xBB1E41DD3D3C6250(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

void func_121(var uParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

void func_122(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "bValidRobber", true);
	}
	else if (DECORATOR::DECOR_EXIST_ON(iParam0, "bValidRobber"))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "bValidRobber", false);
	}
}

int func_123(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case joaat("REL_GANG_SKINNER_BROTHERS"):
			return 3;
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
			return 2;
		case joaat("REL_GANG_ODRISCOLL"):
			return 0;
		case joaat("REL_GANG_MURFREE_BROOD"):
			return 1;
		case joaat("REL_GANG_LARAMIE_GANG"):
			return 4;
		case joaat("REL_GANG_SMUGGLERS"):
			return 5;
		default:
			break;
	}
	return -1;
}

void func_124(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	if (!func_61(iParam1, 0, 0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_ACCURACY(iParam1, 20);
			fVar0 = PED::GET_COMBAT_FLOAT(iParam1, 1);
			fVar0 = (fVar0 * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1.2f));
			PED::SET_COMBAT_FLOAT(iParam1, 1, fVar0);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(80, 110);
			PED::SET_PED_SHOOT_RATE(iParam1, iVar1);
			fVar0 = PED::GET_COMBAT_FLOAT(iParam1, 3);
			fVar0 = (fVar0 * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1.25f));
			PED::SET_COMBAT_FLOAT(iParam1, 1, fVar0);
			break;
		case 1:
			PED::SET_PED_ACCURACY(iParam1, 15);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, false);
			break;
	}
}

int func_125()
{
	if (func_129(&uLocal_533, 64))
	{
		if (func_129(&uLocal_533, 2))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_126(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false, false))
	{
		return 0;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iParam2) != *uParam0)
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam1, iParam2))
		{
			if (iParam3 && func_288(*uParam1))
			{
				iParam2 = func_289(*uParam1);
			}
			else
			{
				return 0;
			}
		}
		if (PED::IS_PED_ON_MOUNT(*uParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(*uParam0, true, false);
		}
		PED::SET_PED_INTO_VEHICLE(*uParam0, *uParam1, iParam2);
	}
	return 1;
}

void func_127(var uParam0, int iParam1, int iParam2, int iParam3)
{
	PED::SET_PED_FIRING_PATTERN((*uParam0)[iParam1], joaat("FIRING_PATTERN_BURST_FIRE"));
	PED::_0x20E54854DEF6A54A((*uParam0)[iParam1], joaat("FIRING_PATTERN_BURST_FIRE_IN_COVER"));
	switch (uParam0->f_181)
	{
		case 2:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE((*uParam0)[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE((*uParam0)[iParam1], 80);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY((*uParam0)[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY((*uParam0)[iParam1], 65);
			}
			break;
		case 0:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE((*uParam0)[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE((*uParam0)[iParam1], 100);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY((*uParam0)[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY((*uParam0)[iParam1], 50);
			}
			break;
		case 1:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE((*uParam0)[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE((*uParam0)[iParam1], 110);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY((*uParam0)[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY((*uParam0)[iParam1], 40);
			}
			break;
		case 5:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE((*uParam0)[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE((*uParam0)[iParam1], 100);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY((*uParam0)[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY((*uParam0)[iParam1], 45);
			}
			break;
	}
}

int func_128()
{
	if (func_129(&uLocal_533, 64))
	{
		if (func_129(&uLocal_533, 2))
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
		return 1;
	}
	return 1;
}

bool func_129(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

int func_130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_290(iParam3, 1);
	bVar1 = func_290(iParam3, 2);
	bVar2 = !func_290(iParam3, 4);
	bVar3 = func_290(iParam3, 8);
	bVar4 = !func_290(iParam3, 16);
	bVar5 = func_290(iParam3, 32);
	bVar6 = func_290(iParam3, 64);
	return func_291(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

char* func_131(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_292(uParam0, iParam1, iParam2);
	return func_293(iVar0);
}

void func_132(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_61(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

void func_133()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	vector3 vVar3[2];
	float fVar10;

	if (ENTITY::IS_ENTITY_DEAD(Local_179.f_49[0]))
	{
		return;
	}
	iVar0 = 6;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (iVar1 != 0 && VEHICLE::DOES_EXTRA_EXIST(Local_179.f_49[0], iVar1))
		{
			VEHICLE::SET_VEHICLE_EXTRA(Local_179.f_49[0], iVar1, true);
		}
		iVar1++;
	}
	sVar2 = func_276(uLocal_533);
	TASK::WAYPOINT_RECORDING_GET_COORD(sVar2, 0, &(vVar3[0 /*3*/]));
	TASK::WAYPOINT_RECORDING_GET_COORD(sVar2, 1, &(vVar3[1 /*3*/]));
	func_102(&(vVar3[0 /*3*/]), 1, 10, 0);
	fVar10 = func_294(vVar3[0 /*3*/], vVar3[1 /*3*/], 1);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_179.f_49[0], vVar3[0 /*3*/], fVar10, true, false, true);
	PROPSET::_0xD80FAF919A2E56EA(Local_179.f_49[0], joaat("PG_RE_ODRISCOLLWAGON01X"));
	func_246(&Local_179, 0, 4);
}

bool func_134(int iParam0, int iParam1, int iParam2)
{
	return (iParam0->f_97[iParam1] && iParam2) != 0;
}

bool func_135(int iParam0, int iParam1, int iParam2)
{
	return (iParam0->f_106[iParam1] && iParam2) != 0;
}

void func_136(var uParam0, float fParam1)
{
	if (uParam0->f_1)
	{
		if (Global_1935630.f_58 != *uParam0)
		{
			if (func_61(Global_1935630.f_58, 0, 1) && func_295(Global_1935630.f_58))
			{
				func_182(uParam0, *uParam0, 0, fParam1);
				func_182(uParam0, Global_1935630.f_58, 1, fParam1);
			}
		}
	}
}

void func_137()
{
	if (func_129(&uLocal_533, 128))
	{
		if (func_296(Global_35))
		{
			PED::SET_PED_RESET_FLAG(PED::GET_MOUNT(Global_35), 53, true);
		}
	}
}

void func_138(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_139()
{
	int iVar0;

	if (func_129(&uLocal_533, 8))
	{
		return true;
	}
	if (bLocal_26)
	{
		return true;
	}
	if (func_30(&Local_179, 33554432))
	{
		if (func_297(&Local_179))
		{
			return true;
		}
	}
	if (func_298(&Local_179, &(Local_179.f_152), &(Local_179.f_180), &uLocal_514, 0, 5, 1) || func_299(Local_179.f_49[0], &uLocal_514))
	{
		if (func_299(Local_179.f_49[0], &uLocal_514))
		{
		}
		if (func_129(&uLocal_533, 16384))
		{
			if (!func_129(&uLocal_533, 16777216))
			{
				func_181();
				func_182(&uLocal_30, Local_179[1], 0, 30f);
				TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
				func_138(&uLocal_533, 16777216);
			}
		}
		if (!func_129(&uLocal_533, 33554432))
		{
			iVar0 = 0;
			while (iVar0 < Local_179.f_215)
			{
				if (PED::GET_PED_RESET_FLAG(Local_179[iVar0], 27))
				{
					PED::SET_PED_RESET_FLAG(Local_179[iVar0], 27, false);
				}
				iVar0++;
			}
			func_138(&uLocal_533, 33554432);
		}
		return true;
	}
	if (func_300())
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_523[8]))
		{
			if (func_301(Global_35, iLocal_523[8], 1, 0))
			{
				func_40(&(vLocal_487[4 /*3*/]), 0);
				func_138(&uLocal_533, 32);
			}
		}
		return true;
	}
	return false;
}

bool func_140()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	bVar2 = func_129(&uLocal_533, 1024);
	iVar3 = 1;
	switch (iLocal_516)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(Local_179.f_49[0]))
			{
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(Local_179.f_49[0], Global_35, 0);
			}
			if (func_129(&uLocal_533, 32))
			{
				if (func_61(Local_179[3], 0, 1))
				{
					func_303(Local_179[3], func_302(uLocal_533, 3));
					ENTITY::SET_ENTITY_HEADING(Local_179[3], func_304(uLocal_533, 3));
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_179[3], func_305(uLocal_533, 3), 3f, 1, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_179[3], 45, true);
				}
				if (func_61(Local_179[4], 0, 1))
				{
					func_303(Local_179[4], func_302(uLocal_533, 4));
					ENTITY::SET_ENTITY_HEADING(Local_179[4], func_304(uLocal_533, 4));
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_179[4], func_305(uLocal_533, 4), 1f, 1, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_179[4], 45, true);
				}
			}
			func_150(&(vLocal_487[1 /*3*/]));
			func_306(Local_179.f_151, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			func_307();
			func_138(&uLocal_533, 16);
			iLocal_516 = 1;
			iVar3 = 0;
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < Local_179.f_215)
			{
				if (func_61(Local_179[iVar0], 0, 1))
				{
					if (func_144(0, 1, Local_179[iVar0], 1))
					{
						if (!func_308(&(uLocal_534[iVar0]), 1))
						{
							if (iVar0 < 3)
							{
								PED::_0x1854217C640B39EC(Local_179[iVar0], Global_35, 0f, 0f, 0f, 15f, 0, 0);
							}
							PED::_SET_PED_CROUCH_MOVEMENT(Local_179[iVar0], false, 0, false);
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_179[iVar0], true))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_179.f_49[0]))
								{
									TASK::TASK_LEAVE_VEHICLE(0, Local_179.f_49[0], 1, 0);
								}
							}
							TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
							func_215(Local_179[iVar0], &iVar1, 0.2f, 0, 1, 1);
							func_309(&(uLocal_534[iVar0]), 1);
							if (!bVar2)
							{
								if (!func_129(&uLocal_533, 16384))
								{
									if (iLocal_449 < 1)
									{
										func_157(Local_179[iVar0], Global_35, func_310(iLocal_515), 0, 100f, 1744022339);
									}
									else
									{
										func_157(Local_179[iVar0], Global_35, func_311(iLocal_515), 0, 100f, 1744022339);
									}
								}
								else
								{
									func_157(Local_179[iVar0], Global_35, "CALLOUT_JUST_KILL_EM_MALE", 0, -1073741824 /* Float: -2f */, 1744022339);
								}
								bVar2 = true;
							}
							func_312(Local_179[iVar0], &(Local_179.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
							func_313(&(Local_179[iVar0]));
						}
					}
					else
					{
						iVar3 = 0;
					}
				}
				iVar0++;
			}
			break;
	}
	return iVar3;
}

void func_141(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_142()
{
	int iVar0;
	vector3 vVar1;

	if (func_204(Local_179[func_125()], func_266(uLocal_533, 0), 0) < 4f || (!func_314(Local_179[func_125()], -1817882002) && func_204(Local_179[func_125()], func_266(uLocal_533, 0), 0) < (4f + 3f)))
	{
		if (func_204(Local_179[func_125()], func_266(uLocal_533, 0), 0) < 1.5f)
		{
			func_207(&(vLocal_487[6 /*3*/]));
		}
		if (!func_129(&uLocal_533, 2048))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_49[0]) && !ENTITY::IS_ENTITY_DEAD(Local_179.f_49[0]))
			{
				if (ENTITY::GET_ENTITY_SPEED(Local_179.f_49[0]) < 1.2f)
				{
					func_138(&uLocal_533, 2048);
				}
			}
		}
		if (func_129(&uLocal_533, 2048))
		{
			if (!func_129(&uLocal_533, 1024))
			{
				if (((func_144(-3f, 1, 0, 0) && func_144(0f, 1, Local_179[0], 1)) && func_144(0f, 1, Local_179[func_128()], 1)) && func_129(&uLocal_533, 256))
				{
					vVar1 = { func_315(uLocal_533, 0) };
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (func_129(&uLocal_533, 16384))
					{
						TASK::TASK_LEAVE_VEHICLE(0, Local_179.f_49[0], 67240001, 0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
						TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
					}
					else
					{
						if (0 == func_128())
						{
							TASK::TASK_LEAVE_VEHICLE(0, Local_179.f_49[0], 67240001, 0);
						}
						TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					}
					func_215(Local_179[0], &iVar0, 0.5f, 0, 1, 1);
					if (!func_129(&uLocal_533, 16384) && !func_308(&(uLocal_534[0]), 1))
					{
						func_309(&(uLocal_534[0]), 1);
					}
					vVar1 = { func_315(uLocal_533, 1) };
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (func_129(&uLocal_533, 16384))
					{
						TASK::TASK_LEAVE_VEHICLE(0, Local_179.f_49[0], 262209, 0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
						TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
					}
					else
					{
						if (1 == func_128())
						{
							TASK::TASK_LEAVE_VEHICLE(0, Local_179.f_49[0], 67371105, 0);
						}
						TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					}
					func_215(Local_179[1], &iVar0, 0, 0, 1, 1);
					if (!func_129(&uLocal_533, 16384) && !func_308(&(uLocal_534[1]), 1))
					{
						func_309(&(uLocal_534[1]), 1);
					}
					func_150(&(vLocal_487[5 /*3*/]));
					func_207(&(vLocal_487[5 /*3*/]));
					if (func_129(&uLocal_533, 16384))
					{
						vLocal_540 = { func_146(Global_35, 1.1f) };
						if (!bLocal_28)
						{
							func_157(Local_179[0], Global_35, "HOLD_IT", 1, 100f, -500314840);
						}
					}
					else
					{
						func_157(Local_179[func_128()], Local_179[func_125()], func_311(iLocal_515), 0, 100f, -500314840);
					}
					func_138(&uLocal_533, 1024);
					func_138(&uLocal_533, 512);
				}
			}
		}
	}
	if (func_129(&uLocal_533, 16384) && func_129(&uLocal_533, 1024))
	{
		if (!func_129(&uLocal_533, 65536) && !func_129(&uLocal_533, 67108864))
		{
			if (func_144(-5f, 1, 0, 0) && func_144(0f, 1, Local_179[0], 1))
			{
				if (!bLocal_28)
				{
					func_157(Local_179[0], Global_35, "GANG_INTERACT_APPROACH_TOLL", 1, 100f, 1744022339);
				}
				func_138(&uLocal_533, 65536);
			}
		}
	}
}

int func_143(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = -1;
	iVar4 = -1;
	iVar5 = 524288 | func_316(3, 0, 0);
	iVar6 = 1;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_179[iVar1]))
		{
		}
		else
		{
			iVar0 = func_317(&(Local_179[iVar1]), uParam0[iVar1 /*21*/], 30f, &(uParam0->f_106), &iVar6, 4f, 1, 0, 0, iVar5, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (func_318(uParam0[iVar1 /*21*/]))
			{
				if (!uParam0->f_145)
				{
					if (uParam0->f_142 == -1)
					{
						uParam0->f_142 = iVar1;
					}
					iVar4 = (uParam0[iVar1 /*21*/])->f_1;
					switch (iVar4)
					{
						case 0:
							func_319(&(uParam0->f_106), 1, 1);
							break;
						case 1:
							func_138(&uLocal_533, 67108864);
							func_319(&(uParam0->f_106), 1, 1);
							break;
					}
					switch (iVar4)
					{
						case 0:
						case 1:
							func_320(uParam0, 0, 1);
							break;
					}
					iVar2 = 0;
					while (iVar2 <= 5)
					{
						if (func_61(Local_179[iVar2], 0, 1))
						{
							func_321(Local_179[iVar2], 500);
						}
						iVar2++;
					}
					uParam0->f_145 = 1;
				}
			}
			if (iVar0 != -1)
			{
				iVar3 = iVar0;
				uParam0->f_141 = iVar3;
				switch (iVar3)
				{
					case 0:
						break;
					case 1:
						uParam0->f_144++;
						break;
				}
				uParam0->f_145 = 0;
			}
		}
		iVar1++;
	}
	return iVar3;
}

bool func_144(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_322(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_323(fParam0))
	{
		return false;
	}
	return true;
}

bool func_145(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = -1;
	iVar1 = -1;
	if (VEHICLE::_0xA19447D83294E29F(iParam1, &iVar0, &iVar1))
	{
		if (iVar0 <= 0)
		{
			return true;
		}
		else if (iVar1 == iVar0)
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam1, iVar2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_115(uParam0, iVar3, iParam2);
				}
				iVar2++;
			}
			return true;
		}
	}
	return false;
}

Vector3 func_146(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return vVar0;
	}
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	func_324(vVar6);
	vVar6 = { FtoV((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

bool func_147(var uParam0)
{
	if (func_325(iLocal_523[4], *uParam0))
	{
		return true;
	}
	return false;
}

void func_148()
{
	char* sVar0;
	int iVar1;

	if (func_61(Local_179[0], 0, 1) && (ENTITY::DOES_ENTITY_EXIST(Local_179.f_49[0]) && !ENTITY::IS_ENTITY_DEAD(Local_179.f_49[0])))
	{
		sVar0 = func_276(uLocal_533);
		iVar1 = 520;
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_179[0], Local_179.f_49[0], sVar0, 0, 0, iVar1, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
		func_326(Local_179.f_49[0], Global_35, 10);
		if (func_129(&uLocal_533, 16384))
		{
			func_157(Local_179[0], Global_35, "ARRIVAL_ENTER_TRAP", 1, -1073741824 /* Float: -2f */, -500314840);
		}
		func_25(&Local_179, 1);
		func_32(&Local_179, 1);
	}
}

bool func_149(bool bParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;

	func_173(&Local_450);
	if (iLocal_449 < 8)
	{
		if (func_129(&uLocal_533, 16))
		{
			iLocal_449 = 8;
		}
		if (iLocal_449 < 7)
		{
			if (!func_129(&uLocal_533, 8) && func_327())
			{
				func_138(&uLocal_533, 8);
			}
		}
		if (!func_129(&uLocal_533, 134217728))
		{
			if (iLocal_449 > 0 && iLocal_449 <= 4)
			{
				if (func_328(Local_179[1], Global_35, 1, 1) < 5f && (iLocal_449 != 4 || !TASK::_0xBEDBE39B5FD98FD6(Global_35)))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					func_215(Local_179[1], &iVar0, 0, 0, 1, 1);
					func_138(&uLocal_533, 134217728);
				}
			}
		}
	}
	switch (iLocal_449)
	{
		case 0:
			func_153(0);
			func_150(&(vLocal_487[0 /*3*/]));
			if (func_129(&uLocal_533, 256) || bParam0)
			{
				if (func_61(Local_179[3], 0, 1))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Local_179[3], false, 0, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_315(uLocal_533, 3), Global_35, 3f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					func_215(Local_179[3], &iVar0, 0, 0, 1, 1);
				}
				if (func_61(Local_179[4], 0, 1))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Local_179[4], false, 0, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_315(uLocal_533, 4), Global_35, 3f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					func_215(Local_179[4], &iVar0, 0.5f, 0.5f, 1, 1);
				}
				if (func_61(Local_179[2], 0, 1))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Local_179[2], false, 0, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_315(uLocal_533, 2), Global_35, 3f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					func_215(Local_179[2], &iVar0, 0, 0, 1, 1);
				}
				iLocal_449 = 2;
			}
			break;
		case 2:
			if (!func_47(&(vLocal_487[0 /*3*/]), 1f))
			{
				func_153(0);
			}
			else
			{
				func_181();
				if (!func_129(&uLocal_533, 16384))
				{
					if (func_129(&uLocal_533, 1024))
					{
						return true;
					}
				}
				else if (!func_129(&uLocal_533, 1024))
				{
					iLocal_449 = 1;
				}
			}
			break;
		case 1:
			if (func_47(&(vLocal_487[0 /*3*/]), 0f))
			{
				func_181();
			}
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (func_69(vLocal_543))
				{
					func_181();
					vLocal_543 = { Global_36 };
				}
			}
			func_28(&Local_179, 0);
			if (func_47(&(vLocal_487[0 /*3*/]), 5f))
			{
				func_50(&Local_179, 0);
				func_150(&(vLocal_487[0 /*3*/]));
				func_329();
				func_182(&uLocal_30, Local_179[1], 1, 30f);
				PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 1);
				PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), "AMBUSH_PLAYER_SURRENDER");
				func_330(&Local_33, 1, 1);
				iLocal_449 = 3;
			}
			break;
		case 3:
			if (!bLocal_28)
			{
				if (PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
				{
					func_321(Local_179[1], 100);
					func_321(Local_179[0], 300);
					func_321(Local_179[2], 100);
					func_209(&Local_179, 0);
					func_182(&uLocal_30, Local_179[1], 0, 30f);
					bLocal_28 = true;
				}
			}
			func_331();
			func_332(&Local_179);
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (func_69(vLocal_543))
				{
					func_181();
					vLocal_543 = { Global_36 };
				}
			}
			if (func_327() || func_333())
			{
				func_138(&uLocal_533, 8);
			}
			else if (!func_334(Local_179[1], Local_179.f_49[0], 1) && bLocal_28)
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (func_69(vLocal_543))
					{
						func_181();
						vLocal_543 = { Global_36 };
					}
				}
				iLocal_449 = 4;
			}
			break;
		case 4:
			func_335(&Local_179);
			PED::SET_PED_RESET_FLAG(Local_179[func_128()], 27, true);
			func_336();
			if (func_129(&uLocal_533, 2))
			{
				func_337(&Local_179, 0, -67.13179f, 270.9976f, 103.5654f, 1067450368 /* Float: 1.25f */, 1097859072 /* Float: 15f */, 1065353216 /* Float: 1f */, 1);
			}
			else
			{
				func_337(&Local_179, 0, -145.0058f, 332.767f, 100.6059f, 1067450368 /* Float: 1.25f */, 1097859072 /* Float: 15f */, 1065353216 /* Float: 1f */, 1);
			}
			if (func_338())
			{
				if (func_339(Local_179[func_128()], &Local_450, 0.2f, 0, -6.5f, 2, 0, 0, 0, 6000, 1, 1))
				{
					func_40(&(vLocal_487[7 /*3*/]), 0);
					if (Local_450.f_4)
					{
						func_22(&Local_179, 1048576);
						func_340();
						func_28(&Local_179, 1);
						iLocal_449 = 5;
						func_180(&Local_179, 0);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_179[func_128()], true, false);
						TASK::TASK_REACT(Local_179[1], Global_35, Global_36, "Default_Shocked", 0.6f, 0, 4);
						iLocal_449 = 7;
					}
				}
				else
				{
					func_40(&(vLocal_487[7 /*3*/]), 0);
					if (Local_450 >= 2)
					{
						if (!func_129(&uLocal_533, 16777216))
						{
							func_181();
							func_182(&uLocal_30, Local_179[1], 0, 30f);
							func_138(&uLocal_533, 16777216);
						}
					}
					if (Local_450.f_2)
					{
						if (!func_314(Local_179[2], 1868526510))
						{
							func_341(Local_179[2], Local_179.f_40[0], 0, 2f, 20000);
						}
					}
					if (Local_450.f_6)
					{
						TASK::TASK_REACT(Local_179[1], Global_35, Global_36, "Default_Shocked", 0.6f, 0, 4);
						iLocal_449 = 7;
					}
				}
			}
			break;
		case 5:
			if (!bLocal_29)
			{
				if (func_144(0f, 1, Local_179[0], 1) && func_144(0f, 1, Local_179[1], 1))
				{
					func_157(Local_179[0], Global_35, "CALLOUT_FOLLOW_ROB_FLEE_MALE", 0, -1073741824 /* Float: -2f */, 1744022339);
					bLocal_29 = true;
				}
			}
			if (func_342())
			{
				func_343();
				vLocal_543 = { Global_36 };
				iLocal_449 = 6;
			}
			break;
		case 6:
			fVar1 = func_204(Global_35, vLocal_543, 1);
			if (fVar1 > 20f)
			{
				iVar2 = 0;
				while (iVar2 <= 5)
				{
					if (func_61(Local_179[iVar2], 0, 1))
					{
						if (Local_179.f_9[iVar2] > 0f)
						{
							if (Local_179.f_9[iVar2] < 10f)
							{
								iLocal_449 = 7;
							}
						}
					}
					iVar2++;
				}
			}
			break;
		case 7:
			func_180(&Local_179, 0);
			if (func_47(&(vLocal_487[7 /*3*/]), 0.3f))
			{
				return true;
			}
			break;
		case 8:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			return true;
	}
	return false;
}

void func_150(var uParam0)
{
	func_344(uParam0, 0f);
}

bool func_151()
{
	if (func_301(Global_35, iLocal_523[2], 1, 0))
	{
		if (!func_301(Global_35, iLocal_523[1], 1, 0))
		{
			func_345(&Local_179, 7);
			return true;
		}
	}
	if (func_346(&Local_179))
	{
		return true;
	}
	return false;
}

bool func_152()
{
	return true;
}

void func_153(bool bParam0)
{
	vector3 vVar0;
	int iVar3;

	if (func_177() || Local_179.f_9[func_128()] < 14f)
	{
		func_181();
		return;
	}
	vVar0 = { 0f, 0f, 0f };
	if (bParam0)
	{
		iVar3 = 1000;
	}
	else
	{
		iVar3 = 1500;
	}
	func_347(Local_179[1], &uLocal_438, vVar0, 1, (30f + 10f), 45f, iVar3, 3000, 3000, 1075838976 /* Float: 2.5f */, 1, 1, 1084227584 /* Float: 5f */);
}

void func_154()
{
	int iVar0;
	var uVar1;

	if (Local_450.f_2)
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	PATHFIND::GET_CLOSEST_VEHICLE_NODE(Global_36, &uVar1, 1, 3f, 0f);
	if (!func_348())
	{
		return;
	}
	if (func_61(iVar0, 0, 1))
	{
		if (func_349())
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.501f);
		}
		else if (func_350())
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.501f);
		}
		else if (func_351())
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
	}
}

void func_155()
{
	return;
	if (func_352(&Local_179))
	{
		return;
	}
	if (!func_129(&uLocal_533, 1))
	{
		if ((((MISC::GET_DISTANCE_BETWEEN_COORDS(func_315(uLocal_533, 1), Global_36, false) < 15f && func_349()) && func_353()) && func_348()) || func_30(&Local_179, 8))
		{
			if (!func_30(&Local_179, 8))
			{
				if (func_296(Global_35))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PED::GET_MOUNT(Global_35), false);
					PED::SET_PED_RESET_FLAG(PED::GET_MOUNT(Global_35), 53, true);
					func_138(&uLocal_533, 128);
				}
				func_22(&Local_179, 8);
			}
			func_158(1891783641, Local_179[1], 1);
			if (func_354(Global_35, &uLocal_512, 65, 256, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
			{
				func_138(&uLocal_533, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			}
			MAP::DISPLAY_RADAR(true);
		}
	}
}

bool func_156()
{
	int iVar0;
	float fVar1;

	if (!func_47(&(vLocal_487[5 /*3*/]), 2f))
	{
		return false;
	}
	iVar0 = func_128();
	if (func_129(&uLocal_533, 16384))
	{
		fVar1 = 100f;
	}
	else if (func_355(21, 5))
	{
		fVar1 = 25f;
	}
	else
	{
		fVar1 = 45f;
	}
	if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_179[iVar0], Global_35, 17))
	{
		if (func_204(Local_179[iVar0], Global_36, 0) < fVar1 || func_47(&(vLocal_487[5 /*3*/]), 5f))
		{
			return true;
		}
	}
	return false;
}

bool func_157(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5)
{
	return func_356(iParam0, iParam1, sParam2, "", fParam4, iParam3, 0, 0, 1, fParam4 > 0f, 1, iParam5, 1, 0, 0);
}

void func_158(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

char* func_159(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMBUSH_WAM_REVEAL";
		default:
			break;
	}
	return "AMBUSH_WAM_V2_REVEAL";
}

void func_160()
{
	int iVar0;
	int iVar1;

	if (func_129(&uLocal_533, 16384))
	{
		if (!func_129(&uLocal_533, 16777216))
		{
			func_181();
			func_182(&uLocal_30, Local_179[1], 0, 30f);
			func_138(&uLocal_533, 16777216);
		}
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (func_61(Local_179[iVar1], 0, 0))
		{
			if (func_129(&uLocal_533, 16384))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_215(Local_179[iVar1], &iVar0, 0.2f, 0, 1, 1);
				if (!func_308(&(uLocal_534[iVar1]), 1))
				{
					func_309(&(uLocal_534[iVar1]), 1);
				}
			}
			func_312(Local_179[iVar1], &(Local_179.f_22[iVar1]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
			func_313(&(Local_179[iVar1]));
		}
		iVar1++;
	}
	if (func_61(Local_179[2], 0, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		func_215(Local_179[2], &iVar0, 0.5f, 0, 1, 1);
		if (!func_308(&(uLocal_534[2]), 1))
		{
			func_309(&(uLocal_534[2]), 1);
		}
		func_312(Local_179[2], &(Local_179.f_22[2]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
	}
	iVar1 = 3;
	while (iVar1 <= 4)
	{
		if (func_61(Local_179[iVar1], 0, 0))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_215(Local_179[iVar1], &iVar0, 0.5f, 0, 1, 1);
			if (!func_308(&(uLocal_534[iVar1]), 1))
			{
				func_309(&(uLocal_534[iVar1]), 1);
			}
			func_312(Local_179[iVar1], &(Local_179.f_22[iVar1]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
		}
		iVar1++;
	}
}

void func_161(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_357() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_358(iVar1) && !func_359(iVar1, iParam2)) && (!bParam3 || !func_360(iVar1))) && (!bParam4 || !func_361(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_362(iVar0);
			}
		}
		iVar0++;
	}
}

void func_162()
{
	if (!func_358(Global_1327479))
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
	func_363(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
}

void func_163()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_364(iVar0, 128))
		{
			func_365(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_164()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_364(iVar0, 128) && func_364(iVar0, 1))
		{
			func_365(iVar0, 4096);
		}
		iVar0++;
	}
}

struct<2> func_165(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_166(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_167(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < iParam0->f_215)
	{
		if (func_61((*iParam0)[iVar2], 0, 0))
		{
			iVar0 = 0;
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(200, 500);
			func_366((*iParam0)[iVar2], &iVar0);
			func_367((*iParam0)[iVar2], (iVar0 + iVar1));
		}
		iVar2++;
	}
	switch (iParam0->f_181)
	{
		case 0:
			func_368(joaat("G_M_M_UNIDUSTER_01"));
			func_368(joaat("G_M_M_UNIDUSTER_03"));
			break;
		case 2:
			func_368(joaat("G_M_O_UNIEXCONFEDS_01"));
			func_368(joaat("G_M_Y_UNIEXCONFEDS_01"));
			break;
		case 1:
			func_368(joaat("G_M_M_UNIINBRED_01"));
			break;
		case 3:
			func_368(joaat("G_M_M_UNIMOUNTAINMEN_01"));
			break;
		case 4:
			func_368(joaat("G_M_M_UNIRANCHERS_01"));
			break;
		case 5:
			func_368(joaat("G_M_M_UNIBANDITOS_01"));
			break;
	}
	func_22(iParam0, 128);
}

void func_168(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_369(&Global_0, 8);
	}
	if (!func_370() || func_371() != -1)
	{
		return;
	}
	func_369(&Global_0, 1);
}

void func_169(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_106[iParam1] = (iParam0->f_106[iParam1] || iParam2);
}

void func_170(bool bParam0)
{
	Global_1935496.f_15 = !bParam0;
}

void func_171(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61((*uParam0)[iVar0], 0, 0))
		{
			if (!func_134(uParam0, iVar0, 512))
			{
				if (PED::_IS_PED_HOGTIED((*uParam0)[iVar0]))
				{
					TASK::TASK_COMBAT_PED((*uParam0)[iVar0], Global_35, 0, 0);
					PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0], false);
					func_178((*uParam0)[iVar0]);
					func_243(uParam0, iVar0, 512);
				}
			}
			else if (!PED::_IS_PED_HOGTIED((*uParam0)[iVar0]))
			{
				func_372(uParam0, iVar0, 512);
			}
		}
		iVar0++;
	}
}

void func_172(var uParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61((*uParam0)[iVar0], 0, 0))
		{
			PED::_SET_PED_DAMAGE_MODIFIER((*uParam0)[iVar0], fParam1);
		}
		iVar0++;
	}
}

void func_173(int iParam0)
{
	if (iParam0->f_35)
	{
		return;
	}
	if (!iParam0->f_8)
	{
		return;
	}
	if (iParam0->f_14 && !iParam0->f_13)
	{
		if (func_373(Global_1935630.f_44) || iParam0->f_6)
		{
			if (func_374(iParam0->f_36))
			{
				func_375(&(iParam0->f_36), 1, 1);
				iParam0->f_13 = 1;
			}
		}
	}
	if (!func_60(&(iParam0->f_29)))
	{
		if (func_376(iParam0->f_28))
		{
			func_40(&(iParam0->f_29), 0);
		}
	}
	else if (iParam0->f_6 && !iParam0->f_1)
	{
		if (func_47(&(iParam0->f_29), 3f) && func_376(iParam0->f_28))
		{
			func_377(1);
			iParam0->f_35 = 1;
			if (!func_47(&(iParam0->f_29), 6f) && !iParam0->f_4)
			{
				func_378(609);
			}
		}
	}
}

void func_174()
{
	int iVar0;

	if (!func_129(&uLocal_533, 32) && !func_129(&uLocal_533, 16))
	{
		iVar0 = 0;
		while (iVar0 < Local_179.f_215)
		{
			if (func_379(iVar0))
			{
				PED::SET_PED_RESET_FLAG(Local_179[iVar0], 27, true);
			}
			iVar0++;
		}
	}
}

bool func_175(int iParam0)
{
	if (!func_228(iParam0, 3))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return true;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) == iParam0)
	{
		return true;
	}
	if (PED::_0xD0B7AEB56229D317(iParam0) == Global_35)
	{
		return true;
	}
	if (PED::_0xD0B7AEB56229D317(Global_35) == iParam0)
	{
		return true;
	}
	return false;
}

void func_176(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_313(uParam0);
		func_380(iParam1, uParam2);
	}
	func_381(*uParam0, 1, bParam4);
}

bool func_177()
{
	if (func_129(&uLocal_533, 2097152))
	{
		return true;
	}
	if (func_382())
	{
		func_138(&uLocal_533, 2097152);
		return true;
	}
	return false;
}

void func_178(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_179(int iParam0)
{
	if (func_129(&uLocal_533, 268435456))
	{
		if (ENTITY::_IS_ENTITY_FROZEN(Local_179.f_49[0]))
		{
			if (iParam0 || func_383())
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_179.f_49[0], false);
				func_141(&uLocal_533, 268435456);
			}
		}
	}
}

void func_180(int iParam0, int iParam1)
{
	if (func_30(iParam0, 32))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(iParam1);
		}
		func_45(iParam0, 32);
	}
}

void func_181()
{
	func_307();
}

void func_182(var uParam0, int iParam1, bool bParam2, float fParam3)
{
	if (bParam2)
	{
		if ((((!uParam0->f_1 && *uParam0 == 0) && Global_1935630.f_58 != iParam1) && func_61(Global_1935630.f_58, 0, 1)) && func_295(Global_1935630.f_58))
		{
			*uParam0 = Global_1935630.f_58;
		}
		else
		{
			*uParam0 = iParam1;
		}
		uParam0->f_1 = 1;
		func_384(*uParam0, 1, fParam3, 0);
	}
	else
	{
		func_384(iParam1, 0, fParam3, 0);
		func_384(*uParam0, 0, fParam3, 0);
		*uParam0 = 0;
		uParam0->f_1 = 0;
	}
}

void func_183()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar5 = 0;
	while (iVar5 < Local_179.f_215)
	{
		if (func_61(Local_179[iVar5], 0, 0))
		{
			if (!func_308(&(uLocal_534[iVar5]), 1))
			{
				TASK::TASK_COMBAT_PED(Local_179[iVar5], Global_35, 0, 0);
				func_309(&(uLocal_534[iVar5]), 1);
			}
			if (!func_129(&uLocal_533, 16))
			{
				vVar0 = { func_385(uLocal_533, iVar5) };
				if (!func_69(vVar0) && !func_129(&uLocal_533, 16))
				{
					fVar3 = func_386(uLocal_533, iVar5);
					iVar4 = func_387(uLocal_533, iVar5);
					if (!func_177())
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_179[iVar5], vVar0, fVar3, iVar4, 0, 0);
					}
					if (func_388(uLocal_533, iVar5))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_179[iVar5], 45, true);
					}
					if (iVar5 == 1)
					{
						PED::SET_COMBAT_FLOAT(Local_179[1], 32, 2f);
					}
				}
			}
			PED::SET_PED_COMBAT_RANGE(Local_179[iVar5], 0);
		}
		iVar5++;
	}
}

bool func_184()
{
	if (func_129(&uLocal_533, 2))
	{
		return true;
	}
	if (func_47(&(vLocal_487[1 /*3*/]), 8f) || func_389(&Local_179) <= 2)
	{
		if (!func_129(&uLocal_533, 16))
		{
			if (func_61(Local_179[2], 0, 0))
			{
				PED::_0xFC3DB99C8144CD81(Local_179[2], iLocal_523[7], 0, 0, 0);
			}
			if (func_61(Local_179[4], 0, 0))
			{
				PED::_0xFC3DB99C8144CD81(Local_179[4], iLocal_523[7], 0, 0, 0);
			}
		}
		if (func_61(Local_179[3], 0, 0))
		{
			func_178(Local_179[3]);
		}
		return true;
	}
	return false;
}

char[] func_185(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (iParam2 < 0)
	{
		return "";
	}
	iVar0 = iParam2;
	iVar1 = func_292(uParam0, iParam1, iVar0);
	switch (iVar1)
	{
		case 0:
			return "AMBUSH_WAM_FLEE";
		case 1:
			return "AMBUSH_WAM_V2_FLEE";
		default:
			break;
	}
	return "COMBAT_FLEE";
}

bool func_186(int iParam0, int iParam1, var uParam2, char* sParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (*iParam1 < 0)
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_215)
		{
			if (func_61((*iParam0)[iVar0], 0, 1))
			{
				iVar1++;
				iVar2 = iVar0;
			}
			iVar0++;
		}
		if (iVar1 <= 1)
		{
			if (iVar2 >= 0)
			{
				if (!func_134(iParam0, iVar2, 1))
				{
					func_150(uParam2);
					*iParam1 = iVar2;
				}
			}
			else if (iVar1 == 0)
			{
				return true;
			}
		}
	}
	else
	{
		if (!func_60(uParam2))
		{
			if (func_61((*iParam0)[*iParam1], 0, 0))
			{
				TASK::_0x2E1D6D87346BB7D2((*iParam0)[*iParam1], Global_35, 1, 0);
			}
		}
		func_40(uParam2, 0);
		if (func_47(uParam2, fParam4))
		{
			if (func_61((*iParam0)[*iParam1], 0, 1))
			{
				if (func_390(iParam0, *iParam1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED((*iParam0)[*iParam1], Global_35, 4, 524292, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK((*iParam0)[*iParam1], true);
					func_178((*iParam0)[*iParam1]);
					func_381((*iParam0)[*iParam1], 0, 1);
					func_356((*iParam0)[*iParam1], Global_35, sParam3, 0, 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_187(var uParam0)
{
	if (func_198(*uParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_188(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4, int iParam5)
{
	int iVar0;

	if (!func_198(*iParam0, 4))
	{
		if (func_198(iParam5, 1))
		{
			if (func_391())
			{
				func_392(iParam0, 4);
				return false;
			}
		}
		else if (func_198(iParam5, 2))
		{
			if (func_393())
			{
				func_392(iParam0, 4);
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (!func_198(*iParam0, 1))
	{
		if (!func_198(*iParam0, 4))
		{
			if (iParam3 < 0)
			{
				iParam3 = *uParam1;
			}
			iVar0 = iParam2;
			while (iVar0 <= ((iParam2 + iParam3) - 1))
			{
				if (func_61((*uParam1)[iVar0], 8, 1) && !PED::IS_PED_FLEEING((*uParam1)[iVar0]))
				{
					return false;
				}
				iVar0++;
			}
		}
		func_40(&(iParam0->f_1), 0);
		func_392(iParam0, 1);
	}
	if (func_198(*iParam0, 1))
	{
		if (func_47(&(iParam0->f_1), (fParam4 + 4f)))
		{
			func_392(iParam0, 4);
			return false;
		}
		if (!func_47(&(iParam0->f_1), fParam4))
		{
			return false;
		}
		if (!func_144(0f, 1, Global_35, 1))
		{
			return false;
		}
		if (func_394(Global_35))
		{
			return false;
		}
		if (Global_1935630.f_24)
		{
			return false;
		}
		func_392(iParam0, 4);
		return true;
	}
	return false;
}

void func_189()
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	iVar0 = func_395(&uLocal_15, Local_179.f_225, Local_179.f_226);
	if (func_87(Local_179.f_181, 0) && func_268(Local_179.f_181, 1))
	{
		bVar1 = true;
	}
	else
	{
		bVar1 = false;
	}
	sVar2 = func_396(&uLocal_15, Local_179.f_181, bVar1, iVar0);
	func_356(Global_35, Global_35, sVar2, "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
}

void func_190(int iParam0, bool bParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_40.f_9632.f_177[iParam0]++;
	}
	Global_40.f_9632.f_195++;
	Global_40.f_9632.f_193 = iParam0;
	Global_17504.f_7 = 1;
	if (bParam1)
	{
		Global_40.f_9632.f_192 = func_397();
	}
}

void func_191(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_18(&Global_1393447, 65536))
	{
		func_19(&Global_1393447, 65536);
		func_161(-1, 0, 0, 0, 0);
		func_35(1, -1, 0, 0, 0);
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
		if (bParam1)
		{
			func_34(120, 0, 1);
		}
		else
		{
			func_34(60, 0, 1);
		}
		iVar0 = func_398(iParam0);
		iVar1 = func_399(iParam0);
		if (func_87(iVar1, 0))
		{
			switch (iVar1)
			{
				case 0:
				case 2:
					func_400(iVar1);
					break;
			}
		}
		else
		{
			iVar2 = func_401();
			switch (iVar2)
			{
				case 0:
				case 2:
					func_402(0, iVar2);
					break;
			}
		}
		if (func_198(iVar0, 1))
		{
			func_403();
		}
		else if (func_198(iVar0, 2))
		{
			func_404(0);
		}
		func_405(iParam0);
		func_406(iParam0);
	}
}

void func_192(int iParam0)
{
	Global_1310750.f_16035 = (Global_1310750.f_16035 - (Global_1310750.f_16035 && iParam0));
}

void func_193(int iParam0)
{
	Global_1310750.f_16035 = (Global_1310750.f_16035 || iParam0);
}

void func_194(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_407(iParam0, iParam1, bParam2);
}

void func_195(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237.f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237.f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

int func_196()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_197()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_359(iVar0, 16777216))
		{
			if (!func_408(iVar0))
			{
				func_409(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

bool func_198(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_199(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_410(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_411(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_412(iVar0) < func_413(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_414(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_200(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_415(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_415(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_415(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_415(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_415(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_415(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_201(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_24();
	fVar1 = (Global_1393447.f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447.f_60 = (fVar0 + fParam0);
	}
}

int func_202(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return joaat("GANG_BANDITOS");
		case 2:
			return joaat("GANG_EXCONFED");
		case 1:
			return joaat("GANG_INBRED");
		case 0:
			return joaat("GANG_ODRISCOLL");
		case 4:
			return joaat("GANG_RANCHERS");
		case 3:
			return joaat("GANG_SAVAGES");
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_203(int iParam0)
{
	float fVar0;

	if (func_135(&Local_179, iParam0, 32))
	{
		if (!func_61(PED::_GET_RIDER_OF_MOUNT(Local_179.f_40[iParam0], false), 0, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_61(PED::_GET_RIDER_OF_MOUNT(Local_179.f_40[iParam0], true), 0, 1))
	{
		return false;
	}
	if (Local_179.f_216 == Local_179.f_215)
	{
		if (!func_61(Local_179[iParam0], 0, 1))
		{
			return true;
		}
	}
	if (!func_135(&Local_179, iParam0, 64))
	{
		fVar0 = func_208(&(Local_179.f_247));
		if (fVar0 - 9f) > IntToFloat(iParam0)
		{
			return true;
		}
	}
	return false;
}

float func_204(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_205(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_206()
{
	return true;
}

void func_207(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_208(var uParam0)
{
	if (!func_60(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_416(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_24() - uParam0->f_1);
}

void func_209(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!PLAYER::_0x6614F9039BD31931(PLAYER::PLAYER_ID(), 14, 0))
		{
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 14, 0, 1);
		}
	}
	else if (PLAYER::_0x6614F9039BD31931(PLAYER::PLAYER_ID(), 14, 0))
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 14, 0, 0);
	}
}

void func_210(var uParam0, var uParam1)
{
	int iVar0;

	if (uParam0->f_1)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (*uParam0 == (*uParam1)[iVar0])
			{
				func_182(uParam0, (*uParam1)[iVar0], 0, 30f);
			}
			else
			{
				iVar0++;
			}
		}
	}
}

void func_211(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_417(iParam0))
	{
		return;
	}
	iVar0 = func_418(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_419(iVar0);
	func_420(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_421(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_422(iVar0))
		{
			return;
		}
	}
	func_423(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_371() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

bool func_212(int iParam0)
{
	if (func_134(&Local_179, iParam0, 2))
	{
		return false;
	}
	if (func_134(&Local_179, iParam0, 128))
	{
		return false;
	}
	if (func_134(&Local_179, iParam0, 4))
	{
		return true;
	}
	if (func_424(&Local_179, Local_179[iParam0]))
	{
		return true;
	}
	if (!func_134(&Local_179, iParam0, 8))
	{
		return true;
	}
	return false;
}

void func_213(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

bool func_214(int iParam0)
{
	if (func_425(iParam0, 0))
	{
		return false;
	}
	return true;
}

void func_215(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

bool func_216(int iParam0)
{
	switch (Local_179.f_151)
	{
		case 24:
		case 26:
		case 27:
			return true;
	}
	return false;
}

bool func_217(int iParam0, int iParam1)
{
	if (func_135(&Local_179, iParam0, 2))
	{
		return false;
	}
	if (func_135(&Local_179, iParam0, 4))
	{
		return true;
	}
	if (func_426(Local_179.f_40[iParam0], iParam1))
	{
		return true;
	}
	if (func_424(&Local_179, Local_179.f_40[iParam0]))
	{
		return true;
	}
	if (!func_135(&Local_179, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_218(int iParam0)
{
	float fVar0;

	if (func_427(32768))
	{
		fVar0 = 120f;
	}
	else
	{
		fVar0 = 80f;
	}
	if (func_428(Local_179.f_84[iParam0], fVar0))
	{
		return false;
	}
	if (func_204(Local_179.f_84[iParam0], Global_36, 1) < 10f)
	{
		return false;
	}
	return true;
}

bool func_219(int iParam0)
{
	if (func_244(&Local_179, iParam0, 2))
	{
		return false;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, Local_179.f_49[iParam0], true))
	{
		return false;
	}
	if (func_244(&Local_179, iParam0, 4))
	{
		return true;
	}
	if (func_429(&Local_179, Local_179.f_49[iParam0]))
	{
		return true;
	}
	if (!func_244(&Local_179, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_220(int iParam0, int iParam1)
{
	if (func_428(iParam1, 1114636288 /* Float: 60f */) || func_430(iParam1, 1, 1) <= 30f)
	{
		return false;
	}
	return true;
}

void func_221(int iParam0)
{
}

float func_222(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 16:
		case 36:
		case 38:
			fVar0 = 45f;
			break;
		case 11:
			fVar0 = 15f;
			break;
		case 0:
			fVar0 = 70f;
			break;
		case 12:
			fVar0 = 2f;
			break;
		case 13:
			fVar0 = 55f;
			break;
		case 14:
		case 26:
			fVar0 = 50f;
			break;
		case 33:
			fVar0 = 85f;
			break;
		case 31:
		case 32:
			fVar0 = 50f;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 15:
		case 17:
		case 22:
		case 27:
		case 29:
		case 30:
		case 34:
		case 35:
		case 39:
		case 40:
		case 41:
		case 42:
			fVar0 = 10f;
			break;
		case 9:
		case 10:
		case 37:
			fVar0 = 92.5f;
			break;
		case 18:
		case 19:
		case 20:
			fVar0 = 50f;
			break;
		case 23:
			fVar0 = 3f;
			break;
		case 21:
			fVar0 = 80f;
			break;
		case 24:
			fVar0 = 86f;
			break;
		case 25:
			fVar0 = 100f;
			break;
		case 28:
			fVar0 = 65f;
			break;
		default:
			fVar0 = 180f;
			break;
	}
	return fVar0;
}

void func_223(var uParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar0 = { uParam0->f_209 + Vector(-40f, -fParam1, -fParam1) };
	vVar3 = { uParam0->f_209 + Vector(40f, fParam1, fParam1) };
	vVar6 = { func_431(vVar0, vVar3, 0) };
	vVar9 = { func_432(vVar0, vVar3, 0) };
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar6, vVar9, 0);
	func_433(uParam0->f_209, fParam1, 5);
	func_434(uParam0);
}

void func_224(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_69(vParam0))
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
			if (func_435(vVar2, vParam0, 2f, 1))
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

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 2:
			return 2;
		case 36:
			return 2;
		case 9:
			return 2;
		case 10:
			return 2;
		case 37:
			return 2;
		case 0:
			return 1;
		case 16:
			return 3;
		case 11:
			return 1;
		case 20:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 24:
			return 1;
		case 34:
			return 3;
		case 43:
			return 6;
		default:
			break;
	}
	return 2;
}

bool func_226(int iParam0)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;

	Var2 = { func_165(joaat("TOTAL_PLAYING_TIME")) };
	if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
	{
		iVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
		if (iVar1 >= Global_40.f_9632[iParam0 /*4*/].f_3)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_227(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_228(int iParam0, int iParam1)
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
	if (func_436(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_436(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_436(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_436(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_436(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_436(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_436(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_436(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_229(int iParam0)
{
	if (((func_230(iParam0, 1) && func_230(iParam0, 2)) && func_230(iParam0, 8)) && func_230(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_230(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_231()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_4)
	{
		return true;
	}
	if (Global_524298)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (Global_1051043 == -1 && Global_1572887.f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_232(int iParam0)
{
	if (!func_235(iParam0))
	{
		return -1;
	}
	return func_438(func_437(iParam0));
}

bool func_233(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_234(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_235(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

float func_236(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_439(vVar0, vParam1);
}

bool func_237(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_204(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_238()
{
	return Global_1894899.f_2;
}

bool func_239()
{
	if (Global_1894899.f_187)
	{
		return true;
	}
	if (func_440(16) && !func_440(21))
	{
		return true;
	}
	return false;
}

bool func_240()
{
	if (Local_179.f_151 != 11)
	{
		return true;
	}
	if (Local_179.f_221 == 2)
	{
		return false;
	}
	return true;
}

bool func_241()
{
	return (Global_1894899 & 1 != 0 && func_238() != -1);
}

bool func_242(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 16:
		case 36:
		case 79:
		case 114:
		case 118:
		case 125:
		case 127:
		case 129:
			return true;
		default:
			break;
	}
	return false;
}

void func_243(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_97[iParam1] = (iParam0->f_97[iParam1] || iParam2);
}

bool func_244(int iParam0, int iParam1, int iParam2)
{
	return (iParam0->f_115[iParam1] && iParam2) != 0;
}

bool func_245(int iParam0, float fParam1, float fParam2)
{
	float fVar0;

	fVar0 = func_328(iParam0, Global_35, 1, 1);
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (ENTITY::_0xC8CCDB712FBCBA92(iParam0))
		{
			return true;
		}
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_246(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_115[iParam1] = (iParam0->f_115[iParam1] || iParam2);
}

float func_247(int iParam0)
{
	return iParam0->f_24;
}

void func_248(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_249(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_257(iParam0, 1);
	}
	else
	{
		func_256(iParam0, 1);
	}
}

void func_250(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(&(uParam0->f_1), 16384);
	}
	else
	{
		func_257(&(uParam0->f_1), 16384);
	}
}

void func_251(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(&(uParam0->f_1), 2048);
	}
	else
	{
		func_257(&(uParam0->f_1), 2048);
	}
}

void func_252(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_257(iParam0, 16);
	}
	else
	{
		func_256(iParam0, 67108864);
		func_256(iParam0, 16);
	}
}

void func_253(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(&(uParam0->f_1), 128);
	}
	else
	{
		func_257(&(uParam0->f_1), 128);
	}
}

void func_254(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_257(iParam0, 256);
	}
	else
	{
		func_256(iParam0, 256);
	}
}

void func_255(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_257(iParam0, 268435456);
	}
	else
	{
		func_256(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_257(iParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_256(iParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_257(iParam0, 536870912);
	}
	else
	{
		func_256(iParam0, 536870912);
	}
}

void func_256(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_257(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_258(int iParam0)
{
	if (!func_87(iParam0, 0))
	{
		return false;
	}
	return Global_40.f_9571[iParam0 /*10*/].f_1 == 5;
}

int func_259()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar0 = BUILTIN::VDIST2(Global_36, -121.1325f, 142.6518f, 90.7199f);
	fVar1 = BUILTIN::VDIST2(Global_36, -197.5622f, 467.291f, 94.5181f);
	fVar2 = BUILTIN::VDIST2(Global_36, -119.9247f, 467.4688f, 111.5982f);
	iLocal_523[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-292.6826f, 471.2841f, 79.65367f, 0f, 0f, 21.38423f, 277.7442f, 420.2423f, 75.37475f, "volNorthwestCheck");
	if (fVar0 < fVar1 && fVar0 < fVar2)
	{
		func_138(&uLocal_533, 2);
		iVar3 = 1;
	}
	else if (func_301(Global_35, iLocal_523[0], 1, 0))
	{
		func_141(&uLocal_533, 2);
		iVar3 = 1;
	}
	return iVar3;
}

int func_260()
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VDIST2(Global_36, 599.6675f, -489.4001f, 80.1061f);
	fVar1 = BUILTIN::VDIST2(Global_36, 741.9882f, -335.0654f, 95.5447f);
	if (fVar0 < fVar1)
	{
		func_141(&uLocal_533, 2);
	}
	else
	{
		func_138(&uLocal_533, 2);
	}
	return 1;
}

void func_261(int iParam0, var uParam1)
{
	char* sVar0[2];

	sVar0[0] = func_441(7);
	sVar0[1] = func_441(10);
	func_442(&(uParam1->f_106[0 /*17*/]), sVar0[0], "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	func_442(&(uParam1->f_106[1 /*17*/]), sVar0[1], func_443(), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_444(&(uParam1->f_106[0 /*17*/]), 1, 1);
	func_330(uParam1, 1, 0);
}

void func_262()
{
	if (func_129(&uLocal_533, 64))
	{
		func_445();
	}
	else
	{
		func_446();
	}
}

void func_263(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_257(uParam0, 8);
	}
	else
	{
		func_256(uParam0, 8);
	}
}

void func_264(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(&(uParam0->f_1), 16);
	}
	else
	{
		func_257(&(uParam0->f_1), 16);
	}
}

void func_265(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(&(uParam0->f_1), 1);
	}
	else
	{
		func_257(&(uParam0->f_1), 1);
	}
}

Vector3 func_266(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return func_447(4, 9);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return func_447(6, 9);
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_447(0, 9);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_447(1, 9);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

void func_267(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	struct<4> Var0;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 180.6557f, 75.5711f, 98.7111f, 307.9777f);
							break;
						case 1:
							func_448(&Var0, -124.9678f, 182.499f, 92.7486f, 323.5033f);
							break;
						case 2:
							func_448(&Var0, -143.1968f, 392.7447f, 95.6412f, 26.7895f);
							break;
						case 3:
							func_448(&Var0, -175.487f, -208.2044f, 87.9832f, 155.3853f);
							break;
						case 4:
							func_448(&Var0, 810.023f, 376.8716f, 115.1321f, 278.0894f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -78.546f, 574.7642f, 117.1554f, 285.065f);
							break;
						case 1:
							func_448(&Var0, 52.8403f, 228.5046f, 108.3697f, 1.1595f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -98.0465f, 227.8637f, 99.6174f, 342f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1114.856f, 73.738f, 53.0233f, 354.9799f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -566.0319f, 466.1427f, 98.0826f, 133.627f);
							break;
						case 1:
							func_448(&Var0, 731.3024f, -567.4277f, 75.8176f, 96.4522f);
							break;
						case 2:
							func_448(&Var0, 83.4469f, 582.1075f, 135.0757f, 264.5214f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
						case 1:
							func_448(&Var0, 831.6912f, -584.7949f, 78.2731f, 202.9779f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 202.3087f, 137.861f, 98.3938f, 326.3648f);
							break;
						case 1:
							func_448(&Var0, -372.0885f, -36.569f, 41.6905f, 348.5297f);
							break;
						case 2:
							func_448(&Var0, -927.3195f, -351.4889f, 48.6764f, 122.086f);
							break;
						case 3:
							func_448(&Var0, -1089.385f, 29.2608f, 55.1327f, 104.0236f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1561.633f, -654.6262f, 46.2574f, 321.6371f);
							break;
						case 1:
							func_448(&Var0, 954.459f, -1251.211f, 54.8197f, 43.8895f);
							break;
						case 2:
							func_448(&Var0, 1528.073f, -1412.362f, 65.0164f, 100.1078f);
							break;
						case 3:
							func_448(&Var0, 1485.599f, -988.1472f, 49.9976f, 203.8493f);
							break;
						case 4:
							func_448(&Var0, 2060.011f, -1359.194f, 41.5979f, 309.696f);
							break;
						case 5:
							func_448(&Var0, 1347.459f, -1779.138f, 68.0518f, 13.8827f);
							break;
					}
					break;
				case 12:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1486.386f, -863.9506f, 49.1165f, 40.9143f);
							break;
					}
					break;
				case 15:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1751.006f, -792.3771f, 40.7652f, 45.2804f);
							break;
					}
					break;
				case 13:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 918.9561f, -1061.409f, 54.6744f, 191.2117f);
							break;
						case 1:
							func_448(&Var0, 1486.383f, -942.4707f, 47.8906f, 181.1513f);
							break;
					}
					break;
				case 14:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1561.589f, -2121.429f, 44.3306f, 273.483f);
							break;
						case 1:
							func_448(&Var0, 1391.634f, -2269.641f, 44.9803f, 294.7664f);
							break;
						case 2:
							func_448(&Var0, 2067.27f, -1250.361f, 42.8864f, 257.827f);
							break;
					}
					break;
				case 16:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1173.9f, -909.8f, 66.9f, -57.4f);
							break;
						case 1:
							func_448(&Var0, 878.2368f, -914.2035f, 54.1948f, 270.879f);
							break;
					}
					break;
				case 17:
				case 39:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2069.093f, -1241.536f, 41.2556f, 176.86f);
							break;
						case 1:
							func_448(&Var0, 2081.443f, -899.7972f, 41.1731f, 260.946f);
							break;
						case 2:
							func_448(&Var0, 1212.386f, -1591.315f, 56.0669f, 23.4687f);
							break;
						case 3:
							func_448(&Var0, 1506.064f, -905.8009f, 47.8961f, 165.3073f);
							break;
						case 4:
							func_448(&Var0, 1606.995f, -1545.489f, 59.2865f, 177.0083f);
							break;
					}
					break;
				case 18:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					break;
				case 19:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					break;
				case 21:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2449.325f, 1573.939f, 85.8194f, 39.9471f);
							break;
						case 1:
							func_448(&Var0, 2584.913f, 1633.828f, 97.7316f, 8.1257f);
							break;
						case 2:
							func_448(&Var0, 2730.857f, 1311.648f, 92.9221f, 149.1053f);
							break;
						case 3:
							func_448(&Var0, 2794.002f, 1031.168f, 59.517f, 188.3449f);
							break;
					}
					break;
				case 20:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2430.674f, 1253.279f, 108.2854f, 292.6725f);
							break;
					}
					break;
				case 22:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2659.633f, 897.6414f, 88.4611f, 203.4193f);
							break;
					}
					break;
				case 23:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2709.737f, 473.069f, 65.8412f, 252.6725f);
							break;
					}
					break;
				case 24:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -2313.103f, -1513.598f, 140.2823f, 15.1824f);
							break;
					}
					break;
				case 25:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1434.349f, -1281.048f, 79.4382f, 38.4403f);
							break;
					}
					break;
				case 26:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1304.657f, -1086.787f, 72.7056f, 19.326f);
							break;
					}
					break;
				case 28:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1451.386f, -1256.971f, 77.9939f, 246.5365f);
							break;
					}
					break;
				case 27:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1938.231f, -1737.649f, 121.0378f, 54.6957f);
							break;
						case 1:
							func_448(&Var0, -2237.81f, -1236.479f, 135.9782f, 291.2003f);
							break;
					}
					break;
				case 29:
				case 30:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -2215.869f, -408.5112f, 163.5815f, 101.2651f);
							break;
					}
					break;
				case 31:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -3476.859f, -2618.098f, -13.6175f, -100.63f);
							break;
					}
					break;
				case 32:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -5102.887f, -2937.184f, 2.3186f, 58.5231f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -3772.229f, -2818.31f, -16.4697f, 123.7911f);
							break;
						case 1:
							func_448(&Var0, -3998.259f, -2362.783f, -9.1375f, 73.6187f);
							break;
					}
					break;
				case 34:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1972.732f, 1695.837f, 162.568f, 114.1732f);
							break;
					}
					break;
				case 43:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2242.927f, 732.5889f, 91.0723f, 263.9706f);
							break;
						case 1:
							func_448(&Var0, 2698.555f, 183.9842f, 52.7268f, 12.5536f);
							break;
						case 2:
							func_448(&Var0, 2012.363f, 450.9774f, 114.9433f, 51.6697f);
							break;
						case 3:
							func_448(&Var0, 2870.96f, 831.843f, 48.2579f, 28.2762f);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 334.8338f, 220.554f, 101.8269f, 119.7537f);
							break;
						case 1:
							func_448(&Var0, -113.9271f, 443.0494f, 111.7579f, 219.7514f);
							break;
						case 2:
							func_448(&Var0, -298.4487f, 637.9625f, 111.069f, 190.7615f);
							break;
						case 3:
							func_448(&Var0, -379.536f, -313.1479f, 87.3478f, 269.676f);
							break;
						case 4:
							func_448(&Var0, 1058.255f, 395.0368f, 100.4976f, 78.4296f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 153.7973f, 524.9196f, 136.8577f, 48.6442f);
							break;
						case 1:
							func_448(&Var0, 206.1301f, 463.9098f, 121.7605f, 105.0337f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -169.289f, 450.9006f, 96.4484f, 199.7628f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1093.884f, 187.3798f, 59.2496f, 162.9302f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -650.8867f, 350.328f, 87.9592f, 308.87f);
							break;
						case 1:
							func_448(&Var0, 581.8732f, -498.1398f, 77.1145f, 214.5317f);
							break;
						case 2:
							func_448(&Var0, 195.9423f, 643.7529f, 133.8094f, 123.0221f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
						case 1:
							func_448(&Var0, 816.4929f, -791.5338f, 57.0665f, 358.0346f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 488.6012f, 346.341f, 104.38f, 132.2152f);
							break;
						case 1:
							func_448(&Var0, -491.0948f, 240.2662f, 42.8778f, 245.3544f);
							break;
						case 2:
							func_448(&Var0, -1063.855f, -573.8351f, 81.1675f, 22.0417f);
							break;
						case 3:
							func_448(&Var0, -1383.4f, -131.3f, 94.2f, 2.2213f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1721.41f, -764.9014f, 41.3985f, 48.7414f);
							break;
						case 1:
							func_448(&Var0, 917.1657f, -1057.089f, 55.351f, 197.7367f);
							break;
						case 2:
							func_448(&Var0, 1367.119f, -1379.669f, 79.039f, 234.1533f);
							break;
						case 3:
							func_448(&Var0, 1492.79f, -1122.532f, 56.3596f, 8.428f);
							break;
						case 4:
							func_448(&Var0, 2246.185f, -1359.823f, 44.2797f, 67.8845f);
							break;
						case 5:
							func_448(&Var0, 1289.32f, -1632.029f, 65.404f, 182.4022f);
							break;
					}
					break;
				case 12:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1583.548f, -629.852f, 46.1712f, 146.2081f);
							break;
					}
					break;
				case 15:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1582.927f, -623.4384f, 46.2721f, 218.2033f);
							break;
					}
					break;
				case 13:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 947.2817f, -1236.62f, 53.763f, 23.4717f);
							break;
						case 1:
							func_448(&Var0, 1508.104f, -1149.061f, 53.7777f, 48.8161f);
							break;
					}
					break;
				case 14:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1861.568f, -1978.116f, 43.699f, 111.3814f);
							break;
						case 1:
							func_448(&Var0, 1506.446f, -2206.457f, 42.6941f, 158.0186f);
							break;
						case 2:
							func_448(&Var0, 2273.229f, -1369.996f, 45.7006f, 80.9983f);
							break;
					}
					break;
				case 16:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1346.7f, -858.3f, 72.7f, 88.6f);
							break;
						case 1:
							func_448(&Var0, 1107.901f, -916.9768f, 66.9322f, 90.5837f);
							break;
					}
					break;
				case 17:
				case 39:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2264.292f, -1366.995f, 44.3097f, 79.8327f);
							break;
						case 1:
							func_448(&Var0, 2264.248f, -1037.55f, 42.1479f, 54.3753f);
							break;
						case 2:
							func_448(&Var0, 1091.079f, -1431.687f, 54.6637f, 223.0478f);
							break;
						case 3:
							func_448(&Var0, 1493.179f, -1116.514f, 55.4248f, 352.523f);
							break;
						case 4:
							func_448(&Var0, 1753.022f, -1638.871f, 48.5096f, 34.1859f);
							break;
					}
					break;
				case 18:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					break;
				case 19:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					break;
				case 21:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2299.518f, 1759.59f, 107.9513f, 195.5682f);
							break;
						case 1:
							func_448(&Var0, 2705.534f, 1911.673f, 113.9124f, 141.4947f);
							break;
						case 2:
							func_448(&Var0, 2530.082f, 1242.029f, 148.8438f, 338.4772f);
							break;
						case 3:
							func_448(&Var0, 2848.581f, 689.1435f, 64.6365f, 0.9953f);
							break;
					}
					break;
				case 20:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2508.16f, 1404.184f, 95.79f, 124.3386f);
							break;
					}
					break;
				case 22:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2799.991f, 890.5291f, 63.6047f, 152.4149f);
							break;
					}
					break;
				case 23:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2921.223f, 414.4291f, 48.478f, 74.3386f);
							break;
					}
					break;
				case 24:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -2409.259f, -1475.456f, 147.1943f, 267.4513f);
							break;
					}
					break;
				case 25:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1682.643f, -1246.672f, 84.8961f, 286.9227f);
							break;
					}
					break;
				case 28:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1154.178f, -1214.848f, 68.3049f, 89.9786f);
							break;
					}
					break;
				case 27:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -2231.266f, -1599.062f, 145.9509f, 251.4796f);
							break;
						case 1:
							func_448(&Var0, -2091.402f, -1125.535f, 119.3745f, 117.3666f);
							break;
					}
					break;
				case 26:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1563.969f, -868.5887f, 86.2286f, 229.2799f);
							break;
					}
					break;
				case 29:
				case 30:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -2295.963f, -328.9082f, 154.6866f, 183.9384f);
							break;
					}
					break;
				case 31:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -3161.003f, -2610.719f, 9.9647f, 66.5f);
							break;
					}
					break;
				case 32:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -5379.7f, -2940.985f, 1.6323f, 255.6953f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -3982.679f, -3068.613f, -13.872f, 331.3266f);
							break;
						case 1:
							func_448(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
							break;
					}
					break;
				case 34:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1819.118f, 1593.633f, 168.2121f, 313.8806f);
							break;
					}
					break;
				case 43:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2482.688f, 729.5152f, 72.2941f, 117.0933f);
							break;
						case 1:
							func_448(&Var0, 2585.403f, 338.2195f, 69.6483f, 220.6653f);
							break;
						case 2:
							func_448(&Var0, 1805.624f, 550.4319f, 105.9446f, 233.3962f);
							break;
						case 3:
							func_448(&Var0, 2793.57f, 1038.077f, 58.5925f, 188.5771f);
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 13:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 997.1635f, -1186.04f, 64.0811f, 75.3782f);
							break;
						case 1:
							func_448(&Var0, 1391.092f, -1081.252f, 70.8405f, 284.1285f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -3729.811f, -3131.73f, -5.6609f, 79.6603f);
							break;
						case 1:
							func_448(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
							break;
					}
					break;
				case 0:
					switch (iParam4)
					{
						case 1:
							func_448(&Var0, 54.6531f, 217.5979f, 107.1034f, 40.7729f);
							break;
					}
					break;
			}
			break;
		case 3:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			break;
		default:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			break;
	}
	*uParam2 = { Var0 };
	*uParam3 = Var0.f_3;
	if (func_69(*uParam2))
	{
		*uParam2 = { 0f, 0f, 0f };
		*uParam3 = 0f;
	}
}

bool func_268(int iParam0, bool bParam1)
{
	if (!func_87(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/].f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0 /*10*/].f_1 == 4));
}

int func_269(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 75;
		case 2:
			return 50;
		case 1:
			return 50;
		case 3:
			return 35;
		case 4:
			return 35;
		case 5:
			return 50;
		default:
			break;
	}
	return 0;
}

int func_270(bool bParam0, bool bParam1, bool bParam2)
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

void func_271(var uParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;

	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_237))
	{
		func_449(&(uParam0->f_237), uParam0->f_209, uParam0->f_151);
	}
	func_450(uParam0->f_237, "ambush_restriction", 1, 0, 512, 0, -1082130432 /* Float: -1f */);
	vVar0 = { uParam0->f_209 + Vector(-40f, -fParam1, -fParam1) };
	vVar3 = { uParam0->f_209 + Vector(40f, fParam1, fParam1) };
	vVar6 = { func_431(vVar0, vVar3, 0) };
	vVar9 = { func_432(vVar0, vVar3, 0) };
	if (func_451(uParam0->f_151))
	{
		iVar12 = func_452(uParam0);
		func_453(uParam0->f_209, fParam1, 0, 0, iVar12);
	}
	PED::SET_PED_NON_CREATION_AREA(vVar6, vVar9);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar6, vVar9, false, 1);
	FIRE::STOP_FIRE_IN_RANGE(uParam0->f_209, fParam1);
	func_454(uParam0->f_209, fParam1, 0);
}

void func_272(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_256(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_273(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("HORSE_CLASS_RIDING"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_RIDING"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_DRAFT"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_DRAFT"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_RACE"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_RACE"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_WAR"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_WAR"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_WORK"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_WORK"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		default:
			break;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_RIDING"), 0, joaat("SPECIES_HORSE"), true, false, 0f, 0f, 0f);
}

int func_274(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = func_455(iParam0);
	if ((func_198(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY");
					break;
				case 4:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
					break;
				case 5:
					iVar2 = joaat("A_C_HORSE_AMERICANPAINT_TOBIANO");
					break;
				default:
					if (func_456())
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY");
					}
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_NOKOTA_WHITEROAN");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET");
					break;
				default:
					if (func_456())
					{
						iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
					}
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL");
					break;
				case 4:
					iVar2 = joaat("A_C_HORSE_AMERICANPAINT_OVERO");
					break;
				default:
					if (func_456())
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO");
					}
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_MORGAN_BAYROAN");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MORGAN_PALOMINO");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_SHIRE_LIGHTGREY");
					break;
				default:
					if (func_456())
					{
						iVar2 = joaat("A_C_HORSE_MORGAN_BAYROAN");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_MORGAN_PALOMINO");
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MUSTANG_WILDBAY");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_MUSTANG_GRULLODUN");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
					break;
				default:
					if (func_456())
					{
						iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_MUSTANG_WILDBAY");
					}
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_01");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_02");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_03");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_03");
					break;
				default:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_01");
					break;
			}
			break;
		case 10:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_APPALOOSA_BLANKET");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY");
					break;
				case 4:
					iVar2 = joaat("A_C_HORSE_MUSTANG_GRULLODUN");
					break;
				default:
					iVar2 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
					break;
			}
			break;
		default:
			iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
			break;
	}
	return iVar2;
}

int func_275(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = joaat("META_HORSE_SADDLE_ONLY");
	iVar1 = func_455(iParam0);
	if ((func_198(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					iVar2 = -1279161173;
					break;
				case 1:
					iVar2 = -520362209;
					break;
				case 2:
					iVar2 = -803977904;
					break;
				case 3:
					iVar2 = -1279161173;
					break;
				case 4:
					iVar2 = -520362209;
					break;
				case 5:
					iVar2 = -803977904;
					break;
				default:
					if (func_456())
					{
						iVar2 = -1279161173;
					}
					else
					{
						iVar2 = -520362209;
					}
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar2 = 42113864;
					break;
				case 1:
					iVar2 = 694577423;
					break;
				case 2:
					iVar2 = 42113864;
					break;
				case 3:
					iVar2 = 694577423;
					break;
				default:
					if (func_456())
					{
						iVar2 = 42113864;
					}
					else
					{
						iVar2 = 694577423;
					}
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1078773108;
					break;
				case 1:
					iVar2 = 1314808215;
					break;
				case 2:
					iVar2 = -801577650;
					break;
				case 3:
					iVar2 = -1635384855;
					break;
				case 4:
					iVar2 = -1150469193;
					break;
				default:
					if (func_456())
					{
						iVar2 = 1078773108;
					}
					else
					{
						iVar2 = 1314808215;
					}
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1371076591;
					break;
				case 1:
					iVar2 = 998558599;
					break;
				case 2:
					iVar2 = -1175500706;
					break;
				case 3:
					iVar2 = 1814441161;
					break;
				default:
					if (func_456())
					{
						iVar2 = 1371076591;
					}
					else
					{
						iVar2 = 998558599;
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					iVar2 = -314847033;
					break;
				case 1:
					iVar2 = -2125596339;
					break;
				case 2:
					iVar2 = 1938775504;
					break;
				case 3:
					iVar2 = -477512349;
					break;
				default:
					if (func_456())
					{
						iVar2 = -2125596339;
					}
					else
					{
						iVar2 = 1938775504;
					}
					break;
			}
			break;
		default:
			break;
	}
	return iVar2;
}

char* func_276(var uParam0)
{
	if (func_129(&uParam0, 2))
	{
		return "gaowa_trigger_front";
	}
	else
	{
		return "gaowa_trigger_back";
	}
	return "";
}

int func_277(int iParam0)
{
	if (!func_129(&uLocal_533, 524288))
	{
		if (!func_129(&uLocal_533, 16384))
		{
			switch (iParam0)
			{
				case 0:
					return -1908453874;
				case 1:
					return -1619093821;
				case 2:
					return -346294909;
				case 3:
					return -1985066158;
				case 4:
					return -1395814000;
				default:
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					return 1635109100;
				case 1:
					return 1395403865;
				case 2:
					return 153059716;
				default:
					break;
			}
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1635109100;
			case 1:
				return 1395403865;
			case 2:
				return 153059716;
			default:
				break;
		}
	}
	return func_94();
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("WAGON02X");
		default:
			break;
	}
	return 0;
}

Vector3 func_279(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return func_447(4, 8);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return func_447(6, 8);
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_447(0, 8);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_447(1, 8);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_280(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return func_457(4, 8);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return func_457(6, 8);
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_457(0, 8);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_457(1, 8);
			default:
				break;
		}
	}
	return 0f;
}

bool func_281(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_282(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_447(0, 17);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_447(1, 17);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_283(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_457(0, 17);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_457(1, 17);
			default:
				break;
		}
	}
	return 0f;
}

void func_284(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_458(iParam1))
		{
			func_459(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_460(iParam0, 0, 1);
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
			func_461(iParam0, 0);
			bVar0 = true;
		}
		func_462(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_285(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return 1;
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return 2;
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return 4;
		case joaat("HONOR_EVENT_SCARE"):
			return 32;
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return 64;
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return 128;
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return 256;
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return 512;
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return 1024;
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return 2048;
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return 4096;
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return 8192;
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return 16384;
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return 32768;
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return 65536;
		case joaat("HONOR_EVENT_THEFT"):
			return 131072;
		case joaat("HONOR_EVENT_INTERVENED"):
			return 262144;
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return 524288;
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return 1048576;
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return 2097152;
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return 4194304;
		default:
			break;
	}
	return 0;
}

Vector3 func_286(var uParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_463(uParam0, iParam1) };
	return vVar0;
}

var func_287(var uParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = { func_463(uParam0, iParam1) };
	return Var0.f_3;
}

int func_288(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int func_289(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
	{
		return -1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2))
	{
		return 2;
	}
	return -2;
}

bool func_290(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_291(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(iVar0) || WEAPON::_IS_WEAPON_MELEE(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_373(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (func_373(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_371() == -1 && !func_464(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_464(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_373(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_IS_WEAPON_MELEE(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_465(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_466(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_467(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

int func_292(var uParam0, int iParam1, int iParam2)
{
	if (func_129(&uParam0, 16384))
	{
		if (!func_129(&uParam0, 524288))
		{
			switch (iParam2)
			{
				case 0:
					return 3;
				case 1:
					return 2;
				default:
					break;
			}
		}
		else
		{
			switch (iParam2)
			{
				case 0:
					return 4;
				case 1:
					return 5;
				case 2:
					return 4;
				case 3:
					return 5;
				case 5:
					return 4;
				default:
					break;
			}
			return 5;
		}
	}
	if (iParam1 == 0)
	{
		switch (iParam2)
		{
			case 0:
				return 0;
			case 1:
				return 0;
			case 2:
				return 1;
			case 3:
				return 1;
			case 4:
				return 1;
			case 5:
				return 0;
			default:
				break;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				return 0;
			case 3:
				return 0;
			case 4:
				return 0;
			case 5:
				return 1;
			default:
				break;
		}
	}
	return -1;
}

char* func_293(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0359_G_M_M_UniDuster_02_IRISH_01";
		case 1:
			return "0355_G_M_M_UniDuster_01_WHITE_01";
		case 2:
			return "0361_G_M_M_UniDuster_03_WHITE_01";
		case 3:
			return "0360_G_M_M_UniDuster_03_IRISH_01";
		case 4:
			return "0131_G_M_M_UniCriminals_01_WHITE_02";
		case 5:
			return "0130_G_M_M_UniCriminals_01_WHITE_01";
		default:
			break;
	}
	return "";
}

float func_294(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

bool func_295(int iParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "bValidRobber") && DECORATOR::DECOR_GET_BOOL(iParam0, "bValidRobber"))
	{
		return true;
	}
	return false;
}

bool func_296(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

bool func_297(var uParam0)
{
	if (TASK::_0x038B1F1674F0E242(Global_35))
	{
		func_40(&(uParam0->f_256), 0);
		if (func_47(&(uParam0->f_256), 1.5f))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			return true;
		}
	}
	return false;
}

int func_298(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_468(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_469((*uParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
		{
			return 1;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

bool func_299(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = *iParam1;
	if (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, Global_35, 0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_300()
{
	if (iLocal_447 < 1)
	{
		if (func_301(Global_35, iLocal_523[1], 1, 0))
		{
			return true;
		}
	}
	else if (!Local_450.f_2)
	{
		if (!func_348())
		{
			return true;
		}
	}
	return false;
}

bool func_301(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

Vector3 func_302(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 3:
					return func_447(4, 12);
				case 4:
					return func_447(4, 13);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 3:
					return func_447(6, 14);
				case 4:
					return func_447(6, 15);
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 3:
				return func_447(0, 12);
			case 4:
				return func_447(0, 13);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 3:
				return func_447(1, 14);
			case 4:
				return func_447(1, 15);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

void func_303(int iParam0, vector3 vParam1)
{
	vector3 vVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar0 = { vParam1 };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vVar0, true, false, true, true);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
		}
	}
}

float func_304(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 3:
					return func_457(4, 12);
				case 4:
					return func_457(4, 13);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 3:
					return func_457(6, 14);
				case 4:
					return func_457(6, 15);
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 3:
				return func_457(0, 12);
			case 4:
				return func_457(0, 13);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 3:
				return func_457(1, 14);
			case 4:
				return func_457(1, 15);
			default:
				break;
		}
	}
	return 0f;
}

Vector3 func_305(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 3:
					return func_447(5, 4);
				case 4:
					return func_447(5, 3);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 3:
					return func_447(7, 5);
				case 4:
					return func_447(7, 6);
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 3:
				return func_447(2, 4);
			case 4:
				return func_447(2, 3);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 3:
				return func_447(3, 5);
			case 4:
				return func_447(3, 6);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

void func_306(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;

	func_161(-1, 0, 0, 0, 0);
	if (bParam1)
	{
		func_201(240f, 1, 0);
		func_194(120, 0, 1);
	}
	Global_40.f_9632[iParam0 /*4*/].f_1++;
	Var2 = { func_165(joaat("TOTAL_PLAYING_TIME")) };
	if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
	{
		iVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
		Global_40.f_9632[iParam0 /*4*/].f_3 = (iVar1 + func_470(iParam0, 1));
	}
	func_168(0, 13);
}

void func_307()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_471();
}

bool func_308(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_309(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

char* func_310(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMBUSH_WAM_ETRIGGER";
		default:
			break;
	}
	return "AMBUSH_WAM_V2_ETRIGGER";
}

char* func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMBUSH_WAM_TRIGGER";
		default:
			break;
	}
	return "AMBUSH_WAM_V2_TRIGGER";
}

void func_312(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			MAP::REMOVE_BLIP(iParam1);
		}
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
		*iParam1 = MAP::_BLIP_ADD_FOR_ENTITY(iParam2, iParam0);
		if (iParam3 != 0)
		{
			MAP::_BLIP_SET_MODIFIER(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			MAP::SET_BLIP_SPRITE(*iParam1, iParam4, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, sParam5);
		}
	}
}

void func_313(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

bool func_314(int iParam0, int iParam1)
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

Vector3 func_315(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 3:
					return func_447(4, 14);
				case 4:
					return func_447(4, 15);
				case 2:
					return func_447(4, 4);
				case 0:
					return func_447(4, 6);
				case 1:
					return func_447(4, 7);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 3:
					return func_447(6, 12);
				case 4:
					return func_447(6, 13);
				case 2:
					return func_447(6, 4);
				case 0:
					return func_447(6, 6);
				case 1:
					return func_447(6, 7);
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 3:
				return func_447(0, 14);
			case 4:
				return func_447(0, 15);
			case 2:
				return func_447(0, 4);
			case 0:
				return func_447(0, 6);
			case 1:
				return func_447(0, 7);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 3:
				return func_447(1, 12);
			case 4:
				return func_447(1, 13);
			case 2:
				return func_447(1, 4);
			case 0:
				return func_447(1, 6);
			case 1:
				return func_447(1, 7);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

int func_316(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_317(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_472(&iVar0);
	if (func_198(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_473(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_198(iVar0, 134217728))
	{
		func_474(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_475(558))
				{
					func_476(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_318(var uParam0)
{
	return uParam0->f_2 == 2;
}

void func_319(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_444(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

void func_320(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_477(uParam0, 0))
		{
			func_330(uParam0, 0, 1);
		}
		if (!func_477(uParam0, 1))
		{
			func_330(uParam0, 1, 1);
		}
	}
	else
	{
		if (bParam2 || func_477(uParam0, 0))
		{
			func_330(uParam0, 0, 0);
		}
		if (bParam2 || func_477(uParam0, 1))
		{
			func_330(uParam0, 1, 0);
		}
	}
}

void func_321(var uParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(uParam0, iParam1);
}

bool func_322(int iParam0, bool bParam1)
{
	if (func_61(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

bool func_323(float fParam0)
{
	if (func_478(1))
	{
		return true;
	}
	if (func_60(&uLocal_0) && !func_479(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

Vector3 func_324(vector3 vParam0)
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

bool func_325(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam0, vParam1);
}

void func_326(int iParam0, int iParam1, int iParam2)
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false)) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		VEHICLE::_0xFFFE15B433300B8C(iParam0, iParam1, iParam2);
	}
}

bool func_327()
{
	if (func_480(Local_179.f_49[0]))
	{
		return true;
	}
	if (iLocal_449 <= 4)
	{
		if (func_177())
		{
			return true;
		}
		if (!func_69(vLocal_540))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_540, false) > 8f)
			{
				if (!PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, vLocal_540, 70f))
				{
					return true;
				}
			}
		}
	}
	return false;
}

float func_328(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_329()
{
	Local_450.f_16 = "GANG_INTERACT_DEMAND_MONEY";
	Local_450.f_21 = 1;
	Local_450.f_17 = "GANG_INTERACT_DEMAND_MONEY_PAT";
	Local_450.f_22 = 1;
	Local_450.f_18 = "GANG_INTERACT_KNOCKOUT";
	Local_450.f_23 = 2;
	Local_450.f_19 = "CALLOUT_FOLLOW_ROB_ATTACK_MALE";
	Local_450.f_24 = 2;
}

void func_330(var uParam0, int iParam1, bool bParam2)
{
	func_481(&(uParam0->f_106[iParam1 /*17*/]), bParam2, 0);
}

void func_331()
{
	PED::SET_PED_RESET_FLAG(Global_35, 179, true);
}

void func_332(int iParam0)
{
	if (func_296(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HITCH_ANIMAL"), false);
	}
}

bool func_333()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_179.f_9[iVar0] < 2.5f)
		{
			return true;
		}
		iVar0++;
	}
	if (!bLocal_28 && !func_482())
	{
		if (func_47(&(vLocal_487[0 /*3*/]), 24f))
		{
			if (func_144(0, 1, 0, 0) && !func_322(Global_35, 1))
			{
				return true;
			}
		}
		else if (!func_129(&uLocal_533, 131072))
		{
			if ((func_144(0f, 1, Local_179[0], 1) && func_144(0f, 1, Local_179[1], 1)) && func_144(0f, 1, Global_35, 1))
			{
				if (func_296(Global_35))
				{
					func_157(Local_179[1], Global_35, "ORDER_DISMOUNT", 1, -1073741824 /* Float: -2f */, 1744022339);
				}
				else
				{
					func_157(Local_179[1], Global_35, "HANDS_UP", 1, -1073741824 /* Float: -2f */, 1744022339);
				}
				func_138(&uLocal_533, 131072);
			}
		}
		else if (!func_129(&uLocal_533, 262144))
		{
			if (((func_144(0, 1, 0, 0) && func_144(0f, 1, Local_179[0], 1)) && func_144(0f, 1, Local_179[1], 1)) && func_144(0f, 1, Global_35, 1))
			{
				func_157(Local_179[0], Global_35, "GANG_INTERACT_THREATEN", 1, -1073741824 /* Float: -2f */, 1744022339);
				func_138(&uLocal_533, 262144);
			}
		}
	}
	return false;
}

bool func_334(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false, false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				return PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2);
			}
		}
	}
	return false;
}

void func_335(int iParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_COLLECT"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_HORSE_COLLECT"), false);
}

void func_336()
{
	char* sVar0;

	if (!func_129(&uLocal_533, 16384))
	{
		return;
	}
	if (func_129(&uLocal_533, 1048576))
	{
		return;
	}
	sVar0 = func_131(uLocal_533, 0, 0);
	func_132(Local_179[1], sVar0, 0);
	sVar0 = func_131(uLocal_533, 0, 1);
	func_132(Local_179[0], sVar0, 0);
	func_138(&uLocal_533, 1048576);
}

void func_337(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;

	if (!func_30(iParam0, 32))
	{
		if (!func_296(Global_35))
		{
			iParam0->f_56 = Global_1935630.f_41;
			if (func_61(iParam0->f_56, 0, 1))
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0->f_56, -1))
				{
					TASK::CLEAR_PED_TASKS(iParam0->f_56, true, false);
				}
				POPULATION::_0xB56D41A694E42E86(iParam1, 2048, 0, 0, -1, -1, 0);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_56, 355, true);
				if (func_69(vParam2))
				{
					TASK::TASK_SMART_FLEE_PED(iParam0->f_56, (*iParam0)[0], iParam6, 6000, 0, 2f, 0);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam2, fParam5, 20000, fParam7, 0, 40000f);
					if (bParam8)
					{
						TASK::TASK_SMART_FLEE_PED(0, (*iParam0)[0], iParam6, 6000, 0, 2f, 0);
					}
					func_215(iParam0->f_56, &iVar0, 0, 0, 1, 1);
				}
				func_22(iParam0, 32);
			}
		}
	}
}

bool func_338()
{
	if (Local_450 > 0)
	{
		return true;
	}
	if (func_483(&Local_179, 0, 0))
	{
		return false;
	}
	if (!func_144(0f, 1, Global_35, 1) && !func_144(0f, 1, Local_179[1], 1))
	{
		return false;
	}
	func_40(&uLocal_546, 0);
	if (func_47(&uLocal_546, 1.5f))
	{
		return true;
	}
	return false;
}

bool func_339(int iParam0, int iParam1, float fParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	func_173(iParam1);
	if (Global_1935630.f_12)
	{
		iParam1->f_1 = 0;
		iParam1->f_2 = 1;
		return true;
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_COLLECT"), false);
	PED::SET_PED_RESET_FLAG(Global_35, 194, true);
	switch (*iParam1)
	{
		case 0:
			if (!iParam1->f_7)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_16))
				{
					if (bParam3)
					{
						func_484(0);
					}
					if (func_144(fParam4, 1, 0, 0))
					{
						func_356(iParam0, Global_35, iParam1->f_16, 0, -1082130432 /* Float: -1f */, iParam1->f_21, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				iParam1->f_7 = 1;
			}
			if ((((((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_FALLING(Global_35)) && !PED::_IS_PED_FALLING_2(Global_35)) && !ENTITY::IS_ENTITY_IN_AIR(Global_35, 1)) && !func_314(Global_35, 501393341)) && !func_314(Global_35, 1553520516)) && !func_314(Global_35, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
			{
				PED::_0xC163DAC52AC975D3(iParam0, 32);
				iParam1->f_25 = { Global_36 };
				if (func_198(iParam5, 4))
				{
					PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_IDLE"), false, 0, false);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
				}
				if (func_373(Global_1935630.f_44))
				{
					func_40(&(iParam1->f_32), 0);
				}
				else
				{
					func_485(&(iParam1->f_32), 0.5f, 0);
				}
				TASK::TASK_ROB_PED(iParam0, Global_35, 0f, iParam5, iParam9);
				if (!func_475(609))
				{
					func_377(1);
					iParam1->f_28 = func_486("TF_AIM_AMBUSH", 10000, 0, 0, 0, 1);
					func_487(609, &uVar0, &uVar1);
					func_488(&uVar0, &uVar1);
				}
				iParam1->f_8 = 1;
				*iParam1 = 2;
			}
			break;
		case 2:
			if (((!iParam1->f_12 && !iParam1->f_13) && func_47(&(iParam1->f_32), 2f)) && func_489(iParam0, joaat("BSTARTSUCCESS"), "bStartSuccess", 1, 1.8f, 1))
			{
				if (func_490(&(iParam1->f_36), "PLAYER_SURRENDER_REACH_FOR_WEAPON", Global_36, 0, joaat("INPUT_ATTACK"), 1097859072 /* Float: 15f */, 0, 0, 1, "", 1, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
				{
					iParam1->f_12 = 1;
				}
				if (!iParam1->f_14)
				{
					if (func_374(iParam1->f_36))
					{
						iParam1->f_14 = 1;
					}
				}
			}
			if (iParam1->f_14)
			{
				if (func_489(iParam0, joaat("BENDSUCCESS"), "bEndSuccess", 1, 1.8f, 1))
				{
					func_375(&(iParam1->f_36), 1, 1);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				iParam1->f_1 = 1;
				return true;
			}
			bVar2 = false;
			if (func_491() && PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
			{
				bVar2 = true;
			}
			else if (Global_1935630.f_25)
			{
				bVar2 = true;
			}
			else if (PED::IS_PED_IN_COMBAT(iParam0, 0) && func_314(iParam0, 780511057))
			{
				bVar2 = true;
			}
			else if (func_492(iParam1))
			{
				bVar2 = true;
			}
			else if (func_493(iParam1, bParam11))
			{
				bVar2 = true;
			}
			else if ((func_198(iParam5, 16) && !func_314(iParam0, 1435919172)) && !ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("OBJECTEXCHANGE")))
			{
				bVar2 = true;
			}
			if (!iParam1->f_15)
			{
				if (PED::IS_PED_SHOOTING(iParam0))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_20))
				{
					if (bParam3)
					{
						func_484(0);
					}
					if (func_144(fParam4, 1, 0, 0))
					{
						func_356(Global_35, iParam0, iParam1->f_20, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				func_375(&(iParam1->f_36), 1, 1);
				iParam1->f_13 = 1;
				iParam1->f_6 = 1;
				return true;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("OBJECTEXCHANGE")))
			{
				if (iParam6 != 0)
				{
					func_494(iParam6, 1, 0, -142743235, 0);
					func_495(iParam0, iParam6, 1, 0);
				}
				iVar3 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(func_496(1)) * fParam2));
				if (iVar3 > 0)
				{
					func_497(iVar3, 0, 0, 1, 1);
					func_498(iVar3);
					func_366(iParam0, &iVar4);
					func_367(iParam0, (iVar4 + iVar3));
				}
				PAD::SET_PAD_SHAKE(0, 100, 100);
				if (!iParam1->f_3)
				{
					iParam1->f_2 = 1;
				}
			}
			if (bParam7)
			{
				if (func_489(iParam0, joaat("BBEFOREHITBREAKOUT"), "bBeforeHitBreakout", iParam8, 0.9f, 0))
				{
					iParam1->f_5 = 1;
					return true;
				}
			}
			if (func_489(iParam0, joaat("DLG_INTRO"), "DLG_INTRO", iParam8, 0.5f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_17))
				{
					if (bParam3)
					{
						func_484(0);
					}
					if (func_144(0f, 1, iParam0, 1))
					{
						func_356(iParam0, Global_35, iParam1->f_17, 0, -1082130432 /* Float: -1f */, iParam1->f_22, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				iParam1->f_15 = 1;
			}
			if (func_489(iParam0, joaat("DLG_HIT"), "DLG_HIT", iParam8, 0.6f, 0))
			{
				if (bParam3)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_18))
					{
						func_484(0);
					}
				}
				if (iParam1->f_11)
				{
					if (func_144(0, 1, iParam0, 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_18))
						{
							func_356(iParam0, Global_35, iParam1->f_18, 0, -1082130432 /* Float: -1f */, iParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
				else if (func_144(fParam4, 1, 0, 0))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_18))
					{
						func_356(iParam0, Global_35, iParam1->f_18, 0, -1082130432 /* Float: -1f */, iParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				func_375(&(iParam1->f_36), 1, 1);
				iParam1->f_13 = 1;
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_cut_cheek", 0f, 1f);
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_bruise_eye_A", 0f, 1f);
				if (bParam10)
				{
				}
				iParam1->f_4 = 1;
			}
			if (func_489(iParam0, joaat("DLG_FAILED"), "DLG_FAILED", iParam8, 0.7f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_19))
				{
					if (bParam3)
					{
						func_484(0);
					}
					if (func_144(fParam4, 1, 0, 0))
					{
						func_356(iParam0, Global_35, iParam1->f_19, 0, -1082130432 /* Float: -1f */, iParam1->f_24, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				iParam1->f_2 = 0;
				iParam1->f_3 = 1;
			}
			if (func_489(iParam0, joaat("BLENDOUT"), "Blendout", iParam8, 0.8f, 0) || !func_314(iParam0, 2137044382))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_340()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_61(Local_179[iVar0], 0, 0))
		{
		}
		else
		{
			func_205(&(Local_179.f_22[iVar0]));
			switch (iVar0)
			{
				case 0:
					func_499(Local_179[iVar0], Local_179.f_49[0], -1, 2f, -1, 131073);
					break;
				case 1:
					func_499(Local_179[iVar0], Local_179.f_49[0], 0, 2f, -1, 262145);
					break;
				case 2:
					func_341(Local_179[iVar0], Local_179.f_40[0], 0, 2f, 20000);
					break;
			}
		}
		iVar0++;
	}
}

int func_341(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!PED::IS_PED_ON_MOUNT(iParam0) && !ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(iParam1, false)))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iParam1, bParam2);
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1868526510, true) != 1)
				{
					TASK::TASK_MOUNT_ANIMAL(iParam0, iParam1, iParam4, -1, fParam3, 1, 0, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_342()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_61(Local_179[iVar0], 0, 0))
		{
			return false;
		}
		switch (iVar0)
		{
			case 0:
			case 1:
				if (!PED::IS_PED_IN_VEHICLE(Local_179[iVar0], Local_179.f_49[0], false))
				{
					return false;
				}
				break;
			default:
				if (!PED::IS_PED_ON_MOUNT(Local_179[iVar0]))
				{
					return false;
				}
				break;
		}
		iVar0++;
	}
	return true;
}

void func_343()
{
	int iVar0;
	int iVar1;

	func_54(&Local_179);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_61(Local_179[iVar0], 0, 0))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 0:
					if (func_129(&uLocal_533, 2))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_VEHICLE_GOTO_NAVMESH(0, Local_179.f_49[0], -64.83394f, 379.5077f, 112.7398f, 14f, 0, 3f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_179.f_49[0], -96.77056f, 577.9213f, 113.7471f, 14f, 0, ENTITY::GET_ENTITY_MODEL(Local_179.f_49[0]), 0, 5f, 2f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_179.f_49[0], 170.4856f, 621.06f, 126.3277f, 14f, 0, ENTITY::GET_ENTITY_MODEL(Local_179.f_49[0]), 0, 5f, 2f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_179.f_49[0], func_500(36, 1), 14f, 0, ENTITY::GET_ENTITY_MODEL(Local_179.f_49[0]), 0, 5f, 2f);
						func_215(Local_179[iVar0], &iVar1, 0, 0, 1, 1);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_VEHICLE_GOTO_NAVMESH(0, Local_179.f_49[0], -120.3455f, 290.5117f, 101.7626f, 14f, 524308, 3f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_179.f_49[0], -75.02242f, 304.6132f, 105.9758f, 14f, 0, ENTITY::GET_ENTITY_MODEL(Local_179.f_49[0]), 67633172, 5f, 2f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_179.f_49[0], -45.25683f, 339.4475f, 113.1327f, 14f, 0, ENTITY::GET_ENTITY_MODEL(Local_179.f_49[0]), 67108864, 5f, 2f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_179.f_49[0], 101.9358f, 41.27348f, 99.3008f, 14f, 0, ENTITY::GET_ENTITY_MODEL(Local_179.f_49[0]), 67108864, 5f, 2f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_179.f_49[0], 494.5761f, 350.9439f, 105.0089f, 14f, 0, ENTITY::GET_ENTITY_MODEL(Local_179.f_49[0]), 67108864, 5f, 2f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_179.f_49[0], func_500(36, 1), 14f, 0, ENTITY::GET_ENTITY_MODEL(Local_179.f_49[0]), 67108864, 5f, 2f);
						func_215(Local_179[iVar0], &iVar1, 0, 0, 1, 1);
					}
					break;
				case 1:
					break;
				default:
					TASK::_TASK_SMART_FLEE_STYLE_PED_VIA(Local_179[iVar0], Global_35, 4, func_500(36, 1), 8941956, -1082130432 /* Float: -1f */, -1, 0);
					break;
			}
		}
		iVar0++;
	}
}

void func_344(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_24() - fParam1);
	func_501(uParam0, 1);
	func_502(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_345(var uParam0, int iParam1)
{
}

bool func_346(var uParam0)
{
	switch (uParam0->f_224)
	{
		case 0:
			if (func_503(uParam0))
			{
				func_345(uParam0, 1);
				return true;
			}
			break;
		case 1:
			if (func_504(uParam0))
			{
				func_345(uParam0, 2);
				return true;
			}
			break;
		case 2:
			if (func_505(uParam0))
			{
				func_345(uParam0, 3);
				return true;
			}
			break;
		case 3:
			if (func_506(uParam0))
			{
				func_345(uParam0, 4);
				return true;
			}
			break;
		case 4:
			if (func_507(uParam0))
			{
				func_345(uParam0, 5);
				return true;
			}
			break;
		case 5:
			if (func_508(uParam0))
			{
				func_345(uParam0, 6);
				return true;
			}
			break;
		case 6:
			break;
	}
	uParam0->f_224++;
	uParam0->f_224 = (uParam0->f_224 % 7);
	return false;
}

void func_347(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (func_509(&(uParam1->f_3), 1))
	{
		func_510(uParam1);
		if (func_511(iParam0, fParam7, iParam11, bParam12, bParam13, fParam14))
		{
			func_307();
		}
	}
	if (func_512(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_513(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

bool func_348()
{
	vector3 vVar0;

	PATHFIND::GET_CLOSEST_VEHICLE_NODE(Global_36, &vVar0, 1, 3f, 0f);
	if (!func_69(vVar0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true) > 12f)
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_349()
{
	return func_301(Global_35, iLocal_523[5], 1, 0);
}

bool func_350()
{
	return func_301(Global_35, iLocal_523[4], 1, 0);
}

bool func_351()
{
	return func_301(Global_35, iLocal_523[3], 1, 0);
}

bool func_352(var uParam0)
{
	return func_30(uParam0, 64);
}

bool func_353()
{
	int iVar0;
	var uVar1;
	float fVar2;

	if (func_349())
	{
		func_40(&(vLocal_487[2 /*3*/]), 0);
	}
	else
	{
		func_150(&(vLocal_487[2 /*3*/]));
		func_207(&(vLocal_487[2 /*3*/]));
	}
	if (func_47(&(vLocal_487[2 /*3*/]), 0.33f))
	{
		return true;
	}
	iVar0 = func_514(Global_35);
	if (func_61(iVar0, 0, 1))
	{
		PED::_0xF60165E1D2C5370B(iVar0, &uVar1, &fVar2);
		if (fVar2 < 1f)
		{
			return true;
		}
	}
	return false;
}

bool func_354(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_436(*uParam1, 128))
	{
		if (!func_314(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_436(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!func_515(iVar2))
			{
				return false;
			}
			if (!func_314(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_516(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_436(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((func_198(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0)));
			func_517(uParam1, 128);
			return false;
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	if (func_436(*uParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return false;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
			*uParam1 = 0;
			return true;
		}
	}
	if (func_436(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!func_515(iVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_198(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_198(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, false);
				if (func_198(iParam2, 8192))
				{
					HUD::_DISPLAY_HUD_COMPONENT(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return false;
		}
		if (func_436(*uParam1, 2336))
		{
			if (!func_515(iVar2))
			{
			}
			if (func_518(iVar2, *uParam1))
			{
				func_519(uParam1, 32);
				func_519(uParam1, 256);
				func_519(uParam1, 2048);
				func_517(uParam1, 512);
				func_517(uParam1, 1024);
				func_517(uParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (func_436(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!func_515(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return false;
			}
			else
			{
				func_519(uParam1, 64);
			}
		}
		if (func_198(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return true;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_198(iParam2, 1024))) || func_198(iParam2, 8)) && !func_436(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_517(uParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_198(iParam2, 4096)) && !func_436(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_517(uParam1, 2048);
			func_517(uParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_198(iParam2, 32)) && !func_436(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_517(uParam1, 256);
			func_517(uParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_517(uParam1, 64);
		}
		else if (!func_198(iParam2, 1))
		{
			if (!func_198(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_516(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_436(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			func_517(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_517(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_198(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_517(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	else if (!func_198(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_517(uParam1, 8);
	}
	return false;
}

bool func_355(int iParam0, int iParam1)
{
	return func_520(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

bool func_356(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_521(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

int func_357()
{
	return Global_1310750.f_16037;
}

bool func_358(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_359(int iParam0, int iParam1)
{
	if (!func_358(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

bool func_360(int iParam0)
{
	if (!func_358(iParam0))
	{
		return false;
	}
	if (func_522(64) && func_523(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_361(int iParam0)
{
	if (!func_358(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_362(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_358(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_524(iParam0);
	Global_1310750.f_16037 = (Global_1310750.f_16037 - 1);
}

void func_363(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

bool func_364(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return (Global_1393237.f_11[iParam0 /*30*/].f_10 && iParam1) != 0;
}

void func_365(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 = (Global_1393237.f_11[iParam0 /*30*/].f_10 || iParam1);
}

int func_366(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return ENTITY::_0xBA2A089E60ED1163(iParam1, iParam0, joaat("CURRENCY_CASH"), 0, 0);
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money"))
	{
		return 0;
	}
	*iParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_money");
	return 1;
}

bool func_367(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_525(iParam0);
		return func_526(iParam0, joaat("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_368(int iParam0)
{
}

void func_369(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_370()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_371()
{
	return Global_1572887.f_12;
}

void func_372(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_97[iParam1] = (uParam0->f_97[iParam1] - (uParam0->f_97[iParam1] && iParam2));
}

bool func_373(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_374(int iParam0)
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

void func_375(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_374(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_527(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_528(iVar0);
	*uParam0 = 0;
}

bool func_376(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return UIFEED::_0x59FA676177DBE4C9(iParam0) == 4;
}

void func_377(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_378(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_371() != -1)
	{
		uVar3 = Global_36638.f_1444[iVar1];
		MISC::CLEAR_BIT(&uVar3, iVar2);
		Global_36638.f_1444[iVar1] = uVar3;
		return;
	}
	uVar4 = Global_40.f_7832[iVar1];
	MISC::CLEAR_BIT(&uVar4, iVar2);
	Global_40.f_7832[iVar1] = uVar4;
}

bool func_379(int iParam0)
{
	float fVar0;

	if (!func_61(Local_179[iParam0], 0, 0))
	{
		return false;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_179[iParam0]))
	{
		return false;
	}
	if (func_204(Local_179[iParam0], Global_36, 1) < 5f)
	{
		return false;
	}
	if (func_177())
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			fVar0 = 0.5f;
			break;
		case 1:
			fVar0 = 0.5f;
			break;
		case 2:
			fVar0 = 0.7f;
			break;
		case 3:
			fVar0 = 0.2f;
			break;
		case 4:
			fVar0 = 0.5f;
			break;
	}
	if (func_129(&uLocal_533, 16))
	{
		return false;
	}
	if (func_47(&(vLocal_487[1 /*3*/]), fVar0))
	{
		return false;
	}
	return true;
}

void func_380(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_529(iParam0, uParam1, 1);
	func_530(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_381(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

bool func_382()
{
	vector3 vVar0;
	vector3 vVar3;

	if (func_129(&uLocal_533, 16384))
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_179.f_49[0], 5f, -15f, 0f) };
		vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_179.f_49[0], 5f, 15f, 0f) };
	}
	else
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_179.f_49[0], 10f, -15f, 0f) };
		vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_179.f_49[0], 10f, 15f, 0f) };
	}
	if (func_531(vVar0, vVar3, Global_36))
	{
		return true;
	}
	return false;
}

int func_383()
{
	if (PED::GET_VEHICLE_PED_IS_IN(Global_35, false) == Local_179.f_49[0])
	{
		return 1;
	}
	if (func_299(Local_179.f_49[0], &iLocal_32))
	{
		return 1;
	}
	iLocal_32++;
	if (iLocal_32 >= 2)
	{
		iLocal_32 = 0;
	}
	return 0;
}

void func_384(int iParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (bParam1)
	{
		if (!func_532(610))
		{
			if (!func_533())
			{
				func_534(1);
				func_535();
			}
		}
		func_476(610, 1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, true);
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			MISC::_0x870708A6E147A9AD(iParam0, "", fParam2, fParam2, 0, 0, 0, 0, 0, -1);
		}
		PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), iParam0, 1, 0);
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			MISC::_0x870708A6E147A9AD(iParam0, "", fParam2, fParam2, 8, 0, 0, 0, 0, -1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, false);
		if (!bParam3)
		{
			PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
		}
	}
}

Vector3 func_385(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return func_447(5, 0);
				case 2:
					return func_447(5, 1);
				case 4:
					return func_447(5, 2);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return func_447(7, 1);
				case 1:
					return func_447(7, 0);
				case 2:
					return func_447(7, 3);
				case 3:
					return func_447(7, 4);
				case 4:
					return func_447(7, 2);
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_447(2, 0);
			case 2:
				return func_447(2, 1);
			case 4:
				return func_447(2, 2);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_447(3, 1);
			case 1:
				return func_447(3, 0);
			case 2:
				return func_447(3, 3);
			case 3:
				return func_447(3, 4);
			case 4:
				return func_447(3, 2);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_386(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return 1.75f;
				case 2:
					return 1.75f;
				case 4:
					return 3f;
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return 1.75f;
				case 1:
					return 1.75f;
				case 3:
					return 3f;
				case 2:
					return 1f;
				case 4:
					return 2f;
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return 1.75f;
			case 2:
				return 1.75f;
			case 4:
				return 3f;
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return 1.75f;
			case 1:
				return 1.75f;
			case 3:
				return 3f;
			case 2:
				return 1f;
			case 4:
				return 2f;
			default:
				break;
		}
	}
	return -1f;
}

int func_387(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return 1;
				case 2:
					return 1;
				case 4:
					return 0;
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 1;
				case 3:
					return 1;
				case 4:
					return 1;
				case 2:
					return 1;
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return 1;
			case 2:
				return 1;
			case 4:
				return 0;
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 3:
				return 1;
			case 4:
				return 1;
			case 2:
				return 1;
			default:
				break;
		}
	}
	return 0;
}

bool func_388(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return true;
				case 2:
					return true;
				case 4:
					return true;
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return true;
				case 1:
					return true;
				case 3:
					return true;
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return true;
			case 2:
				return true;
			case 4:
				return true;
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return true;
			case 1:
				return true;
			case 3:
				return true;
			default:
				break;
		}
	}
	return false;
}

int func_389(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61((*uParam0)[iVar0], 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_390(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_204((*iParam0)[iParam1], Global_36, 1);
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_146((*iParam0)[iParam1], 1065353216 /* Float: 1f */), func_146(Global_35, 1065353216 /* Float: 1f */), true);
	if (fVar0 < 10f)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_OCCLUDED((*iParam0)[iParam1]))
	{
		return true;
	}
	if (PED::IS_PED_IN_COVER((*iParam0)[iParam1], true, false))
	{
		return true;
	}
	if (fVar1 < (fVar0 - 2f))
	{
		return false;
	}
	return true;
}

bool func_391()
{
	if (func_371() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_392(int iParam0, int iParam1)
{
	func_257(iParam0, iParam1);
}

bool func_393()
{
	if (func_371() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

bool func_394(int iParam0)
{
	return PED::GET_PED_CONFIG_FLAG(iParam0, 161, false);
}

int func_395(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;

	iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
	fVar1 = BUILTIN::TO_FLOAT((iVar0 / iParam1));
	if (fVar1 > 0.8f || (func_24() - fParam2) < 4f)
	{
		return 2;
	}
	else if (fVar1 < 0.3f)
	{
		return 4;
	}
	return 1;
}

char* func_396(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		if (func_198(iParam3, 1))
		{
			switch (iParam1)
			{
				case 0:
					return "WON_FIGHT_ODRISCOLL";
				case 2:
					return "WON_FIGHT_EXCONFED";
				case 1:
					return "WON_FIGHT_INBRED";
				case 3:
					return "WON_FIGHT_SAVAGES";
				case 5:
					return "WON_FIGHT_BANDITOS";
				case 4:
					return "WON_FIGHT_RANCHERS";
				case 10:
					return "WON_FIGHT_PINKERTONS";
				default:
					break;
			}
		}
		else if (func_198(iParam3, 2))
		{
			switch (iParam1)
			{
				case 0:
					return "WON_FIGHT_ODRISCOLL_DOM";
				case 2:
					return "WON_FIGHT_EXCONFED_DOM";
				case 1:
					return "WON_FIGHT_INBRED_DOM";
				case 3:
					return "WON_FIGHT_SAVAGES_DOM";
				case 5:
					return "WON_FIGHT_BANDITOS_DOM";
				case 4:
					return "WON_FIGHT_RANCHERS_DOM";
				case 10:
					return "WON_FIGHT_PINKERTONS_DOM";
				default:
					break;
			}
		}
		else if (func_198(iParam3, 4))
		{
			switch (iParam1)
			{
				case 0:
					return "WON_FIGHT_ODRISCOLL_LOWH";
				case 2:
					return "WON_FIGHT_EXCONFED_LOWH";
				case 1:
					return "WON_FIGHT_INBRED_LOWH";
				case 3:
					return "WON_FIGHT_SAVAGES_LOWH";
				case 5:
					return "WON_FIGHT_BANDITOS_LOWH";
				case 4:
					return "WON_FIGHT_RANCHERS_LOWH";
				case 10:
					return "WON_FIGHT_PINKERTONS_LOWH";
				default:
					break;
			}
		}
	}
	return "WON_FIGHT";
}

int func_397()
{
	return Global_1899515;
}

int func_398(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 2;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
		case 36:
			iVar0 = 2;
			break;
		case 3:
			iVar0 = 1;
			break;
		case 4:
			iVar0 = 2;
			break;
		case 38:
			iVar0 = 2;
			break;
		case 5:
			iVar0 = 2;
			break;
		case 35:
			iVar0 = 2;
			break;
		case 6:
			iVar0 = 2;
			break;
		case 42:
			iVar0 = 2;
			break;
		case 7:
			iVar0 = 2;
			break;
		case 41:
			iVar0 = 2;
			break;
		case 8:
			iVar0 = 2;
			break;
		case 40:
			iVar0 = 2;
			break;
		case 9:
			iVar0 = 1;
			break;
		case 10:
			iVar0 = 2;
			break;
		case 37:
			iVar0 = 2;
			break;
		case 11:
			iVar0 = 2;
			break;
		case 12:
			iVar0 = 1;
			break;
		case 13:
			iVar0 = 1;
			break;
		case 14:
			iVar0 = 1;
			break;
		case 15:
			iVar0 = 1;
			break;
		case 16:
			iVar0 = 1;
			break;
		case 17:
			iVar0 = 2;
			break;
		case 39:
			iVar0 = 2;
			break;
		case 18:
			iVar0 = 2;
			break;
		case 19:
			iVar0 = 1;
			break;
		case 20:
			iVar0 = 1;
			break;
		case 21:
			iVar0 = 1;
			break;
		case 22:
			iVar0 = 1;
			break;
		case 23:
			iVar0 = 2;
			break;
		case 24:
			iVar0 = 2;
			break;
		case 25:
			iVar0 = 1;
			break;
		case 26:
			iVar0 = 1;
			break;
		case 27:
			iVar0 = 1;
			break;
		case 28:
			iVar0 = 1;
			break;
		case 29:
			iVar0 = 2;
			break;
		case 30:
			iVar0 = 2;
			break;
		case 31:
			iVar0 = 1;
			break;
		case 32:
			iVar0 = 1;
			break;
		case 33:
			iVar0 = 2;
			break;
		case 34:
			iVar0 = 2;
			break;
		case 43:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_399(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (iParam0 >= 0)
	{
		if (iParam0 <= 10)
		{
			iVar0 = 0;
		}
		else if (iParam0 <= 17)
		{
			iVar0 = 2;
		}
		else if (iParam0 <= 23)
		{
			iVar0 = 1;
		}
		else if (iParam0 <= 28)
		{
			iVar0 = 3;
		}
		else if (iParam0 <= 30)
		{
			iVar0 = 4;
		}
		else if (iParam0 <= 33)
		{
			iVar0 = 5;
		}
	}
	return iVar0;
}

void func_400(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return;
	}
	func_402(func_536(iParam0) + 1, iParam0);
}

int func_401()
{
	return Global_1393447.f_51;
}

void func_402(int iParam0, int iParam1)
{
	Global_40.f_9632.f_184[iParam1] = iParam0;
}

void func_403()
{
	func_404(Global_40.f_9632.f_196 + 1);
}

void func_404(int iParam0)
{
	Global_40.f_9632.f_196 = iParam0;
}

void func_405(int iParam0)
{
	func_537(iParam0, 0);
	Global_40.f_9632[iParam0 /*4*/]++;
	if (Global_40.f_9632[iParam0 /*4*/] > Global_40.f_9632[iParam0 /*4*/].f_1)
	{
		Global_40.f_9632[iParam0 /*4*/].f_1++;
	}
	func_168(0, 13);
}

void func_406(int iParam0)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_538(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_539(iVar1);
		func_537(iVar1, bVar0);
	}
	iVar1 = func_540(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_539(iVar1);
		func_537(iVar1, bVar0);
	}
	iVar1 = func_541(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_539(iVar1);
		func_537(iVar1, bVar0);
	}
}

void func_407(int iParam0, int iParam1, bool bParam2)
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

bool func_408(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return true;
		default:
			break;
	}
	return false;
}

void func_409(int iParam0, int iParam1)
{
	if (!func_358(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 - (Global_1310750[iParam0 /*111*/].f_1 && iParam1));
}

bool func_410(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_411(int iParam0)
{
	if (!func_358(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

int func_412(int iParam0)
{
	if (func_358(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_413(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

void func_414(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_415(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_415(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_542(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if (Global_17504.f_42[iParam0 /*8*/].f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_371() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 = (Global_17504.f_42[iParam0 /*8*/].f_4 + iVar0);
}

bool func_416(var uParam0)
{
	return func_227(*uParam0, 2);
}

bool func_417(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_418(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_418(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_419(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_544(iParam0, 32);
	func_545();
}

void func_420(int iParam0)
{
	int iVar0;

	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_421(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_423(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_423(iParam0);
	}
}

int func_421(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_3;
}

bool func_422(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1900383[iParam0 /*45*/].f_2;
}

void func_423(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
}

bool func_424(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	if (PED::_IS_PED_HOGTIED(iParam1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam1, Global_35))
	{
		if (func_237(iParam1, 200f, (30f * 3f), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
		{
			return false;
		}
	}
	else if (func_237(iParam1, 200f, 30f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(iParam1, true)))
		{
			return false;
		}
	}
	return true;
}

bool func_425(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_426(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (iParam0 == (*iParam1)[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_427(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_546(func_397());
	if (func_198(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_198(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_198(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_198(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_198(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_198(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_198(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_198(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_198(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_198(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_198(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_198(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_198(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_198(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_198(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_198(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_198(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_428(int iParam0, float fParam1)
{
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && func_547(Global_35, iParam0, 0, fParam1, 0))
	{
		return true;
	}
	return false;
}

bool func_429(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return true;
	}
	if (func_245(iParam1, 120f, 30f))
	{
		return false;
	}
	return true;
}

float func_430(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_328(Global_35, iParam0, bParam1, bParam2);
}

Vector3 func_431(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_432(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

void func_433(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_431(vVar0, vVar3, 0f) };
	vVar9 = { func_432(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

void func_434(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_238))
	{
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_238);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_238);
	}
}

bool func_435(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_436(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_437(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/];
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return Global_1058888.f_498[iParam0 /*2*/];
}

int func_438(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

float func_439(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_440(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_548(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

char* func_441(int iParam0)
{
	if (func_549(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_442(int* iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_374(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_550(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_551(iParam0->f_6, iParam0->f_5, 0);
			}
			func_552(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_553(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

char* func_443()
{
	return "ORR_V2_ILO_NEG";
}

void func_444(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_554(iParam0, 13))
		{
			if (bParam2)
			{
				func_481(iParam0, 0, 0);
			}
			func_555(iParam0, 13);
		}
	}
	else if (func_554(iParam0, 13))
	{
		func_556(iParam0, 13);
	}
}

void func_445()
{
	if (func_129(&uLocal_533, 2))
	{
		iLocal_523[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0x39816F6F94F385AD(iLocal_523[1], 725.1475f, -448.0963f, 83.0689f, 0f, 0f, 136.9009f, 56.30475f, 93.34787f, 15.65002f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[1], 655.288f, -409.3354f, 89.28727f, 0f, 0f, 146.3069f, 56.30475f, 106.0022f, 24.81304f);
		iLocal_523[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(723.0323f, -446.1176f, 83.0689f, 0f, 0f, 136.9009f, 62.13698f, 93.34787f, 15.65002f, "volWarpPeds");
		iLocal_523[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], 658.0131f, -540.8625f, 62.43887f, 0f, 0f, 156.6684f, 368.1186f, 211.3185f, 117.7756f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], 815.4044f, -449.4122f, 62.43887f, 0f, 0f, 148.5282f, 101.063f, 211.3185f, 117.7756f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], 632.79f, -337.6293f, 62.43887f, 0f, 0f, 148.5282f, 148.9367f, 236.6828f, 117.7756f);
		iLocal_523[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(706.9374f, -404.5294f, 89.061f, 0f, 0f, 136.716f, 34.74449f, 32.68204f, 11.48877f, "volSlow");
		iLocal_523[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(700.6584f, -414.4554f, 89.06124f, 0f, 0f, 136.716f, 14.54379f, 32.68204f, 11.48877f, "volSlower");
		iLocal_523[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(691.767f, -423.701f, 89.061f, 0f, 0f, 136.716f, 10.89182f, 32.68204f, 11.48877f, "volSlowest");
		iLocal_523[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(740.3391f, -461.0711f, 83.33646f, 0f, 0f, 156.7456f, 23.10939f, 7.275199f, 4.432636f, "volBehindWagonNorth");
	}
	else
	{
		iLocal_523[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0x39816F6F94F385AD(iLocal_523[1], 637.2888f, -415.046f, 100.3093f, 0f, 0f, -50.42155f, 56.30475f, 64.81712f, 51.95887f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[1], 697.9006f, -459.1436f, 89.28727f, 0f, 0f, -41.01562f, 41.01216f, 94.53839f, 40.84854f);
		iLocal_523[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(635.3097f, -412.6505f, 98.7776f, 0f, 0f, -50.42154f, 62.13698f, 93.34787f, 28.13465f, "volWarpPeds");
		iLocal_523[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], 715.6987f, -331.594f, 62.43887f, 0f, 0f, -30.65407f, 368.1186f, 211.3185f, 117.7756f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], 637.2098f, -355.8026f, 90.84097f, 0f, 0f, -50.19184f, 130.8701f, 211.3185f, 117.7756f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], 718.1372f, -539.7453f, 62.43887f, 0f, 0f, -45.33796f, 169.5687f, 236.6828f, 117.7756f);
		iLocal_523[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(654.6968f, -458.8107f, 89.06124f, 0f, 0f, -50.6065f, 34.74449f, 32.68204f, 11.48877f, "volSlow");
		iLocal_523[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(661.8083f, -452.7553f, 89.06124f, 0f, 0f, -50.6065f, 29.81209f, 32.68204f, 11.48877f, "volSlower");
		iLocal_523[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(669.8329f, -444.6637f, 89.06124f, 0f, 0f, -50.6065f, 22.01446f, 32.68204f, 11.48877f, "volSlowest");
		iLocal_523[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(623.8749f, -400.2407f, 83.33646f, 0f, 0f, -30.57684f, 23.10939f, 7.275199f, 4.432636f, "volBehindWagonNorth");
	}
}

void func_446()
{
	Local_179.f_239 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAmbientKillArea");
	VOLUME::_0x39816F6F94F385AD(Local_179.f_239, -91.40433f, 320.485f, 99.97915f, 0f, 0f, 25.04761f, 89.26486f, 100.682f, 52.32938f);
	VOLUME::_0x39816F6F94F385AD(Local_179.f_239, -115.2348f, 312.9216f, 99.97916f, 0f, 0f, 25.04761f, 30.67535f, 141.5386f, 52.32938f);
	if (func_129(&uLocal_533, 2))
	{
		iLocal_523[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0x39816F6F94F385AD(iLocal_523[1], -113.0475f, 319.9516f, 102.2646f, 0f, 0f, -19.76745f, 56.30475f, 93.34787f, 15.65002f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[1], -33.54915f, 312.028f, 108.483f, 0f, 0f, -10.36155f, 56.30475f, 106.0022f, 24.81304f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_523[1], -124.972f, 275.153f, 102.604f, 0f, 0f, 70f, 4f, 6f, 2f);
		iLocal_523[8] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volWarpPeds");
		VOLUME::_0x39816F6F94F385AD(iLocal_523[8], -110.3219f, 318.9721f, 102.2646f, 0f, 0f, -19.76745f, 62.13698f, 93.34787f, 15.65002f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_523[8], -124.972f, 275.153f, 102.604f, 0f, 0f, 70f, 4f, 6f, 2f);
		iLocal_523[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], -88.14307f, 431.7215f, 81.63461f, 0f, 0f, 0f, 368.1186f, 211.3185f, 117.7756f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], -196.4457f, 285.413f, 81.63461f, 0f, 0f, -8.140158f, 101.063f, 211.3185f, 117.7756f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], 15.50913f, 255.0958f, 81.63461f, 0f, 0f, -8.140158f, 148.9367f, 236.6828f, 117.7756f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], -135.694f, 282.614f, 103.588f, 0f, 0f, 62f, 11f, 21f, 10f);
		iLocal_523[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-83.0128f, 275.6543f, 108.257f, 0f, 0f, -19.95239f, 34.74449f, 40.60586f, 11.48877f, "volSlow");
		iLocal_523[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-74.91033f, 299.8469f, 108.257f, 0f, 0f, -19.95239f, 31.96415f, 32.68204f, 11.48877f, "volSlower");
		iLocal_523[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-68.36612f, 317.3996f, 108.257f, 0f, 0f, -19.95239f, 28.83469f, 32.68204f, 11.48877f, "volSlowest");
	}
	else
	{
		iLocal_523[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0x39816F6F94F385AD(iLocal_523[1], -82.823f, 324.78f, 95.66585f, 0f, 0f, 10.25873f, 66.57899f, 103.55f, 34.00753f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[1], -162.771f, 311.783f, 95.66585f, 0f, 0f, 16.10305f, 40.82469f, 103.55f, 34.00753f);
		iLocal_523[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-85.20458f, 324.349f, 95.66585f, 0f, 0f, 10.25873f, 71.66914f, 103.55f, 34.00753f, "volWarpPeds");
		iLocal_523[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], -77.10319f, 227.3434f, 81.63461f, 0f, 0f, -163.1078f, 368.1186f, 211.3185f, 117.7756f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], -31.49129f, 388.9274f, 81.63461f, 0f, 0f, -157.6661f, 163.6616f, 211.3185f, 117.7756f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], -247.5605f, 378.8534f, 81.63461f, 0f, 0f, -150.3424f, 126.4329f, 56.91168f, 117.7756f);
		iLocal_523[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-136.959f, 351.6969f, 101.151f, 0f, 0f, 24.03562f, 59.294f, 78.97474f, 13.489f, "volSlowNorth");
		iLocal_523[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-136.5299f, 349.0497f, 100.722f, 0f, 0f, 23.64807f, 60.407f, 24.49643f, 13.489f, "volSlowerNorth");
		iLocal_523[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-125.3727f, 323.3134f, 100.722f, 0f, 0f, 24.54023f, 58.95389f, 32.682f, 13.489f, "volSlowestNorth");
	}
	iLocal_523[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-132.1358f, 325.8486f, 102.5322f, 0f, 0f, 0.077269f, 23.10939f, 7.275199f, 4.432636f, "volBehindWagonNorth");
}

Vector3 func_447(int iParam0, int iParam1)
{
	return func_557(iParam0, iParam1);
}

void func_448(var uParam0, vector3 vParam1, float fParam4)
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam4;
}

void func_449(var uParam0, vector3 vParam1, int iParam4)
{
	float fVar0;

	if (func_56(iParam4))
	{
		fVar0 = 120f;
	}
	else
	{
		fVar0 = 180f;
	}
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, fVar0, fVar0, 40f, "volAmbush");
}

int func_450(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_558(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_451(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 9:
		case 10:
		case 11:
		case 16:
		case 37:
			return false;
	}
	return true;
}

int func_452(var uParam0)
{
	switch (uParam0->f_151)
	{
		case 3:
		case 4:
		case 6:
			return 6;
		case 0:
		case 1:
		case 2:
		case 5:
		case 7:
		case 8:
		case 9:
		case 10:
			return 6;
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			return 6;
		case 18:
		case 19:
		case 20:
			return 4;
		case 21:
		case 22:
		case 23:
			return 6;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
			return 6;
		case 29:
		case 30:
			return 6;
		case 31:
		case 32:
		case 33:
			return 6;
		case 38:
			return 6;
		case 34:
		case 35:
		case 36:
		case 37:
		case 39:
		case 40:
		case 41:
			return 6;
		case 43:
			return 6;
		default:
			break;
	}
	return 4;
}

void func_453(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_431(vVar0, vVar3, 0f) };
	vVar9 = { func_432(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		PATHFIND::_0xAFE2AE66F6251C66(vVar6, vVar9, iParam6, 1);
	}
}

void func_454(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_455(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 4;
		case 5:
			return 4;
		case 1:
			return 4;
		case 10:
			return 5;
		default:
			break;
	}
	return 1;
}

bool func_456()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

float func_457(int iParam0, int iParam1)
{
	return func_559(iParam0, iParam1);
}

bool func_458(int iParam0)
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

void func_459(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_560(iParam0, iParam1))
		{
			if (func_561(iParam0, iParam1))
			{
				if (func_562(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_563(iParam0);
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

void func_460(int iParam0, int iParam1, bool bParam2)
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

void func_461(int iParam0, bool bParam1)
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

void func_462(int iParam0, int iParam1)
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

struct<4> func_463(var uParam0, int iParam1)
{
	struct<4> Var0;

	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return func_564(4, 0);
				case 1:
					return func_564(4, 1);
				case 2:
					return func_564(4, 2);
				case 3:
					return func_564(4, 10);
				case 4:
					return func_564(4, 11);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return func_564(6, 0);
				case 1:
					return func_564(6, 1);
				case 2:
					return func_564(6, 2);
				case 3:
					return func_564(6, 10);
				case 4:
					return func_564(6, 11);
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_564(0, 0);
			case 1:
				return func_564(0, 1);
			case 2:
				return func_564(0, 2);
			case 3:
				return func_564(0, 10);
			case 4:
				return func_564(0, 11);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_564(1, 0);
			case 1:
				return func_564(1, 1);
			case 2:
				return func_564(1, 2);
			case 3:
				return func_564(1, 10);
			case 4:
				return func_564(1, 11);
			default:
				break;
		}
	}
	return Var0;
}

bool func_464(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

int func_465(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_565(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_566((386 + iVar28), 1);
			if (func_567(iParam0, &Var0, iVar5, 0))
			{
				if (func_568(iParam0, &Var6, iVar5))
				{
					Var29 = { func_569(iParam0, Var0, iVar5, 0) };
					func_570(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_571(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_572(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_573(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

void func_466(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN") || *iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_PIG")) || *iParam1 == joaat("WEAPON_REVOLVER_DOUBLEACTION_EXOTIC")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_CALLOWAY")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_GOLDEN")) || *iParam1 == joaat("WEAPON_PISTOL_MAUSER_DRUNK")) || *iParam1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC")) || *iParam1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("G_M_M_UNIINBRED_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_467(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_468(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_469(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_574(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_575(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_576(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_577(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_576(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_578(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_576(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_579(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_576(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_89(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_576(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_580(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_581(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_576(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_582(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_576(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_583(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_576(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_583(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_576(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_584(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_576(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (func_585(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_576(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_586(iParam2, 4000))
				{
					if ((func_587(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_588(iParam2, iParam0)) && func_589(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_576(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_587(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_588(iParam2, iParam0)) && func_589(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_576(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_590(iParam0, Global_1935630.f_41))
							{
								func_591();
								*uParam3 = 2;
								func_576(iParam0, iParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (func_590(iParam0, Global_1935630.f_41))
						{
							func_591();
							*uParam3 = 2;
							func_576(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_592(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_196() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_591();
						*uParam3 = 2;
						func_576(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_593())
					{
						if (func_590(iParam0, Global_1935630.f_42))
						{
							func_591();
							*uParam3 = 2;
							func_576(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_594(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_576(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_595(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_576(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_596(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_576(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_597(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_576(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_598(iParam2, 4000))
				{
					if (func_599(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_576(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_600(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_576(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_601(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_576(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

int func_470(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return 720;
				case 2:
					return 720;
				case 36:
					return 720;
				case 5:
				case 35:
					return 720;
				case 6:
				case 42:
					return 720;
				case 9:
					return 720;
				case 10:
					return 720;
				case 37:
					return 720;
				case 12:
					return 720;
				case 13:
					return 720;
				case 14:
					return 720;
				case 15:
					return 720;
				case 16:
					return 720;
				case 18:
					return 720;
				case 31:
					return 720;
				case 34:
					return 720;
				case 43:
					return 20;
				default:
					break;
			}
			return 3600;
		case 1:
			switch (iParam0)
			{
				case 43:
					return 20;
				default:
					break;
			}
			return 180;
	}
	return 180;
}

void func_471()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

void func_472(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_473(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_472(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_602(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_150(&(iParam1->f_13));
		}
		if (func_603(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_604(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_473(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_313(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_605(*uParam0, 1, 1);
						}
					}
					else if (func_606(iParam1, 22))
					{
						func_605(*uParam0, 0, 1);
					}
				}
				if (func_607(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_608(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_609(iParam8);
					if (func_610(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_611(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_612(iParam1, uParam3, fVar8);
					if (func_613(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_530(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_614(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_607(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_615(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_610(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_608(uParam0, func_607(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_609(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_530(uParam3, 0, 0, 1, 1);
					}
					func_616(iParam1, 1);
				}
				func_612(iParam1, uParam3, fVar8);
				if (func_614(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_380(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_474(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_617(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_356(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_475(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_371() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_476(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_487(iParam0, &iVar0, &iVar1);
	if (!func_618(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_619(iVar0, iVar1);
}

bool func_477(var uParam0, int iParam1)
{
	if (func_620(&(uParam0->f_106[iParam1 /*17*/]), 1, 0) && !func_554(&(uParam0->f_106[iParam1 /*17*/]), 13))
	{
		return true;
	}
	return false;
}

bool func_478(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

bool func_479(var uParam0, float fParam1)
{
	if (func_47(uParam0, fParam1))
	{
		func_207(uParam0);
		return true;
	}
	return false;
}

bool func_480(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, Global_35, 0, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_481(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_554(iParam0, 13))
	{
		func_555(iParam0, 0);
	}
	else
	{
		func_556(iParam0, 0);
	}
	if (func_374(iParam0->f_6))
	{
		if (bParam2)
		{
			func_375(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_482()
{
	if (((func_314(Global_35, 501393341) || func_314(Global_35, 1553520516)) || func_314(Global_35, 1920417248)) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_EXIT")))
	{
		return true;
	}
	return false;
}

bool func_483(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if ((func_314(Global_35, 501393341) || func_314(Global_35, 1553520516)) || func_314(Global_35, 1920417248))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
		{
			return false;
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		return true;
	}
	return false;
}

void func_484(int iParam0)
{
	func_207(&uLocal_0);
	func_621(1, iParam0, 0);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	func_622();
}

void func_485(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_60(uParam0))
	{
		func_344(uParam0, fParam1);
	}
}

var func_486(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_487(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

void func_488(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;

	if (func_371() != -1)
	{
		uVar0 = Global_36638.f_1444[*uParam0];
		MISC::SET_BIT(&uVar0, *uParam1);
		Global_36638.f_1444[*uParam0] = uVar0;
		return;
	}
	uVar1 = Global_40.f_7832[*uParam0];
	MISC::SET_BIT(&uVar1, *uParam1);
	Global_40.f_7832[*uParam0] = uVar1;
}

bool func_489(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, iParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_490(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	int iVar0;

	if (!func_374(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = func_623(sParam1, iParam6, iParam5, iParam10, fParam9, 0, iParam15, iVar0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0, 0);
			func_624(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_625(sParam1, iParam6, iParam13, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0);
		}
		else
		{
			if (func_69(vParam2))
			{
				return false;
			}
			*uParam0 = func_626(sParam1, iParam6, vParam2, fParam7, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_550(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_496(1))
			{
				func_552(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			func_627(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_628(*uParam0, 0))
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				func_552(*uParam0, 0, 1);
			}
		}
		else if (!PED::_IS_PED_CARRYING(Global_35))
		{
			func_552(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_496(1))
		{
			func_552(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (func_374(*uParam0))
			{
				func_375(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_629(*uParam0, 1)) || (bParam17 && func_630(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_497(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_631(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
		}
		func_375(uParam0, 1, 1);
		return true;
	}
	return false;
}

bool func_491()
{
	if (func_632(4))
	{
		return Global_1935630.f_27;
	}
	return func_633();
}

bool func_492(int iParam0)
{
	if (iParam0->f_4)
	{
		return false;
	}
	if (iParam0->f_9)
	{
		return false;
	}
	if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		return false;
	}
	if (!WEAPON::_0x705BE297EEBDB95D(Global_1935630.f_44))
	{
		return false;
	}
	if (func_47(&(iParam0->f_32), 1f))
	{
		if (!func_314(Global_35, 716706914))
		{
			return true;
		}
	}
	return false;
}

bool func_493(int iParam0, bool bParam1)
{
	if (iParam0->f_10)
	{
		return false;
	}
	if ((TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35)) || TASK::IS_PED_SPRINTING(Global_35))
	{
		if (bParam1 || MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, iParam0->f_25, false) > 2f)
		{
			return true;
		}
	}
	return false;
}

int func_494(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_634(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_635(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_636(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_637(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_638(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_639(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_639(iParam0, 0, 0) - iParam1) < 0)
		{
			func_494(iParam0, func_639(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_640(iParam0) == joaat("WEAPON"))
	{
		if (!func_641(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_642(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_571(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_636(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_643(iParam0, iParam1);
	return 1;
}

void func_495(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_525(iParam0);
		func_526(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

int func_496(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_497(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_644(iParam0);
	if (bParam3)
	{
		func_645(iParam0, sParam1, iParam2);
	}
}

void func_498(int iParam0)
{
	if (iParam0 < 200)
	{
		AUDIO::_PLAY_SOUND_FROM_ENTITY("LOOT_MONEY", Global_35, "LOOT_BODY_SOUNDSET", false, 0, 0);
	}
	else
	{
		AUDIO::_PLAY_SOUND_FROM_ENTITY("LOOT_MONEY_BILLS", Global_35, "LOOT_BODY_SOUNDSET", false, 0, 0);
	}
}

void func_499(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false, false))
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam1, iParam2) && !PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
			{
				TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, iParam4, iParam2, fParam3, iParam5, 0);
			}
		}
	}
}

Vector3 func_500(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_646(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
	{
		vVar0 = { VOLUME::_GET_VOLUME_COORDS(Global_1888801[iParam0 /*35*/].f_3) };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

void func_501(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_502(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_503(var uParam0)
{
	if ((Global_1935630.f_26 || PED::_0x5407B7288D0478B7(Global_35, 16384) > 0) || func_89(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return true;
	}
	return false;
}

bool func_504(var uParam0)
{
	if (!func_30(uParam0, 131072))
	{
		if (Global_1935630.f_40 == 0)
		{
			if (!func_30(uParam0, 16777216) || uParam0->f_20 < 60f)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_505(var uParam0)
{
	if (func_647(50))
	{
		if (func_648(uParam0->f_209, 1, 8, 0))
		{
			return true;
		}
	}
	if (func_649())
	{
		return true;
	}
	if (Global_1430231.f_4)
	{
		func_650(21);
		return true;
	}
	if (func_198(Global_1392581.f_3, 4) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		func_650(22);
		return true;
	}
	return false;
}

bool func_506(var uParam0)
{
	if (!func_30(uParam0, 262144))
	{
		if (uParam0->f_20 < 60f)
		{
			if (func_651(uParam0, 60f, uParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_507(var uParam0)
{
	if (!func_30(uParam0, 524288))
	{
		if (uParam0->f_20 < 60f)
		{
			if (func_652(uParam0, 60f, uParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_508(var uParam0)
{
	if (!func_56(uParam0->f_151))
	{
		if (uParam0->f_20 < 60f)
		{
			if (func_653(uParam0->f_151, uParam0->f_221))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_509(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_510(var uParam0)
{
	if (func_509(&(uParam0->f_3), 4))
	{
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if ((!func_654(uParam0) || func_509(&(uParam0->f_3), 4)) && !func_509(&(uParam0->f_3), 256))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_BEHIND"), false);
		}
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_NEXT_CAMERA"), false);
	}
	if (func_655(uParam0))
	{
		func_307();
	}
	if (!func_509(&(uParam0->f_3), 16))
	{
		if (func_60(uParam0))
		{
			if (func_656(uParam0) < uParam0->f_4)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
	}
}

bool func_511(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return true;
	}
	if (func_657(iParam0, fParam1, iParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

bool func_512(vector3 vParam0, var uParam3, float fParam4)
{
	float fVar0;

	if (!func_658(uParam3->f_7, uParam3->f_8))
	{
		return false;
	}
	if (func_509(&(uParam3->f_3), 1))
	{
		return false;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return false;
	}
	fVar0 = func_204(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return false;
	}
	if (!func_659(vParam0, uParam3))
	{
		return false;
	}
	if (!func_509(&(uParam3->f_3), 2))
	{
		if (!CAM::IS_SPHERE_VISIBLE(vParam0, 0.5f))
		{
			return false;
		}
		if (!func_660(vParam0, uParam3))
		{
			return false;
		}
	}
	return true;
}

void func_513(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		return;
	}
	CAM::SET_GAMEPLAY_HINT_FOV(fParam4);
	fVar0 = func_661(vParam1, 1);
	if (!func_509(&(uParam0->f_3), 32))
	{
		if (fVar0 > 60f)
		{
			iVar1 = 4000;
			iVar2 = 3500;
		}
		else if (fVar0 > 40f)
		{
			iVar1 = 3750;
			iVar2 = 3250;
		}
		else if (fVar0 > 20f)
		{
			iVar1 = 3500;
			iVar2 = 3000;
		}
		else if (fVar0 > 10f)
		{
			iVar1 = 3250;
			iVar2 = 2750;
		}
		else
		{
			iVar1 = 3000;
			iVar2 = 2500;
		}
		if (iParam5 > iVar1)
		{
			uParam0->f_4 = iVar1;
		}
		else if (iParam5 < iVar2)
		{
			uParam0->f_4 = iVar2;
		}
		else
		{
			uParam0->f_4 = iParam5;
		}
		CAM::_0x1F6EBD94680252CE(iVar1, -1082130432 /* Float: -1f */);
		CAM::_0xF48664E9C83825E3(iVar2, -1082130432 /* Float: -1f */);
	}
	else
	{
		uParam0->f_4 = iParam5;
	}
	func_150(uParam0);
	func_662(&(uParam0->f_3), 1);
}

int func_514(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

bool func_515(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_GET_RIDER_OF_MOUNT(iParam0, false) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
	if (func_314(iParam0, 1041577989))
	{
		return false;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_516(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_531(vVar0, vVar3, vParam1);
}

void func_517(var uParam0, int iParam1)
{
	func_663(uParam0, iParam1);
}

bool func_518(int iParam0, int iParam1)
{
	float fVar0;

	if (!func_314(iParam0, 1041577989))
	{
		return true;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(iParam0, 1041577989);
	if (func_436(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_436(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (func_436(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_519(var uParam0, int iParam1)
{
	func_664(uParam0, iParam1);
}

int func_520(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

int func_521(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	iParam5 = iParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_241())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_430(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_328(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_150(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_665(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_667(func_666(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_522(int iParam0)
{
	return (Global_1310750.f_16035 && iParam0) != 0;
}

bool func_523(int iParam0)
{
	return func_359(iParam0, Global_1310750.f_16072 | 64);
}

void func_524(int iParam0)
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

int func_525(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_526(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

int func_527(int iParam0)
{
	return iParam0;
}

void func_528(int iParam0)
{
	if (!func_668(iParam0))
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

void func_529(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_375(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_669(iParam0, 0);
		}
	}
}

void func_530(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_374((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_375(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						(uParam0[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						(uParam0[iVar0 /*17*/])->f_5 = "";
						(uParam0[iVar0 /*17*/])->f_14 = 0;
						(uParam0[iVar0 /*17*/])->f_13 = "";
						(uParam0[iVar0 /*17*/])->f_15 = 0;
						(uParam0[iVar0 /*17*/])->f_11 = "";
						(uParam0[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

bool func_531(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_532(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_670(iParam0, 65536) && !func_670(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_670(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_670(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_533()
{
	if (!func_671() && func_672(1))
	{
		return true;
	}
	return false;
}

void func_534(int iParam0)
{
	func_377(1);
}

void func_535()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			func_673(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

int func_536(int iParam0)
{
	return Global_40.f_9632.f_184[iParam0];
}

void func_537(int iParam0, bool bParam1)
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	int iVar4;

	Var2 = { func_165(joaat("TOTAL_PLAYING_TIME")) };
	if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
	{
		uVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
		Global_40.f_9632[iParam0 /*4*/].f_3 = uVar1;
		if (bParam1)
		{
			iVar4 = func_470(iParam0, 0);
			iVar4 = BUILTIN::FLOOR((0.666f * IntToFloat(iVar4)));
			Global_40.f_9632[iParam0 /*4*/].f_3 = (Global_40.f_9632[iParam0 /*4*/].f_3 + iVar4);
		}
		else
		{
			Global_40.f_9632[iParam0 /*4*/].f_3 = (Global_40.f_9632[iParam0 /*4*/].f_3 + func_470(iParam0, 0));
		}
	}
}

int func_538(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 35;
		case 1:
		case 2:
			return 36;
		case 9:
		case 10:
			return 37;
		case 3:
		case 4:
			return 38;
		case 17:
			return 39;
		case 6:
			return 42;
		case 8:
			return 40;
		case 35:
			return 5;
		case 36:
			return 1;
		case 37:
			return 9;
		case 38:
			return 3;
		case 39:
			return 17;
		case 42:
			return 6;
		case 40:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_539(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 36:
		case 37:
		case 40:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_540(int iParam0)
{
	switch (iParam0)
	{
		case 36:
			return 2;
		case 37:
			return 10;
		case 38:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_541(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 9:
			return 10;
		case 3:
			return 4;
		case 2:
			return 1;
		case 10:
			return 9;
		case 4:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_542(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

int func_543(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_544(int iParam0, int iParam1)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 = (Global_1900383[iParam0 /*45*/].f_24 - (Global_1900383[iParam0 /*45*/].f_24 && iParam1));
}

void func_545()
{
	if (func_674(0))
	{
		func_675(0);
	}
	if (func_674(1))
	{
		func_675(1);
	}
	if (func_674(5))
	{
		func_675(5);
	}
	if (func_674(6))
	{
		func_676(6);
	}
}

int func_546(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_547(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_677(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_678(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

int func_548(int iParam0, bool bParam1)
{
	switch (func_679(iParam0))
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

bool func_549(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_550(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_374(iParam0))
	{
		return;
	}
	iVar0 = func_527(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_551(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_374(iParam0))
	{
		return;
	}
	iVar0 = func_527(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, sParam1);
}

void func_552(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_374(iParam0))
	{
		return;
	}
	iVar0 = func_527(iParam0);
	if (bParam1)
	{
		func_680(iParam0, 4);
		func_681(iVar0, 1);
		func_682(iVar0, 1);
	}
	else
	{
		func_683(iParam0, 4);
		func_682(iVar0, 0);
	}
}

void func_553(int* iParam0, char* sParam1)
{
	if (func_374(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_551(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_556(iParam0, 1);
}

bool func_554(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_555(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_556(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

Vector3 func_557(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -84.6426f, 316.428f, 106.0875f;
				case 1:
					return -84.2981f, 322.8091f, 105.4735f;
				case 2:
					return -89.1717f, 333.6335f, 103.0008f;
				case 3:
					return -88.102f, 328.3871f, 103.8424f;
				case 4:
					return -79.1038f, 311.7244f, 106.588f;
				case 5:
					return -82.0975f, 314.9543f, 106.2141f;
				case 6:
					return -66.8993f, 306.0392f, 106.9735f;
				case 7:
					return -74.366f, 309.3329f, 106.4846f;
				case 8:
					return -95.0175f, 327.7535f, 102.8154f;
				case 9:
					return -71.2988f, 314.3236f, 107.0159f;
				case 10:
					return -42.0266f, 345.552f, 114.0236f;
				case 11:
					return -43.0849f, 348.8506f, 113.8612f;
				case 12:
					return -109.9214f, 335.0656f, 102.2082f;
				case 13:
					return -131.5672f, 280.713f, 101.1639f;
				case 14:
					return -50.7783f, 314.9141f, 110.3457f;
				case 15:
					return -60.3845f, 324.6346f, 109.8844f;
				case 16:
					return -65.8762f, 309.8829f, 107.6383f;
				case 17:
					return -85.2671f, 335.6891f, 103.9268f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -105.4812f, 325.33f, 101.879f;
				case 1:
					return -113.141f, 322.4635f, 101.5815f;
				case 2:
					return -108.4091f, 324.0324f, 101.8259f;
				case 3:
					return -106.3346f, 319.3181f, 102.4154f;
				case 4:
					return -114.4443f, 322.9393f, 101.7106f;
				case 5:
					return -117.212f, 320.9265f, 101.5372f;
				case 6:
					return -131.7749f, 331.1822f, 101.2828f;
				case 7:
					return -127.0955f, 332.4306f, 101.0931f;
				case 8:
					return -109.3698f, 329.7699f, 101.7037f;
				case 9:
					return -126.7656f, 328.9117f, 101.0141f;
				case 10:
					return -139.9803f, 293.297f, 100.8215f;
				case 11:
					return -138.6669f, 293.1178f, 100.938f;
				case 12:
					return -141.7007f, 304.9293f, 102.0377f;
				case 13:
					return -137.589f, 304.7306f, 102.3917f;
				case 14:
					return -50.9267f, 303.1498f, 107.6625f;
				case 15:
					return -100.9347f, 302.4319f, 103.159f;
				case 16:
					return -133.9256f, 330.0964f, 101.3673f;
				case 17:
					return -102.9949f, 311.6792f, 103.6171f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -69.5277f, 312.8127f, 107.1586f;
				case 1:
					return -75.1162f, 316.1115f, 107.1791f;
				case 2:
					return -65.8874f, 308.0902f, 107.5138f;
				case 3:
					return -122.9017f, 302.4197f, 101.6003f;
				case 4:
					return -126.8734f, 326.1433f, 101.1495f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -125.385f, 327.3113f, 101.1892f;
				case 1:
					return -131.9852f, 327.2832f, 101.441f;
				case 2:
					return -137.1946f, 307.5524f, 102.3471f;
				case 3:
					return -108.6748f, 323.6061f, 101.8175f;
				case 4:
					return -145.3344f, 334.7376f, 100.5408f;
				case 5:
					return -56.1593f, 309.1718f, 108.4659f;
				case 6:
					return -98.5945f, 306.3739f, 103.6851f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 699.4623f, -449.7601f, 84.0806f;
				case 1:
					return 694.3791f, -450.37f, 84.1206f;
				case 2:
					return 690.1107f, -453.6178f, 83.472f;
				case 3:
					return 692.0172f, -447.1501f, 83.9325f;
				case 4:
					return 691.8858f, -435.3443f, 83.7618f;
				case 5:
					return 696.0519f, -433.0005f, 84.1123f;
				case 6:
					return 688.5836f, -420.7917f, 84.1974f;
				case 7:
					return 693.7426f, -423.7245f, 84.1361f;
				case 8:
					return 697.722f, -451.11f, 84.1198f;
				case 9:
					return 690.5294f, -425.6945f, 83.8836f;
				case 10:
					return 642.5613f, -431.6535f, 95.9046f;
				case 11:
					return 642.669f, -435.1697f, 94.4427f;
				case 12:
					return 704.439f, -466.2914f, 81.5926f;
				case 13:
					return 740.9304f, -453.4742f, 75.5977f;
				case 14:
					return 655.7692f, -427.5562f, 93.3905f;
				case 15:
					return 657.0507f, -430.3001f, 91.6493f;
				case 16:
					return 691.07f, -417.4818f, 84.4804f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 686.975f, -424.5924f, 83.918f;
				case 1:
					return 691.5994f, -429.1452f, 83.9385f;
				case 2:
					return 684.5853f, -419.1295f, 84.2732f;
				case 3:
					return 741.2778f, -427.4204f, 78.3597f;
				case 4:
					return 739.3923f, -451.4002f, 77.9089f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 683.1494f, -459.777f, 84.0083f;
				case 1:
					return 680.584f, -461.4462f, 84.2966f;
				case 2:
					return 689.5515f, -456.8322f, 83.1239f;
				case 3:
					return 687.7432f, -456.9682f, 83.1931f;
				case 4:
					return 683.62f, -450.6996f, 83.5166f;
				case 5:
					return 684.2194f, -448.0876f, 83.3847f;
				case 6:
					return 671.7957f, -448.7225f, 84.542f;
				case 7:
					return 669.0417f, -445.6638f, 84.4587f;
				case 8:
					return 682.4808f, -457.3188f, 84.082f;
				case 9:
					return 669.6201f, -442.6719f, 84.4687f;
				case 10:
					return 680.1441f, -389.9271f, 98.8519f;
				case 11:
					return 677.5911f, -387.3658f, 100.7888f;
				case 12:
					return 678.2244f, -399.2587f, 96.5831f;
				case 13:
					return 671.4579f, -398.9648f, 99.8846f;
				case 14:
					return 692.4266f, -462.2748f, 82.2805f;
				case 15:
					return 697.6883f, -457.5936f, 83.1492f;
				case 16:
					return 669.6953f, -451.7408f, 84.6534f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -125.385f, 327.3113f, 101.1892f;
				case 1:
					return -131.9852f, 327.2832f, 101.441f;
				case 2:
					return -137.1946f, 307.5524f, 102.3471f;
				case 3:
					return -108.6748f, 323.6061f, 101.8175f;
				case 4:
					return -145.3344f, 334.7376f, 100.5408f;
				case 5:
					return -56.1593f, 309.1718f, 108.4659f;
				case 6:
					return -98.5945f, 306.3739f, 103.6851f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_558(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
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
	if (func_69(vParam0))
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
		if (func_684(vParam0))
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
	func_685(iVar0, bParam8);
	return iVar0;
}

float func_559(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 217.0172f;
				case 1:
					return 217.0172f;
				case 2:
					return 171.0172f;
				case 3:
					return 171.0172f;
				case 4:
					return 174.2635f;
				case 5:
					return 212.2635f;
				case 6:
					return 139.6044f;
				case 7:
					return 155.6044f;
				case 8:
					return 235.0172f;
				case 9:
					return 254.4908f;
				case 10:
					return 135.0172f;
				case 11:
					return 133.0172f;
				case 12:
					return 160.8172f;
				case 13:
					return 289.0172f;
				case 14:
					return 143.6575f;
				case 15:
					return 159.6575f;
				case 16:
					return -58.1285f;
				case 17:
					return 225.1706f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 86.4174f;
				case 1:
					return 100.4174f;
				case 2:
					return 46.4174f;
				case 3:
					return 40.4174f;
				case 4:
					return 38.4174f;
				case 5:
					return 22.4174f;
				case 6:
					return 2.4174f;
				case 7:
					return 10.4174f;
				case 8:
					return 88.4174f;
				case 9:
					return 98.4174f;
				case 10:
					return 358.4174f;
				case 11:
					return 344.4174f;
				case 12:
					return 344.4174f;
				case 13:
					return 352.4174f;
				case 14:
					return 19.2641f;
				case 15:
					return 23.2641f;
				case 16:
					return 151.8715f;
				case 17:
					return 91.1706f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 148.6296f;
				case 1:
					return 150.6296f;
				case 2:
					return 136.6296f;
				case 3:
					return -131.2821f;
				case 4:
					return 196.7179f;
			}
			Jump @1776; //curOff = 817
			switch (iParam1)
			{
				case 0:
					return 1.8339f;
				case 1:
					return 5.8339f;
				case 2:
					return 349.8339f;
				case 3:
					return 19.8339f;
				case 4:
					return 323.8339f;
				case 5:
					return 47.2641f;
				case 6:
					return 323.2641f;
			}
			Jump @1776; //curOff = 947
			switch (iParam1)
			{
				case 0:
					return -2.9828f;
				case 1:
					return -2.9828f;
				case 2:
					return -36.9828f;
				case 3:
					return -48.9828f;
				case 4:
					return -13.7365f;
				case 5:
					return -7.7365f;
				case 6:
					return -70.3956f;
				case 7:
					return -64.3956f;
				case 8:
					return 5.0172f;
				case 9:
					return 14.4908f;
				case 10:
					return -84.9828f;
				case 11:
					return -86.9828f;
				case 12:
					return -59.1828f;
				case 13:
					return -2.9828f;
				case 14:
					return 283.6575f;
				case 15:
					return 283.6575f;
				case 16:
					return 121.7756f;
			}
			Jump @1776; //curOff = 1247
			switch (iParam1)
			{
				case 0:
					return 314.6296f;
				case 1:
					return 316.6296f;
				case 2:
					return 302.6296f;
				case 3:
					return 34.7179f;
				case 4:
					return 2.7179f;
			}
			Jump @1776; //curOff = 1343
			switch (iParam1)
			{
				case 0:
					return 44.4174f;
				case 1:
					return 30.4174f;
				case 2:
					return 18.4174f;
				case 3:
					return 16.4174f;
				case 4:
					return 56.4174f;
				case 5:
					return 80.4174f;
				case 6:
					return 98.4174f;
				case 7:
					return 126.4174f;
				case 8:
					return 44.4174f;
				case 9:
					return 36.4174f;
				case 10:
					return 160.4174f;
				case 11:
					return 160.4174f;
				case 12:
					return 176.4174f;
				case 13:
					return 166.4174f;
				case 14:
					return 83.2641f;
				case 15:
					return 75.2641f;
				case 16:
					return 279.7756f;
			}
			Jump @1776; //curOff = 1643
			switch (iParam1)
			{
				case 0:
					return 1.8339f;
				case 1:
					return 5.8339f;
				case 2:
					return 349.8339f;
				case 3:
					return 19.8339f;
				case 4:
					return 323.8339f;
				case 5:
					return 47.2641f;
				case 6:
					return 323.2641f;
			}
			return 0f;
		}

bool func_560(int iParam0, int iParam1)
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

bool func_561(int iParam0, int iParam1)
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

bool func_562(int iParam0, int iParam1)
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
	if (!func_560(iParam0, iVar0))
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

void func_563(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

struct<4> func_564(int iParam0, int iParam1)
{
	return func_686(iParam0, iParam1);
}

struct<5> func_565(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_687(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_640(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_569(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_688(bParam1) };
			if (bParam2 && func_689(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_567(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_567(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_568(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_690(bParam1) };
			switch (func_691(iParam0))
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
			if (func_692(iParam0, -1823706425))
			{
				Var0 = { func_569(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_692(iParam0, -1483207246))
			{
				Var0 = { func_569(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_693(Var0, &Var27, bParam1, 0))
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

int func_566(int iParam0, int iParam1)
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

bool func_567(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_694(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_568(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_695(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_569(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_634(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_696(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_570(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_697(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_693(*uParam1, &Var0, bParam6, 0))
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
	if (!func_571(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_696(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_571(bool bParam0)
{
	if (func_371() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_696(bParam0));
}

int func_572(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_698(iParam0))
	{
		return 0;
	}
	if (!func_571(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_573(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_468(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_574(int iParam0, bool bParam1, int iParam2)
{
	func_699(iParam2);
	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630.f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639.f_11)
		{
			return;
		}
		if (Global_1225639.f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		iParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		iParam0->f_13 = func_700(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_257(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_701(1))
						{
							func_257(iParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_701(1) || *iParam0 & 8192 != 0))
				{
					func_256(iParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!iParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			if (func_702(iParam0))
			{
				iParam0->f_15 = func_196();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_196() - iParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_703(iParam0);
}

bool func_575(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_32)
			{
				return false;
			}
			if (!func_704(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_705(iParam0, iVar2) <= func_706(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_576(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_707(iParam2, 1, 1, 1, 0))
	{
		func_257(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_708(iParam1, 1);
	func_471();
}

bool func_577(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_709(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_710(iParam1);
			if (func_711(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_712(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_708(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_708(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_578(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_713(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_710(iParam2);
		if (func_711(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_712(iParam2)
				{
					func_708(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_579(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_704(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_712(iParam1)
		{
			fVar3 = func_710(iParam1);
			if (iParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_580(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_196();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_581(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_714(iParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_589(iParam2, iParam1))
			{
				func_708(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_582(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < IntToFloat(func_715(iParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_589(iParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_708(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_583(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_716(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_708(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_708(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, 0, 0);
					if (func_717(iParam1, vVar0, vVar4))
					{
						func_708(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_708(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, 0, 0);
					if (func_717(iParam1, vVar0, vVar7))
					{
						func_708(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_584(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_704(iParam0, iParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_718(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_719(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						iParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_720(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_721(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_722(iParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_585(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_586(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_196();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_587(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_723(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_724(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_588(int iParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_589(int iParam0, int iParam1)
{
	if (func_725(iParam0))
	{
		return true;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	return false;
}

bool func_590(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_328(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_591()
{
}

bool func_592(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_726(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_196();
			return true;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_204(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_196();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

bool func_593()
{
	if (Global_1935630.f_42 == 0)
	{
		return false;
	}
	if (Global_1935630.f_42 == Global_1935630.f_40)
	{
		return false;
	}
	if (Global_1935630.f_43 <= 0)
	{
		return false;
	}
	if ((func_196() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_594(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_706(iParam0);
	if (iParam0->f_12 > func_247(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_727(iParam1);
	iVar1 = func_728(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, true, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_595(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_729(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_596(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*iParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (func_730(iParam0, iParam1, 1))
		{
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, true, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_731(iParam1, iParam0))
					{
						if (func_204(iVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_597(int iParam0, int iParam1)
{
	if (!func_732(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_598(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_196();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_599(int iParam0, int iParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_600(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_196();
	}
	else if (func_196() - iParam1->f_4) > func_733(iParam1)
	{
		return func_734(iParam0, iParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_601(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630.f_40 == iVar1)
	{
		return true;
	}
	return false;
}

float func_602(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_603(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_735(iParam0, iParam1))
		{
			if (!func_198(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_530(uParam2, 0, 0, 1, 0);
				func_257(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_198(iParam1->f_10, 1))
		{
			func_736(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_256(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_604(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_198(iParam4, 32);
		func_529(iParam1, uParam2, 0);
		iVar5 = func_737(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_530(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_198(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_198(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_198(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_198(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_198(iParam4, 8388608) || func_198(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_198(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_198(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_606(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_606(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_198(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_738(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_198(iParam4, 268435456))
			{
				iVar8 = func_739(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_740(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_606(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_198(iParam4, 2) || func_198(iParam4, 16))
			{
				func_605(*uParam0, 1, 1);
			}
			else
			{
				func_605(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_605(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_606(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_607(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::_DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_741(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_608(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_742(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_198(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_609(int iParam0)
{
	if (func_198(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), true);
	}
	if (func_198(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_198(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_610(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_496(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || func_743(Global_35)) || func_744(Global_35)) || func_745(Global_35));
	fVar12 = -1f;
	if (func_60(&(iParam1->f_13)))
	{
		fVar12 = func_208(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_374((uParam4[iVar0 /*17*/])->f_6);
		func_746(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_747(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_748(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_530(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_749(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_529(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_750(iParam1, fParam6, iParam1->f_9))
					{
						func_150(&(iParam1->f_18));
						if (bVar6)
						{
							func_749(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_751(iParam1, fParam2);
	}
	return bVar5;
}

void func_611(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_612(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_752(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_751(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_613(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_753(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_754(iParam1, 0);
				func_529(iParam1, uParam2, func_606(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_614(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_150(&(iParam1->f_18));
			return false;
		}
		else if (func_60(&(iParam1->f_18)))
		{
			func_207(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_60(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	return func_479(&(iParam1->f_18), fParam2);
	return true;
}

void func_615(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_746(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_616(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_617(int* iParam0)
{
	if (func_606(iParam0, 0))
	{
		if (func_755(iParam0))
		{
			func_616(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

bool func_618(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_756(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_757(iParam0))
	{
		return false;
	}
	if (func_532(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_670(iParam0, 1)) || func_758(32768))
	{
		if (!func_670(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_759())
	{
		return false;
	}
	return true;
}

void func_619(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_620(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_374(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_628(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_621(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_622()
{
	UIFEED::_0xDD1232B332CBB9E7(4, 1, 0);
}

int func_623(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_760(iVar0, 2))
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
				func_761(iVar1, iParam1, sParam0, 5, iParam3, fParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_624(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_374(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_527(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	Global_1945938[iVar0 /*18*/].f_9 = fParam1;
	HUD::_UIPROMPT_CONTEXT_SET_SIZE(Global_1945938[iVar0 /*18*/].f_3, fParam1);
}

int func_625(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
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
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_760(iVar0, 2))
		{
			if (iParam2 == Global_1945938[iVar0 /*18*/].f_10 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
			{
				return iVar0;
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
		func_761(iVar1, iParam1, sParam0, 2, iParam3, fParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216 /* Float: 1f */, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_626(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
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
	if (func_69(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_760(iVar0, 2))
		{
			if (func_435(vParam2, Global_1945938[iVar0 /*18*/].f_6, 0.01f, 1) && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
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
		func_761(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_627(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_374(iParam0))
	{
		return;
	}
	iVar0 = func_527(iParam0);
	func_681(iVar0, bParam1);
}

bool func_628(int iParam0, bool bParam1)
{
	if (bParam1 && !func_374(iParam0))
	{
		return false;
	}
	return !func_760(iParam0, 4);
}

bool func_629(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_374(iParam0))
	{
		return false;
	}
	iVar0 = func_527(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_630(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_374(iParam0))
	{
		return false;
	}
	iVar0 = func_527(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_631(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_762(iParam0, sParam4, iParam5);
	}
	func_763(iParam0, bParam1, fParam2, iParam3, iParam7);
}

bool func_632(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

bool func_633()
{
	if (func_764())
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return Global_1955569.f_992[2];
	}
	return false;
}

bool func_634(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_635(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_634(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_640(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_765(iParam0, 1399091007))
	{
		func_766(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_636(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;

	if (iParam0 == joaat("AMMO_MOONSHINEJUG"))
	{
		return;
	}
	if (!func_634(iParam0, 0))
	{
		return;
	}
	if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_767())
	{
		func_768(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_769(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_769(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_770(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_640(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	if (iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION"))
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_771(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = joaat("COLOR_GREYMID");
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar12 = joaat("COLOR_YELLOWDARK");
		}
	}
	sVar15 = func_773(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_772(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_765(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_772(iParam0));
	}
	func_774(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_637(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_634(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_640(iParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("AMMO"))
	{
		if (!func_775(iParam0, 1))
		{
			return false;
		}
	}
	return func_639(iParam0, 0, bParam2) >= iParam1;
}

struct<2> func_638(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_634(iParam0, 0))
	{
		return Var0;
	}
	if (func_765(iParam0, -305066475))
	{
		if (func_371() == -1)
		{
			if (func_765(iParam0, -537818634))
			{
				return func_165(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_165(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_765(iParam0, -537818634))
	{
		return func_165(joaat("MEDICINE_ITEMS"));
	}
	if (func_765(iParam0, 2084895747))
	{
		return func_165(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

int func_639(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_634(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_640(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_635(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_776(iParam0, 0);
	}
	uVar2 = INVENTORY::_0xE787F05DFC977BDE(func_696(bParam2), iParam0, 0);
	return uVar2;
}

int func_640(int iParam0)
{
	vector3 vVar0;

	if (!func_634(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_641(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_777(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_778(&Var0, func_688(0));
	}
	if (!func_779(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_780(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_570(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_781(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_642(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_634(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_565(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_782(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_569(iParam0, Var0, Var0.f_4, bParam4) };
	return func_570(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_643(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_765(iParam0, 606799272))
		{
			func_783(iParam0, iParam1);
		}
		if (func_765(iParam0, -1112814642) && func_765(iParam0, -1697809989))
		{
			func_784(iParam0, iParam1, 1, 0);
		}
	}
}

void func_644(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_496(1) < iParam0)
	{
		iParam0 = func_496(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_165(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_645(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_774(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

bool func_646(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_647(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_48;
}

bool func_648(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_69(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

bool func_649()
{
	return Global_1310750.f_16077 != 0;
}

void func_650(int iParam0)
{
	Global_1393447.f_1 = iParam0;
}

int func_651(var uParam0, float fParam1, float fParam2)
{
	int iVar0[3];
	int iVar4;
	int iVar5;
	bool bVar6;

	iVar4 = 0;
	while (iVar4 < uParam0->f_217)
	{
		iVar0[iVar5] = uParam0->f_49[iVar4];
		iVar5++;
		iVar4++;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0[iVar5] = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
		iVar5++;
	}
	return func_785(&iVar0, uParam0->f_209, fParam1, 0, 0, 1084227584 /* Float: 5f */, bVar6, fParam2);
}

bool func_652(var uParam0, float fParam1, int iParam2)
{
	var uVar0[5];
	var uVar6[9];
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	vector3 vVar21;
	vector3 vVar24;
	int iVar27;

	iVar16 = 0;
	while (iVar16 < uParam0->f_216)
	{
		uVar6[iVar17] = uParam0->f_40[iVar16];
		iVar17++;
		iVar16++;
	}
	uVar6[iVar17] = uParam0->f_56;
	iVar17++;
	if (VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		iVar18 = func_786(&uVar0, &uVar6, 5, iParam2);
	}
	else
	{
		iVar18 = func_787(&uVar0, &uVar6, 5, uParam0->f_209, fParam1);
	}
	iVar16 = 0;
	while (iVar16 < iVar18)
	{
		iVar19 = 0;
		iVar27 = PED::_GET_RIDER_OF_MOUNT(uVar0[iVar16], false);
		if (iVar27 != 0 && iVar27 != Global_35)
		{
			vVar21 = { ENTITY::GET_ENTITY_COORDS(uVar0[iVar16], true, false) };
			if (!func_69(vVar21))
			{
				if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar21, &vVar24, 1, 3f, 0f))
				{
					if (func_435(vVar21, vVar24, 5f, 0) && PED::IS_PED_HEADING_TOWARDS_POSITION(iVar27, uParam0->f_209, 40f))
					{
						iVar19 = 1;
						iVar20 = 1;
					}
				}
			}
		}
		iVar16++;
	}
	return iVar20;
}

bool func_653(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;
	float fVar7;

	vVar2 = { func_789(func_788()) };
	fVar5 = 120f;
	fVar5 = (fVar5 * fVar5);
	if (func_439(Global_36, vVar2) < 40000f)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_790(iVar0))
		{
			fVar6 = func_791(iVar0);
			if (fVar6 <= 10000f && fVar6 > 0f)
			{
				iVar1 = func_792(iVar0);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					return false;
				}
				if (func_439(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), vVar2) > fVar5)
				{
					fVar7 = func_236(iVar1, Global_36, 1);
					if (fVar7 <= 40000f && fVar7 > 0f)
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_654(var uParam0)
{
	if (!func_793(*uParam0, uParam0->f_4))
	{
		return false;
	}
	return true;
}

bool func_655(var uParam0)
{
	if (!func_654(uParam0))
	{
		return false;
	}
	if (func_794(uParam0->f_7, uParam0->f_8, func_509(&(uParam0->f_3), 4)))
	{
		return true;
	}
	if (!func_509(&(uParam0->f_3), 4))
	{
		if (func_795())
		{
			return true;
		}
	}
	return false;
}

int func_656(var uParam0)
{
	if (!func_60(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_416(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_196() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_657(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	if (!bParam3)
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			return true;
		}
	}
	if (func_796(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, iParam2, 1, fParam5))
	{
		return true;
	}
	return false;
}

bool func_658(float fParam0, float fParam1)
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return ENTITY::GET_ENTITY_SPEED(Global_35) < fParam0;
	}
	return ENTITY::GET_ENTITY_SPEED(Global_35) < fParam1;
}

bool func_659(vector3 vParam0, var uParam3)
{
	if (!func_509(&(uParam3->f_3), 8))
	{
		return true;
	}
	if (func_797(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return true;
	}
	return false;
}

bool func_660(vector3 vParam0, var uParam3)
{
	float fVar0;

	fVar0 = func_661(vParam0, 1);
	return fVar0 < uParam3->f_6;
}

float func_661(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_798(0) };
	vVar3 = { func_324(vParam0 - CAM::GET_GAMEPLAY_CAM_COORD()) };
	if (bParam3)
	{
		return MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

void func_662(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_663(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_664(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_665(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25f)
	{
		return false;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_666(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_799(iParam0, &Var0);
}

int func_667(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_668(int iParam0)
{
	return func_760(iParam0, 2);
}

void func_669(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_207(&(iParam0->f_18));
}

bool func_670(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_671()
{
	int iVar0;

	if (func_800())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_1905944[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_672(bool bParam0)
{
	if (func_801())
	{
		return false;
	}
	if (HUD::_0x7EC0D68233E391AC(5) == 2)
	{
		return false;
	}
	if ((!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return false;
	}
	if (!bParam0)
	{
		if (!func_671())
		{
			return false;
		}
	}
	if (Global_16)
	{
		return false;
	}
	if (!func_759())
	{
		return false;
	}
	if (MISC::_0xF236C84C6ADFCB2F())
	{
		return false;
	}
	if (func_802())
	{
		return false;
	}
	return true;
}

void func_673(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_674(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return true;
	}
	return false;
}

void func_675(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_803(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return;
	}
	if (func_804(iParam0, 64))
	{
		func_676(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_805(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		}
		if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::_BLIP_ADD_FOR_ENTITY(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, joaat("BLIP_SADDLE"), true);
				func_806(&(Global_1900383[iParam0 /*45*/].f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630.f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && bVar4)
	{
		func_676(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0 /*436*/].f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = joaat("BLIP_STYLE_PLAYER_HORSE");
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_807(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
			{
				MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		Global_1900383[iParam0 /*45*/].f_26 = MAP::_BLIP_ADD_FOR_ENTITY(iVar5, iVar0);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		func_808(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_804(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_809(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = func_810(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_811(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 3)
		{
			iVar17 = -401963276;
			Global_1900383[iParam0 /*45*/].f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(iVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 4)
		{
			iVar17 = -1380599892;
			Global_1900383[iParam0 /*45*/].f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 2)
		{
			iVar17 = 1313031610;
			Global_1900383[iParam0 /*45*/].f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 1)
		{
			iVar17 = -1012863186;
			Global_1900383[iParam0 /*45*/].f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_812(Global_1900383[iParam0 /*45*/].f_26);
		func_813(Global_1900383[iParam0 /*45*/].f_26);
		MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar18);
	}
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	if (func_814(iVar0) && !bVar9)
	{
		if (iVar5 == joaat("BLIP_STYLE_PLAYER_HORSE"))
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar20);
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 561559387);
		MAP::_BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, -201249929);
	}
	iVar21 = func_807(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_4");
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_4");
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

void func_676(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_25 = 0;
}

bool func_677(int iParam0, int iParam1, float fParam2)
{
	return func_815(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_678(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

int func_679(int iParam0)
{
	if (!func_235(iParam0))
	{
		return -1;
	}
	return func_816(iParam0);
}

void func_680(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_681(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_760(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_682(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_683(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

bool func_684(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_685(int iParam0, bool bParam1)
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

struct<4> func_686(int iParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = { func_557(iParam0, iParam1) };
	Var0.f_3 = func_559(iParam0, iParam1);
	return Var0;
}

struct<4> func_687(bool bParam0)
{
	return func_569(joaat("CHARACTER"), func_817(), -1591664384, bParam0);
}

struct<4> func_688(bool bParam0)
{
	int iVar0;

	iVar0 = func_696(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224215))
		{
			Global_1224215 = { func_569(923904168, func_687(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224223))
		{
			Global_1224223 = { func_569(923904168, func_687(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_569(923904168, func_687(bParam0), -740156546, 0);
}

bool func_689(int iParam0, bool bParam1)
{
	if (func_691(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_805(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_690(bool bParam0)
{
	int iVar0;

	iVar0 = func_696(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224219))
		{
			Global_1224219 = { func_569(271701509, func_687(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return func_569(271701509, func_687(bParam0), 12999093, 0);
}

int func_691(int iParam0)
{
	struct<2> Var0;

	if (!func_634(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_692(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_691(iParam0);
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

bool func_693(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_696(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_694(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_634(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_569(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_696(bParam6), &Var0, 0);
	return uVar4;
}

bool func_695(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_696(0);
	*uParam1 = { func_569(iParam0, func_688(0), iParam3, 0) };
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

int func_696(bool bParam0)
{
	if (func_371() == -1)
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

bool func_697(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_698(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_699(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_633();
	if (Global_1935630.f_27)
	{
		Global_1935630.f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630.f_44;
			}
			Global_1935630.f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_818(&(Global_1935630.f_34), &(Global_1935630.f_39));
			Global_1935630.f_38 = iParam0;
			break;
		case 1:
			Global_1935630.f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630.f_30)
			{
				if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
				{
					Global_1935630.f_30 = PED::_GET_LASSO_TARGET(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630.f_46)
			{
				case joaat("WEAPON_LASSO"):
					Global_1935630.f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46))
					{
						Global_1935630.f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630.f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630.f_25)
					{
						Global_1935630.f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630.f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_700(int iParam0)
{
	return Global_1109400.f_276[iParam0 /*3*/];
}

bool func_701(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_819(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_702(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_371() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_820(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = func_820(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_728(iVar0) == -1)
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return false;
	}
	iParam0->f_14 = iVar0;
	return true;
}

void func_703(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_821(iParam0);
	}
}

bool func_704(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_728(iParam2);
	}
	else
	{
		iVar1 = func_727(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_728(iParam0);
	}
	else
	{
		iVar0 = func_727(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_198(*iParam1, 8388608))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_705(int iParam0, int iParam1)
{
	return func_328(iParam0, iParam1, 1, 1);
}

float func_706(int iParam0)
{
	return iParam0->f_26;
}

bool func_707(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

void func_708(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_257(iParam0, 134217728);
	}
	else
	{
		func_256(iParam0, 134217728);
	}
}

bool func_709(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (Global_1935630.f_44 == joaat("WEAPON_LASSO") && Global_1935630.f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_328(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_822(iVar0, 0)))
		{
			if (func_823(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_710(int iParam0)
{
	return iParam0->f_17;
}

bool func_711(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_198(*iParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*iParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_712(int iParam0)
{
	return iParam0->f_18;
}

bool func_713(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_822(iVar0, 0)))
		{
			if (func_797(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_714(int iParam0)
{
	return iParam0->f_23;
}

int func_715(int iParam0)
{
	return iParam0->f_21;
}

int func_716(int iParam0)
{
	int iVar0;

	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (iParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*iParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_717(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_815(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_718(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
		{
			if (WEAPON::_IS_WEAPON_MELEE(Global_1935630.f_46) || WEAPON::_IS_WEAPON_BOW(Global_1935630.f_46))
			{
				return 1;
			}
		}
	}
	if (func_824(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_719(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_720(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_825(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_721(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_825(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_722(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_825(iParam1))
	{
		return false;
	}
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_1935630.f_34[iParam3], 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, Global_1935630.f_34[iParam3], -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_723(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return false;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	if (!PED::_0x2D64376CF437363E(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_724(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_826(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_725(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_726(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_204(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_727(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_728(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_729(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630.f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630.f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_723(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_328(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_328(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_730(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_819(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_731(iParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_731(iParam1, iVar1))
				{
					if (func_204(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_731(int iParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
			return true;
		default:
			break;
	}
	return false;
}

int func_732(int iParam0)
{
	if (func_391())
	{
		return 0;
	}
	return func_548(Global_1347702[58 /*49*/].f_15, 1);
}

int func_733(int iParam0)
{
	return iParam0->f_20;
}

int func_734(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

bool func_735(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;

	if (iParam1->f_11 & 1 != 0)
	{
		if (PED::_IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_827((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_736(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_752(uParam0[iVar0 /*17*/]))
		{
			func_555(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_737(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_828(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_374((uParam2[iVar0 /*17*/])->f_6))
		{
			func_555(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_738(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_123(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_739(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_740(int* iParam0, int* iParam1)
{
	if (!func_606(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_555(iParam1, 19);
			func_754(iParam0, 23);
			func_829(iParam1, 2);
		}
	}
}

bool func_741(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_632(16))
	{
		return Global_1935630.f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_830(16);
					Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630.f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_742(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_828(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

bool func_743(int iParam0)
{
	return (func_831(iParam0, 4) || func_831(iParam0, 5));
}

int func_744(int iParam0)
{
	return func_831(iParam0, 7);
}

int func_745(int iParam0)
{
	return func_831(iParam0, 6);
}

void func_746(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_752(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_828(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_747(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_832(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_628(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_552(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_552(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_833(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_748(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_630(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_834(iParam1, 1))
	{
		func_835(iParam1, 1);
		return true;
	}
	return false;
}

void func_749(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_481(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_750(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_751(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_752(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_753(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case joaat("EVENT_PLAYER_PROMPT_TRIGGERED"):
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

void func_754(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_755(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_756(int iParam0, int iParam1)
{
	if (func_371() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_757(int iParam0)
{
	if (func_371() != -1)
	{
		if (func_670(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_670(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_758(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_759()
{
	return Global_1905944.f_5694;
}

bool func_760(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

void func_761(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, float fParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	int iVar0;

	Global_1945938[iParam0 /*18*/].f_4 = iParam1;
	Global_1945938[iParam0 /*18*/] = iParam4;
	Global_1945938[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945938[iParam0 /*18*/].f_2 = fParam5;
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
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, fParam5);
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
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
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
	func_681(iParam0, 1);
	func_682(iParam0, 1);
	func_683(iParam0, 128);
}

void func_762(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_774(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_763(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_836())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_774(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_837(iVar0);
			func_838(iVar0, 0, 0);
		}
		func_774(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_166(func_165(joaat("CAREER_CASH")), iVar1);
	}
}

bool func_764()
{
	switch (Global_1935630.f_44)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_765(int iParam0, int iParam1)
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

void func_766(int iParam0, var uParam1, var uParam2)
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

bool func_767()
{
	return !Global_1911774;
}

void func_768(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = iParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = bParam3;
	if (Global_1911774.f_3 < 20)
	{
		Global_1911774.f_3++;
	}
}

char* func_769(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_770(int iParam0, int iParam1)
{
	if (!func_634(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_771(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_772(int iParam0)
{
	if (!func_634(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

char* func_773(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

var func_774(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_839(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_775(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_634(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_635(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_840("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_780(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_373(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_781(iVar1);
				return true;
			}
			iVar3++;
		}
		func_781(iVar1);
	}
	return false;
}

int func_776(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_777(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_778(&Var0, func_688(0));
	}
	if (!func_779(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_781(iVar14);
	return uVar15;
}

struct<14> func_777(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	return Var0;
}

void func_778(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_779(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_696(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_780(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_781(int iParam0)
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

bool func_782(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_697(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_571(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_696(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_783(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_371() == -1)
	{
		if (func_841(43))
		{
			if (func_765(iParam0, 412399755))
			{
				func_842(joaat("EXOTIC_STAGE_01"));
				if (func_843() == 0)
				{
					func_168(0, 10);
					iVar0 = func_844(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_845(iParam0) < func_846(iParam0))
						{
							func_847(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_841(44))
		{
			if (func_765(iParam0, 709057512))
			{
				func_842(joaat("EXOTIC_STAGE_02"));
				if (func_843() == 1)
				{
					func_168(0, 10);
					iVar0 = func_844(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_845(iParam0) < func_846(iParam0))
						{
							func_847(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_841(45))
		{
			if (func_765(iParam0, -1478961327))
			{
				func_842(joaat("EXOTIC_STAGE_03"));
				if (func_843() == 2)
				{
					func_168(0, 10);
					iVar0 = func_844(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_845(iParam0) < func_846(iParam0))
						{
							func_847(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_841(46))
		{
			if (func_765(iParam0, -1238404098))
			{
				func_842(joaat("EXOTIC_STAGE_04"));
				if (func_843() == 3)
				{
					func_168(0, 10);
					iVar0 = func_844(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_845(iParam0) < func_846(iParam0))
						{
							func_847(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_841(47))
		{
			if (func_765(iParam0, 1160548794))
			{
				func_842(joaat("EXOTIC_STAGE_05"));
				if (func_843() == 4)
				{
					func_168(0, 10);
					iVar0 = func_844(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_845(iParam0) < func_846(iParam0))
						{
							func_847(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_784(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_637(func_848(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_849(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_850(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

int func_785(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, float fParam7, bool bParam8, int iParam9)
{
	int iVar0[5];
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	if (VOLUME::_DOES_VOLUME_EXIST(iParam9))
	{
		iVar12 = func_851(&iVar0, iParam0, iParam9, iVar0);
	}
	else
	{
		iVar12 = func_852(&iVar0, iParam0, iVar0, vParam1, iParam4);
	}
	iVar13 = 0;
	while (iVar13 < iVar12)
	{
		iVar14 = 0;
		if (VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0[iVar13])))
		{
		}
		else if ((!bParam6 || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0[iVar13], -1) != 0) && (!bParam5 || ENTITY::GET_ENTITY_SPEED(iVar0[iVar13]) >= 1f))
		{
			vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar0[iVar13], true, false) };
			if (!func_69(vVar6))
			{
				vVar9 = { 0f, 0f, 0f };
				if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar6, &vVar9, 1, 3f, 0f))
				{
					if (func_435(vVar6, vVar9, fParam7, 0))
					{
						iVar14 = 1;
						iVar15 = 1;
					}
				}
			}
		}
		iVar13++;
	}
	return iVar15;
}

int func_786(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar5 > iParam2)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (func_853(iVar2))
				{
					if (!func_426(iVar2, iParam1))
					{
						if (iVar3 < *uParam0 && iVar3 < iParam2)
						{
							(*uParam0)[iVar3] = iVar2;
							iVar3++;
						}
					}
				}
			}
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

int func_787(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = func_786(uParam0, iParam1, iParam2, iVar0);
	func_854(iVar0);
	return iVar1;
}

int func_788()
{
	return Global_40.f_4283;
}

Vector3 func_789(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		case 8:
			return func_855();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_790(int iParam0)
{
	if (func_856(iParam0))
	{
		if (func_228(Global_1360165[iParam0 /*1157*/], 0))
		{
			return true;
		}
	}
	return false;
}

float func_791(int iParam0)
{
	if (!func_857(iParam0))
	{
		return 0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

int func_792(int iParam0)
{
	if (func_856(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

bool func_793(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_60(&uParam0))
	{
		return false;
	}
	if (func_656(&uParam0) <= iParam3 + 500)
	{
		return false;
	}
	return true;
}

bool func_794(float fParam0, float fParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	func_858(&uVar0, &uVar1, &iVar2, &iVar3, joaat("INPUT_SCRIPT_LEFT_AXIS_X"), joaat("INPUT_SCRIPT_LEFT_AXIS_Y"), joaat("INPUT_SCRIPT_RIGHT_AXIS_X"), joaat("INPUT_SCRIPT_RIGHT_AXIS_Y"), 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return true;
		}
	}
	if (!func_658(fParam0, fParam1))
	{
		return true;
	}
	return false;
}

bool func_795()
{
	if (((((((((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SPRINT")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_VEH_ACCELERATE"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_VEH_CAR_ACCELERATE"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_SPRINT"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MELEE_ATTACK"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_JUMP"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_JUMP"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MELEE_BLOCK"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_RELOAD"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ENTER"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_DYNAMIC_SCENARIO"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_EXIT")))
	{
		return true;
	}
	return false;
}

bool func_796(vector3 vParam0, float fParam3, float fParam4, bool bParam5, float fParam6)
{
	float fVar0;

	fVar0 = func_204(Global_35, vParam0, 1);
	if (fVar0 < fParam4 && bParam5)
	{
		return true;
	}
	if (fVar0 > (fParam3 + fParam6))
	{
		return true;
	}
	return false;
}

bool func_797(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

Vector3 func_798(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_324((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

bool func_799(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_800()
{
	return Global_1905944.f_5693 != -1;
}

bool func_801()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) <= 4);
}

bool func_802()
{
	var uVar0;

	uVar0 = Global_1905944.f_5695;
	Global_1905944.f_5695 = 0;
	return uVar0;
}

int func_803(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

bool func_804(int iParam0, int iParam1)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (Global_1900383[iParam0 /*45*/].f_24 && iParam1) != 0;
}

bool func_805(int iParam0)
{
	if (!func_859(iParam0))
	{
		return false;
	}
	return func_860(iParam0);
}

void func_806(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_862(func_861(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_393())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_391();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_807(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

void func_808(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_862(func_861(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_393())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_391())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_809(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_37;
}

float func_810(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_811(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;

	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_863(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_807(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_807(iParam0) + 1;
	fVar6 = func_864(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_865(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_812(int iParam0)
{
	MAP::_BLIP_REMOVE_MODIFIER(iParam0, -401963276);
	MAP::_BLIP_REMOVE_MODIFIER(iParam0, 231194138);
	MAP::_BLIP_REMOVE_MODIFIER(iParam0, -1012863186);
	MAP::_BLIP_REMOVE_MODIFIER(iParam0, -272772079);
	MAP::_BLIP_REMOVE_MODIFIER(iParam0, 1313031610);
	MAP::_BLIP_REMOVE_MODIFIER(iParam0, -1814032670);
	MAP::_BLIP_REMOVE_MODIFIER(iParam0, -1380599892);
	MAP::_BLIP_REMOVE_MODIFIER(iParam0, 430539302);
	MAP::_BLIP_REMOVE_MODIFIER(iParam0, -995247980);
	MAP::_BLIP_REMOVE_MODIFIER(iParam0, -25056193);
	MAP::_BLIP_REMOVE_MODIFIER(iParam0, -264630352);
}

void func_813(int iParam0)
{
	MAP::_BLIP_REMOVE_MODIFIER(iParam0, 673950256);
	MAP::_BLIP_REMOVE_MODIFIER(iParam0, 561559387);
	MAP::_BLIP_REMOVE_MODIFIER(iParam0, -201249929);
}

bool func_814(int iParam0)
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

bool func_815(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_816(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_866(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

struct<4> func_817()
{
	struct<4> Var0;

	return Var0;
}

void func_818(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN((*uParam0)[iVar1]) && !(DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_819(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_32))
		{
			*iParam1 = Global_1935630.f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_33))
		{
			if (PED::_IS_PED_HOGTIED(Global_1935630.f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630.f_33))
			{
				*iParam2 = Global_1935630.f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630.f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_GET_LASSO_TARGET(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_820(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (iParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630.f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_821(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_256(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_257(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_822(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_823(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_797(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_824(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
			{
				if (WEAPON::_IS_WEAPON_MELEE(Global_1935630.f_44) || Global_1935630.f_44 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1935630.f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_825(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT"))
	{
		return true;
	}
	if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return true;
		}
		return false;
	}
	return false;
}

int func_826(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_827(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_828(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_374(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_375(&(iParam1->f_6), 0, 1);
	}
	if (!func_374(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_752(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_623(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_374(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_833(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_867(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_868(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_550(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_867(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_552(iParam1->f_6, 0, 1);
				}
				else
				{
					func_552(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_829(int* iParam0, int iParam1)
{
	if (!func_554(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_555(iParam0, 14);
		}
	}
}

void func_830(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_831(int iParam0, int iParam1)
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

bool func_832(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	bool bVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

void func_833(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_374(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_527(iParam0);
	func_867(iParam0, 18, 0, 1);
	func_867(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_834(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_374(iParam0))
	{
		return false;
	}
	iVar0 = func_527(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_835(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_374(iParam0))
	{
		return;
	}
	iVar0 = func_527(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_836()
{
	if (func_869())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_837(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_870((Global_40.f_4283.f_325 + iParam0));
}

void func_838(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_836())
	{
		func_774(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_774(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

void func_839(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_840(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_696(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_841(int iParam0)
{
	if (func_371() != -1)
	{
		return false;
	}
	return func_548(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_842(int iParam0)
{
	if (!func_871(iParam0))
	{
		func_873(func_872(iParam0));
	}
}

int func_843()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_871(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_844(int iParam0, int iParam1, int iParam2)
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
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_845(iVar9);
	iVar2 = func_845(iVar10);
	iVar3 = func_845(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_845(iVar12);
	}
	iVar5 = func_846(iVar9);
	iVar6 = func_846(iVar10);
	iVar7 = func_846(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_846(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_845(int iParam0)
{
	int iVar0;

	if (func_637(iParam0, 1, 0))
	{
		iVar0 = func_639(iParam0, 0, 0);
	}
	return iVar0;
}

int func_846(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return 5;
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 5;
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return 15;
		case joaat("PROVISION_HERON_FEATHER"):
			return 20;
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return 7;
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return 10;
		case joaat("PROVISION_GATOR_EGG"):
			return 25;
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return 3;
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return 7;
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return 5;
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 30;
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			return 10;
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			return 10;
		default:
			break;
	}
	return 0;
}

void func_847(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_370() && (func_874(38) || func_841(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = joaat("COL_CC_INTRO");
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = joaat("COL_CC_INTRO_PRE");
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_370() && (func_874(39) || func_841(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_RC_DEBORAH");
				iVar13 = joaat("COL_DB_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = joaat("COL_DB_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = joaat("DINO_BONES");
			break;
		case 43:
			if (iParam3 == joaat("EXOTIC_STAGE_01"))
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_02"))
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_03"))
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_04"))
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_05"))
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_875(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_370() && (func_874(41) || func_841(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = joaat("BLIP_RC_JEREMY_GILL");
			iVar13 = joaat("COL_LF_INTRO");
			break;
		case 49:
			if (func_370() && (func_874(49) || func_841(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_SCM_FRANCES");
				iVar13 = joaat("COL_RC_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = joaat("COL_RC_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = joaat("ROCK_CARVINGS");
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_875(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_876(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_877(iParam0, iVar13, iVar14))
	{
	}
	if (func_878(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_879(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_880(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_881(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_882(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

int func_848(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_883(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_849(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_848(iParam1, 5) || iParam0 == func_848(iParam1, 6)) || iParam0 == func_848(iParam1, 7)) || iParam0 == func_848(iParam1, 8)) || iParam0 == func_848(iParam1, 9))
	{
		func_884(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_847(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_885(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_850(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_848(iParam1, 5) || iParam0 == func_848(iParam1, 6)) || iParam0 == func_848(iParam1, 7)) || iParam0 == func_848(iParam1, 8)) || iParam0 == func_848(iParam1, 9))
	{
		if (func_884(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_847(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_885(51, 0, 0, iVar0, func_875(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_847(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_885(51, 0, 0, iVar0, func_875(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_851(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam2, iVar0, 2);
	if (iVar6 >= iParam3)
	{
	}
	iVar5 = 0;
	while (iVar5 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_A_VEHICLE(iVar2))
		{
			iVar3 = iVar1;
			if (!func_886(iVar3, iParam1))
			{
				(*iParam0)[iVar4] = iVar3;
				iVar4++;
			}
		}
		if (iVar4 >= iParam3)
		{
		}
		else
		{
			iVar5++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

int func_852(int iParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	iVar1 = func_851(iParam0, iParam1, iVar0, iParam2);
	func_854(iVar0);
	return iVar1;
}

bool func_853(int iParam0)
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

void func_854(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

Vector3 func_855()
{
	if (func_440(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_440(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

bool func_856(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_857(int iParam0)
{
	return iParam0 > -1;
}

void func_858(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam4) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam5) * 127f));
	*iParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam6) * 127f));
	*iParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam7) * 127f));
}

bool func_859(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_860(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

char* func_861(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_887(37, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1109400.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109400.f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!Global_1225639.f_21[iParam0])
	{
		return sVar0;
	}
	if (func_887(37, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(Global_1108178[iParam0 /*37*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108178[iParam0 /*37*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1225639.f_120[iParam0]);
}

char* func_862(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_773(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_863(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

float func_864(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_865(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_866(int iParam0)
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

void func_867(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_374(iParam0))
	{
		return;
	}
	iVar0 = func_527(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_868(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_374(iParam0))
	{
		return;
	}
	iVar0 = func_527(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

bool func_869()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_870(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_165(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

bool func_871(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_872(int iParam0)
{
	switch (iParam0)
	{
		case joaat("EXOTIC_STAGE_01"):
			return 1;
		case joaat("EXOTIC_STAGE_02"):
			return 2;
		case joaat("EXOTIC_STAGE_03"):
			return 4;
		case joaat("EXOTIC_STAGE_04"):
			return 8;
		case joaat("EXOTIC_STAGE_05"):
			return 16;
		default:
			break;
	}
	return 0;
}

void func_873(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_874(int iParam0)
{
	if (func_371() != -1)
	{
		return false;
	}
	if (!func_233(iParam0))
	{
		return false;
	}
	return func_888(Global_1347702[iParam0 /*49*/].f_15);
}

int func_875(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_883(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_876(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_889() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_890(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_891(), 12);
			}
			break;
		case joaat("DINO_BONES"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_892() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_893(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_892(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_894(), 13);
			}
			break;
		case joaat("ROCK_CARVINGS"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_895() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_896(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_895(), 10);
			}
			break;
		case joaat("TAXIDERMY"):
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_875(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_877(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == joaat("COL_CC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_CC_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_CC_INTRO_PRE"));
			}
		}
	}
	else if (iParam2 == joaat("DINO_BONES"))
	{
		if (iParam1 == joaat("COL_DB_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_DB_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_DB_INTRO_PRE"));
			}
		}
	}
	else if (iParam2 == joaat("ROCK_CARVINGS"))
	{
		if (iParam1 == joaat("COL_RC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_RC_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_RC_INTRO_PRE"));
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return true;
}

bool func_878(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_879(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return true;
}

bool func_880(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_897(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_637(iVar2, 1, 0) || func_899(func_898(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_900(func_897(iVar0))), func_900(func_897(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_892() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_901(iVar0)), func_901(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_893() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_901(iVar0)), func_901(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_901(iVar0)), func_901(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_848(iParam3, func_902(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_845(iVar2) - iParam7) >= func_875(iParam3, func_903(iVar0));
				}
				else
				{
					bVar1 = func_845(iVar2) >= func_875(iParam3, func_903(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_845(iVar2) + iParam7) >= func_875(iParam3, func_903(iVar0));
			}
			else
			{
				bVar1 = func_845(iVar2) >= func_875(iParam3, func_903(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_904(iVar2)), func_904(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_905(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_906(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_906(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_895() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_907(iVar0)), func_907(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_896() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_907(iVar0)), func_907(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_907(iVar0)), func_907(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_848(iParam3, func_902(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_845(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_908(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_908(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_909(iVar2)), func_909(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_881(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;

	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_894() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == joaat("TAXIDERMY"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_882(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_235(func_910(0)) && ((func_911(0) == 1 || func_911(0) == 8) || func_911(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == joaat("DINO_BONES") || iParam2 == 1995362678) || iParam2 == joaat("ROCK_CARVINGS"))
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == joaat("TAXIDERMY"))
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

bool func_883(int iParam0, var uParam1)
{
	if (!func_912(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

bool func_884(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (func_908(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_908(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_908(iVar0))
		{
			*iParam2++;
		}
		if (func_908(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_908(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_908(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_908(iVar0))
		{
			*iParam2++;
		}
		if (func_908(iVar1))
		{
			*iParam2++;
		}
		if (func_908(iVar0) && func_908(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_908(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_908(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_908(iVar0))
		{
			*iParam2++;
		}
		if (func_908(iVar1))
		{
			*iParam2++;
		}
		if (func_908(iVar2))
		{
			*iParam2++;
		}
		if ((func_908(iVar0) && func_908(iVar1)) && func_908(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_908(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_908(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_908(iVar0))
		{
			*iParam2++;
		}
		if (func_908(iVar1))
		{
			*iParam2++;
		}
		if (func_908(iVar2))
		{
			*iParam2++;
		}
		if (func_908(iVar3))
		{
			*iParam2++;
		}
		if (((func_908(iVar0) && func_908(iVar1)) && func_908(iVar2)) && func_908(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_885(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_370() && (func_874(38) || func_841(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = joaat("COL_CC_INTRO");
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = joaat("DINO_BONES");
			if (func_370() && (func_874(39) || func_841(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = joaat("BLIP_RC_DEBORAH");
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = joaat("COL_DB_INTRO");
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = joaat("COL_EX_INTRO");
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = joaat("BLIP_RC_JEREMY_GILL");
			iVar6 = joaat("COL_LF_INTRO");
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = joaat("ROCK_CARVINGS");
			if (func_370() && (func_874(49) || func_841(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = joaat("BLIP_SCM_FRANCES");
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = joaat("COL_RC_INTRO");
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = joaat("TAXIDERMY");
			iVar4 = joaat("BLIP_RC_HOBBS");
			iVar6 = joaat("COL_TX_INTRO");
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_370() && (func_874(38) || func_841(38)))
		{
			iVar6 = joaat("COL_CC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_CC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_913(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_913(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_915(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_900(func_914(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_913(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_913(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_370() && (func_874(39) || func_841(39)))
		{
			iVar6 = joaat("COL_DB_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_DB_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_913(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_913(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_370() && (func_874(49) || func_841(49)))
		{
			iVar6 = joaat("COL_RC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_RC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_913(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_913(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_913(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_913(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_886(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (iParam0 == (*iParam1)[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_887(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_916(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 == func_917())
	{
		return func_916(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1225639.f_21[iParam1])
	{
		return func_916(&(Global_1108178[iParam1 /*37*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_888(int iParam0)
{
	int iVar0;

	iVar0 = func_679(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_889()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_637(func_918(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_890()
{
	return func_919(Global_40.f_12019);
}

int func_891()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_918(iVar1);
		if (func_637(iVar2, 1, 0) || func_899(func_898(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_892()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_920(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_893()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_921(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_894()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_905(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_895()
{
	return COLLECTION::_0x5461C821D00FE15A(joaat("ROCK_CARVINGS"), 0);
}

int func_896()
{
	return COLLECTION::_0x3A65F4844913A047(joaat("ROCK_CARVINGS"), 0);
}

int func_897(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
		default:
			break;
	}
	return 0;
}

int func_898(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return 1;
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return 8;
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return 4;
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return 16;
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return 32;
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return 64;
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return 128;
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return 256;
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return 2;
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return 512;
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return 1024;
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_899(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_900(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return "COL_CC_GUN_SET";
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return "COL_CC_ART_SET";
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return "COL_CC_LND_SET";
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return "COL_CC_GRL_SET";
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return "COL_CC_PLT_SET";
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return "COL_CC_ACT_SET";
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return "COL_CC_AML_SET";
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return "COL_CC_VEH_SET";
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return "COL_CC_SPT_SET";
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return "COL_CC_INV_SET";
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return "COL_CC_HOR_SET";
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

char* func_901(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_902(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_903(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_904(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return "COL_EP_LITTLE_FOUND";
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return "COL_EP_REDDISH_FOUND";
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return "COL_EP_SNOWY_FOUND";
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case joaat("PROVISION_HERON_FEATHER"):
			return "COL_HF_FOUND";
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return "COL_RO_LADY_SLIPPER_FOUND";
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return "COL_RO_MOCCASIN_FOUND";
		case joaat("PROVISION_GATOR_EGG"):
			return "COL_GF_FOUND";
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return "COL_RO_ACUNAS_STAR_FOUND";
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return "COL_RO_CIGAR_FOUND";
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return "COL_RO_GHOST_FOUND";
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return "COL_SF_FOUND";
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			return "COL_RO_RAT_TAIL_FOUND";
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			return "COL_RO_SPIDER_FOUND";
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			return "COL_RO_CLAMSHELL_FOUND";
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			return "COL_RO_DRAGONS_FOUND";
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			return "COL_RO_QUEENS_FOUND";
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_905(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_906(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LEGENDARY_FISH_01"):
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case joaat("LEGENDARY_FISH_02"):
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case joaat("LEGENDARY_FISH_03"):
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case joaat("LEGENDARY_FISH_04"):
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case joaat("LEGENDARY_FISH_05"):
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case joaat("LEGENDARY_FISH_06"):
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case joaat("LEGENDARY_FISH_07"):
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case joaat("LEGENDARY_FISH_08"):
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case joaat("LEGENDARY_FISH_09"):
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case joaat("LEGENDARY_FISH_10"):
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case joaat("LEGENDARY_FISH_11"):
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case joaat("LEGENDARY_FISH_12"):
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case joaat("LEGENDARY_FISH_13"):
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_907(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_908(int iParam0)
{
	if (func_922(iParam0) && func_637(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_923(iParam0) && func_924(iParam0))
	{
		return true;
	}
	return false;
}

char* func_909(int iParam0)
{
	if (!func_634(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_772(iParam0));
}

int func_910(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_911(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_912(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

var func_913(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

int func_914(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

var func_915(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

bool func_916(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_917()
{
	return Global_1109400.f_245;
}

int func_918(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
		default:
			break;
	}
	return 0;
}

int func_919(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_920(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_921(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_922(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return true;
		default:
			break;
	}
	return false;
}

int func_923(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_924(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_925(&iVar0, 0, iVar95, &Var1) && !func_925(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_926(iVar0, &Var1);
			if (func_634(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

bool func_925(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (func_674(iParam1) && !func_927(iParam1))
	{
		iVar0 = func_803(iParam1);
	}
	else
	{
		return false;
	}
	func_928(uParam3);
	iVar5 = func_929(iParam2);
	if (!PED::_0x608BC6A6AACD5036(&Var1, iVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && !ENTITY::_0x88AD6CC10D8D35B2(*iParam0))
	{
		return false;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*iParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*iParam0);
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*iParam0);
	return true;
}

void func_926(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_930(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_931(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

bool func_927(int iParam0)
{
	int iVar0;

	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_674(iParam0))
	{
		return false;
	}
	iVar0 = func_803(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

void func_928(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		uParam0->f_10[iVar0 /*8*/].f_1 = 0;
		uParam0->f_10[iVar0 /*8*/].f_2 = 0;
		uParam0->f_10[iVar0 /*8*/].f_3 = 0;
		uParam0->f_10[iVar0 /*8*/].f_4 = 0;
		uParam0->f_10[iVar0 /*8*/].f_5 = 0;
		uParam0->f_10[iVar0 /*8*/].f_6 = 0;
		uParam0->f_10[iVar0 /*8*/].f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_929(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

void func_930(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_GET_PED_DAMAGE(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_931(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::_0x9E7738B291706746(uParam0, iParam1, iParam2);
	return uVar2;
}


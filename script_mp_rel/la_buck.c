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
	struct<41> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	var uLocal_54 = 2;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 2;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	struct<24> Local_60[32];
	struct<319> Local_829 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 1112014848, 1106247680, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1723181095, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 3, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	var uLocal_1148 = 0;
	var uLocal_1149 = 1;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 1065353216;
	var uLocal_1153 = 0;
	var uLocal_1154 = 1065353216;
	var uLocal_1155 = 1077936128;
	var uLocal_1156 = 1108082688;
	var uLocal_1157 = 1113325568;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 1;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	float fLocal_1170 = 0f;
	float fLocal_1171 = 0f;
	var uLocal_1172 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_1170 = 1f;
	fLocal_1171 = 1f;
	iVar0 = iScriptParam_0;
	func_1(iVar0);
	func_2(&iScriptParam_0);
	while (!func_3())
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
	func_6();
}

void func_1(int iParam0)
{
	func_7(32, iParam0);
	func_8();
	func_9();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 47, 43);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_13), 47, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_60, 769, 44);
	func_11(NETWORK::_0x690806BC83BC8CA2(&(Local_60[0 /*24*/])), 769, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(int iParam0)
{
	if (Local_13 == 6)
	{
		return;
	}
	func_13(iParam0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14();
		func_15();
	}
}

bool func_3()
{
	if (func_16(0, 0))
	{
		return true;
	}
	else if (func_17(Local_829.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_829.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_829.f_12), Local_829.f_9))
	{
		return true;
	}
	else if (Local_829.f_8 == 6)
	{
		return true;
	}
	return false;
}

void func_4()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_22();
	}
	func_23();
}

void func_5()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_24();
		func_25();
	}
	func_26();
	func_27();
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			func_6();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_6();
		}
		if (func_28() == 0)
		{
			if (func_29())
			{
				func_6();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	return 1;
}

void func_9()
{
	func_30();
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_12(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	iVar0 = (MISC::_GET_SYSTEM_TIME() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			NETWORK::_0x236905C700FDB54D();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return;
		}
		if (MISC::_GET_SYSTEM_TIME() >= iVar0)
		{
			func_6();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_13(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<29> Var3;

	iVar0 = 255;
	MISC::_COPY_MEMORY(&Local_829, iParam0, 5);
	iVar2 = func_31(&bVar1, Local_829.f_1, Local_829.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_829.f_12 = iVar2;
	iVar0 = Global_1198046.f_231.f_1066[iVar2 /*17*/].f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_32(&Var3, Local_829.f_1, Local_829.f_2, Local_829.f_3, iVar0);
	Local_829.f_9 = { func_33(Var3.f_5, 8) };
	Local_829.f_14 = Var3.f_5;
	Local_829.f_15 = { Var3.f_11 };
	Local_829.f_18 = Var3.f_7;
	func_34();
	func_35();
}

void func_14()
{
	func_36();
}

void func_15()
{
	func_37();
}

bool func_16(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887.f_12)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_17(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377.f_124517.f_135 & 8 != 0)
	{
		Global_1071686.f_28351 = 1;
		return true;
	}
	if (func_38(Global_1051213) && !func_21(Global_1051213, Param0))
	{
		Global_1071686.f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_39(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_40(iParam3, 255))
	{
		Global_1071686.f_28351 = 4;
		return true;
	}
	if (Global_263042[Global_1296859 /*70*/] > 2)
	{
		Global_1071686.f_28351 = 5;
		return true;
	}
	if (Global_262155 >= 1)
	{
		Global_1071686.f_28351 = 6;
		return true;
	}
	if (func_41())
	{
		Global_1071686.f_28351 = 7;
		return true;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_38(Global_1051213))
		{
			Global_1071686.f_28351 = 8;
			return true;
		}
	}
	if (Global_265377.f_124675 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265377.f_124675))
	{
		Global_1071686.f_28351 = 9;
		return true;
	}
	Global_1071686.f_28351 = 0;
	return false;
}

bool func_18()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_19(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<2> func_20(int iParam0)
{
	return Global_1210161.f_1[iParam0 /*10*/].f_4;
}

bool func_21(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_22()
{
	if (Local_13 <= 5)
	{
		func_42();
	}
	switch (Local_13)
	{
		case 0:
			func_43();
			break;
		case 1:
			func_44();
			break;
		case 2:
			func_45();
			break;
		case 3:
			func_46();
			break;
		case 4:
			func_47();
			break;
		case 5:
			func_48();
			break;
	}
}

void func_23()
{
	func_49();
	func_50();
	if (Local_829.f_8 <= 5)
	{
		func_51();
	}
	switch (Local_829.f_8)
	{
		case 0:
			func_52();
			break;
		case 1:
			func_53();
			break;
		case 2:
			func_54();
			break;
		case 3:
			func_55();
			break;
		case 4:
			func_56();
			break;
		case 5:
			func_57();
			break;
	}
}

void func_24()
{
	func_58();
}

void func_25()
{
	if (func_59())
	{
		if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_13.f_3.f_1);
		}
	}
	func_60();
}

void func_26()
{
	func_61();
	func_62();
	func_63();
}

void func_27()
{
	if (Local_829.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_64(Local_829.f_12, 4);
		}
	}
	func_65();
	if (func_66(64))
	{
		func_67(Local_13.f_6);
	}
	func_68();
}

int func_28()
{
	return Global_1572887.f_13;
}

bool func_29()
{
	return Global_1051252.f_8;
}

void func_30()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_13.f_40.f_1[iVar0] = 255;
		iVar0++;
	}
}

int func_31(bool bParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	struct<15> Var10;
	int iVar25;
	struct<29> Var26;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var10 = 2;
	Var10.f_1 = -1;
	Var10.f_5 = -1;
	Var10.f_5.f_1 = -1;
	Var10.f_5.f_3 = -1;
	Var10.f_5.f_4 = -1;
	Var10.f_5.f_5 = -1;
	Var10.f_5.f_6 = -1;
	Var10.f_5.f_6.f_1 = -1;
	Var10.f_5.f_9 = 2;
	Var26.f_10 = 1106247680;
	Var26.f_15 = 4;
	Var26.f_20 = 4;
	Var26.f_26 = -1;
	Var26.f_28 = 2;
	func_32(&Var26, iParam1, iParam2, -1, 255);
	func_69(&Var0, Var26.f_5);
	iVar25 = func_70(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_71(iVar25) };
		if (Var10 == 2)
		{
			return iVar25;
		}
		else
		{
			*bParam0 = 1;
			return -1;
		}
	}
	return -1;
}

void func_32(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<29> Var0;
	int iVar31;

	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	MISC::_COPY_MEMORY(uParam0, &Var0, 31);
	iVar31 = 0;
	while (iVar31 < 2)
	{
		uParam0->f_28[iVar31] = 0;
		iVar31++;
	}
	if (iParam4 == 255)
	{
		iParam4 = PLAYER::PLAYER_ID();
	}
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			uParam0->f_1 = 0;
			uParam0->f_2 = 0;
			break;
		case 1:
			func_72(uParam0, iParam2);
			break;
		case 2:
			func_73(uParam0, iParam2);
			break;
		case 3:
			func_74(uParam0, iParam2);
			break;
		case 4:
			func_75(uParam0, iParam2);
			break;
		case 12:
			func_76(uParam0, iParam2);
			break;
		case 6:
			func_77(uParam0, iParam2, -1);
			break;
		case 7:
			func_78(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_79(uParam0, iParam2);
			break;
		case 11:
			func_80(uParam0, iParam2);
			break;
		case 9:
			func_81(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_82(uParam0, iParam2);
			break;
		case 8:
			func_83(uParam0, iParam2);
			break;
		case 13:
			func_84(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_85(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_86(uParam0, iParam2);
			break;
		case 16:
			func_87(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_88(uParam0, iParam2);
			break;
		case 21:
			func_89(uParam0, iParam2);
			break;
		case 28:
			func_90(uParam0, iParam2);
			break;
		case 25:
			func_91(uParam0, iParam2);
			break;
		case 24:
			func_92(uParam0, iParam2);
			break;
		case 22:
			func_93(uParam0, iParam2);
			break;
		case 23:
			func_94(uParam0, iParam2);
			break;
		case 29:
			func_95(uParam0, iParam2);
			break;
		case 26:
			func_96(uParam0, iParam2);
			break;
		case 30:
			func_97(uParam0, iParam2);
			break;
		case 27:
			func_98(uParam0, iParam2);
			break;
		case 32:
			func_99(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_100(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_101(uParam0, iParam2);
			break;
		case 17:
			func_102(uParam0, iParam2);
			break;
		case 18:
			func_103(uParam0, iParam2);
			break;
		case 19:
			func_104(uParam0, iParam2);
			break;
		case 20:
			func_105(uParam0, iParam2);
			break;
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_106(uParam0, iParam1, iParam2);
			break;
		default:
			break;
	}
}

struct<2> func_33(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_108(iParam0, &(Global_1071686.f_636), func_107(iParam1));
			break;
		case 3:
			Var0.f_1 = func_108(iParam0, &(Global_1071686.f_636.f_602), func_107(iParam1));
			break;
		case 4:
			Var0.f_1 = func_108(iParam0, &(Global_1071686.f_636.f_2104), func_107(iParam1));
			break;
		case 5:
			Var0.f_1 = func_108(iParam0, &(Global_1071686.f_636.f_12606), func_107(iParam1));
			break;
		case 6:
			Var0.f_1 = func_108(iParam0, &(Global_1071686.f_636.f_12908), func_107(iParam1));
			break;
		case 7:
			Var0.f_1 = func_108(iParam0, &(Global_1071686.f_636.f_15910), func_107(iParam1));
			break;
		case 8:
			Var0.f_1 = func_108(iParam0, &(Global_1071686.f_636.f_16512), func_107(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_109();
	}
	return Var0;
}

void func_34()
{
	func_110();
	func_111();
	func_112();
}

void func_35()
{
	func_113();
	func_114(0);
}

void func_36()
{
}

void func_37()
{
}

bool func_38(struct<2> Param0)
{
	if (!func_115(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_107(Param0))
	{
		return false;
	}
	return true;
}

bool func_39(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

bool func_40(int iParam0, int iParam1)
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

bool func_41()
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
	if (!func_38(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_42()
{
}

void func_43()
{
	int iVar0;
	struct<29> Var1;

	iVar0 = Global_1198046.f_231.f_1066[Local_829.f_12 /*17*/].f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_32(&Var1, Local_829.f_1, Local_829.f_2, Local_829.f_3, iVar0);
	if (!func_116(&Var1, 1))
	{
		func_117(1);
		return;
	}
	Local_13.f_6 = func_118(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(iVar0)));
	func_119(256);
	if (func_120(Local_13.f_6))
	{
		func_121(5);
		func_117(6);
	}
	else
	{
		func_117(1);
	}
}

void func_44()
{
	struct<31> Var0;
	bool bVar31;

	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, Local_829.f_1, Local_829.f_2, -1, 255);
	if (func_116(&Var0, 1))
	{
		func_117(2);
		return;
	}
	if (func_122(Var0, &bVar31))
	{
		MISC::CLEAR_AREA(Local_829.f_15, Var0.f_10, 2442122);
		func_117(2);
	}
	else if (bVar31)
	{
		func_121(3);
		func_117(6);
	}
	if (!func_123(Local_13.f_3.f_2))
	{
		func_124(&(Local_13.f_3.f_2));
	}
	else if (func_125(Local_13.f_3.f_2) > 45000)
	{
		func_121(4);
		func_117(6);
	}
}

void func_45()
{
	if (func_126(1, 255))
	{
		if (!func_127(1))
		{
			if (func_128())
			{
				func_119(1);
			}
		}
		else
		{
			func_129();
			func_117(3);
		}
	}
}

void func_46()
{
	bool bVar0;

	if (func_126(2, 255))
	{
		if (!func_127(2))
		{
			bVar0 = true;
			if (!func_130())
			{
				bVar0 = false;
			}
			if (!func_131())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_119(2);
			}
		}
		else
		{
			func_132();
			func_117(4);
		}
	}
}

void func_47()
{
	func_133();
	func_134();
	func_135();
	if (func_136() || Local_13.f_2 != 0)
	{
		func_137();
		func_117(5);
	}
}

void func_48()
{
	if (func_126(4, 255))
	{
		if (func_138())
		{
			func_119(4);
			func_117(6);
		}
	}
}

void func_49()
{
	if (!func_127(256))
	{
		return;
	}
	if (func_127(512))
	{
		if (func_66(64) && func_118(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_67(Local_13.f_6);
			func_139(64);
		}
	}
	else if (!func_66(64))
	{
		if (func_118(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_140(Local_13.f_6, 1, 1);
			func_141(64);
		}
	}
	else if (func_118(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_67(Local_13.f_6);
		func_139(64);
	}
}

void func_50()
{
	if (!Global_13)
	{
		if (func_126(8192, 255))
		{
			func_142(8192);
		}
	}
	else if (!func_126(8192, 255))
	{
		func_143(8192);
	}
}

void func_51()
{
	func_144();
}

void func_52()
{
	if (Local_13 == 6)
	{
		func_145(6);
	}
	else if (Local_13 > 0)
	{
		func_49();
		func_145(1);
	}
}

void func_53()
{
	if (Local_13 == 6)
	{
		func_145(6);
	}
	else if (Local_13 > 1)
	{
		func_145(2);
	}
}

void func_54()
{
	bool bVar0;
	int iVar1;

	if (!func_126(1, 255))
	{
		bVar0 = true;
		if (!func_146())
		{
			bVar0 = false;
		}
		if (!func_147())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_143(1);
		}
		else
		{
			iVar1 = Global_1901947.f_236.f_68;
			if (!func_123(Local_829.f_11))
			{
				func_124(&(Local_829.f_11));
			}
			if (func_125(Local_829.f_11) >= iVar1)
			{
				func_145(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_148(&(Local_829.f_11));
		func_149();
		func_145(3);
	}
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_126(2, 255))
	{
		iVar0 = func_150();
		iVar1 = func_151();
		if (iVar0 && iVar1)
		{
			func_143(2);
		}
		else
		{
			iVar2 = Global_1901947.f_236.f_68;
			if (!func_123(Local_829.f_11))
			{
				func_124(&(Local_829.f_11));
			}
			if (func_152(Local_829.f_11) >= iVar2)
			{
				func_145(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_148(&(Local_829.f_11));
		func_153();
		func_154();
		func_155();
		func_156();
		func_145(4);
	}
}

void func_56()
{
	if (Local_13 >= 5)
	{
		func_157();
		func_145(5);
		return;
	}
	func_158();
	func_159();
	func_160();
	func_161();
	func_162();
	func_163();
}

void func_57()
{
	if (!func_126(4, 255))
	{
		if (func_164())
		{
			func_165();
			func_64(Local_829.f_12, 4);
			func_143(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_145(6);
	}
}

void func_58()
{
}

bool func_59()
{
	return (func_127(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_60()
{
}

void func_61()
{
	int iVar0;
	int iVar1;

	if (func_59())
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_37[iVar1]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_13.f_37[iVar1]);
				func_166(iVar1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					if (!func_167(iVar1, 16))
					{
						PED::_0x39A2FC5AF55A52B1(iVar0, -1);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
			iVar1++;
		}
	}
}

void func_62()
{
	func_168(&(Local_829.f_318.f_13));
	if (VOLUME::_DOES_VOLUME_EXIST(Local_829.f_318.f_11))
	{
		VOLUME::_DELETE_VOLUME(Local_829.f_318.f_11);
	}
}

void func_63()
{
	func_169();
}

void func_64(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_170(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1207784[iVar0 /*72*/][iParam0]), iParam1);
}

void func_65()
{
	int iVar0;
	bool bVar1;

	if (!func_66(1))
	{
		return;
	}
	if (func_66(4))
	{
		return;
	}
	if (!func_66(2))
	{
		iVar0 = -1;
	}
	else if (!func_66(8))
	{
		iVar0 = 2;
	}
	else if (func_66(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_66(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_171(Local_829.f_9, iVar0, 0, 255, 0);
	func_141(4);
	if (bVar1)
	{
		func_172(Local_829.f_1, Local_829.f_2);
		if (!func_66(256))
		{
			if (iVar0 == 1)
			{
				func_173(Local_829.f_18, 1);
			}
			else
			{
				func_173(Local_829.f_18, 0);
			}
			func_141(256);
		}
	}
	else
	{
		func_173(Local_829.f_18, 2);
	}
}

bool func_66(int iParam0)
{
	return func_174(Local_829.f_7, iParam0);
}

void func_67(int iParam0)
{
	int iVar0;

	if (!func_175(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	Global_1134390[iVar0 /*83*/].f_70 = iParam0;
	Global_1134390[iVar0 /*83*/].f_70.f_2 = 0;
}

void func_68()
{
	func_176();
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Local_829.f_155.f_7))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Local_829.f_155.f_7));
	}
}

void func_69(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_70(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_177(uParam0))
	{
		return -1;
	}
	iVar0 = func_178(uParam0, uParam0->f_9);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == uParam0->f_9)
		{
		}
		else
		{
			iVar0 = func_178(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_71(int iParam0)
{
	struct<15> Var0;

	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	if (!func_19(iParam0))
	{
		return Var0;
	}
	return Global_1198046.f_231[iParam0 /*15*/];
}

void func_72(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 7;
	func_179(uParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_ROANOKE_RIDGE_1");
			uParam0->f_11 = { 2150.374f, 1728.215f, 125.2313f };
			break;
		case 1:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_ROANOKE_RIDGE_2");
			uParam0->f_11 = { 2179.106f, -25.3714f, 51.3658f };
			break;
		case 2:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_1");
			uParam0->f_11 = { -1055.963f, -794.308f, 59.2567f };
			break;
		case 3:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_2");
			uParam0->f_11 = { -1158.078f, -155.114f, 88.889f };
			break;
		case 4:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_3");
			uParam0->f_11 = { -1370.712f, -515.7384f, 125.267f };
			break;
		case 5:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_4");
			uParam0->f_11 = { -1029.465f, -492.4087f, 101.0615f };
			break;
		case 6:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_HEARTLANDS_1");
			uParam0->f_11 = { -319.5499f, 203.8464f, 62.1121f };
			break;
		case 7:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_HEARTLANDS_2");
			uParam0->f_11 = { -513.8f, 345.2f, 49.8945f };
			break;
		case 8:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_GREAT_PLAINS_1");
			uParam0->f_11 = { -1234.665f, -1371.778f, 80.796f };
			break;
		case 9:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_GRIZZLIES_WEST_1");
			uParam0->f_11 = { -1525.164f, 1722.86f, 239.152f };
			break;
	}
}

void func_73(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_180(uParam0);
	switch (iParam1)
	{
		case 0:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_MACFARLANES");
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HEARTLANDS_1");
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_1");
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_ROANOKE_1");
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BAYOU_1");
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_SCARLETT_1");
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CUMBERLAND_1");
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_STRAWBERRY_1");
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_TALL_TREES_1");
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HENNIGANS_1");
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_RIO_1");
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CHOLLA_1");
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GAPTOOTH_1");
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_THIEVES_1");
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_2");
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_3");
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_VALENTINE_1");
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_EMERALD_1");
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BOLGER_1");
			uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
			break;
	}
}

void func_74(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 8;
	uParam0->f_2 = 1;
	func_180(uParam0);
	switch (iParam1)
	{
		case 0:
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			func_182(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_1");
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			func_182(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_2");
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			func_182(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_3");
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_182(uParam0, 0);
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			func_182(uParam0, 4);
			func_182(uParam0, 5);
			func_182(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_1");
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_182(uParam0, 0);
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			func_182(uParam0, 5);
			func_182(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_2");
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_182(uParam0, 0);
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			func_182(uParam0, 5);
			func_182(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_3");
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_182(uParam0, 0);
			func_182(uParam0, 2);
			func_182(uParam0, 4);
			func_182(uParam0, 5);
			func_182(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_1");
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_182(uParam0, 0);
			func_182(uParam0, 2);
			func_182(uParam0, 4);
			func_182(uParam0, 5);
			func_182(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_2");
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_182(uParam0, 0);
			func_182(uParam0, 2);
			func_182(uParam0, 4);
			func_182(uParam0, 5);
			func_182(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_3");
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_1");
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_182(uParam0, 0);
			func_182(uParam0, 2);
			func_182(uParam0, 5);
			func_182(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_2");
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_3");
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_182(uParam0, 0);
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			func_182(uParam0, 4);
			func_182(uParam0, 5);
			func_182(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_1");
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_2");
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_182(uParam0, 3);
			func_182(uParam0, 4);
			func_182(uParam0, 5);
			func_182(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_3");
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			func_182(uParam0, 5);
			func_182(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_1");
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			func_182(uParam0, 3);
			func_182(uParam0, 5);
			func_182(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_2");
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			func_182(uParam0, 3);
			func_182(uParam0, 5);
			func_182(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_3");
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			func_182(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_1");
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_2");
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			func_182(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_3");
			uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
			break;
	}
}

void func_75(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 2;
	func_180(uParam0);
	uParam0->f_15[0] = joaat("22_TO_4");
	switch (iParam1)
	{
		case 0:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_VALENTINE_1");
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_RHODES_1");
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_BLACKWATER_1");
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_TUMBLEWEED_1");
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_ODDFELLOWS_REST_1");
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_COOTS_CHAPEL_1");
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_RINGNECK_CREEK_1");
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_PLEASANCE_1");
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_SHADY_BELLE_1");
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_SAINT_DENIS_1");
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_OLD_TOMS_BLIND_1");
			uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
			break;
	}
}

void func_76(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_180(uParam0);
	switch (iParam1)
	{
		case 0:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_VAN_HORN_1");
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_BOLGER_1");
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_BAYOU_1");
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_ANNESBURG_1");
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_EMERALD_1");
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_CUMBERLAND_1");
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_FLATNECK_1");
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_WALLACE_1");
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_STRAWBERRY_1");
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_QUAKER_1");
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_MACFARLENE_1");
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_DON_JULIO_1");
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_ARMADILLO_1");
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_PLAINVIEW_1");
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_TUMBLEWEED_1");
			uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
			break;
	}
}

void func_77(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 16;
	uParam0->f_1 = 2;
	uParam0->f_2 = 8;
	switch (iParam2)
	{
		case 0:
			func_183(uParam0, 0);
			func_183(uParam0, 1);
			func_183(uParam0, 4);
			func_183(uParam0, 5);
			break;
		case 1:
			func_183(uParam0, 2);
			func_183(uParam0, 3);
			func_183(uParam0, 6);
			func_183(uParam0, 7);
			func_184(uParam0, 2);
			break;
		default:
			func_180(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_182(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_1");
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_182(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_2");
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_182(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_1");
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_182(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_2");
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_182(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_1");
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_182(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_2");
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_182(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_1");
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_182(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_2");
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_182(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_1");
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_182(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_2");
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_182(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_1");
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_182(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_2");
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_182(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_182(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_2");
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_182(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_1");
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_182(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_2");
			uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
			break;
	}
}

void func_78(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 12;
	uParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			func_182(uParam0, 9);
			func_182(uParam0, 10);
			func_182(uParam0, 11);
			func_185(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_CLIFF_1");
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			func_182(uParam0, 8);
			func_182(uParam0, 9);
			func_182(uParam0, 10);
			func_182(uParam0, 11);
			func_185(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_RIVER_1");
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			func_182(uParam0, 4);
			func_182(uParam0, 5);
			func_182(uParam0, 6);
			func_182(uParam0, 9);
			func_182(uParam0, 10);
			func_182(uParam0, 11);
			func_185(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_1");
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			func_182(uParam0, 9);
			func_182(uParam0, 10);
			func_182(uParam0, 11);
			func_185(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_2");
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			func_182(uParam0, 9);
			func_182(uParam0, 10);
			func_182(uParam0, 11);
			func_185(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_1");
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			func_182(uParam0, 4);
			func_182(uParam0, 7);
			func_182(uParam0, 8);
			func_182(uParam0, 9);
			func_182(uParam0, 10);
			func_182(uParam0, 11);
			func_185(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_2");
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			func_182(uParam0, 6);
			func_182(uParam0, 7);
			func_182(uParam0, 9);
			func_182(uParam0, 10);
			func_182(uParam0, 11);
			func_185(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_3");
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			func_182(uParam0, 4);
			func_182(uParam0, 5);
			func_182(uParam0, 6);
			func_182(uParam0, 9);
			func_182(uParam0, 10);
			func_182(uParam0, 11);
			func_185(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_RIO_BRAVO_1");
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			func_182(uParam0, 9);
			func_182(uParam0, 10);
			func_182(uParam0, 11);
			func_185(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			func_182(uParam0, 5);
			func_182(uParam0, 9);
			func_182(uParam0, 10);
			func_182(uParam0, 11);
			func_185(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_CHOLLA_SPRINGS_1");
			uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
			break;
	}
}

void func_79(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_180(uParam0);
	switch (iParam1)
	{
		case 0:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BOLGER_GLADE_1");
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ERIS_FIELD_1");
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ROANOKE_RIDGE_1");
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MOONSTONE_POND_1");
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_COTORRA_SPRINGS_1");
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_CUMBERLAND_1");
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BEARTOOTH_1");
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FLATNECK_1");
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_LITTLE_CREEK_1");
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_UPPER_MONTANA_1");
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BLACKWATER_1");
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_AURORA_BASIN_1");
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GREAT_PLAINS_1");
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MANTECA_FALLS_1");
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MACFARLANES_RANCH_1");
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_SAN_LUIS_1");
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_JORGES_GAP_1");
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FORT_MERCER_1");
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BENEDICT_POINT_1");
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GAPTOOTH_RIDGE_1");
			uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
			break;
	}
}

void func_80(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	func_180(uParam0);
	func_184(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_EMERALD_RANCH_1");
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_LEMOYNE_1");
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIGGS_STATION_1");
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BLACKWATER_1");
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIO_BRAVO_1");
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_HENNIGANS_1");
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_GREAT_PLAINS_1");
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_STRAWBERRY_1");
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_SCARLETT_1");
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BOLGER_1");
			uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
			break;
	}
}

void func_81(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 4;
	uParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_186(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_0");
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_186(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_1");
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_186(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_2");
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_186(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_3");
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_186(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_4");
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_186(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_5");
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_186(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_6");
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_186(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_0");
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_186(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_1");
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_186(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_2");
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_186(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_3");
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_186(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_4");
			uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
			break;
	}
}

void func_82(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_180(uParam0);
	switch (iParam1)
	{
		case 0:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MACFARLANES_1");
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_THEIVES_LANDING_1");
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_HANGING_ROCK_1");
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DEL_LOBO_1");
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_BEECHERS_1");
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_BLACKWATER_1");
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MONTANA_RIVER_1");
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MONTOS_REST_1");
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_WATSONS_1");
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DAKOTA_RIVER_1");
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_FLATNECK_1");
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_1");
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_2");
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DREAMCATCHER_TREE_1");
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_CUMBERLAND_1");
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_FORT_WALLACE_1");
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_OCREAGHS_RUN_1");
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MOONSTONE_POND_1");
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_KAMASA_RIVER_1");
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_VAN_HORN_1");
			uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
			break;
	}
}

void func_83(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 9;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_180(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_3");
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_4");
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_5");
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_6");
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_7");
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_8");
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_9");
			uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}
}

void func_84(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 1;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	func_180(uParam0);
	func_184(uParam0, 1);
	func_184(uParam0, 4);
	func_184(uParam0, 8);
	func_184(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_WILD_MAN_PLAYER_CAMP_1");
			uParam0->f_11 = { func_187(func_118(iParam2)) };
			break;
	}
}

void func_85(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 5;
	uParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_188(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_1");
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_188(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_2");
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_188(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_1");
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_188(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_2");
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_188(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_RHODES_1");
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_188(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_RHODES_2");
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_188(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_1");
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_188(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_2");
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			break;
		case 8:
			func_188(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_1");
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			break;
		case 9:
			func_188(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_2");
			uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
			break;
	}
}

void func_86(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_180(uParam0);
	switch (iParam1)
	{
		case 0:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_1");
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_2");
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BIG_VALLEY_1");
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_1");
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_2");
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_1");
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_2");
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
		case 7:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_3");
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
		case 8:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_1");
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
		case 9:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_2");
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			break;
		case 10:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			break;
		case 11:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}
}

void func_87(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 2;
	uParam0->f_2 = 4;
	func_189(uParam0, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_0");
			uParam0->f_11 = { 2815.91f, -1222.949f, 46.526f };
			break;
		case 1:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_1");
			uParam0->f_11 = { 2602.444f, -1286.57f, 51.2567f };
			break;
		case 2:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_2");
			uParam0->f_11 = { 2661.251f, -1202.6f, 52.2783f };
			break;
		case 3:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_3");
			uParam0->f_11 = { 2750.527f, -1206.293f, 48.3767f };
			break;
		case 4:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_4");
			uParam0->f_11 = { 2530.883f, -1149.375f, 49.0052f };
			break;
		case 5:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_5");
			uParam0->f_11 = { 2714.385f, -1233.121f, 49.172f };
			break;
		case 6:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_6");
			uParam0->f_11 = { 2639.789f, -1417.126f, 45.376f };
			break;
		case 7:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_7");
			uParam0->f_11 = { 2703.266f, -1184.961f, 50.865f };
			break;
		case 8:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_8");
			uParam0->f_11 = { 2781.518f, -1278.669f, 46.429f };
			break;
		case 9:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_9");
			uParam0->f_11 = { 2593.165f, -1207.484f, 52.3112f };
			break;
		case 10:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_10");
			uParam0->f_11 = { 2670.08f, -1113.233f, 49.552f };
			break;
		case 11:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_11");
			uParam0->f_11 = { 2482.088f, -1465.71f, 45.1902f };
			break;
		case 12:
			uParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_0");
			uParam0->f_11 = { -791.817f, -1311.097f, 42.623f };
			break;
		case 13:
			uParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_1");
			uParam0->f_11 = { -778.963f, -1260.098f, 42.643f };
			break;
		case 14:
			uParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_2");
			uParam0->f_11 = { -843.7784f, -1282.664f, 42.3634f };
			break;
	}
}

void func_88(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 15;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1084113577;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = joaat("NIGHT");
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 8;
	}
	func_180(uParam0);
	switch (iParam1)
	{
		case 0:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_190(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_190(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_190(uParam0, iParam1);
			uParam0->f_5 = -449082741;
			uParam0->f_11 = { 2728.174f, -468.3862f, 40.7744f };
			break;
	}
}

void func_89(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 13;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 477228254;
	if (iParam1 > 7)
	{
		uParam0->f_27 = 18;
		uParam0->f_20[0] = joaat("NIGHT");
	}
	else
	{
		uParam0->f_27 = 1;
		uParam0->f_20[0] = joaat("DAY");
	}
	switch (iParam1)
	{
		case 0:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_191(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_191(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_191(uParam0, iParam1);
			uParam0->f_5 = -2076667055;
			uParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}
}

void func_90(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 1796670491;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 0;
	}
	else
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 18;
	}
	func_180(uParam0);
	switch (iParam1)
	{
		case 0:
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_182(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_182(uParam0, 1);
			uParam0->f_5 = 355243564;
			uParam0->f_11 = { 2398.53f, 773.5043f, 67.0099f };
			break;
	}
}

void func_91(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 326651247;
	func_180(uParam0);
	if (iParam1 > 4)
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = joaat("NIGHT");
		uParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_182(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_182(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_182(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_182(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_182(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_182(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_182(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_182(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_182(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_182(uParam0, 1);
			uParam0->f_5 = -1406848126;
			uParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}
}

void func_92(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 11;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1848813677;
	func_180(uParam0);
	if (iParam1 > 5)
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 9;
	}
	else
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_27 = 18;
	}
	switch (iParam1)
	{
		case 0:
			func_182(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_182(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_182(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_182(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_182(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_182(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_182(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_182(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_182(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_182(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_182(uParam0, 2);
			uParam0->f_5 = 1599124976;
			uParam0->f_11 = { 2601.386f, -212.5256f, 43.7812f };
			break;
	}
}

void func_93(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 20;
	uParam0->f_1 = 4;
	uParam0->f_2 = 2;
	uParam0->f_28[0] = 458679075;
	switch (iParam1)
	{
		case 0:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			break;
		case 13:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			break;
		case 14:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			break;
		case 15:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			break;
		case 16:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			break;
		case 17:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			break;
		case 18:
			func_192(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
		case 19:
			func_192(uParam0, iParam1);
			uParam0->f_5 = -992108595;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1331.61f, -1892.678f, 60.4174f };
			break;
	}
}

void func_94(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 15;
	uParam0->f_1 = 5;
	uParam0->f_2 = 2;
	uParam0->f_28[0] = 78935770;
	switch (iParam1)
	{
		case 0:
			func_193(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_193(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_193(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_193(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_193(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_193(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_193(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_193(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_193(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_193(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_193(uParam0, iParam1);
			uParam0->f_5 = -2014041707;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 1876.532f, -453.5455f, 43.2695f };
			break;
	}
}

void func_95(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 29257535;
	func_180(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_20[1] = -2117802919;
		uParam0->f_27 = 0;
	}
	else
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_182(uParam0, 3);
			func_182(uParam0, 4);
			func_182(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_182(uParam0, 3);
			func_182(uParam0, 4);
			func_182(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_182(uParam0, 3);
			func_182(uParam0, 4);
			func_182(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_182(uParam0, 3);
			func_182(uParam0, 4);
			func_182(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_182(uParam0, 3);
			func_182(uParam0, 4);
			func_182(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			uParam0->f_5 = 432310963;
			uParam0->f_11 = { -1525.983f, -916.2361f, 88.1698f };
			break;
	}
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 20;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -463663296;
	if (iParam1 < 10)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 57;
	}
	else
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_194(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_194(uParam0, iParam1);
			uParam0->f_5 = 1074322888;
			uParam0->f_11 = { -1394.394f, 2394.838f, 308.3089f };
			break;
	}
}

void func_97(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -2109368060;
	func_180(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = joaat("NIGHT");
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_27 = 0;
	}
	switch (iParam1)
	{
		case 0:
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_182(uParam0, 2);
			func_182(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_182(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_182(uParam0, 1);
			uParam0->f_5 = 1641665016;
			uParam0->f_11 = { -919.2281f, 1482.48f, 245.1043f };
			break;
	}
}

void func_98(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 25;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -646307557;
	if (iParam1 < 10)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = joaat("NIGHT");
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = joaat("NIGHT");
		uParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_195(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_195(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_195(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_195(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_195(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_195(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_195(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_195(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_195(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_195(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_195(uParam0, iParam1);
			uParam0->f_5 = -1602546938;
			uParam0->f_11 = { 480.1275f, 2070.224f, 235.143f };
			break;
	}
}

void func_99(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;

	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 3;
	uParam0->f_2 = 2;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -196458416;
	bVar0 = iParam1 >= 5;
	if (!bVar0)
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_27 = 1;
	}
	else
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 1;
	}
	func_196(uParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -1725684832;
			uParam0->f_11 = { 261.4861f, -558.9222f, 61.15959f };
			break;
		case 1:
			uParam0->f_5 = -1992129571;
			uParam0->f_11 = { 477.293f, -270.4016f, 143.0532f };
			break;
		case 2:
			uParam0->f_5 = 2064181094;
			uParam0->f_11 = { 178.3377f, -192.7462f, 126.5609f };
			break;
		case 3:
			uParam0->f_5 = 1983503816;
			uParam0->f_11 = { -138.1221f, -21.41103f, 95.08842f };
			break;
		case 4:
			uParam0->f_5 = 1603580030;
			uParam0->f_11 = { 788.4693f, -359.1041f, 88.02867f };
			break;
		case 5:
			uParam0->f_5 = 1591141935;
			uParam0->f_11 = { -2105.914f, -1658.808f, 139.2303f };
			break;
		case 6:
			uParam0->f_5 = 1382010177;
			uParam0->f_11 = { -2322.846f, -1606.925f, 147.5517f };
			break;
		case 7:
			uParam0->f_5 = -1315566672;
			uParam0->f_11 = { -2327.094f, -1401.05f, 142.4195f };
			break;
		case 8:
			uParam0->f_5 = 395106204;
			uParam0->f_11 = { -2004.499f, -1326.471f, 115.4162f };
			break;
		case 9:
			uParam0->f_5 = 88814361;
			uParam0->f_11 = { -2532.945f, -1409.852f, 145.3983f };
			break;
	}
}

void func_100(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 3;
	uParam0->f_2 = 2;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = 970130440;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_20[1] = joaat("DAY");
		uParam0->f_27 = 57;
	}
	else
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_20[1] = -2117802919;
		uParam0->f_27 = 57;
	}
	func_197(uParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -44146172;
			uParam0->f_11 = { -4886.723f, -3659.611f, 23.51921f };
			break;
		case 1:
			uParam0->f_5 = -1882192159;
			uParam0->f_11 = { -3706.045f, -3561.407f, 47.211f };
			break;
		case 2:
			uParam0->f_5 = -1446495535;
			uParam0->f_11 = { -3997.887f, -3743.7f, 39.394f };
			break;
		case 3:
			uParam0->f_5 = -1153835596;
			uParam0->f_11 = { -4533.075f, -3761.288f, 13.8127f };
			break;
		case 4:
			uParam0->f_5 = 345870470;
			uParam0->f_11 = { -4165.463f, -3614.162f, 49.5309f };
			break;
		case 5:
			uParam0->f_5 = -1885586340;
			uParam0->f_11 = { 1612.212f, 2114.094f, 315.281f };
			break;
		case 6:
			uParam0->f_5 = 1366147128;
			uParam0->f_11 = { 1879.319f, 2050.416f, 269.9333f };
			break;
		case 7:
			uParam0->f_5 = 1740369108;
			uParam0->f_11 = { 1522.469f, 2192.855f, 333.81f };
			break;
		case 8:
			uParam0->f_5 = -416486532;
			uParam0->f_11 = { 693.7542f, 2222.729f, 222.769f };
			break;
		case 9:
			uParam0->f_5 = -1184690199;
			uParam0->f_11 = { 756.6907f, 2034.318f, 266.4209f };
			break;
	}
}

void func_101(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -405566878;
	func_180(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_27 = 24;
		uParam0->f_20[0] = joaat("6_TO_18");
	}
	else
	{
		uParam0->f_27 = 24;
		uParam0->f_20[0] = joaat("18_TO_0");
		uParam0->f_20[1] = joaat("22_TO_4");
	}
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -145880949;
			uParam0->f_11 = { 451.6826f, 1053.771f, 197.3474f };
			func_182(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_182(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_182(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_182(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_182(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_182(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_182(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_182(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_182(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_182(uParam0, 1);
			break;
	}
}

void func_102(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_180(uParam0);
	switch (iParam1)
	{
		case 0:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_0");
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_1");
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_2");
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_0");
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_1");
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_0");
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_1");
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_2");
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_3");
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_181(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_181(uParam0);
			uParam0->f_5 = -1477292384;
			uParam0->f_11 = { -2205.016f, -1584.145f, 148.3944f };
			break;
	}
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_180(uParam0);
	switch (iParam1)
	{
		case 0:
			func_181(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_181(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_181(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_181(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_181(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_181(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_181(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_181(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_181(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_181(uParam0);
			uParam0->f_5 = -910888222;
			uParam0->f_11 = { 1509.102f, -2101.449f, 45.3134f };
			break;
	}
}

void func_104(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 7;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_180(uParam0);
	switch (iParam1)
	{
		case 0:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_1");
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_2");
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_3");
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_181(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_4");
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_182(uParam0, 0);
			func_182(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_182(uParam0, 0);
			func_182(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_182(uParam0, 0);
			func_182(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_3");
			uParam0->f_11 = { 1289.693f, -1603.704f, 64.23989f };
			break;
	}
}

void func_105(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 8;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_198(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_198(uParam0, iParam1);
			uParam0->f_5 = -2098551789;
			uParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}
}

void func_106(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam1)
	{
		case 35:
			uParam0->f_8 = joaat("HIDEOUT");
			break;
		case 36:
			uParam0->f_8 = joaat("DYNAMIC_AMBUSH");
			break;
		case 37:
			uParam0->f_8 = joaat("DYNAMIC_RESCUE_PED_MULTIPLE");
			break;
		case 38:
			uParam0->f_8 = joaat("DYNAMIC_ESCORT");
			break;
		case 39:
			uParam0->f_8 = joaat("DYNAMIC_CAMPSITE_DEFEND");
			break;
		case 40:
			uParam0->f_8 = joaat("MOONSHINE_DYNAMIC_SABOTAGE");
			break;
		case 41:
			uParam0->f_8 = joaat("MOONSHINE_DYNAMIC_DESTROY");
			break;
		case 42:
			uParam0->f_8 = joaat("MOONSHINE_DYNAMIC_ROADBLOCK");
			break;
		case 43:
			uParam0->f_8 = 362795228;
			break;
	}
	iVar0 = func_199(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if ((iParam1 == 41 || iParam1 == 42) || iParam1 == 40)
	{
		uParam0->f_7 = 1;
	}
	else if (iParam1 == 43)
	{
		uParam0->f_7 = 2;
	}
	*uParam0 = func_200(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_184(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_202(func_201(iVar0), iParam2);
		uParam0->f_15[0] = func_203(func_201(iVar0), iParam2);
		uParam0->f_5 = func_204(iVar0, iParam2);
		uParam0->f_11 = { func_205(iVar0, iParam2) };
	}
}

int func_107(int iParam0)
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

int func_108(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if ((*uParam1)[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if ((*uParam1)[iVar2 /*3*/] < iParam0)
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

struct<2> func_109()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_110()
{
	int iVar0;
	int iVar1;

	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Local_60[iVar1 /*24*/].f_7.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_111()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	func_206(&(Local_829.f_204), &(Local_829.f_204.f_32));
	bVar2 = true;
	if (!func_207(&iVar1))
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_13.f_40.f_4[iVar0] = 0;
			Local_13.f_40.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			Local_60[iVar1 /*24*/].f_12.f_8[iVar0] = 0;
		}
		iVar0++;
	}
	func_208(&(Local_829.f_204.f_75), 8, -1);
	if (bVar2)
	{
		func_208(&(Local_60[iVar1 /*24*/].f_12), 8, -1);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			func_208(&(Local_60[iVar3 /*24*/].f_12), 8, -1);
			iVar3++;
		}
	}
}

void func_112()
{
}

void func_113()
{
	func_209(0, joaat("MP_A_C_BUCK_01"));
	func_210(0, 16);
	switch (func_211())
	{
		case 1:
			func_212(0, -1381586791);
			break;
		default:
			func_212(0, -1617752974);
			break;
	}
	switch (func_213())
	{
		case 0:
			break;
	}
	if (func_214())
	{
		func_209(1, joaat("A_C_BUCK_01"));
	}
}

void func_114(int iParam0)
{
	MISC::SET_BIT(&(Local_829.f_19), iParam0);
}

bool func_115(int iParam0)
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

bool func_116(var uParam0, int iParam1)
{
	return func_215(uParam0->f_25, iParam1);
}

void func_117(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

int func_118(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

void func_119(int iParam0)
{
	if (!func_127(iParam0))
	{
		func_216(&(Local_13.f_1), iParam0);
	}
}

bool func_120(int iParam0)
{
	if (!func_175(iParam0))
	{
		return false;
	}
	return (func_217(iParam0) && Global_1131196[iParam0 /*27*/].f_18.f_1 != 0);
}

void func_121(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

bool func_122(struct<31> Param0, var uParam31)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
	{
		return true;
	}
	if (func_218(Local_829.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_13.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_829.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam31 = 1;
			return false;
		}
		func_219(&uVar1, Param0);
		Local_13.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_143(128);
	}
	else if (!func_126(128, 255))
	{
		Local_13.f_3.f_1 = func_220(Param0);
		if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
		{
			return true;
		}
		return false;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_13.f_3);
	switch (iVar0)
	{
		case 3:
			Local_13.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(Local_13.f_3);
			return true;
		case 4:
			Local_13.f_3 = 0;
			return false;
		default:
			break;
	}
	return false;
}

bool func_123(int iParam0)
{
	return iParam0 != 0;
}

void func_124(var uParam0)
{
	*uParam0 = Global_1296859.f_21;
}

int func_125(int iParam0)
{
	return (Global_1296859.f_21 - iParam0) * 1000;
}

bool func_126(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_207(&iParam1))
		{
			return false;
		}
	}
	return func_174(Local_60[iParam1 /*24*/], iParam0);
}

bool func_127(int iParam0)
{
	return func_174(Local_13.f_1, iParam0);
}

bool func_128()
{
	return true;
}

void func_129()
{
}

bool func_130()
{
	return true;
}

bool func_131()
{
	bool bVar0;

	if (!func_221(&bVar0))
	{
		if (bVar0)
		{
			func_222();
		}
		return false;
	}
	return true;
}

void func_132()
{
}

void func_133()
{
	if (!func_127(32) && func_223(32))
	{
		func_119(32);
	}
	if (!func_127(64) && func_223(64))
	{
		func_119(64);
	}
	if (!func_127(16) && func_224(16))
	{
		func_119(16);
	}
	if ((!func_127(2048) && func_223(2048)) && !func_223(4096))
	{
		func_119(2048);
	}
}

void func_134()
{
	bool bVar0;

	if (!bVar0 && func_127(16))
	{
		func_121(1);
		return;
	}
	if (func_127(2048) && !func_223(4096))
	{
		func_121(6);
		return;
	}
}

void func_135()
{
	func_225();
}

bool func_136()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_226(0)))
	{
		func_227(ENTITY::GET_ENTITY_COORDS(func_226(0), true, false));
	}
	if (func_228())
	{
		return true;
	}
	switch (Local_13.f_24)
	{
		case 0:
			func_229();
			break;
		case 1:
			func_230();
			break;
		case 2:
			func_231();
			break;
		case 3:
			func_232();
			break;
		case 4:
			func_233();
			break;
		case 5:
			func_234();
			break;
		case 6:
			func_235();
			break;
		case 7:
			func_236();
			break;
		case 8:
			func_237();
			break;
	}
	return false;
}

void func_137()
{
}

bool func_138()
{
	return true;
}

void func_139(int iParam0)
{
	if (func_66(iParam0))
	{
		func_238(&(Local_829.f_7), iParam0);
	}
}

int func_140(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_175(iParam0))
	{
		return 0;
	}
	iVar0 = func_239(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	Global_1134390[iVar1 /*83*/].f_70 = iParam0;
	Global_1134390[iVar1 /*83*/].f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_240(&(Global_1134390[iVar1 /*83*/].f_70.f_1), 1);
	}
	else
	{
		func_241(&(Global_1134390[iVar1 /*83*/].f_70.f_1), 1);
	}
	return 1;
}

void func_141(int iParam0)
{
	if (!func_66(iParam0))
	{
		func_216(&(Local_829.f_7), iParam0);
	}
}

void func_142(int iParam0)
{
	if (func_174(Local_60[NETWORK::PARTICIPANT_ID_TO_INT() /*24*/], iParam0))
	{
		func_238(&(Local_60[NETWORK::PARTICIPANT_ID_TO_INT() /*24*/]), iParam0);
	}
}

void func_143(int iParam0)
{
	if (!func_126(iParam0, 255))
	{
		func_216(&(Local_60[NETWORK::PARTICIPANT_ID_TO_INT() /*24*/]), iParam0);
	}
}

void func_144()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_242(iVar0);
				break;
			case -1315570756:
				func_243(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_244(iVar0);
		iVar0++;
	}
}

void func_145(int iParam0)
{
	if (Local_829.f_8 != iParam0)
	{
		Local_829.f_8 = iParam0;
	}
}

bool func_146()
{
	if (!func_245())
	{
		return false;
	}
	return true;
}

bool func_147()
{
	bool bVar0;

	bVar0 = false;
	if (!func_246())
	{
		bVar0 = true;
	}
	if (Local_829.f_25 && !func_247(&(Local_13.f_7), &(Local_829.f_25)))
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_148(var uParam0)
{
	*uParam0 = 0;
}

void func_149()
{
}

int func_150()
{
	if (!func_248())
	{
		return 0;
	}
	return 1;
}

int func_151()
{
	return 1;
}

int func_152(int iParam0)
{
	return (iParam0 - Global_1296859.f_21) * 1000;
}

void func_153()
{
	if (!func_66(1))
	{
		func_249(Local_829.f_9);
		func_141(1);
	}
}

void func_154()
{
	func_250();
}

void func_155()
{
	int iVar0;
	bool bVar1;

	iVar0 = func_226(0);
	func_251(iVar0);
	func_252(&(Local_829.f_53), 0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 1112014848 /* Float: 50f */);
	func_253(&(Local_829.f_53), 5);
	bVar1 = func_254(0);
	if (func_255(1) || bVar1)
	{
		func_256(2, 1);
	}
	if (func_255(2) || bVar1)
	{
		func_256(4, 1);
	}
	func_257(&(Local_829.f_53), 1);
	if (!func_214())
	{
		func_258(25f, 100f, 1, 1f, 1);
	}
	else
	{
		func_258(25f, 80f, 1, 1f, 1);
	}
	func_259(1065353216 /* Float: 1f */, 2.5f);
	func_260(iVar0);
	if (func_261(1))
	{
		func_260(func_226(1));
	}
	func_262();
	if (func_261(0) && func_263(0))
	{
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iVar0, true, 1f);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 5, true);
	}
	Local_829.f_155.f_7 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2240.117f, -1302.01f, 133.4578f, 1f, 1f, 2f, 2.9f, false, 7);
}

void func_156()
{
	func_264();
}

void func_157()
{
}

void func_158()
{
	float fVar0;

	if (func_218(Local_829.f_15))
	{
		return;
	}
	if (func_265())
	{
		return;
	}
	if (func_266(Local_829.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_829.f_15);
		if (fVar0 < 200f)
		{
			func_143(4096);
		}
		else if (fVar0 < 400f)
		{
			func_142(4096);
			func_143(2048);
		}
		else
		{
			func_142(4096);
			func_142(2048);
		}
	}
}

void func_159()
{
	func_267();
	func_268();
	func_269();
	func_270();
	func_271();
	func_272();
}

void func_160()
{
	if (func_273())
	{
		func_143(8);
	}
	else
	{
		func_142(8);
	}
}

void func_161()
{
	if (Local_13.f_24 != Local_829.f_155)
	{
		Local_829.f_155 = Local_13.f_24;
	}
	func_274();
	func_275();
	func_278(func_226(0), func_277(func_276(), 0));
	if (Local_829.f_155 > 0)
	{
		func_279();
	}
	func_280();
	switch (Local_829.f_155)
	{
		case 0:
			func_281();
			break;
		case 1:
			func_282();
			break;
		case 2:
			func_283();
			break;
		case 3:
			func_284();
			break;
		case 4:
			func_285();
			break;
		case 5:
			func_286();
			break;
		case 6:
			func_287();
			break;
		case 7:
			func_288();
			break;
		case 8:
			func_289();
			break;
	}
}

void func_162()
{
	if (!func_126(8, 255))
	{
		func_143(16);
	}
	else
	{
		func_142(16);
	}
}

void func_163()
{
	int iVar0;

	Local_829.f_6 = -1;
	Local_829.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_829.f_5 = (Local_829.f_5 || Local_60[iVar0 /*24*/]);
			Local_829.f_6 = (Local_829.f_6 && Local_60[iVar0 /*24*/]);
		}
		iVar0++;
	}
}

bool func_164()
{
	return true;
}

void func_165()
{
	func_290();
}

void func_166(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(Local_829.f_163.f_7[iParam0 /*11*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_829.f_163.f_7[iParam0 /*11*/].f_1));
	}
}

bool func_167(int iParam0, int iParam1)
{
	return func_174(Local_829.f_163.f_7[iParam0 /*11*/].f_2, iParam1);
}

void func_168(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*9*/])->f_7 = 0f;
		(uParam0[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

void func_169()
{
	char* sVar0;

	if (!func_291())
	{
		return;
	}
	if (func_292(2, -1))
	{
		return;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_829.f_53) && ENTITY::IS_ENTITY_DEAD(Local_829.f_53)) || Local_829.f_53.f_2 == 12)
	{
		return;
	}
	if (func_293(16))
	{
		return;
	}
	sVar0 = func_294(Local_829.f_145.f_5, Local_829.f_145.f_6);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	func_295(sVar0);
}

bool func_170(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1207784[iParam1 /*72*/][iParam0], iParam2);
}

void func_171(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	iVar0 = func_297(func_296(Param0));
	iVar1 = func_298(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377.f_124517.f_71.f_17;
		func_299(Param0, &Var2);
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	STATS::_0xD5910ECF81A2278C(iVar0, iVar1, iParam2, &Var2);
}

void func_172(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_300(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_301(iVar0);
}

void func_173(int iParam0, int iParam1)
{
	func_124(&(Global_1272030.f_3271[iParam0]));
	switch (iParam1)
	{
		case 0:
			Global_1272030.f_3275[iParam0] = func_302(iParam0);
			break;
		case 1:
			Global_1272030.f_3275[iParam0] = func_303(iParam0);
			break;
		case 2:
			Global_1272030.f_3275[iParam0] = func_304(iParam0);
			break;
	}
}

bool func_174(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_175(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_176()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_829.f_155.f_5))
	{
		POPULATION::_0xA1CFB35069D23C23(Local_829.f_155.f_5);
		POPULATION::_0x74C2B3DC0B294102(Local_829.f_155.f_5);
		VOLUME::_DELETE_VOLUME(Local_829.f_155.f_5);
	}
}

bool func_177(var uParam0)
{
	if (func_38(*uParam0))
	{
		return true;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return true;
		}
		if (uParam0->f_4 != -1)
		{
			return true;
		}
		if (uParam0->f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_178(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_305(iParam1);
	iVar1 = ((iVar0 + Global_1198046.f_3[iParam1]) - 1);
	if (Global_1198046.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_306(iParam1)) - 1);
	}
	bVar2 = func_38(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_21(Global_1198046.f_231[iVar6 /*15*/].f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if (Global_1198046.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1198046.f_231[iVar6 /*15*/].f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if (Global_1198046.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1198046.f_231[iVar6 /*15*/].f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if (Global_1198046.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1198046.f_231[iVar6 /*15*/].f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

void func_179(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_307(uParam0);
			break;
		case 1:
			func_307(uParam0);
			break;
		case 2:
			func_307(uParam0);
			break;
		case 3:
			func_308(uParam0);
			break;
		case 4:
			func_307(uParam0);
			break;
		case 5:
			func_307(uParam0);
			break;
		case 6:
			func_308(uParam0);
			break;
		case 7:
			func_308(uParam0);
			break;
		case 8:
			func_308(uParam0);
			break;
		case 9:
			func_307(uParam0);
			break;
		default:
			func_181(uParam0);
			func_180(uParam0);
			break;
	}
}

void func_180(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_183(uParam0, iVar0);
		iVar0++;
	}
}

void func_181(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_182(uParam0, iVar0);
		iVar0++;
	}
}

void func_182(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_3), iParam1);
}

void func_183(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_4), iParam1);
}

void func_184(var uParam0, int iParam1)
{
	func_240(&(uParam0->f_25), iParam1);
}

void func_185(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_183(uParam0, 0);
			break;
		case 1:
		case 2:
			func_183(uParam0, 1);
			func_183(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_183(uParam0, 0);
			func_183(uParam0, 2);
			break;
		case 8:
			func_183(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_183(uParam0, 1);
			break;
		default:
			func_180(uParam0);
			break;
	}
}

void func_186(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_309(uParam0);
			break;
		case 1:
			func_310(uParam0);
			break;
		case 2:
			func_311(uParam0);
			break;
		case 3:
			func_312(uParam0);
			break;
		default:
			func_181(uParam0);
			func_180(uParam0);
			break;
	}
}

Vector3 func_187(int iParam0)
{
	if (!func_175(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1131196[iParam0 /*27*/].f_20;
}

void func_188(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_313(uParam0);
			break;
		case 1:
		case 2:
			func_314(uParam0);
			break;
		case 3:
		case 4:
			func_315(uParam0);
			break;
		default:
			func_180(uParam0);
			break;
	}
	func_181(uParam0);
}

void func_189(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_183(uParam0, 0);
			func_183(uParam0, 2);
			break;
		case 1:
			func_183(uParam0, 1);
			func_183(uParam0, 3);
			break;
		default:
			func_181(uParam0);
			func_180(uParam0);
			break;
	}
}

void func_190(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_182(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_182(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_182(uParam0, 0);
			break;
		default:
			func_182(uParam0, 0);
			break;
	}
	func_180(uParam0);
}

void func_191(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_182(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_182(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_182(uParam0, 2);
			break;
		default:
			func_181(uParam0);
			break;
	}
	func_180(uParam0);
}

void func_192(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_182(uParam0, 0);
			func_183(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_182(uParam0, 1);
			func_183(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_182(uParam0, 2);
			func_183(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_182(uParam0, 3);
			func_183(uParam0, 0);
			break;
	}
}

void func_193(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_182(uParam0, 0);
			func_183(uParam0, 0);
			break;
		case 2:
			func_182(uParam0, 1);
			func_183(uParam0, 0);
			break;
		case 3:
		case 4:
			func_182(uParam0, 2);
			func_183(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_182(uParam0, 3);
			func_183(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_182(uParam0, 4);
			func_183(uParam0, 1);
			break;
	}
}

void func_194(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_182(uParam0, 3);
			break;
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
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			break;
		default:
			func_181(uParam0);
			break;
	}
	func_180(uParam0);
}

void func_195(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_182(uParam0, 3);
			break;
		case 10:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 20:
		case 21:
		case 24:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			break;
		default:
			func_181(uParam0);
			break;
	}
	func_180(uParam0);
}

void func_196(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_183(uParam0, 0);
			func_182(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_183(uParam0, 1);
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			func_182(uParam0, 2);
			break;
		default:
			func_183(uParam0, 0);
			func_182(uParam0, 0);
			break;
	}
}

void func_197(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_183(uParam0, 0);
			func_182(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_183(uParam0, 1);
			func_182(uParam0, 0);
			func_182(uParam0, 1);
			break;
		default:
			func_183(uParam0, 0);
			func_182(uParam0, 0);
			break;
	}
}

void func_198(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_180(uParam0);
			func_181(uParam0);
			break;
		default:
			func_180(uParam0);
			func_181(uParam0);
			break;
	}
}

int func_199(int iParam0)
{
	return Global_1272030.f_3348[iParam0];
}

int func_200(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1257541[iParam0 /*5*/].f_3;
}

int func_201(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/];
}

var func_202(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_316(&Var1, iParam0) && func_317(&Var1, iParam1))
	{
		func_318(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_203(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_316(&Var1, iParam0) && func_317(&Var1, iParam1))
	{
		func_318(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_204(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_319(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/];
}

Vector3 func_205(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_319(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/].f_3;
}

void func_206(var uParam0, var uParam1)
{
	func_320(uParam0);
	func_321(uParam0);
	func_322(uParam1);
	func_321(uParam1);
	func_323(uParam1);
	func_324(uParam1, 1);
	func_325(uParam1, 1);
	func_326(uParam0, 1);
	func_327(uParam0, 1.25f);
}

bool func_207(int iParam0)
{
	*iParam0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_328(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_208(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (!func_329(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_330(Var0.f_2, 10);
		iVar5 = iVar4 ^ -1;
		(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
		if (iParam2 != 0)
		{
			(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
		}
		return 1;
	}
	iVar4 = func_330(Var0.f_2, (32 - Var0.f_2));
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0] = ((*uParam0)[Var0] && iVar5);
	(*uParam0)[Var0] = ((*uParam0)[Var0] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
	iVar4 = func_330(0, Var0.f_3 + 1);
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_RIGHT(iParam2, (32 - Var0.f_3)) && iVar4));
	return 1;
}

void func_209(int iParam0, int iParam1)
{
	Local_829.f_163.f_7[iParam0 /*11*/].f_3 = iParam1;
}

void func_210(int iParam0, int iParam1)
{
	func_216(&(Local_829.f_163.f_7[iParam0 /*11*/].f_2), iParam1);
}

int func_211()
{
	switch (func_331())
	{
		case 0:
			return 0;
		case 1:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_212(int iParam0, int iParam1)
{
	Local_829.f_163.f_7[iParam0 /*11*/].f_4 = iParam1;
}

int func_213()
{
	return Local_829.f_2;
}

bool func_214()
{
	switch (func_332())
	{
		case 1:
		case 2:
			return true;
	}
	return false;
}

bool func_215(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_216(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_217(int iParam0)
{
	int iVar0;

	if (!func_175(iParam0))
	{
		return false;
	}
	iVar0 = func_333(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_218(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_219(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_220(struct<31> Param0)
{
	var uVar0;

	func_219(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

bool func_221(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*uParam0 = 1;
		return false;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (func_167(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_334(iVar2, uParam0, &bVar1))
				{
					if (*uParam0)
					{
						return false;
					}
					if (bVar1)
					{
						bVar0 = true;
					}
				}
			}
			if (func_335(iVar2))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_37[iVar2]))
				{
					if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_37[iVar2]))
					{
						NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_37[iVar2]);
					}
				}
			}
		}
		iVar2++;
	}
	if (bVar0)
	{
		return false;
	}
	return true;
}

void func_222()
{
	func_121(2);
}

bool func_223(int iParam0)
{
	return func_174(Local_829.f_5, iParam0);
}

bool func_224(int iParam0)
{
	return func_174(Local_829.f_6, iParam0);
}

void func_225()
{
	if (Local_829.f_25 && func_336(&(Local_13.f_7), &(Local_829.f_25)))
	{
		func_121(7);
	}
}

int func_226(int iParam0)
{
	return Local_829.f_163.f_7[iParam0 /*11*/];
}

void func_227(vector3 vParam0)
{
	if (!func_123(Local_829.f_13))
	{
		func_124(&(Local_829.f_13));
	}
	if (func_125(Local_829.f_13) < Global_1901947.f_236.f_69)
	{
		return;
	}
	func_337(Local_829.f_9, vParam0, 0, Local_829.f_12);
	func_148(&(Local_829.f_13));
}

bool func_228()
{
	if (func_338(5, 30, 5) || func_339(128))
	{
		return true;
	}
	return false;
}

void func_229()
{
	if (func_340())
	{
		if (!func_214())
		{
			func_341(1, 1);
		}
		else
		{
			func_341(3, 1);
		}
	}
}

void func_230()
{
	bool bVar0;

	bVar0 = func_342(0, 1);
	if (func_339(2))
	{
		if (!func_255(1))
		{
			func_343(1, 1);
		}
		if (func_339(8) || bVar0)
		{
			if (func_339(4) || bVar0)
			{
				if (!func_255(2))
				{
					func_343(2, 1);
				}
				if (!func_344())
				{
					func_341(2, 1);
				}
				else
				{
					func_341(5, 1);
				}
			}
		}
	}
	if (!func_345(8, 0))
	{
		func_346();
	}
}

void func_231()
{
}

void func_232()
{
	if (func_345(1073741824 /* Float: 2f */, 0))
	{
		if (!func_339(2))
		{
			return;
		}
		func_341(4, 1);
	}
}

void func_233()
{
	if (!func_347(0, 268435456, 0))
	{
		return;
	}
	if (!func_347(1, 536870912, 1))
	{
		return;
	}
	func_348(0, 1);
	func_348(1, 1);
	func_341(5, 1);
}

void func_234()
{
	if (func_345(32, 0))
	{
		func_348(0, 1);
		func_341(7, 1);
	}
	else if (func_345(64, 0))
	{
		func_341(8, 1);
	}
}

void func_235()
{
	if (func_345(32, 0))
	{
		return;
	}
	if (func_345(64, 0))
	{
		return;
	}
	func_341(5, 1);
}

void func_236()
{
	if (!func_349(0))
	{
		func_348(0, 1);
	}
	if (func_350(0))
	{
		func_341(6, 1);
	}
}

void func_237()
{
	if (func_345(32, 0))
	{
		func_348(0, 1);
		func_348(1, 1);
		func_341(7, 1);
	}
}

void func_238(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_239(int iParam0)
{
	if (!func_175(iParam0))
	{
		return 0;
	}
	if (!func_217(iParam0))
	{
		return 0;
	}
	return Global_1131196[iParam0 /*27*/].f_18.f_1;
}

void func_240(var uParam0, int iParam1)
{
	func_351(uParam0, iParam1);
}

void func_241(var uParam0, int iParam1)
{
	func_352(uParam0, iParam1);
}

void func_242(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 182:
			if (func_353(&Var0, iParam0))
			{
				func_354(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_243(int iParam0)
{
}

void func_244(int iParam0)
{
}

bool func_245()
{
	if (!HUD::_DOES_TEXT_DATABASE_EXIST("LEGANM"))
	{
		return true;
	}
	if (!HUD::_0x3CF96E16265B7DC8("LEGANM"))
	{
		HUD::_TEXT_DATABASE_REQUEST("LEGANM");
	}
	return HUD::_TEXT_DATABASE_HAS_LOADED("LEGANM");
}

bool func_246()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (MISC::IS_BIT_SET(Local_829.f_163.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_355(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_829.f_163.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_829.f_163.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_829.f_163.f_3), iVar0);
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return false;
	}
	return true;
}

bool func_247(var uParam0, var uParam1)
{
	if (*uParam0 == 3)
	{
		return func_356(&(uParam0->f_9), &(uParam1->f_16), &(uParam1->f_4), &(uParam1->f_12), 64);
	}
	return true;
}

bool func_248()
{
	char* sVar0;

	if (!func_214())
	{
		return true;
	}
	sVar0 = func_357();
	if (MISC::_IS_STRING_SPACE(sVar0))
	{
		return true;
	}
	return func_359(sVar0, &(Local_829.f_155.f_6), &(Local_13.f_24.f_10), 64, func_358());
}

void func_249(struct<2> Param0)
{
	if (func_298(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_298(Param0)))
	{
		STATS::_0x99230691875FC218(func_296(Param0), func_298(Param0), Global_35);
	}
}

void func_250()
{
	int iVar0;
	int iVar1;

	if (!func_207(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_360(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_251(int iParam0)
{
	Local_829.f_145.f_5 = func_361(ENTITY::GET_ENTITY_MODEL(iParam0));
	func_362(iParam0, &(Local_829.f_152));
	func_363(iParam0);
}

void func_252(var uParam0, int iParam1, vector3 vParam2, var uParam5)
{
	func_210(iParam1, 256);
	uParam0->f_43 = iParam1;
	*uParam0 = func_226(iParam1);
	uParam0->f_15 = uParam5;
	uParam0->f_33 = { vParam2 };
}

void func_253(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	float fVar2;

	fVar0 = Global_1901947.f_852;
	iVar1 = Global_1901947.f_852.f_1;
	fVar2 = Global_1901947.f_852.f_2;
	switch (iParam1)
	{
		case 14:
			func_365(uParam0, func_364(*uParam0), 1000, 15f, 1500f, 10f, -1723181095);
			func_366(uParam0, 30f, 50f, 120f, 50f, 80f, 500f, 1f, 4f, 0.5f);
			func_367(uParam0, 8);
			func_367(uParam0, 4);
			break;
		case 0:
			func_365(uParam0, "LEGENDARY_ALLIGATOR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_366(uParam0, 30f, 50f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 1:
			func_365(uParam0, "LEGENDARY_BEAR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_366(uParam0, 30f, 50f, 120f, 40f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 2:
			func_365(uParam0, "LEGENDARY_BEAVER_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_366(uParam0, 10f, 30f, 120f, 30f, 70f, 200f, 1f, 4f, 0.5f);
			break;
		case 3:
			func_365(uParam0, "LEGENDARY_BISON_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_366(uParam0, 30f, 50f, 120f, 40f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 4:
			func_365(uParam0, "LEGENDARY_BOAR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_366(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 5:
			func_365(uParam0, "LEGENDARY_BUCK_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_366(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 6:
			func_365(uParam0, "LEGENDARY_COUGAR_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_366(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 7:
			func_365(uParam0, "LEGENDARY_PANTHER_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_366(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 8:
			func_365(uParam0, "LEGENDARY_COYOTE_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_366(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 9:
			func_365(uParam0, "LEGENDARY_FOX_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_366(uParam0, 10f, 30f, 120f, 30f, 70f, 200f, 1f, 4f, 0.5f);
			break;
		case 10:
			func_365(uParam0, "LEGENDARY_MOOSE_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_366(uParam0, 30f, 50f, 120f, 40f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 11:
			func_365(uParam0, "LEGENDARY_RAM_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_366(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 12:
			func_365(uParam0, "LEGENDARY_WOLF_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_366(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
		case 13:
			func_365(uParam0, "LEGENDARY_ELK_CALL_SOUNDS", iVar1, fVar0, fVar2, 30f, -1723181095);
			func_366(uParam0, 20f, 40f, 120f, 30f, 80f, 200f, 1f, 4f, 0.5f);
			break;
	}
}

bool func_254(int iParam0)
{
	return func_368(&(Local_829.f_204.f_75), 1, iParam0);
}

bool func_255(int iParam0)
{
	return func_174(Local_13.f_24.f_1, iParam0);
}

void func_256(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()))
		{
			return;
		}
		if (iVar0 < 0 || iVar0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			return;
		}
	}
	func_216(&(Local_60[iVar0 /*24*/].f_6), iParam0);
}

void func_257(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_367(uParam0, 16);
	}
	else
	{
		func_369(uParam0, 16);
	}
}

void func_258(float fParam0, float fParam1, int iParam2, float fParam3, bool bParam4)
{
	if (fParam0 >= fParam1)
	{
	}
	Local_829.f_318.f_2 = iParam2;
	Local_829.f_318.f_9 = fParam0;
	Local_829.f_318.f_10 = fParam1;
	Local_829.f_318.f_8 = fParam3;
	if (bParam4)
	{
		func_216(&(Local_829.f_318.f_12), 1);
	}
	else
	{
		func_238(&(Local_829.f_318.f_12), 1);
	}
}

void func_259(int iParam0, float fParam1)
{
	func_216(&(Local_829.f_318.f_12), 2);
	Local_829.f_318.f_7 = fParam1;
	Local_829.f_318.f_5 = iParam0;
}

int func_260(int iParam0)
{
	if (func_370(iParam0, &(Local_829.f_318.f_13)))
	{
		Local_829.f_318++;
		return 1;
	}
	return 0;
}

bool func_261(int iParam0)
{
	return ENTITY::DOES_ENTITY_EXIST(Local_829.f_163.f_7[iParam0 /*11*/]);
}

void func_262()
{
	func_176();
	Local_829.f_155.f_5 = VOLUME::_CREATE_VOLUME_SPHERE(func_371(), 0f, 0f, 0f, 35f, 35f, 35f);
	POPULATION::_0x18262CAFEBB5FBE1(Local_829.f_155.f_5, 4096, 0, 0, -1, -1, 8);
	POPULATION::_0xB56D41A694E42E86(Local_829.f_155.f_5, 4096, 0, 0, -1, -1, 8);
}

bool func_263(int iParam0)
{
	if (!func_261(iParam0))
	{
		return false;
	}
	return NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_829.f_163.f_7[iParam0 /*11*/]);
}

void func_264()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_373(func_372(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var1))
				{
				}
				else
				{
					EVENT::_0xBB1E41DD3D3C6250(Var1, "MpRandomEvent", 1);
					func_374(&(Local_829.f_204), Var1);
					func_375(func_372(iVar0));
				}
				iVar0++;
			}
		}
	}
}

bool func_265()
{
	return (func_127(32) || func_126(32, 255));
}

bool func_266(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_376(iParam0, joaat("COOLDOWN")) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return false;
	}
	if (iVar2 != 0 && (Global_1296859.f_21 - iVar2) < iParam1)
	{
		return true;
	}
	return false;
}

void func_267()
{
	func_377();
	func_378();
}

void func_268()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_379(iVar0, bVar1, iVar2);
		func_380(iVar0, bVar1, iVar2);
		func_381(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_269()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	if (!func_207(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() != Local_829.f_163.f_40)
	{
		bVar8 = true;
		Local_829.f_163.f_40 = !Local_829.f_163.f_40;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_829.f_163.f_30 >= 2)
		{
			Local_829.f_163.f_30 = 0;
		}
		iVar0 = Local_829.f_163.f_30;
		Local_829.f_163.f_30++;
		iVar9 = func_382(iVar0);
		iVar1 = Local_829.f_163.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_167(iVar9, 4))
		{
			func_360(iVar9, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (Local_60[iVar3 /*24*/].f_7.f_2[iVar0] > -1f)
			{
				Local_60[iVar3 /*24*/].f_7.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_829.f_163.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_829.f_163.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_829.f_163.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_829.f_163.f_31), iVar0);
			}
		}
		else
		{
			bVar7 = func_383(iVar2, iVar1, iVar0, iVar3);
		}
		if (MISC::IS_BIT_SET(Local_829.f_163.f_31, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				MISC::CLEAR_BIT(&(Local_829.f_163.f_31), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				MISC::SET_BIT(&(Local_829.f_163.f_31), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET(Local_60[iVar3 /*24*/].f_7.f_1, iVar0))
				{
					MISC::SET_BIT(&(Local_60[iVar3 /*24*/].f_7.f_1), iVar0);
				}
				func_384(&(Local_829.f_163.f_32[iVar0 /*3*/]));
			}
		}
		if (MISC::IS_BIT_SET(Local_60[iVar3 /*24*/].f_7.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_385(&(Local_829.f_163.f_32[iVar0 /*3*/])) || func_386(&(Local_829.f_163.f_32[iVar0 /*3*/]), 0.5f))))
			{
				func_387(&(Local_829.f_163.f_32[iVar0 /*3*/]));
				MISC::CLEAR_BIT(&(Local_60[iVar3 /*24*/].f_7.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_167(iVar9, 256))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, Local_829.f_163.f_40, false, 256);
		}
		if (func_167(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_388(iVar9))
						{
							if (!func_334(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_389(iVar9, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if ((NETWORK::_0xB07D3185E11657A5(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) && !func_167(iVar9, 8))
			{
				if (!func_388(iVar9))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_829.f_163.f_31 != 0)
	{
		if (!func_390(1, 255))
		{
			func_391(1);
		}
	}
	else if (func_390(1, 255))
	{
		func_392(1);
	}
}

void func_270()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<13> Var5;
	int iVar18;
	var uVar19;
	int iVar20;
	var uVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;

	Var5.f_6 = 1065353216;
	Var5.f_7 = 1065353216;
	Var5.f_8 = 1065353216;
	Var5.f_9 = 1;
	Var5.f_12 = 8;
	iVar20 = 255;
	if (!func_207(&iVar25))
	{
		return;
	}
	func_393();
	bVar27 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar26, true, 0, false);
	bVar28 = (bVar27 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()));
	if ((bVar27 && bVar28) && WEAPON::_0x705BE297EEBDB95D(iVar26))
	{
		Local_829.f_204.f_64 = 0;
		Local_60[iVar25 /*24*/].f_12.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	bVar29 = (bVar28 && (iVar26 == joaat("WEAPON_MOONSHINEJUG") || iVar26 == joaat("WEAPON_MOONSHINEJUG_MP")));
	bVar30 = false;
	while (iVar22 < 1)
	{
		if (Local_829.f_204.f_109 >= 2)
		{
			Local_829.f_204.f_109 = 0;
		}
		iVar1 = Local_829.f_204.f_109;
		Local_829.f_204.f_109++;
		iVar22++;
		iVar18 = func_372(iVar1);
		if (!func_394(iVar18))
		{
		}
		else if (func_395(iVar18, &Var5))
		{
			if (func_396(&Var5, iVar18))
			{
				if (func_368(&(Local_60[iVar25 /*24*/].f_12), 8, iVar1))
				{
					func_397(&(Local_60[iVar25 /*24*/].f_12), 8, iVar1);
				}
			}
			else if (!func_368(&(Local_60[iVar25 /*24*/].f_12), 8, iVar1))
			{
				func_398(&(Local_60[iVar25 /*24*/].f_12), 8, iVar1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Var5))
			{
			}
			else
			{
				func_399(iVar18);
				if (func_400(iVar18))
				{
					if (func_401(iVar18))
					{
						if (!func_402(iVar18))
						{
							func_403(iVar18);
						}
					}
					if (func_404(iVar18))
					{
						func_405(iVar18);
					}
				}
				else
				{
					if (func_406(iVar18))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Var5) && !ENTITY::IS_ENTITY_DEAD(Var5)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							PED::SET_PED_RESET_FLAG(Var5, 42, true);
						}
					}
					if (!func_407(Var5))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							func_374(&(Local_829.f_204), Var5);
						}
					}
					if (!func_408(iVar18, 255))
					{
						bVar2 = false;
						iVar3 = 0;
						if (func_409(iVar18))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (func_410(iVar18, iVar25))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_411(Var5, Var5.f_1, &(Local_829.f_204), &iVar4, 0, Var5.f_2))
						{
							switch (iVar4)
							{
								case 256:
									if (!MISC::IS_BIT_SET(Local_829.f_204.f_64, iVar18))
									{
										bVar2 = true;
										MISC::SET_BIT(&(Local_829.f_204.f_64), iVar18);
									}
									break;
								case 8:
									if (bVar27)
									{
										if (!WEAPON::_IS_WEAPON_LASSO(iVar26) && !TASK::_0x8785E6E40C7A8819(PLAYER::PLAYER_PED_ID()))
										{
											bVar2 = true;
										}
									}
									break;
								default:
									bVar2 = true;
									break;
							}
						}
						else if ((bVar29 && Var5.f_2 <= 1.25f) && func_412(PLAYER::PLAYER_PED_ID(), Var5, 1060437492 /* Float: 0.707f */) == 0)
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else
						{
							if (!bVar2)
							{
								if (func_413(iVar18, &Var5, iVar25))
								{
									iVar4 = 4;
									bVar2 = true;
									MISC::SET_BIT(&(Local_829.f_204.f_64), iVar18);
								}
							}
							if (!bVar2)
							{
								bVar30 = true;
								if (!func_414(iVar18) || !EVENT::_0x83D43F0FD5276E4D(Var5, 1))
								{
									bVar30 = false;
									if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
									{
										EVENT::_0xBB1E41DD3D3C6250(Var5, "MpRandomEvent", 1);
										func_375(iVar18);
									}
								}
								if (bVar30)
								{
									iVar31 = EVENT::_0x796EECFF0C6D39BE(Var5, 1, 1);
									if (iVar31 != 0)
									{
										iVar32 = EVENT::_0x822A001BCEA5BD81(Var5, iVar31, 1, 1);
										if (ENTITY::DOES_ENTITY_EXIST(iVar32) && ENTITY::IS_ENTITY_A_PED(iVar32))
										{
											iVar33 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar32);
											if (PED::IS_PED_A_PLAYER(iVar33) && iVar33 == PLAYER::PLAYER_PED_ID())
											{
												switch (iVar31)
												{
													case joaat("EVENT_SHOT_FIRED"):
														if (func_415(iVar18, &Var5))
														{
															iVar4 = 256;
															bVar2 = true;
															MISC::SET_BIT(&(Local_829.f_204.f_64), iVar18);
														}
														break;
													case joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"):
													case joaat("EVENT_SHOT_FIRED_WHIZZED_BY"):
														if (!Local_829.f_204.f_2 & 4 != 0)
														{
															iVar4 = 4;
															bVar2 = true;
														}
														break;
												}
											}
										}
										EVENT::_0x1A5C5D350068A673(Var5, 1);
									}
								}
								if (!bVar2)
								{
									if (func_416(iVar18, &Var5, iVar25))
									{
										iVar4 = 256;
										bVar2 = true;
										MISC::SET_BIT(&(Local_829.f_204.f_64), iVar18);
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_417(iVar18, iVar4, iVar3))
							{
							}
							else
							{
								if (func_368(&(Local_60[iVar25 /*24*/].f_12), 8, iVar1))
								{
									func_397(&(Local_60[iVar25 /*24*/].f_12), 8, iVar1);
								}
								func_418(iVar18, 1);
								if (func_254(iVar18))
								{
									if (!func_419(iVar18, 255))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
										{
											if (!func_420(iVar18))
											{
											}
											else
											{
												func_421(iVar18);
												func_422(iVar18);
												Jump @1378; //curOff = 1187
												if (func_423(iVar18))
												{
												}
												else if (iVar23 < 1)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
													{
														iVar24 = 0;
														while (iVar24 < 8)
														{
															if (Local_829.f_204.f_111[iVar18] >= 32)
															{
																iVar0 = 0;
																Local_829.f_204.f_111[iVar18] = 0;
															}
															else
															{
																iVar0 = Local_829.f_204.f_111[iVar18];
																Local_829.f_204.f_111[iVar18]++;
															}
															iVar24++;
															if (func_424(iVar0, &uVar21, &iVar20, &uVar19))
															{
																if (!func_425(iVar18, iVar20))
																{
																	if (func_408(iVar18, iVar0))
																	{
																		if (!func_426(iVar18, uVar21, iVar20, uVar19))
																		{
																		}
																		else
																		{
																			func_427(iVar18, iVar20);
																		}
																	}
																}
															}
														}
														iVar23++;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_271()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;

	fVar0 = func_428();
	if (Local_829.f_318.f_4)
	{
		return;
	}
	if (!func_207(&iVar1))
	{
		return;
	}
	if (func_174(Local_60[iVar1 /*24*/].f_23, 1))
	{
		Local_829.f_318.f_4 = 1;
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (func_429(iVar2, 0))
	{
		return;
	}
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), Local_829.f_15);
	fVar4 = Local_829.f_318.f_9;
	fVar5 = Local_829.f_318.f_10;
	if (func_174(Local_829.f_318.f_12, 2))
	{
		bVar6 = false;
		fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
		fVar8 = (fVar0 * (1f / Local_829.f_318.f_7));
		if (fVar7 > 0f)
		{
			if (func_430(Local_829.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_829.f_318.f_6 < 1f)
			{
				Local_829.f_318.f_6 = (Local_829.f_318.f_6 + fVar8);
				if (Local_829.f_318.f_6 > 1f)
				{
					Local_829.f_318.f_6 = 1f;
				}
			}
		}
		else if (Local_829.f_318.f_6 > 0f)
		{
			Local_829.f_318.f_6 = (Local_829.f_318.f_6 - fVar8);
			if (Local_829.f_318.f_6 < 0f)
			{
				Local_829.f_318.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_829.f_318.f_5) * Local_829.f_318.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_216(&(Local_60[iVar1 /*24*/].f_23), 1);
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(Local_829.f_318.f_11) && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, Local_829.f_318.f_11, false, 0))
	{
		func_216(&(Local_60[iVar1 /*24*/].f_23), 1);
	}
	else if (Local_829.f_318 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 1)
		{
			func_431(&(Local_829.f_318.f_13[iVar10 /*9*/]), fVar5, 1082130432 /* Float: 4f */, 0, 0, 0, 0, 1);
			iVar10++;
		}
		if (func_432(&(Local_829.f_318.f_13), Local_829.f_318, Local_829.f_318.f_8))
		{
			func_216(&(Local_60[iVar1 /*24*/].f_23), 1);
		}
	}
	if (func_174(Local_60[iVar1 /*24*/].f_23, 1))
	{
		Local_829.f_318.f_4 = 1;
	}
}

void func_272()
{
	float fVar0;

	func_433();
	func_434();
	func_435();
	func_436(&(Local_829.f_152));
	if (Local_829.f_25)
	{
		func_437(&(Local_13.f_7), &(Local_829.f_25), &(Local_829.f_53));
	}
	func_438();
	if (func_439(&(Local_829.f_53)))
	{
		func_440(&(Local_829.f_53));
	}
	func_441(Local_829.f_53);
	func_442(Local_829.f_53);
	func_443(Local_829.f_53);
	if (func_292(2, -1))
	{
		fVar0 = 150f;
	}
	else
	{
		fVar0 = 250f;
	}
	func_444(Local_829.f_53, fVar0);
}

bool func_273()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_829.f_14))
	{
		return false;
	}
	if (func_445())
	{
		return false;
	}
	if (func_446(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	return true;
}

void func_274()
{
	int iVar0;

	Local_829.f_155.f_3 = -1;
	Local_829.f_155.f_4 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_829.f_155.f_3 = (Local_829.f_155.f_3 && Local_60[iVar0 /*24*/].f_6);
			Local_829.f_155.f_4 = (Local_829.f_155.f_4 || Local_60[iVar0 /*24*/].f_6);
		}
		iVar0++;
	}
}

void func_275()
{
	int iVar0[1];

	if (func_447(2))
	{
		iVar0[0] = func_226(0);
		func_448(&iVar0);
		return;
	}
	if (!func_449(4, -1, 1))
	{
		return;
	}
	if (!func_450() && !func_408(0, 255))
	{
		return;
	}
	func_451();
}

bool func_276()
{
	return Local_829.f_25;
}

int func_277(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		return 0;
	}
	if (bParam1)
	{
		return 2;
	}
	return 1;
}

void func_278(int iParam0, int iParam1)
{
	if (Local_829.f_145.f_6 == -1)
	{
		Local_829.f_145.f_6 = iParam1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!func_452(&(Local_829.f_53), 128))
	{
		if (func_453(Global_34, iParam0, 20f, 1, 1))
		{
			func_454(iParam0, func_361(ENTITY::GET_ENTITY_MODEL(iParam0)), iParam1, &(Local_829.f_53));
			func_367(&(Local_829.f_53), 128);
		}
	}
}

void func_279()
{
	bool bVar0;

	bVar0 = func_254(0);
	if (!func_449(2, -1, 1))
	{
		if (func_255(1) || bVar0)
		{
			func_256(2, 1);
		}
	}
	if (!func_449(4, -1, 1))
	{
		if (func_255(2) || bVar0)
		{
			func_256(4, 1);
		}
	}
}

void func_280()
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_449(128, -1, 1);
	bVar1 = func_455(128);
	if (bVar0 != bVar1)
	{
		if (bVar1)
		{
			func_256(128, 1);
		}
		else
		{
			func_456(128, 1);
		}
	}
}

void func_281()
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!func_340())
		{
		}
	}
}

void func_282()
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = func_226(0);
	bVar1 = func_254(0);
	bVar2 = ((func_457(0) || func_458(0, 0.1f, 255, 0)) || bVar1);
	if (!func_265())
	{
		if ((bVar2 || func_450()) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
		}
	}
	else
	{
		if (!func_449(2, -1, 1))
		{
			if (bVar1)
			{
			}
			func_256(2, 1);
		}
		if (!func_345(8, 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					if (bVar2)
					{
						if (!func_344())
						{
							PED::SET_PED_KEEP_TASK(iVar0, true);
							PED::SET_PED_CONFIG_FLAG(iVar0, 230, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
							PED::SET_PED_CONFIG_FLAG(iVar0, 178, true);
						}
						func_459();
						func_256(8, 1);
					}
				}
			}
		}
		else if (!func_449(4, -1, 1))
		{
			func_256(4, 1);
		}
	}
	if (!func_345(8, 0))
	{
		func_460();
	}
}

void func_283()
{
	int iVar0;

	iVar0 = func_226(0);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (!func_461(iVar0, 1435919172))
	{
		func_459();
	}
}

void func_284()
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = func_226(0);
	bVar1 = func_254(0);
	bVar2 = ((func_457(0) || func_458(0, 0.1f, 255, 0)) || bVar1);
	if (!func_265())
	{
		if ((bVar2 || func_450()) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
		}
	}
	else
	{
		if (!func_449(2, -1, 1))
		{
			if (bVar1)
			{
			}
			func_256(2, 1);
		}
		if (!func_345(1073741824 /* Float: 2f */, 0))
		{
			if (func_462())
			{
				func_256(1073741824 /* Float: 2f */, 1);
			}
		}
		else if (!func_449(4, -1, 1))
		{
			func_256(4, 1);
		}
	}
}

void func_285()
{
	bool bVar0;

	bVar0 = (func_254(0) || func_254(1));
	func_463(bVar0);
	func_464(bVar0);
}

void func_286()
{
	int iVar0;

	if (func_345(32, 0) || func_345(64, 0))
	{
		return;
	}
	iVar0 = func_226(0);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if ((func_465() && func_350(1)) && func_466())
		{
			func_256(64, 1);
		}
		else
		{
			func_459();
			func_256(32, 1);
		}
	}
}

void func_287()
{
	if (func_449(32, -1, 1))
	{
		func_456(32, 1);
	}
	if (func_449(64, -1, 1))
	{
		func_456(64, 1);
	}
}

void func_288()
{
	int iVar0;

	iVar0 = func_226(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (!PED::IS_PED_FLEEING(iVar0))
		{
			func_459();
		}
	}
}

void func_289()
{
	int iVar0;

	if (func_345(32, 0))
	{
		return;
	}
	iVar0 = func_226(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (!func_461(iVar0, -1578598439))
		{
			func_459();
			func_256(32, 1);
		}
	}
}

void func_290()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_373(func_372(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				EVENT::_0xAD8F2424C6E1E3A8(Var1);
			}
		}
		iVar0++;
	}
}

bool func_291()
{
	return func_66(8);
}

bool func_292(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (!func_467(iParam1, 0, 1))
	{
		return false;
	}
	return func_215(Local_60[iParam1 /*24*/].f_4, iParam0);
}

bool func_293(int iParam0)
{
	return func_215(Local_829.f_145.f_1, iParam0);
}

char* func_294(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_ALLIGATOR_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_ALLIGATOR_02";
					break;
				case 2:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BEAR_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BEAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BEAVER_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BEAVER_02";
					break;
				case 2:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BISON_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BISON_02";
					break;
				case 2:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BOAR_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BOAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BUCK_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BUCK_02";
					break;
				case 2:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_COUGAR_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_COUGAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_PANTHER_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_PANTHER_02";
					break;
				case 2:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_COYOTE_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_COYOTE_02";
					break;
				case 2:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_FOX_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_FOX_02";
					break;
				case 2:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_MOOSE_02";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_MOOSE_01";
					break;
				case 2:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BIG_HORN_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BIG_HORN_02";
					break;
				case 2:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_WOLF_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_WOLF_02";
					break;
				case 2:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_ELK_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_ELK_02";
					break;
				case 2:
					break;
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
	}
	return sVar0;
}

var func_295(char* sParam0)
{
	if (!func_468(255))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	return func_469(sParam0, 10000, 0, 0, 0, 1);
}

int func_296(var uParam0, var uParam1)
{
	return uParam0;
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("UNLOCK_GROUP__MISSION_STORY");
		case 3:
			return joaat("UNLOCK_GROUP__MISSION_PROCEDURAL");
		case 4:
			return joaat("UNLOCK_GROUP__MISSION_FETCH");
		case 5:
			return joaat("UNLOCK_GROUP__MISSION_MINIGAME");
		case 8:
			return 634321112;
		case 7:
			return joaat("UNLOCK_GROUP__MISSION_UGC");
		case 6:
			return joaat("UNLOCK_GROUP__MISSION_FREE_MODE_EVENT");
		default:
			break;
	}
	return 0;
}

int func_298(struct<2> Param0)
{
	return func_470(Param0);
}

void func_299(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_296(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_472(func_471(Param0));
			iVar5 = func_473(iVar4);
			if (!func_474(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (Global_1107216.f_33[iVar1 /*16*/] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = Global_1107216.f_33[iVar2 /*16*/].f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1116202[iVar0 /*42*/];
}

int func_300(int iParam0, int iParam1)
{
	int iVar0;
	struct<29> Var1;
	int iVar32;
	int iVar33;

	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	iVar33 = 1;
	while (iVar33 <= 43)
	{
		iVar32 = iVar33;
		if (iVar32 == iParam0)
		{
			return (iVar0 + iParam1);
		}
		else
		{
			func_32(&Var1, iVar32, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar33++;
	}
	return -1;
}

void func_301(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_475(&Var0);
}

var func_302(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901947.f_236.f_57;
		default:
			break;
	}
	return Global_1901947.f_236.f_53;
}

var func_303(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901947.f_236.f_59;
		default:
			break;
	}
	return Global_1901947.f_236.f_55;
}

var func_304(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901947.f_236.f_58;
		default:
			break;
	}
	return Global_1901947.f_236.f_54;
}

int func_305(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 35;
		case 3:
			return 55;
		default:
			break;
	}
	return 0;
}

int func_306(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (Global_1198046.f_3[iParam0] * 2 <= 32)
			{
				return Global_1198046.f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (Global_1198046.f_3[iParam0] * 2 <= 20)
			{
				return Global_1198046.f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (Global_1198046.f_3[iParam0] * 2 <= 16)
			{
				return Global_1198046.f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

void func_307(var uParam0)
{
	func_182(uParam0, 0);
	func_182(uParam0, 1);
	func_182(uParam0, 3);
	func_180(uParam0);
}

void func_308(var uParam0)
{
	func_181(uParam0);
	func_476(uParam0, 0, 3);
}

void func_309(var uParam0)
{
	func_182(uParam0, 0);
	func_183(uParam0, 0);
	func_183(uParam0, 1);
	func_183(uParam0, 2);
}

void func_310(var uParam0)
{
	func_182(uParam0, 1);
	func_180(uParam0);
}

void func_311(var uParam0)
{
	func_182(uParam0, 2);
	func_183(uParam0, 3);
}

void func_312(var uParam0)
{
	func_182(uParam0, 3);
	func_183(uParam0, 4);
}

void func_313(var uParam0)
{
	func_183(uParam0, 0);
	func_183(uParam0, 1);
}

void func_314(var uParam0)
{
	func_183(uParam0, 2);
	func_183(uParam0, 3);
}

void func_315(var uParam0)
{
	func_183(uParam0, 4);
	func_183(uParam0, 5);
}

bool func_316(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541.f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_317(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_318(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_319(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1257541[iParam0 /*5*/].f_4 + iParam1);
}

void func_320(var uParam0)
{
	func_477(uParam0, 0);
	func_478(uParam0, 0);
	func_479(uParam0, 1);
	func_480(uParam0, 1);
	func_481(uParam0, 0);
	func_482(uParam0, 1);
	func_483(uParam0, 1, 1, 1);
}

void func_321(var uParam0)
{
	func_477(uParam0, 0);
	func_478(uParam0, 0);
	func_479(uParam0, 0);
	func_481(uParam0, 0);
	func_483(uParam0, 1, 1, 1);
}

void func_322(var uParam0)
{
	func_485(uParam0, (func_484(uParam0) - 6f));
	func_486(uParam0, 1);
}

void func_323(var uParam0)
{
	func_487(uParam0, 1);
	func_488(uParam0, 1);
	func_489(uParam0, 1);
}

void func_324(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(&(uParam0->f_2), 131072);
	}
	else
	{
		func_216(&(uParam0->f_2), 131072);
	}
}

void func_325(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_216(uParam0, 4);
	}
	else
	{
		func_238(uParam0, 4);
	}
}

void func_326(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_216(&(uParam0->f_1), 1);
	}
	else
	{
		func_238(&(uParam0->f_1), 1);
	}
}

void func_327(var uParam0, float fParam1)
{
	uParam0->f_31 = fParam1;
}

bool func_328(int iParam0, bool bParam1)
{
	if (iParam0 > -1 && iParam0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (!bParam1)
		{
			return true;
		}
		return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
	}
	return false;
}

bool func_329(int iParam0, var uParam1)
{
	int iVar0;

	*uParam1 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam0 * 10) * 0.03125f));
	uParam1->f_2 = (iParam0 * 10 % 32);
	iVar0 = (32 - uParam1->f_2);
	if (iVar0 < 10)
	{
		uParam1->f_1 = *uParam1 + 1;
		uParam1->f_3 = (9 - iVar0);
	}
	else
	{
		uParam1->f_1 = *uParam1;
		uParam1->f_3 = uParam1->f_2 + 9;
	}
	return (((*uParam1 > -1 && uParam1->f_1 > -1) && *uParam1 < 3) && uParam1->f_1 < 3);
}

int func_330(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 31);
	iVar0 = BUILTIN::SHIFT_RIGHT(iVar0, (31 - iParam1));
	iVar0 ^= -1;
	iVar0 = BUILTIN::SHIFT_LEFT(iVar0, iParam0);
	return iVar0;
}

int func_331()
{
	return Local_829.f_4;
}

int func_332()
{
	switch (func_490())
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_333(int iParam0)
{
	if (!func_175(iParam0))
	{
		return 0;
	}
	return Global_1132288.f_1[iParam0 /*63*/].f_3;
}

bool func_334(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_829.f_15 };
	iVar7 = 0;
	iVar8 = func_355(iParam0);
	iVar9 = func_491(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_37[iParam0]))
		{
			iVar9 = func_491(iParam0);
			fVar0 = func_492(iParam0);
			if (!func_174(Local_829.f_163.f_7[iParam0 /*11*/].f_2, 2))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, 0f, func_493(iParam0)) };
			}
			else
			{
				vVar1 = { func_493(iParam0) };
			}
			if (!func_494(&(Local_13.f_37[iParam0]), iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_IS_THIS_MODEL_A_HORSE(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(Local_13.f_37[iParam0]);
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					ENTITY::_0xA91E6CF94404E8C9(iVar7);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar7, true);
					PED::SET_PED_CONFIG_FLAG(iVar7, 178, false);
					if (PED::IS_PED_HUMAN(iVar7))
					{
						WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iVar7, false);
						WEAPON::_0x431240A58484D5D0(iVar7, 0);
						WEAPON::_0x45E57FDD531C9477(iVar7, 0);
					}
					if (iVar9 != 0)
					{
						PED::_SET_PED_BODY_COMPONENT(iVar7, iVar9);
						PED::_UPDATE_PED_VARIATION(iVar7, func_167(iParam0, 1), true, true, true, false);
					}
					else if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (PED::_0xA0BC8FAED8CFEB3C(iVar7))
						{
						}
						func_495(iVar7, 1);
					}
					if (func_496(iParam0))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
					}
					if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (func_497(iParam0))
						{
							if (func_496(iParam0))
							{
							}
						}
						else
						{
							PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
						}
					}
					if (func_335(iParam0))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_37[iParam0]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_37[iParam0]);
						}
					}
					*bParam2 = 1;
					return false;
				}
				else
				{
					*iParam1 = 1;
				}
			}
		}
		else if (PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(Local_13.f_37[iParam0])))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_335(int iParam0)
{
	return func_167(iParam0, 128);
}

int func_336(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_498(uParam1->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (func_455(128))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_499(uParam0, 10);
	}
	if (func_500() && uParam0->f_2 < 8)
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_499(uParam0, 8);
				break;
			case 0:
				func_499(uParam0, 9);
				break;
		}
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_501(1))
			{
				switch (*uParam0)
				{
					case 1:
						func_499(uParam0, 1);
						break;
					case 2:
						func_499(uParam0, 3);
						break;
					case 3:
						func_499(uParam0, 5);
						break;
				}
			}
			break;
		case 5:
			if (func_502(uParam0, uParam1))
			{
				func_499(uParam0, 6);
			}
			break;
		case 6:
			if (func_503())
			{
				func_499(uParam0, 7);
			}
			break;
		case 7:
			break;
		case 1:
			if (PED::IS_PED_USING_ANY_SCENARIO(func_498(uParam1->f_1)))
			{
				func_499(uParam0, 2);
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 8:
			if (func_461(iVar0, 780511057))
			{
				func_499(uParam0, 11);
			}
			break;
		case 9:
			if (PED::IS_PED_FLEEING(iVar0))
			{
				func_499(uParam0, 11);
			}
			break;
		case 11:
			if (PED::GET_PED_CONFIG_FLAG(iVar0, 580, true))
			{
				func_504(&(uParam0->f_6));
			}
			if ((func_505(uParam1, 32) && PED::IS_PED_FLEEING(iVar0)) && func_506(&(uParam0->f_6)) > 10f)
			{
				iVar1 = func_507(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if ((func_453(iVar1, iVar0, 15f, 1, 1) || (func_453(iVar1, iVar0, 40f, 1, 1) && PED::IS_PED_SHOOTING(iVar1))) || func_508(64))
					{
						func_509(uParam0, 1);
						func_499(uParam0, 8);
					}
				}
			}
			break;
		case 10:
			break;
	}
	return 0;
}

void func_337(struct<2> Param0, vector3 vParam2, int iParam5, var uParam6)
{
	struct<21> Var0;

	if (func_218(vParam2))
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_20 = 255;
	Var0.f_5 = { Param0 };
	Var0.f_17 = { vParam2 };
	Var0.f_15 = uParam6;
	Var0.f_16 = iParam5;
	Var0.f_4 = 0;
	func_511(&Var0, func_510(0, 8));
}

bool func_338(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	func_512(&iVar0, &iVar2, &iVar1);
	if (iParam2 > iVar1)
	{
		return false;
	}
	if (iVar0 >= iParam0)
	{
		if (iParam1 <= iVar2)
		{
			return true;
		}
	}
	return false;
}

bool func_339(int iParam0)
{
	return func_174(Local_829.f_155.f_3, iParam0);
}

bool func_340()
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = func_214();
	if (func_345(1, 1))
	{
		if (bVar0)
		{
			if (func_345(-2147483648, 0))
			{
				return func_339(1);
			}
		}
		else
		{
			return func_339(1);
		}
	}
	if (func_345(1, 0))
	{
		if (bVar0)
		{
			if (!func_345(-2147483648, 1))
			{
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_829.f_155.f_6))
				{
					bVar1 = false;
					if (ANIMSCENE::_GET_ANIM_SCENE_PED(Local_829.f_155.f_6, func_513(0), false) != func_226(0))
					{
						if ((PED::IS_PED_RAGDOLL(func_226(0)) || ENTITY::IS_ENTITY_IN_AIR(func_226(0), 1)) || !PED::IS_PED_ON_FOOT(func_226(0)))
						{
						}
						else
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_829.f_155.f_6, func_513(0), func_226(0), 0);
						}
						bVar1 = true;
					}
					if (ANIMSCENE::_GET_ANIM_SCENE_PED(Local_829.f_155.f_6, func_513(1), false) != func_226(1))
					{
						if ((PED::IS_PED_RAGDOLL(func_226(0)) || ENTITY::IS_ENTITY_IN_AIR(func_226(1), 1)) || !PED::IS_PED_ON_FOOT(func_226(1)))
						{
						}
						else
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_829.f_155.f_6, func_513(1), func_226(1), 0);
						}
						bVar1 = true;
					}
					if (bVar1)
					{
						return false;
					}
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_829.f_155.f_6, func_371(), 0f, 0f, 0f, 2);
					ANIMSCENE::START_ANIM_SCENE(Local_829.f_155.f_6);
					func_256(-2147483648, 1);
				}
			}
		}
		return false;
	}
	iVar2 = func_226(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
	{
		return false;
	}
	func_514(iVar2, func_277(func_211() == 0, 0));
	if (!bVar0)
	{
		if (!PED::GET_PED_CONFIG_FLAG(iVar2, 580, true))
		{
			TASK::TASK_WANDER_IN_AREA(iVar2, func_371(), 10f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
		}
	}
	func_256(1, 1);
	return false;
}

void func_341(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return;
		}
	}
	Local_13.f_24 = iParam0;
}

bool func_342(int iParam0, bool bParam1)
{
	if (!bParam1 || func_261(iParam0))
	{
		return ENTITY::IS_ENTITY_DEAD(Local_829.f_163.f_7[iParam0 /*11*/]);
	}
	return false;
}

void func_343(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return;
		}
	}
	func_216(&(Local_13.f_24.f_1), iParam0);
}

bool func_344()
{
	return func_211() != 0;
}

bool func_345(int iParam0, bool bParam1)
{
	if (func_174(Local_829.f_155.f_4, iParam0))
	{
		if (bParam1)
		{
			if (!func_449(iParam0, -1, 1))
			{
				func_256(iParam0, 1);
			}
		}
		return true;
	}
	return false;
}

void func_346()
{
	switch (Local_13.f_24.f_2)
	{
		case 0:
			if (func_345(67108864, 0))
			{
				Local_13.f_24.f_11 = 0;
				Local_13.f_24.f_12 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Local_13.f_24.f_2 = 1;
			}
			break;
		case 1:
			if (func_345(134217728, 0))
			{
				Local_13.f_24.f_12 = 0;
				Local_13.f_24.f_11 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Local_13.f_24.f_2 = 2;
			}
			break;
		case 2:
			if (!func_345(67108864, 0))
			{
				Local_13.f_24.f_2 = 3;
			}
			break;
		case 3:
			if (func_345(67108864, 0))
			{
				Local_13.f_24.f_11 = 0;
				Local_13.f_24.f_12 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Local_13.f_24.f_2 = 4;
			}
			break;
		case 4:
			if (!func_345(134217728, 0))
			{
				Local_13.f_24.f_2 = 1;
			}
			break;
	}
}

bool func_347(int iParam0, int iParam1, bool bParam2)
{
	if (!func_261(iParam0) || (!bParam2 && func_342(iParam0, 1)))
	{
		return true;
	}
	return func_345(iParam1, 0);
}

void func_348(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return;
		}
	}
	switch (iParam0)
	{
		case 0:
			Local_13.f_24.f_4[iParam0] = func_515();
			break;
		case 1:
			Local_13.f_24.f_4[iParam0] = func_516();
			break;
		default:
			return;
	}
	Local_13.f_24.f_7[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
	MISC::SET_BIT(&(Local_13.f_24.f_3), iParam0);
}

bool func_349(int iParam0)
{
	if (Local_13.f_24.f_7[iParam0] == 0)
	{
		return false;
	}
	return MISC::IS_BIT_SET(Local_13.f_24.f_3, iParam0);
}

bool func_350(int iParam0)
{
	if (!func_349(iParam0))
	{
		return false;
	}
	return func_517(iParam0) >= Local_13.f_24.f_4[iParam0];
}

void func_351(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_352(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_353(int* iParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, iParam0, 15))
	{
		return false;
	}
	if (iParam0->f_4.f_1 != Local_829.f_1)
	{
		return false;
	}
	if (iParam0->f_4 != Local_829)
	{
		return false;
	}
	if (iParam0->f_4.f_2 != Local_829.f_2)
	{
		return false;
	}
	if (iParam0->f_4.f_3 != Local_829.f_3)
	{
		return false;
	}
	return true;
}

void func_354(int iParam0)
{
	switch (iParam0->f_9)
	{
		case -922869466:
			func_518(iParam0);
			break;
		case 2126697993:
			func_519(iParam0);
			break;
		case -1485898032:
			func_520(iParam0);
			break;
	}
}

int func_355(int iParam0)
{
	return Local_829.f_163.f_7[iParam0 /*11*/].f_3;
}

int func_356(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, iParam4, sParam3, true, true);
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
				{
					return 0;
				}
			}
			if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(*uParam1))
			{
				if (!NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(*uParam1))
				{
					return 0;
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				*uParam0 = NETWORK::_ANIM_SCENE_TO_NET(*uParam1);
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam1, true))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
			}
			return 0;
		}
		return 1;
	}
	else
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			return 0;
		}
		*uParam1 = NETWORK::_NET_TO_ANIM_SCENE(*uParam0);
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

char* func_357()
{
	if (!func_214())
	{
		return "";
	}
	switch (func_332())
	{
		case 1:
			return "script@ambient@animal@deer_antlers_stuck@action";
		case 2:
			return "script@ambient@animal@bucks_fighting@action";
		default:
			break;
	}
	return "";
}

char* func_358()
{
	switch (func_332())
	{
		case 1:
			return "pbl_startLoop";
		case 2:
			return "pbl_startLoop";
		default:
			break;
	}
	return "";
}

int func_359(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam2))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam0, iParam3, sParam4, true, true);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(*uParam1))
				{
					if (!NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(*uParam1))
					{
						return 0;
					}
				}
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam1, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, false, false))
					{
						ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
					}
					return 0;
				}
				else
				{
					*uParam2 = NETWORK::_ANIM_SCENE_TO_NET(*uParam1);
				}
			}
			return 0;
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam2))
	{
		return 0;
	}
	*uParam1 = NETWORK::_NET_TO_ANIM_SCENE(*uParam2);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		return 0;
	}
	return 1;
}

void func_360(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = func_355(iParam0);
	bVar3 = func_328(iParam1, 1);
	if (!MISC::IS_BIT_SET(Local_829.f_163.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_37[iParam0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_13.f_37[iParam0]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return;
			}
			Local_829.f_163.f_7[iParam0 /*11*/] = iVar1;
			if (bVar3)
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar1) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					Local_60[iParam1 /*24*/].f_7.f_2[iParam0] = -1f;
				}
				else
				{
					Local_60[iParam1 /*24*/].f_7.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_335(iParam0))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_37[iParam0]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_37[iParam0]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_37[iParam0]);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_521(iVar1, 1f, 0);
					sVar0 = func_522(iParam0);
					if (!MISC::_IS_STRING_SPACE(sVar0))
					{
						func_523(iVar1, sVar0, 1);
					}
				}
				if (func_496(iParam0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
				}
				if (PED::_IS_THIS_MODEL_A_HORSE(iVar2))
				{
					if (func_497(iParam0))
					{
						if (func_496(iParam0))
						{
						}
					}
					else
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
					}
				}
				MISC::SET_BIT(&(Local_829.f_163.f_5), iParam0);
				if (bParam2)
				{
					func_524(iParam0);
				}
			}
		}
	}
}

int func_361(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_ALLIGATOR_01"):
		case joaat("A_C_ALLIGATOR_02"):
		case joaat("A_C_ALLIGATOR_03"):
		case joaat("MP_A_C_ALLIGATOR_01"):
			return 0;
		case joaat("A_C_BEAR_01"):
		case joaat("MP_A_C_BEAR_01"):
			return 1;
		case joaat("MP_A_C_BEAVER_01"):
		case joaat("A_C_BEAVER_01"):
			return 2;
		case joaat("MP_A_C_BUFFALO_01"):
		case joaat("A_C_BUFFALO_TATANKA_01"):
		case joaat("A_C_BUFFALO_01"):
			return 3;
		case joaat("A_C_BOARLEGENDARY_01"):
		case joaat("MP_A_C_BOAR_01"):
		case joaat("A_C_BOAR_01"):
			return 4;
		case joaat("A_C_BUCK_01"):
		case joaat("MP_A_C_BUCK_01"):
			return 5;
		case joaat("MP_A_C_COUGAR_01"):
		case joaat("A_C_COUGAR_01"):
			return 6;
		case joaat("MP_A_C_PANTHER_01"):
		case joaat("A_C_PANTHER_01"):
			return 7;
		case joaat("MP_A_C_COYOTE_01"):
		case joaat("A_C_COYOTE_01"):
			return 8;
		case joaat("MP_A_C_FOX_01"):
		case joaat("A_C_FOX_01"):
			return 9;
		case joaat("A_C_MOOSE_01"):
		case joaat("MP_A_C_MOOSE_01"):
			return 10;
		case joaat("A_C_BIGHORNRAM_01"):
		case joaat("MP_A_C_BIGHORNRAM_01"):
			return 11;
		case joaat("MP_A_C_WOLF_01"):
		case joaat("A_C_WOLF"):
		case joaat("A_C_WOLF_MEDIUM"):
		case joaat("A_C_WOLF_SMALL"):
			return 12;
		case joaat("A_C_ELK_01"):
		case joaat("MP_A_C_ELK_01"):
			return 13;
		default:
			break;
	}
	return -1;
}

void func_362(int iParam0, var uParam1)
{
	*uParam1 = iParam0;
	func_525(*uParam1);
}

void func_363(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), iParam0))
		{
			PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam0, 1);
		}
		if (!func_526())
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 593, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 593, false);
		}
	}
}

char* func_364(int iParam0)
{
	int iVar0;

	iVar0 = func_361(ENTITY::GET_ENTITY_MODEL(iParam0));
	switch (iVar0)
	{
		case 0:
			return "LEGENDARY_ALLIGATOR_CALL_SOUNDS";
		case 1:
			return "LEGENDARY_BEAR_CALL_SOUNDS";
		case 2:
			return "LEGENDARY_BEAVER_CALL_SOUNDS";
		case 3:
			return "LEGENDARY_BISON_CALL_SOUNDS";
		case 4:
			return "LEGENDARY_BOAR_CALL_SOUNDS";
		case 5:
			return "LEGENDARY_BUCK_CALL_SOUNDS";
		case 6:
			return "LEGENDARY_COUGAR_CALL_SOUNDS";
		case 7:
			return "LEGENDARY_PANTHER_CALL_SOUNDS";
		case 8:
			return "LEGENDARY_COYOTE_CALL_SOUNDS";
		case 13:
			return "LEGENDARY_ELK_CALL_SOUNDS";
		case 9:
			return "LEGENDARY_FOX_CALL_SOUNDS";
		case 10:
			return "LEGENDARY_MOOSE_CALL_SOUNDS";
		case 12:
			return "LEGENDARY_WOLF_CALL_SOUNDS";
		default:
			break;
	}
	return "";
}

void func_365(var uParam0, char* sParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6)
{
	StringCopy(&(uParam0->f_25), sParam1, 64);
	uParam0->f_10 = iParam2;
	uParam0->f_11 = fParam3;
	uParam0->f_13 = fParam4;
	uParam0->f_14 = fParam5;
	uParam0->f_12 = iParam6;
}

void func_366(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9)
{
	uParam0->f_16 = fParam1;
	uParam0->f_17 = fParam2;
	uParam0->f_18 = fParam3;
	uParam0->f_19 = fParam4;
	uParam0->f_20 = fParam5;
	uParam0->f_21 = fParam6;
	uParam0->f_22 = fParam7;
	uParam0->f_23 = fParam8;
	uParam0->f_24 = fParam9;
}

void func_367(var uParam0, int iParam1)
{
	func_240(&(uParam0->f_39), iParam1);
}

bool func_368(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam2 < 0 || iParam2 >= 10)
	{
		return false;
	}
	if (!func_329(iParam1, &Var0))
	{
		return false;
	}
	if (Var0 == Var0.f_1)
	{
		return MISC::IS_BIT_SET((*uParam0)[Var0], (Var0.f_2 + iParam2));
	}
	iVar4 = (32 - Var0.f_2);
	if (iParam2 < iVar4)
	{
		return MISC::IS_BIT_SET((*uParam0)[Var0], (Var0.f_2 + iParam2));
	}
	return MISC::IS_BIT_SET((*uParam0)[Var0.f_1], (Var0.f_3 - (iParam2 - iVar4)));
}

void func_369(var uParam0, int iParam1)
{
	func_241(&(uParam0->f_39), iParam1);
}

bool func_370(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam1[iVar0 /*9*/])->f_6))
		{
			(uParam1[iVar0 /*9*/])->f_6 = iParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_371()
{
	return Local_829.f_15;
}

int func_372(int iParam0)
{
	return iParam0;
}

bool func_373(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_226(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		uParam1->f_2 = func_527(iParam0, 255, 1);
		if (uParam1->f_2 < 0f)
		{
			uParam1->f_2 = 0f;
		}
		return true;
	}
	return false;
}

void func_374(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_0xBB1E41DD3D3C6250(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

void func_375(int iParam0)
{
	int iVar0;

	if (!func_207(&iVar0))
	{
		return;
	}
	func_398(&(Local_60[iVar0 /*24*/].f_12), 0, iParam0);
}

struct<2> func_376(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_528(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_529(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_377()
{
	Local_829.f_163.f_6 = 0;
	Local_829.f_163.f_2 = 0;
	Local_829.f_163.f_1 = -1;
}

void func_378()
{
	int iVar0;

	func_208(&(Local_829.f_204.f_75), 2, 0);
	func_208(&(Local_829.f_204.f_75), 1, 0);
	func_208(&(Local_829.f_204.f_75), 4, 0);
	func_208(&(Local_829.f_204.f_75), 5, 0);
	func_208(&(Local_829.f_204.f_75), 8, -1);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(&(Local_829.f_204.f_66[iVar0]));
		SCRIPTS::_0x20F4CB76689ACDBC(&(Local_829.f_204.f_72[iVar0]));
		SCRIPTS::_0xDE544B7EC0C187CC(&(Local_829.f_204.f_69[iVar0]));
		func_530(iVar0);
		iVar0++;
	}
}

void func_379(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_829.f_163.f_2 = (Local_829.f_163.f_2 || Local_60[iParam0 /*24*/].f_7);
		Local_829.f_163.f_1 = (Local_829.f_163.f_1 && Local_60[iParam0 /*24*/].f_7);
		Local_829.f_163.f_6 = (Local_829.f_163.f_6 || Local_60[iParam0 /*24*/].f_7.f_1);
	}
}

void func_380(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		func_531(&(Local_829.f_204.f_75), &(Local_60[iParam0 /*24*/].f_12), 2);
		func_531(&(Local_829.f_204.f_75), &(Local_60[iParam0 /*24*/].f_12), 1);
		func_531(&(Local_829.f_204.f_75), &(Local_60[iParam0 /*24*/].f_12), 4);
		func_531(&(Local_829.f_204.f_75), &(Local_60[iParam0 /*24*/].f_12), 5);
		func_531(&(Local_829.f_204.f_75), &(Local_60[iParam0 /*24*/].f_12), 6);
		func_531(&(Local_829.f_204.f_75), &(Local_60[iParam0 /*24*/].f_12), 7);
		func_531(&(Local_829.f_204.f_75), &(Local_60[iParam0 /*24*/].f_12), 0);
		func_531(&(Local_829.f_204.f_75), &(Local_60[iParam0 /*24*/].f_12), 3);
		func_532(&(Local_829.f_204.f_75), &(Local_60[iParam0 /*24*/].f_12), 8);
		iVar0 = 0;
		while (iVar0 < 2)
		{
			SCRIPTS::_0xFFDDF802279BE128(&(Local_60[iParam0 /*24*/].f_12.f_5[iVar0]), &(Local_829.f_204.f_66[iVar0]), &(Local_829.f_204.f_66[iVar0]));
			SCRIPTS::_0xFFDDF802279BE128(&(Local_60[iParam0 /*24*/].f_12.f_5[iVar0]), &(Local_829.f_204.f_66[iVar0]), &(Local_829.f_204.f_69[iVar0]));
			SCRIPTS::_0xE4ABE20DCE7C7CFE(&(Local_60[iParam0 /*24*/].f_12.f_5[iVar0]), &(Local_829.f_204.f_66[iVar0]), &(Local_829.f_204.f_72[iVar0]));
			func_533(func_372(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_381(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		Local_60[iParam2 /*24*/].f_23 = (Local_60[iParam2 /*24*/].f_23 || Local_60[iParam0 /*24*/].f_23);
	}
}

int func_382(int iParam0)
{
	return iParam0;
}

int func_383(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	Local_60[iParam3 /*24*/].f_7.f_2[iParam2] = fVar0;
	if (fVar0 > Local_829.f_163.f_7[iParam2 /*11*/].f_9)
	{
		return 0;
	}
	return 1;
}

void func_384(var uParam0)
{
	func_534(uParam0, 0f);
}

bool func_385(var uParam0)
{
	return func_535(*uParam0, 1);
}

bool func_386(var uParam0, float fParam1)
{
	if (!func_385(uParam0))
	{
		return false;
	}
	if (func_536(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_387(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_388(int iParam0)
{
	return true;
}

void func_389(int iParam0, int iParam1)
{
	func_238(&(Local_829.f_163.f_7[iParam0 /*11*/].f_2), iParam1);
}

bool func_390(int iParam0, int iParam1)
{
	if (!func_328(iParam1, 0))
	{
		if (!func_207(&iParam1))
		{
			return false;
		}
	}
	return func_174(Local_60[iParam1 /*24*/].f_7, iParam0);
}

void func_391(int iParam0)
{
	int iVar0;

	if (!func_207(&iVar0))
	{
		return;
	}
	func_216(&(Local_60[iVar0 /*24*/].f_7), iParam0);
}

void func_392(int iParam0)
{
	int iVar0;

	if (!func_207(&iVar0))
	{
		return;
	}
	func_238(&(Local_60[iVar0 /*24*/].f_7), iParam0);
}

void func_393()
{
	int iVar0;
	struct<13> Var1;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	if (!func_207(&iVar15))
	{
		return;
	}
	iVar16 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar16))
	{
		return;
	}
	iVar17 = PLAYER::GET_PLAYER_PED(iVar16);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar14 = func_372(iVar0);
		if (!func_394(iVar14))
		{
		}
		else if (!func_395(iVar14, &Var1))
		{
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Var1) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Var1, true, false), 4f, true))
			{
				MISC::SET_BIT(&(Local_829.f_204.f_65), iVar14);
			}
			if (func_410(iVar14, iVar15))
			{
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Var1, iVar17, 0, 0))
			{
				func_537(iVar14);
				func_538(iVar14);
			}
		}
		iVar0++;
	}
}

bool func_394(int iParam0)
{
	return !func_368(&(Local_829.f_204.f_75), 5, iParam0);
}

bool func_395(int iParam0, var uParam1)
{
	if (!MISC::IS_BIT_SET(Local_829.f_204.f_106, iParam0))
	{
		return false;
	}
	*uParam1 = Local_829.f_204.f_79[iParam0 /*13*/];
	uParam1->f_1 = Local_829.f_204.f_79[iParam0 /*13*/].f_1;
	uParam1->f_2 = Local_829.f_204.f_79[iParam0 /*13*/].f_2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_396(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_539(iParam1))
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		if (uParam0->f_2 <= 25f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) >= 4f)
		{
			if (PED::IS_PED_IN_COVER(iVar0, false, false) || PED::IS_PED_GOING_INTO_COVER(iVar0))
			{
			}
			else
			{
				return true;
			}
		}
	}
	if (func_540(*uParam0, &(Local_829.f_204.f_32), &uVar1, uParam0->f_2))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
	{
		return true;
	}
	return false;
}

int func_397(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_329(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		MISC::CLEAR_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	iVar4 = (32 - Var0.f_2);
	if (iParam2 < iVar4)
	{
		MISC::CLEAR_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	MISC::CLEAR_BIT(uParam0[Var0.f_1], (Var0.f_3 - (iParam2 - iVar4)));
	return 1;
}

int func_398(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_329(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		MISC::SET_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	iVar4 = (32 - Var0.f_2);
	if (iParam2 < iVar4)
	{
		MISC::SET_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	MISC::SET_BIT(uParam0[Var0.f_1], (Var0.f_3 - (iParam2 - iVar4)));
	return 1;
}

void func_399(int iParam0)
{
}

bool func_400(int iParam0)
{
	return func_368(&(Local_829.f_204.f_75), 4, iParam0);
}

bool func_401(int iParam0)
{
	int iVar0;

	if (!func_207(&iVar0))
	{
		return false;
	}
	return func_368(&(Local_60[iVar0 /*24*/].f_12), 4, iParam0);
}

bool func_402(int iParam0)
{
	return SCRIPTS::_0x179A6F0EE2E79026(&(Local_829.f_204.f_69[iParam0]));
}

void func_403(int iParam0)
{
	int iVar0;

	if (!func_207(&iVar0))
	{
		return;
	}
	func_397(&(Local_60[iVar0 /*24*/].f_12), 4, iParam0);
}

bool func_404(int iParam0)
{
	int iVar0;

	if (!func_207(&iVar0))
	{
		return false;
	}
	return SCRIPTS::_0x179A6F0EE2E79026(&(Local_60[iVar0 /*24*/].f_12.f_5[iParam0]));
}

void func_405(int iParam0)
{
	int iVar0;

	if (!func_207(&iVar0))
	{
		return;
	}
	SCRIPTS::_0xDE544B7EC0C187CC(&(Local_60[iVar0 /*24*/].f_12.f_5[iParam0]));
}

bool func_406(int iParam0)
{
	return func_368(&(Local_829.f_204.f_75), 6, iParam0);
}

bool func_407(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!EVENT::_0x83D43F0FD5276E4D(iParam0, 0))
	{
		return false;
	}
	return true;
}

bool func_408(int iParam0, int iParam1)
{
	if (!func_328(iParam1, 0))
	{
		if (!func_207(&iParam1))
		{
			return false;
		}
	}
	return func_368(&(Local_60[iParam1 /*24*/].f_12), 1, iParam0);
}

bool func_409(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(func_226(iParam0), PLAYER::PLAYER_PED_ID()))
		{
			return true;
		}
		iVar0 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(func_226(iParam0), iVar0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_410(int iParam0, int iParam1)
{
	if (!func_328(iParam1, 0))
	{
		if (!func_207(&iParam1))
		{
			return false;
		}
	}
	if (!func_541(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return false;
	}
	return func_368(&(Local_60[iParam1 /*24*/].f_12), 3, iParam0);
}

bool func_411(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_6)
	{
		func_542(uParam2, 1, iVar0);
	}
	if (!Global_1940258.f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_13 = fParam5;
		}
		else
		{
			uParam2->f_13 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_2 & 128 != 0)
		{
			if (func_543(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_544(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_545(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_544(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_546(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_544(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_547(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_544(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258.f_20 && func_548(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_544(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_19)
		{
			if (func_549(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_550(Global_34, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_544(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_551(Global_34, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_544(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940258.f_23) < 300)
			{
				if (func_552(Global_34, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_544(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_552(Global_34, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_544(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_553(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_544(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940258.f_19 || uParam2->f_13 < 20f)
			{
				if (func_554(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_544(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258.f_24 || Global_1940258.f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_555(uParam2, 4000))
				{
					if ((func_556(iParam0, Global_1940258.f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_557(uParam2, iParam0)) && func_558(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_544(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_556(iParam0, Global_1940258.f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_557(uParam2, iParam0)) && func_558(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_544(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (Global_1940258.f_34 == 0)
			{
				if (Global_1940258.f_35 != 0)
				{
					if (func_559(iParam0, Global_1940258.f_35))
					{
						func_560();
						*iParam3 = 2;
						func_544(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_561(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_562() - uParam2->f_10) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_560();
						*iParam3 = 2;
						func_544(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1940258.f_36 != 0)
			{
				if (func_563())
				{
					if (func_559(iParam0, Global_1940258.f_36))
					{
						func_560();
						*iParam3 = 2;
						func_544(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_564(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_544(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (func_565(uParam2, iParam0))
		{
			*iParam3 = 1048576;
			func_544(iParam0, uParam2, *iParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_566(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_544(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_567(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_544(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_568(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_544(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_569(uParam2, 4000))
				{
					if (func_570(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_544(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_571(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_5 = 0;
					func_544(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_572(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_544(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_412(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_573(iParam0, vVar0, iParam2);
}

bool func_413(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar4;

	if (!func_574(iParam0, iParam1, iParam2, 0))
	{
		return false;
	}
	func_575(&iVar4, iParam1->f_12);
	func_577(Local_829.f_163.f_7[iParam0 /*11*/], &uVar0, iParam1->f_3, func_576(iParam1), iParam1->f_9, iParam1->f_10, iParam1->f_11, 0, 0);
	return func_578(&iVar4, &uVar0);
}

bool func_414(int iParam0)
{
	int iVar0;

	if (!func_207(&iVar0))
	{
		return false;
	}
	return func_368(&(Local_60[iVar0 /*24*/].f_12), 0, iParam0);
}

bool func_415(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Local_829.f_204.f_64, iParam0))
	{
		return false;
	}
	if (func_174(Local_829.f_204.f_2, 256))
	{
		return false;
	}
	if (iParam1->f_2 < 0f || iParam1->f_2 > IntToFloat(func_579(&(Local_829.f_204))))
	{
		return false;
	}
	return true;
}

bool func_416(int iParam0, int iParam1, int iParam2)
{
	if (!func_415(iParam0, iParam1))
	{
		return false;
	}
	if (Local_60[iParam2 /*24*/].f_12.f_4 != 0 && NETWORK::GET_TIME_DIFFERENCE(Local_60[iParam2 /*24*/].f_12.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
	{
		return true;
	}
	return false;
}

bool func_417(int iParam0, int iParam1, int iParam2)
{
	return true;
}

void func_418(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_207(&iVar0))
	{
		return;
	}
	func_398(&(Local_60[iVar0 /*24*/].f_12), 1, iParam0);
	if (bParam1)
	{
		Local_60[iVar0 /*24*/].f_12.f_8[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

bool func_419(int iParam0, int iParam1)
{
	if (!func_328(iParam1, 0))
	{
		if (!func_207(&iParam1))
		{
			return false;
		}
	}
	return func_368(&(Local_60[iParam1 /*24*/].f_12), 2, iParam0);
}

bool func_420(int iParam0)
{
	return true;
}

void func_421(int iParam0)
{
}

void func_422(int iParam0)
{
	int iVar0;

	if (!func_207(&iVar0))
	{
		return;
	}
	func_398(&(Local_60[iVar0 /*24*/].f_12), 2, iParam0);
}

bool func_423(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x20F4CB76689ACDBC(&uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, &(Local_829.f_204.f_72[iParam0]), &uVar0);
	return !SCRIPTS::_0x179A6F0EE2E79026(&uVar0);
}

bool func_424(int iParam0, var uParam1, int iParam2, var uParam3)
{
	*uParam1 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(*uParam1))
	{
		return false;
	}
	*iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX(*uParam1);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(*iParam2))
	{
		return false;
	}
	*uParam3 = PLAYER::GET_PLAYER_PED(*iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam3))
	{
		return false;
	}
	return true;
}

bool func_425(int iParam0, int iParam1)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Local_829.f_204.f_66[iParam0]), iParam1);
}

bool func_426(int iParam0, var uParam1, int iParam2, var uParam3)
{
	if (!func_447(1))
	{
		if (!func_580(&(Local_829.f_53)))
		{
		}
	}
	return true;
}

void func_427(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return;
	}
	if (!func_207(&iVar0))
	{
		return;
	}
	SCRIPTS::_0x31010318BA9897AC(&(Local_60[iVar0 /*24*/].f_12.f_5[iParam0]), iParam1);
}

float func_428()
{
	int iVar0;
	float fVar1;

	if (Local_829.f_318.f_3 == 0)
	{
		Local_829.f_318.f_3 = MISC::GET_GAME_TIMER();
		return 0.03125f;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = (BUILTIN::TO_FLOAT((iVar0 - Local_829.f_318.f_3)) * 0.001f);
	Local_829.f_318.f_3 = iVar0;
	return fVar1;
}

bool func_429(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return true;
}

bool func_430(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_581(vVar0, vParam0) > func_581(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_431(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) || (bParam7 && ENTITY::IS_ENTITY_DEAD(uParam0->f_6)))
	{
		return 0;
	}
	if (bParam5)
	{
		fVar0 = (fParam6 * fParam6);
	}
	else
	{
		fVar0 = BUILTIN::VDIST2(Global_35, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	}
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_582(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_0x164CECC59E70DF86(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_0xC8CCDB712FBCBA92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_35, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_583(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_584() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_432(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*9*/])->f_6) && (uParam0[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN((uParam0[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + (uParam0[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return false;
	}
	if (fVar2 < fParam2)
	{
		return false;
	}
	func_168(uParam0);
	return true;
}

void func_433()
{
	int iVar0;

	Local_829.f_145.f_1 = 0;
	Local_829.f_145.f_2 = -1;
	Local_829.f_25.f_22 = 0;
	Local_829.f_25.f_23 = -1;
	Local_829.f_53.f_46 = 0;
	Local_829.f_53.f_45 = -1;
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_829.f_145.f_1 = (Local_829.f_145.f_1 || Local_60[iVar0 /*24*/].f_4);
			Local_829.f_145.f_2 = (Local_829.f_145.f_2 && Local_60[iVar0 /*24*/].f_4);
			Local_829.f_25.f_22 = (Local_829.f_25.f_22 || Local_60[iVar0 /*24*/].f_5);
			Local_829.f_25.f_23 = (Local_829.f_25.f_23 && Local_60[iVar0 /*24*/].f_5);
			Local_829.f_53.f_46 = (Local_829.f_53.f_46 || Local_60[iVar0 /*24*/].f_1);
			Local_829.f_53.f_45 = (Local_829.f_53.f_45 && Local_60[iVar0 /*24*/].f_1);
		}
		iVar0++;
	}
}

void func_434()
{
	int iVar0;

	Local_829.f_145.f_4++;
	if (Local_829.f_145.f_4 >= 2)
	{
		Local_829.f_145.f_4 = 0;
	}
	iVar0 = func_498(Local_829.f_145.f_4);
	if (MISC::IS_BIT_SET(Local_829.f_145.f_3, Local_829.f_145.f_4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (PED::IS_PED_HUMAN(iVar0))
	{
		return;
	}
	if (func_585(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		return;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) && ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 297, false);
		func_586(Local_829.f_145.f_4);
	}
}

void func_435()
{
	int iVar0;
	int iVar1;
	var uVar5;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) != -507840394)
		{
		}
		else if (!SCRIPTS::GET_EVENT_DATA(1, iVar0, &iVar1, 4))
		{
		}
		else if (iVar1 != 194)
		{
		}
		else
		{
			if (!SCRIPTS::GET_EVENT_DATA(1, iVar0, &uVar5, 6))
			{
				return;
			}
			func_587(&uVar5, &(Local_829.f_152));
		}
		iVar0++;
	}
}

void func_436(var uParam0)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<2> Var3;

	if (uParam0->f_1 == 0)
	{
		return;
	}
	iVar0 = (Global_1296859.f_21 - uParam0->f_1) * 1000;
	if (iVar0 < 4000)
	{
		return;
	}
	else if (iVar0 > 15000 && func_215(uParam0->f_2, 4))
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
		return;
	}
	else if (!func_215(uParam0->f_2, 4))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			return;
		}
		fVar1 = func_588(Global_34, *uParam0, 1, 1);
		bVar2 = ((ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::_IS_ENTITY_FROZEN(*uParam0)) && !ENTITY::IS_ENTITY_VISIBLE(*uParam0));
		if (fVar1 < 300f && (func_215(uParam0->f_2, 1) || func_215(uParam0->f_2, 2)))
		{
			if (!func_589())
			{
				if (!bVar2)
				{
					func_590(*uParam0);
				}
			}
		}
		if (!bVar2 && fVar1 < 300f)
		{
			func_591(*uParam0);
		}
		if (func_215(uParam0->f_2, 1))
		{
			func_592(2, *uParam0);
		}
		if (func_215(uParam0->f_2, 1) && ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			Var3 = { func_529(joaat("USED"), -1530824760) };
			if (STATS::_0x5420D398A42917FC(*uParam0, &Var3))
			{
				func_593(Var3, 1);
			}
		}
		func_240(&(uParam0->f_2), 4);
	}
}

void func_437(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_498(uParam1->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar3 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0);
	if (!func_594() && func_595(uParam1->f_1, 40f, 60f, 100f, 1065353216 /* Float: 1f */, 5, 0, 1))
	{
		func_596();
	}
	if (!func_500())
	{
		if (func_597(iVar0, &(Local_829.f_100)) || func_598(iVar0, &(Local_829.f_100), 0))
		{
			func_599();
			func_600(uParam0, uParam1, 0, 0);
		}
	}
	if ((func_601(4, -1) && !func_508(8)) && !func_602(uParam0, iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			func_600(uParam0, uParam1, 0, 0);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
		}
	}
	if (!func_505(uParam1, 8) && func_500())
	{
		iVar1 = 0;
		while (iVar1 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && func_601(4, -1))
			{
				uParam1->f_20 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			}
			else
			{
				iVar1++;
			}
		}
		if (uParam0->f_2 == 7 && !func_505(uParam1, 2))
		{
			func_603(uParam1->f_16);
			func_604(uParam1, 2);
		}
		func_600(uParam0, uParam1, 0, 0);
		func_605(uParam0, uParam1);
		func_606(&(Local_829.f_53));
		func_607(&(Local_829.f_53));
		func_604(uParam1, 8);
	}
	func_608(uParam0, uParam1, uParam2);
	if (func_505(uParam1, 8))
	{
		func_609(uParam0, uParam1);
	}
	else
	{
		func_610(uParam1);
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (!func_601(1, -1))
			{
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					iVar2 = Local_829.f_163.f_7[iVar1 /*11*/];
					if (iVar1 != uParam1->f_1 && ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						func_611(iVar1);
					}
					iVar1++;
				}
				func_612(1);
			}
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(uParam1->f_16))
			{
				if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam1->f_16, "bStopLoop"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam1->f_16, "bStopLoop", true, false);
				}
			}
			if (!func_505(uParam1, 4))
			{
				if (func_613(uParam1->f_16) || ANIMSCENE::_0xB89FCFF19DAFFF28(uParam1->f_16, &(uParam1->f_14)))
				{
					func_614(uParam1->f_16);
					func_604(uParam1, 4);
				}
			}
			else
			{
				func_615();
			}
			break;
		case 1:
			if (bVar3 && !PED::IS_PED_USING_ANY_SCENARIO(iVar0))
			{
				if (func_505(uParam1, 1))
				{
					iVar4 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), uParam1->f_3, 2f, 1, false);
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar4))
					{
						TASK::_TASK_USE_SCENARIO_POINT(iVar0, iVar4, 0, 0, false, true, 0, false, -1f, false);
					}
					else
					{
						TASK::TASK_START_SCENARIO_AT_POSITION(iVar0, uParam1->f_3, Local_829.f_163.f_7[uParam1->f_1 /*11*/].f_6, Local_829.f_163.f_7[uParam1->f_1 /*11*/].f_5, 0, false, true, 0, -1f, false);
					}
				}
				else
				{
					TASK::TASK_START_SCENARIO_AT_POSITION(iVar0, uParam1->f_3, Local_829.f_163.f_7[uParam1->f_1 /*11*/].f_6, Local_829.f_163.f_7[uParam1->f_1 /*11*/].f_5, 0, false, true, 0, -1f, false);
				}
			}
			break;
		case 2:
			break;
		case 3:
			if (bVar3 && !func_616(iVar0, 923520851))
			{
				TASK::TASK_WANDER_IN_AREA(iVar0, Local_829.f_163.f_7[uParam1->f_1 /*11*/].f_6, uParam1->f_26, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
			}
			break;
		case 4:
			break;
		case 8:
			func_600(uParam0, uParam1, 0, 0);
			break;
		case 9:
			func_600(uParam0, uParam1, 0, 0);
			break;
		case 11:
			if ((!ENTITY::IS_ENTITY_DEAD(iVar0) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !func_601(64, -1))
			{
				if (func_453(Global_34, iVar0, 15f, 1, 1) || (func_453(Global_34, iVar0, 40f, 1, 1) && PED::IS_PED_SHOOTING(Global_34)))
				{
					func_612(64);
				}
			}
			else if (func_601(64, -1))
			{
				if (!func_453(Global_34, iVar0, 40f, 1, 1) || PED::GET_PED_CONFIG_FLAG(iVar0, 580, true))
				{
					func_617(64);
				}
			}
			if (((bVar3 && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && (MISC::GET_FRAME_COUNT() % 10) == 0)
			{
				iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::_0xCD66FEA29400A0B5(iVar0));
				if (ENTITY::DOES_ENTITY_EXIST(iVar5) && PED::IS_PED_A_PLAYER(iVar5))
				{
					iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar5);
					iVar7 = iVar6;
					if (func_467(iVar7, 1, 1))
					{
						if (func_618(4, iVar7))
						{
							func_600(uParam0, uParam1, 1, 1);
						}
					}
				}
			}
			if (!func_508(16))
			{
				if (bVar3)
				{
					PED::SET_PED_KEEP_TASK(iVar0, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					func_612(16);
				}
			}
			else if ((((Local_13.f_7.f_1 == 0 && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, false)) && !PED::IS_PED_FLEEING(iVar0)) && TASK::IS_PED_STILL(iVar0))
			{
				func_600(uParam0, uParam1, 1, 1);
			}
			if ((!func_508(32) && bVar3) && PED::IS_PED_IN_COMBAT(iVar0, 0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(uParam1->f_20)) || !func_453(PLAYER::GET_PLAYER_PED(uParam1->f_20), iVar0, 100f, 1, 1))
				{
					TASK::TASK_ANIMAL_UNALERTED(iVar0, -1, 0, 0, 0);
					PED::SET_PED_KEEP_TASK(iVar0, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					func_612(32);
				}
			}
			break;
		case 10:
			break;
	}
}

void func_438()
{
	int iVar0;

	if (func_619(256))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_829.f_53))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_829.f_53))
	{
		return;
	}
	if (!func_453(Global_34, Local_829.f_53, 50f, 1, 1))
	{
		func_387(&(Local_829.f_100.f_42));
		func_620(4);
		func_620(8);
		func_620(16);
		func_620(32);
		func_620(64);
		return;
	}
	if ((PED::_IS_PED_HOGTIED(Global_34) || PED::_GET_LASSOER_OF_PED(Global_34)) || PED::IS_PED_IN_ANY_VEHICLE(Global_34, true))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_621(Local_829.f_53, Global_34, &(Local_829.f_100.f_39), &(Local_829.f_100.f_38));
	}
	if (!func_618(4, -1))
	{
		if (iVar0 == 1)
		{
			func_622(&(Local_829.f_100.f_42), 0);
			func_623(4);
		}
	}
	else if (iVar0 == 0)
	{
		func_387(&(Local_829.f_100.f_42));
		func_620(4);
		func_620(8);
		func_620(16);
		func_620(32);
		func_620(64);
		func_620(128);
	}
	else
	{
		if (!func_618(128, -1) && func_598(Local_829.f_53, &(Local_829.f_100), 0))
		{
			func_623(128);
		}
		if (func_536(&(Local_829.f_100.f_42)) > 15f)
		{
			if (!func_618(64, -1))
			{
				func_623(64);
			}
		}
		else if (func_536(&(Local_829.f_100.f_42)) > 10f)
		{
			if (!func_618(32, -1))
			{
				func_623(32);
			}
		}
		else if (func_536(&(Local_829.f_100.f_42)) > 8f)
		{
			if (!func_618(16, -1))
			{
				func_623(16);
			}
		}
		else if (func_536(&(Local_829.f_100.f_42)) > 5f)
		{
			if (!func_618(8, -1))
			{
				func_623(8);
			}
		}
	}
}

bool func_439(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;

	if (!func_468(255))
	{
		return false;
	}
	if (!func_452(&(Local_829.f_53), 256) && func_453(Global_34, *uParam0, Global_1901947.f_852.f_3, 1, 0))
	{
		func_624();
	}
	else if (func_452(&(Local_829.f_53), 256) && !func_453(Global_34, *uParam0, (Global_1901947.f_852.f_3 + 50f), 1, 0))
	{
		func_625();
	}
	if ((uParam0->f_38 < 2 && func_626()) || Local_13.f_18.f_1)
	{
		uParam0->f_38 = 2;
	}
	switch (uParam0->f_38)
	{
		case 0:
			if (!func_627(uParam0))
			{
				return false;
			}
			if (func_628(Global_34, uParam0->f_33, uParam0->f_13, 1, 1))
			{
				if ((MISC::GET_FRAME_COUNT() % 5) == 0)
				{
					CLOCK::GET_POSIX_TIME(&uVar0, &uVar0, &uVar0, &uVar0, &uVar0, &iVar1);
					iVar2 = (iVar1 % BUILTIN::ROUND(uParam0->f_11));
					if (iVar2 < 5)
					{
						func_629(uParam0, 1);
					}
				}
			}
			break;
		case 1:
			if (!func_628(Global_34, uParam0->f_33, (uParam0->f_13 + 20f), 1, 1))
			{
				func_387(&(uParam0->f_40));
				func_629(uParam0, 0);
			}
			else if (func_628(Global_34, uParam0->f_33, (uParam0->f_15 + 10f), 1, 1) || func_452(uParam0, 1))
			{
				func_387(&(uParam0->f_40));
				func_629(uParam0, 2);
			}
			else if (uParam0->f_10 == -1 || uParam0->f_37 < uParam0->f_10)
			{
				if (!func_385(&(uParam0->f_40)) || func_536(&(uParam0->f_40)) > uParam0->f_11)
				{
					if (func_628(Global_34, uParam0->f_33, (uParam0->f_15 + 20f), 1, 1))
					{
						uParam0->f_14 = (uParam0->f_14 / 4f);
					}
					if (func_452(uParam0, 8))
					{
						vVar3 = { func_630(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), uParam0->f_14, 0f) };
						func_631(vVar3, uParam0->f_12);
					}
					else
					{
						vVar3 = { func_630(uParam0->f_33, uParam0->f_14, 0f) };
						func_631(vVar3, uParam0->f_12);
					}
					func_384(&(uParam0->f_40));
					func_632();
					func_633(uParam0, uParam0->f_33);
					uParam0->f_37++;
					if (uParam0->f_37 == 1)
					{
						iVar6 = func_634(21, 34);
						if (iVar6 <= 3)
						{
							func_295("LA_H_BLIPPED");
						}
					}
				}
			}
			break;
		case 2:
			return true;
	}
	return false;
}

int func_440(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (!func_468(255))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if ((!func_618(2, -1) && !ENTITY::IS_ENTITY_DEAD(*uParam0)) && PED::IS_PED_FLEEING(*uParam0))
		{
			func_623(2);
		}
		if (func_635(&(Local_13.f_20)))
		{
			bVar2 = true;
		}
		else if (func_619(2))
		{
			bVar2 = true;
		}
		func_636(*uParam0, &(Local_13.f_20), bVar2);
	}
	if ((uParam0->f_2 < 12 && ENTITY::DOES_ENTITY_EXIST(*uParam0)) && ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_1));
		}
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
		func_637(uParam0, 12);
	}
	if ((uParam0->f_2 < 11 && PED::GET_PED_CONFIG_FLAG(*uParam0, 580, true)) && TASK::IS_PED_IN_WRITHE(*uParam0))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_1));
		}
		func_637(uParam0, 11);
	}
	if (func_452(uParam0, 64) && MAP::DOES_BLIP_EXIST(uParam0->f_36))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_36));
	}
	if (uParam0->f_2 <= 3 && func_626())
	{
		uParam0->f_2 = 3;
		func_607(uParam0);
	}
	if (func_638(uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			if (func_453(Global_34, *uParam0, uParam0->f_15, 0, 1) && uParam0->f_2 >= 4)
			{
				if (!func_639())
				{
					func_640();
				}
				if (!func_291())
				{
					func_641();
				}
			}
		}
	}
	if (((uParam0->f_2 < 3 && Local_13.f_18.f_1) && ENTITY::DOES_ENTITY_EXIST(*uParam0)) && !func_642(*uParam0))
	{
		func_637(uParam0, 3);
		func_606(uParam0);
		func_607(uParam0);
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_452(uParam0, 4))
			{
				func_637(uParam0, 2);
			}
			if (func_643(uParam0) || func_452(uParam0, 1))
			{
				func_637(uParam0, 1);
			}
			break;
		case 1:
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_36))
			{
				uParam0->f_36 = MAP::_BLIP_ADD_FOR_COORD(func_644(), uParam0->f_33);
				MAP::_BLIP_SET_MODIFIER(uParam0->f_36, joaat("BLIP_MODIFIER_LEGENDARY"));
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_36, "LA_CLUE");
				func_640();
				func_637(uParam0, 2);
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 <= 1)
			{
				iVar0 = func_498(iVar1);
				if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && MISC::IS_BIT_SET(uParam0->f_44, iVar1)) && func_595(iVar1, uParam0->f_16, uParam0->f_17, uParam0->f_18, 1065353216 /* Float: 1f */, 5, 0, 1))
				{
					func_606(uParam0);
				}
				else
				{
					iVar1++;
				}
			}
			iVar0 = *uParam0;
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_595(uParam0->f_43, uParam0->f_16, uParam0->f_17, uParam0->f_18, 1065353216 /* Float: 1f */, 5, 0, 1))
			{
				func_606(uParam0);
			}
			if (func_452(uParam0, 1))
			{
				func_637(uParam0, 3);
			}
			break;
		case 3:
			iVar0 = *uParam0;
			if (MAP::DOES_BLIP_EXIST(uParam0->f_36))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_36));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_595(uParam0->f_43, uParam0->f_16, uParam0->f_17, uParam0->f_18, 1065353216 /* Float: 1f */, 5, 0, 1))
			{
				func_607(uParam0);
			}
			if (func_638(uParam0))
			{
				if (TASK::_0x6DAC799857EF3F11(Global_34, *uParam0) || TASK::_0x920684BE432875B1(*uParam0))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_645(*uParam0, &(uParam0->f_1), 0, bVar3);
				func_646(&(uParam0->f_40), -5f, 1);
				func_637(uParam0, 4);
			}
			break;
		case 4:
			if (!PED::IS_PED_FLEEING(*uParam0))
			{
				if (!func_385(&(uParam0->f_40)))
				{
					func_622(&(uParam0->f_40), 0);
				}
				else if (func_536(&(uParam0->f_40)) > 5f && !func_453(*uParam0, Global_34, uParam0->f_20, 1, 1))
				{
					func_387(&(uParam0->f_40));
					func_637(uParam0, 5);
				}
			}
			else if (!func_385(&(uParam0->f_40)))
			{
				func_622(&(uParam0->f_40), 0);
			}
			else if (func_536(&(uParam0->f_40)) > 5f && !func_595(uParam0->f_43, uParam0->f_19, (uParam0->f_17 + 10f), (uParam0->f_18 + 10f), 1f, 0, 0, 1))
			{
				func_387(&(uParam0->f_40));
				func_637(uParam0, 5);
			}
			break;
		case 5:
			if (!func_385(&(uParam0->f_40)))
			{
				func_622(&(uParam0->f_40), 0);
			}
			else if (func_536(&(uParam0->f_40)) > uParam0->f_22)
			{
				func_387(&(uParam0->f_40));
				func_647(&(uParam0->f_1));
				func_637(uParam0, 7);
			}
			break;
		case 7:
			if (!func_385(&(uParam0->f_40)))
			{
				func_622(&(uParam0->f_40), 0);
			}
			else if (func_536(&(uParam0->f_40)) > 1f && func_595(uParam0->f_43, uParam0->f_19, uParam0->f_17, uParam0->f_18, 0f, 1, 0, 0))
			{
				func_648(&(uParam0->f_1));
				func_387(&(uParam0->f_40));
				func_637(uParam0, 4);
			}
			else if (func_536(&(uParam0->f_40)) > (uParam0->f_23 + ((BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)) / 25f) * uParam0->f_24)) || ((func_385(&(Local_829.f_19.f_3)) && func_536(&(Local_829.f_19.f_3)) < Global_1901947.f_852.f_4) && func_536(&(uParam0->f_40)) > 2f))
			{
				func_649(&(uParam0->f_1));
				if (func_452(uParam0, 32))
				{
					func_650(*uParam0, uParam0->f_12);
				}
				func_387(&(uParam0->f_40));
				func_637(uParam0, 5);
			}
			else if (!func_453(Global_34, *uParam0, uParam0->f_21, 1, 1) && (!func_385(&(Local_829.f_19.f_3)) || func_536(&(Local_829.f_19.f_3)) > Global_1901947.f_852.f_4))
			{
				func_387(&(uParam0->f_40));
				func_637(uParam0, 8);
			}
			break;
		case 8:
			if (!func_385(&(uParam0->f_40)))
			{
				func_622(&(uParam0->f_40), 0);
			}
			if (func_453(Global_34, *uParam0, (uParam0->f_21 - 10f), 1, 1) || (func_385(&(Local_829.f_19.f_3)) && func_536(&(Local_829.f_19.f_3)) < Global_1901947.f_852.f_4))
			{
				func_387(&(uParam0->f_40));
				func_637(uParam0, 7);
			}
			break;
		case 9:
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_1))
			{
				func_645(*uParam0, &(uParam0->f_1), 0, 1);
			}
			if (!func_453(Global_34, *uParam0, (50f + 10f), 1, 1))
			{
				func_637(uParam0, 10);
			}
			break;
		case 10:
			if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_1));
			}
			if (func_453(Global_34, *uParam0, 50f, 1, 1))
			{
				func_637(uParam0, 9);
			}
			break;
		case 11:
			if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 580, true) && !TASK::IS_PED_IN_WRITHE(*uParam0))
			{
				if (TASK::_0x6DAC799857EF3F11(Global_34, *uParam0))
				{
					if (func_453(Global_34, *uParam0, 50f, 1, 1))
					{
						func_637(uParam0, 9);
					}
					else
					{
						func_637(uParam0, 10);
					}
				}
				else
				{
					func_637(uParam0, 3);
				}
			}
			break;
		case 12:
			return 1;
	}
	return 0;
}

void func_441(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if ((Local_13.f_18 == 255 && !func_455(2)) || (Local_13.f_18 != 255 && Local_13.f_18 != PLAYER::PLAYER_ID()))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0) && ENTITY::_0xEF2D9ED7CE684F08(iParam0) == Global_34)
		{
			func_651();
			func_652(2);
		}
	}
}

void func_442(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!func_455(1))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iParam0) && PED::GET_PED_CONFIG_FLAG(iParam0, 580, true)) && ENTITY::_0xEF2D9ED7CE684F08(iParam0) == Global_34)
		{
			func_653();
			func_652(1);
			func_654(2);
		}
	}
}

void func_443(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!func_455(16))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_655(Global_34)) == iParam0)
		{
			func_656();
			func_652(16);
		}
	}
}

void func_444(int iParam0, float fParam1)
{
	float fVar0;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!Local_13.f_18.f_1 && func_293(32))
		{
			Local_13.f_18.f_1 = 1;
		}
	}
	if (((!func_455(4) && (MISC::GET_FRAME_COUNT() % 10) == 0) && ENTITY::DOES_ENTITY_EXIST(Local_829.f_53)) && TASK::_0x920684BE432875B1(Local_829.f_53))
	{
		func_652(4);
	}
	if (!Local_13.f_18.f_1 && !func_292(32, -1))
	{
		if (func_254(Local_829.f_53.f_43))
		{
			func_654(32);
		}
		if (Local_829.f_100.f_33 != 0)
		{
			func_654(32);
		}
	}
	if (!func_455(128))
	{
		if (((((func_455(8) || func_455(16)) || func_455(4)) || func_293(8)) || (func_293(2) && ENTITY::IS_ENTITY_DEAD(iParam0))) || (ENTITY::IS_ENTITY_DEAD(iParam0) && !PED::_0xA4B6432E3880F2F9(iParam0)))
		{
			func_652(128);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if ((!func_292(4, -1) && func_455(128)) && func_586(Local_829.f_53.f_43))
		{
			func_654(4);
		}
		if (!func_292(8, -1) && func_657(1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				func_654(16);
			}
			if (func_658(Local_829.f_53.f_43))
			{
				func_654(8);
			}
		}
	}
	if (!func_292(1, -1))
	{
		if (((func_265() && !func_453(Global_34, iParam0, fParam1, 1, 1)) && Local_829.f_19.f_2 != 2) && (!func_385(&(Local_829.f_19.f_3)) || func_536(&(Local_829.f_19.f_3)) > Global_1901947.f_852.f_4))
		{
			func_654(1);
		}
	}
	else
	{
		if (func_385(&(Local_829.f_19.f_3)) && func_536(&(Local_829.f_19.f_3)) < 20f)
		{
			fVar0 = 5f;
		}
		else
		{
			fVar0 = 30f;
		}
		if (func_453(Global_34, iParam0, (fParam1 - fVar0), 1, 1))
		{
			func_659(1);
		}
	}
}

bool func_445()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

bool func_446(int iParam0)
{
	var uVar0;
	int iVar1;

	if (func_660(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_447(int iParam0)
{
	return func_174(Local_829.f_155.f_2, iParam0);
}

void func_448(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Local_829.f_19 == 0)
	{
		return;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::PLAYER_ID());
	if (iVar0 == 255 || !NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return;
	}
	switch (Local_829.f_19.f_2)
	{
		case 0:
			if (Local_60[iVar1 /*24*/].f_2.f_1 != 0)
			{
				Local_829.f_19.f_1 = PLAYER::PLAYER_PED_ID();
				if (func_661())
				{
					Local_829.f_19.f_2 = 2;
				}
				else
				{
					Local_829.f_19.f_2 = 1;
				}
			}
			break;
		case 1:
			if (func_661())
			{
				if (func_662(iParam0))
				{
					Local_60[iVar1 /*24*/].f_2++;
				}
				Local_829.f_19.f_2 = 2;
			}
			break;
		case 2:
			if (!func_661())
			{
				Local_829.f_19.f_2 = 1;
				Local_829.f_19.f_1 = PLAYER::PLAYER_PED_ID();
				func_384(&(Local_829.f_19.f_3));
			}
			break;
	}
}

bool func_449(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
		{
			return false;
		}
	}
	return func_174(Local_60[iParam1 /*24*/].f_6, iParam0);
}

bool func_450()
{
	return Local_829.f_318.f_4;
}

void func_451()
{
	if (!func_447(2))
	{
		if (!func_663())
		{
			return;
		}
		func_664(2);
	}
}

bool func_452(var uParam0, int iParam1)
{
	return func_215(uParam0->f_39, iParam1);
}

bool func_453(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (bParam4)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
		{
			return true;
		}
	}
	else if (func_665(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_454(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;

	iVar0 = func_666(iParam1, iParam2);
	if (iVar0 != 0)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam3->f_1, func_667(iParam1, iParam2));
	}
}

bool func_455(int iParam0)
{
	return func_215(Local_829.f_145, iParam0);
}

void func_456(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()))
		{
			return;
		}
		if (iVar0 < 0 || iVar0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			return;
		}
	}
	func_238(&(Local_60[iVar0 /*24*/].f_6), iParam0);
}

bool func_457(int iParam0)
{
	return !func_368(&(Local_829.f_204.f_75), 8, iParam0);
}

bool func_458(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!func_328(iParam2, 0))
	{
		if (!func_207(&iParam2))
		{
			return false;
		}
	}
	fVar0 = Local_60[iParam2 /*24*/].f_7.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_226(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2));
				if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
				{
					fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), func_668(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_60[iParam2 /*24*/].f_7.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

void func_459()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = func_226(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 580, true))
	{
		return;
	}
	iVar1 = func_669(0, 0, 1, 0);
	if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
	{
		vVar2 = { func_371() };
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), true, false) };
		}
		if (!PED::_0xEEED8FAFEC331A70(iVar0, vVar2, 3))
		{
			if (!PED::_0x62FDAD5E01D2DD47(iVar0, vVar2, 3, 0))
			{
				PED::_0xA3A9299C4F2ADB98(iVar0);
			}
		}
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, PLAYER::GET_PLAYER_PED(iVar1), 3, 0, 10000f, -1, 0);
	}
	else
	{
		TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 3, 0, 10000f, -1, 0);
	}
}

void func_460()
{
	int iVar0;
	int iVar1;

	iVar0 = func_226(0);
	if (Local_829.f_155.f_1 != Local_13.f_24.f_2)
	{
		Local_829.f_155.f_1 = Local_13.f_24.f_2;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 580, true))
	{
		return;
	}
	switch (Local_829.f_155.f_1)
	{
		case 0:
			if (!func_345(67108864, 0))
			{
				if (func_670(MISC::GET_RANDOM_INT_IN_RANGE(0, 3), &iVar1))
				{
					TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, iVar1, -1, true, 0, -1f, false);
					func_256(67108864, 1);
				}
			}
			break;
		case 1:
			if (!func_345(134217728, 0))
			{
				if (Local_13.f_24.f_12 != 0 && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_24.f_12, NETWORK::GET_NETWORK_TIME_ACCURATE()) < 90000)
				{
					return;
				}
				TASK::TASK_WANDER_IN_AREA(iVar0, func_371(), 10f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
				func_256(134217728, 1);
			}
			break;
		case 2:
			if (func_449(67108864, -1, 1))
			{
				func_456(67108864, 1);
			}
			break;
		case 3:
			if (!func_345(67108864, 0))
			{
				if (Local_13.f_24.f_11 != 0 && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_24.f_11, NETWORK::GET_NETWORK_TIME_ACCURATE()) < 15000)
				{
					return;
				}
				if (func_670(MISC::GET_RANDOM_INT_IN_RANGE(0, 3), &iVar1))
				{
					TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, iVar1, -1, true, 0, -1f, false);
					func_256(67108864, 1);
				}
			}
			break;
		case 4:
			if (func_449(134217728, -1, 1))
			{
				func_456(134217728, 1);
			}
			break;
	}
}

bool func_461(int iParam0, int iParam1)
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

bool func_462()
{
	char* sVar0;

	sVar0 = func_671();
	if (!func_672(Local_829.f_155.f_6, sVar0, 0))
	{
		return false;
	}
	if (!ANIMSCENE::_0x1F0E401031E20146(Local_829.f_155.f_6, sVar0))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_829.f_155.f_6))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_829.f_155.f_6, sVar0, true);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_829.f_155.f_6, "bStopLoop", true, false);
		}
		return false;
	}
	return ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_829.f_155.f_6, "bStopLoop");
}

void func_463(bool bParam0)
{
	if (func_345(268435456, 1))
	{
		return;
	}
	if (!func_261(0))
	{
		return;
	}
	if (!func_263(0))
	{
		return;
	}
	if (bParam0 || !func_673(0))
	{
		if (!func_342(0, 1))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(func_226(0), func_226(1), 3, 0, 9999f, -1, 0);
			PED::FORCE_PED_MOTION_STATE(func_226(0), joaat("MOTIONSTATE_RUN"), false, 0, false);
			PED::_0x2208438012482A1A(func_226(0), false, false);
		}
		else
		{
			PHYSICS::ACTIVATE_PHYSICS(func_226(0));
		}
		func_256(268435456, 1);
	}
	else if (!func_342(0, 1))
	{
		TASK::_0x2E1D6D87346BB7D2(func_226(0), func_226(1), 0, 0);
	}
}

void func_464(bool bParam0)
{
	bool bVar0;

	func_674(bParam0);
	if (func_345(536870912, 1))
	{
		return;
	}
	if (!func_261(1))
	{
		return;
	}
	if (!func_263(1))
	{
		return;
	}
	bVar0 = func_673(1);
	if (bParam0 || !bVar0)
	{
		ENTITY::SET_ENTITY_COLLISION(func_226(1), true, false);
		if (!func_342(1, 1))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(func_226(1), func_226(0), 3, 0, 9999f, -1, 0);
			PED::FORCE_PED_MOTION_STATE(func_226(1), joaat("MOTIONSTATE_RUN"), false, 0, false);
			PED::_0x2208438012482A1A(func_226(1), false, false);
			func_256(536870912, 1);
		}
		else
		{
			PHYSICS::ACTIVATE_PHYSICS(func_226(1));
			PED::SET_PED_TO_RAGDOLL(func_226(1), 1000, 1000, 0, true, true, false);
			func_256(536870912, 1);
		}
	}
	else if (!func_342(1, 1))
	{
		TASK::_0x2E1D6D87346BB7D2(func_226(1), func_226(0), 0, 0);
	}
}

bool func_465()
{
	int iVar0;

	iVar0 = 0;
	switch (func_211())
	{
		case 0:
			return false;
		case 1:
			iVar0 = 100;
			break;
	}
	return func_675(iVar0);
}

bool func_466()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar0 = func_226(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 580, true))
	{
		return false;
	}
	if (!func_676(&iVar1))
	{
		return false;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return false;
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) - ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	if (MISC::ABSF(vVar3.z) > 1f)
	{
		return false;
	}
	TASK::TASK_COMBAT_ANIMAL_CHARGE(iVar0, iVar2, 1, 1, 1, 0, 0);
	return true;
}

bool func_467(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return false;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (bParam2 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return false;
	}
	if (bParam1 && PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	return true;
}

bool func_468(int iParam0)
{
	return func_126(8, iParam0);
}

var func_469(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_470(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_677(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_471(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_677(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_472(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_316(&Var1, iParam0))
	{
		iVar0 = ((func_678() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_473(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/].f_2;
}

bool func_474(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("BOUNTY_BOARD"):
		case joaat("GUN_FOR_HIRE"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("CAMP_SELL"):
			return true;
		case joaat("DYNAMIC"):
			return iParam1;
		default:
			break;
	}
	return false;
}

void func_475(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_1051252.f_16[16] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[16]))
	{
		return;
	}
	*uParam0 = 180;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 8, 10, Global_1051252.f_16[16]);
	func_679(uParam0, uParam0->f_1);
}

void func_476(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 < iParam1)
	{
		iParam2 = (uParam0->f_2 - 1);
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		func_183(uParam0, iVar0);
		iVar0++;
	}
}

void func_477(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(&(uParam0->f_2), 16384);
	}
	else
	{
		func_216(&(uParam0->f_2), 16384);
	}
}

void func_478(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(&(uParam0->f_2), 2048);
	}
	else
	{
		func_216(&(uParam0->f_2), 2048);
	}
}

void func_479(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(&(uParam0->f_2), 256);
	}
	else
	{
		func_216(&(uParam0->f_2), 256);
	}
}

void func_480(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_216(uParam0, 16);
	}
	else
	{
		func_238(uParam0, 67108864);
		func_238(uParam0, 16);
	}
}

void func_481(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_238(&(uParam0->f_2), 128);
	}
	else
	{
		func_216(&(uParam0->f_2), 128);
	}
}

void func_482(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_216(uParam0, 256);
	}
	else
	{
		func_238(uParam0, 256);
	}
}

void func_483(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_216(uParam0, 268435456);
	}
	else
	{
		func_238(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_216(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_238(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_216(uParam0, 536870912);
	}
	else
	{
		func_238(uParam0, 536870912);
	}
}

float func_484(var uParam0)
{
	return uParam0->f_26;
}

void func_485(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_486(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_216(uParam0, 1);
	}
	else
	{
		func_238(uParam0, 1);
	}
}

void func_487(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_216(uParam0, 512);
	}
	else
	{
		func_238(uParam0, 512);
	}
}

void func_488(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_216(uParam0, 2);
	}
	else
	{
		func_238(uParam0, 2);
	}
}

void func_489(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_216(uParam0, 8);
	}
	else
	{
		func_238(uParam0, 8);
	}
}

int func_490()
{
	return Local_829.f_3;
}

int func_491(int iParam0)
{
	return Local_829.f_163.f_7[iParam0 /*11*/].f_4;
}

float func_492(int iParam0)
{
	return Local_829.f_163.f_7[iParam0 /*11*/].f_5;
}

Vector3 func_493(int iParam0)
{
	return Local_829.f_163.f_7[iParam0 /*11*/].f_6;
}

bool func_494(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return false;
		}
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return false;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (!func_680(iParam1))
	{
		return false;
	}
	iVar0 = func_681(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam9)
		{
			WEAPON::_0x899A04AFCC725D04(iVar0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (bParam10)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return true;
	}
	return false;
}

void func_495(int iParam0, bool bParam1)
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

bool func_496(int iParam0)
{
	return func_167(iParam0, 32);
}

bool func_497(int iParam0)
{
	return func_167(iParam0, 64);
}

int func_498(int iParam0)
{
	return Local_829.f_163.f_7[iParam0 /*11*/];
}

void func_499(var uParam0, int iParam1)
{
	if (uParam0->f_2 == iParam1)
	{
		return;
	}
	func_504(&(uParam0->f_6));
	uParam0->f_2 = iParam1;
}

bool func_500()
{
	return func_508(4);
}

bool func_501(int iParam0)
{
	return func_215(Local_829.f_25.f_23, iParam0);
}

bool func_502(var uParam0, var uParam1)
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam1->f_16, false))
	{
		return true;
	}
	NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_9);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_9))
	{
		return false;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_16, &(uParam1->f_14), func_498(uParam1->f_1), 0);
	func_682(uParam1->f_16);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam1->f_16, Local_829.f_163.f_7[uParam1->f_1 /*11*/].f_6, 0f, 0f, Local_829.f_163.f_7[uParam1->f_1 /*11*/].f_5, 2);
	ANIMSCENE::START_ANIM_SCENE(uParam1->f_16);
	return true;
}

bool func_503()
{
	return func_508(2);
}

void func_504(var uParam0)
{
	func_683(uParam0, 0);
}

bool func_505(var uParam0, int iParam1)
{
	return func_215(uParam0->f_21, iParam1);
}

float func_506(var uParam0)
{
	return (BUILTIN::TO_FLOAT(func_684(uParam0)) * 0.001f);
}

int func_507(int iParam0)
{
	return PLAYER::GET_PLAYER_PED(func_685(iParam0));
}

bool func_508(int iParam0)
{
	return func_215(Local_829.f_25.f_22, iParam0);
}

void func_509(var uParam0, int iParam1)
{
	func_240(&(uParam0->f_10), iParam1);
}

var func_510(int iParam0, int iParam1)
{
	return func_686(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_511(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 5;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 21, 29, &uParam1);
}

void func_512(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	*iParam0 = 0;
	iVar3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (iVar4 == 255)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
		}
		else if (Local_60[iVar0 /*24*/].f_2.f_1 == 0)
		{
		}
		else
		{
			*iParam0 = (*iParam0 + Local_60[iVar0 /*24*/].f_2);
			if (iVar1 == 0 || NETWORK::IS_TIME_MORE_THAN(Local_60[iVar0 /*24*/].f_2.f_1, iVar1))
			{
				iVar1 = Local_60[iVar0 /*24*/].f_2.f_1;
			}
			if (iVar2 == 0 || NETWORK::IS_TIME_LESS_THAN(Local_60[iVar0 /*24*/].f_2.f_1, iVar2))
			{
				iVar2 = Local_60[iVar0 /*24*/].f_2.f_1;
			}
		}
		iVar0++;
	}
	*iParam2 = 0;
	*iParam1 = 0;
	if (iVar1 != 0)
	{
		*iParam2 = ((NETWORK::GET_TIME_DIFFERENCE(iVar1, iVar3) / 1000) / 60);
	}
	if (iVar2 != 0)
	{
		*iParam1 = ((NETWORK::GET_TIME_DIFFERENCE(iVar2, iVar3) / 1000) / 60);
	}
}

char* func_513(int iParam0)
{
	switch (func_332())
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return "DEER1";
				case 1:
					return "DEER2";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "BUCK1";
				case 1:
					return "BUCK2";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_514(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_361(ENTITY::GET_ENTITY_MODEL(iParam0));
	iVar1 = func_687(iVar0);
	if (iVar0 != 2 && iVar0 != 0)
	{
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iParam0, true, 2f);
		TASK::_0x9DE63896B176EA94(iParam0, 0);
	}
	TASK::_0x06ECF3925BC2ABAE(iParam0, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 402, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 542, true);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	func_688(iParam0, iVar1, iParam1);
	func_689(iParam0);
}

float func_515()
{
	float fVar0;
	float fVar1;

	fVar0 = 10f;
	fVar1 = 20f;
	if (func_211() == 1)
	{
		fVar0 = (fVar0 + -5f);
		fVar1 = (fVar1 + -10f);
	}
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1);
}

float func_516()
{
	float fVar0;
	float fVar1;

	fVar0 = 10f;
	fVar1 = 20f;
	if (func_211() == 1)
	{
		fVar0 = (fVar0 + -5f);
		fVar1 = (fVar1 + -10f);
	}
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1);
}

float func_517(int iParam0)
{
	return (BUILTIN::TO_FLOAT(func_690(iParam0)) * 0.001f);
}

void func_518(int iParam0)
{
	func_652(8);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (Local_13.f_18 == iParam0->f_1)
		{
		}
		else
		{
			Local_13.f_18 = iParam0->f_1;
		}
	}
	if (GANG::_0x3F59FE6F37869576(iParam0->f_1, PLAYER::GET_PLAYER_INDEX()) && func_468(255))
	{
		if (!func_639())
		{
			func_640();
		}
		if (!func_291())
		{
			func_641();
		}
		if (!func_691())
		{
			func_692(1);
		}
	}
}

void func_519(int iParam0)
{
	if (GANG::_0x3F59FE6F37869576(iParam0->f_1, PLAYER::GET_PLAYER_INDEX()) && func_468(255))
	{
		if (!func_639())
		{
			func_640();
		}
		if (!func_291())
		{
			func_641();
		}
		if (!func_693())
		{
			func_694(1);
		}
	}
}

void func_520(int iParam0)
{
	func_652(16);
	if (GANG::_0x3F59FE6F37869576(iParam0->f_1, PLAYER::GET_PLAYER_INDEX()) && func_468(255))
	{
		if (!func_639())
		{
			func_640();
		}
		if (!func_291())
		{
			func_641();
		}
		if (!func_691())
		{
			func_692(1);
		}
	}
}

void func_521(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_695(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_522(int iParam0)
{
	return Local_829.f_163.f_7[iParam0 /*11*/].f_10;
}

void func_523(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
			AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
		}
	}
}

void func_524(int iParam0)
{
}

void func_525(int iParam0)
{
	AUDIO::_0xD9130842D7226045(func_696(iParam0), 0);
}

bool func_526()
{
	return Global_1146212.f_21645[54 /*209*/].f_208;
}

float func_527(int iParam0, int iParam1, bool bParam2)
{
	if (!func_328(iParam1, 0))
	{
		if (!func_207(&iParam1))
		{
			return 0f;
		}
	}
	if (bParam2)
	{
		if (Local_60[iParam1 /*24*/].f_7.f_2[iParam0] < 0f)
		{
			return 0f;
		}
	}
	return Local_60[iParam1 /*24*/].f_7.f_2[iParam0];
}

int func_528(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("NET_BEAT_ANIMAL_ATTACK");
		case 2:
			return joaat("NET_BEAT_ARROWHEAD_INJURY");
		case 14:
			return joaat("NET_BEAT_DUEL");
		case 4:
			return joaat("NET_BEAT_GRAVEROBBER");
		case 5:
			return joaat("NET_BEAT_RIVAL_COLLECTOR");
		case 6:
			return joaat("NET_BEAT_KIDNAPPED");
		case 7:
			return joaat("NET_BEAT_PHOTOGRAPHY");
		case 8:
			return joaat("NET_BEAT_TIED_UP_PED");
		case 9:
			return joaat("NET_BEAT_TREASURE_HUNTER");
		case 10:
			return joaat("NET_BEAT_TREE_MAP");
		case 11:
			return joaat("NET_BEAT_RUNAWAY_WAGON");
		case 12:
			return joaat("NET_BEAT_HOBO_DOG");
		case 13:
			return joaat("NET_BEAT_WILDMAN");
		case 3:
			return joaat("NET_BEAT_EGG_PROTECTOR");
		case 15:
			return joaat("NET_BEAT_MOONSHINE_CAMP");
		case 16:
			return joaat("NET_BEAT_BEGGAR");
		case 17:
			return joaat("NET_BEAT_STALKING_HUNTER");
		case 18:
			return joaat("NET_BEAT_SLUMPED_HUNTER");
		case 19:
			return joaat("NET_BEAT_CRASHED_WAGON");
		case 20:
			return joaat("NET_BEAT_SUSPENSION_TRAP");
		case 31:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_ALLIGATOR");
		case 21:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_BEAR");
		case 28:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_BEAVER");
		case 25:
			return 1829377792;
		case 24:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_BOAR");
		case 32:
			return -753359492;
		case 22:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_COUGAR");
		case 29:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_COYOTE");
		case 26:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_FOX");
		case 30:
			return -1373797819;
		case 27:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_WOLF");
		case 33:
			return -268685349;
		case 34:
			return -2047817190;
		case 23:
			return 257784569;
		default:
			break;
	}
	return 0;
}

struct<2> func_529(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_530(int iParam0)
{
	if (!func_373(func_372(iParam0), &(Local_829.f_204.f_79[iParam0 /*13*/])))
	{
		MISC::CLEAR_BIT(&(Local_829.f_204.f_106), iParam0);
		return;
	}
	MISC::SET_BIT(&(Local_829.f_204.f_106), iParam0);
}

int func_531(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_329(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_330(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_330(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
	iVar4 = func_330(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] || (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

int func_532(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_329(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_330(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_330(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
	iVar4 = func_330(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] && (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

void func_533(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (func_368(&(Local_60[iParam1 /*24*/].f_12), 1, iParam0))
	{
		if (Local_60[iParam1 /*24*/].f_12.f_8[iParam0] == 0)
		{
			return;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_40.f_1[iParam0]))
		{
			if (Local_13.f_40.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (Local_13.f_40.f_4[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(Local_60[iParam1 /*24*/].f_12.f_8[iParam0], Local_13.f_40.f_4[iParam0]))
		{
			Local_13.f_40.f_1[iParam0] = iVar0;
			Local_13.f_40.f_4[iParam0] = Local_60[iParam1 /*24*/].f_12.f_8[iParam0];
		}
	}
}

void func_534(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_584() - fParam1);
	func_697(uParam0, 1);
	func_698(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_535(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_536(var uParam0)
{
	if (!func_385(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_699(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_584() - uParam0->f_1);
}

void func_537(int iParam0)
{
	int iVar0;

	if (!func_207(&iVar0))
	{
		return;
	}
	func_398(&(Local_60[iVar0 /*24*/].f_12), 3, iParam0);
}

void func_538(int iParam0)
{
}

bool func_539(int iParam0)
{
	return func_368(&(Local_829.f_204.f_75), 7, iParam0);
}

bool func_540(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_6)
	{
		func_542(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_13 = fParam3;
	}
	else
	{
		uParam1->f_13 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1940258.f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1940258.f_24 || Global_1940258.f_25)
		{
			if (!uParam1->f_2 & 2 != 0)
			{
				if (func_555(uParam1, 4000))
				{
					if ((func_556(iParam0, Global_1940258.f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_557(uParam1, iParam0)) && func_558(uParam1, iParam0))
					{
						func_560();
						*uParam2 = 2;
						func_544(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_555(uParam1, 4000))
				{
					if ((func_556(iParam0, Global_1940258.f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_557(uParam1, iParam0)) && func_558(uParam1, iParam0))
					{
						func_560();
						*uParam2 = 2;
						func_544(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940258.f_35 != 0)
			{
				if (Global_1940258.f_34 == 0)
				{
					if (func_559(iParam0, Global_1940258.f_35))
					{
						func_560();
						*uParam2 = 2;
						func_544(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940258.f_36 != 0)
			{
				if (func_563())
				{
					if (func_559(iParam0, Global_1940258.f_36))
					{
						func_560();
						*uParam2 = 2;
						func_544(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940258.f_19)
		{
			if (func_549(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_550(Global_34, iParam0, uParam1))
					{
						func_560();
						*uParam2 = 4;
						func_544(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_551(Global_34, iParam0, uParam1))
					{
						func_560();
						*uParam2 = 256;
						func_544(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_700(iParam0, uParam1))
			{
				func_560();
				*uParam2 = 131072;
				func_544(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_701(iParam0, uParam1))
			{
				func_560();
				*uParam2 = 262144;
				func_544(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_541(int iParam0)
{
	if (iParam0 == 255)
	{
		return false;
	}
	return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam0);
}

void func_542(var uParam0, bool bParam1, int iParam2)
{
	func_702(iParam2);
	if (Global_1572887.f_13 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			return;
		}
		if (Global_1940258.f_6)
		{
			return;
		}
	}
	else
	{
		if (!Global_1296859.f_11)
		{
			return;
		}
		if (Global_1296859.f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_11 = 0;
	}
	uParam0->f_6 = iParam2;
	if (Global_1572887.f_13 == -1)
	{
		uParam0->f_14 = Global_1940258.f_38;
	}
	else
	{
		uParam0->f_14 = func_703(0);
	}
	switch (uParam0->f_7)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_14 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_34))
						{
							func_216(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_704(1, 1))
						{
							func_216(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_34) && (!func_704(1, 1) || *uParam0 & 8192 != 0))
				{
					func_238(uParam0, 33554432);
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
	if (!uParam0->f_2 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
		{
			if (func_705(uParam0))
			{
				uParam0->f_16 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else if (uParam0->f_16 != 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(uParam0->f_16, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_15))
				{
					uParam0->f_15 = 0;
					uParam0->f_16 = 0;
				}
			}
		}
	}
	uParam0->f_7++;
	if (uParam0->f_7 >= 4)
	{
		uParam0->f_7 = 0;
		uParam0->f_8++;
		if (uParam0->f_8 > 4)
		{
			uParam0->f_8 = 0;
		}
	}
	func_706(uParam0);
}

bool func_543(int iParam0, var uParam1)
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
			if (iVar2 == Global_1940258.f_27)
			{
				return false;
			}
			if (iVar2 == Global_1940258.f_26)
			{
				return false;
			}
			if (!func_707(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_708(iParam0, iVar2) <= func_709(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_544(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_710(iParam2, 1, 1, 1, 0))
	{
		func_216(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_711(uParam1, 1);
	func_712();
}

bool func_545(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_713(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_714(uParam1);
			if (func_715(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_3);
				iVar3 = func_716(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_711(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_717(uParam1))
						{
							func_711(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_546(int iParam0, int iParam1, var uParam2)
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
	if (func_718(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_714(uParam2);
		if (func_715(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_3) > func_716(uParam2)
				{
					func_711(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_547(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
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
	if (Global_1940258.f_34 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1940258.f_34, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_707(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_4) > func_716(uParam1)
		{
			fVar3 = func_714(uParam1);
			if (uParam1->f_13 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_548(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_719(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_13 != -1)
	{
		if (iParam0 == Global_1296859.f_10)
		{
			if (!Global_1296859.f_11)
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

bool func_549(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_562();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_550(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_720(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) || Global_1940258.f_40 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) && WEAPON::_0xEA522F991E120D45(Global_1940258.f_40))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) || Global_1940258.f_40 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) && WEAPON::_0x5809DBCA0A37C82B(Global_1940258.f_40)))
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
			if (func_558(uParam2, iParam1))
			{
				func_711(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_551(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_13 < IntToFloat(func_579(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1940258.f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar0))
		{
			if (func_558(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_711(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_552(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_721(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_24))
				{
					func_711(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_30))
				{
					func_711(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_29, &vVar4, 0, 0);
					if (func_722(iParam1, vVar0, vVar4))
					{
						func_711(uParam2, 1);
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_24))
				{
					func_711(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_29, &vVar7, 0, 0);
					if (func_722(iParam1, vVar0, vVar7))
					{
						func_711(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_TOXIC_MOONSHINE_CLOUD"), vVar0, 15f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_TOXIC_MOONSHINE"), vVar0, 15f))
	{
		return true;
	}
	return false;
}

bool func_553(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1940258.f_33)
	{
		if (!func_707(iParam0, uParam1, Global_1940258.f_28[iVar0]) || iParam0 == Global_1940258.f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_723(Global_1940258.f_28[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false), vVar9);
			if (func_724(Global_1940258.f_28[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1940258.f_28[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1940258.f_28[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						uParam1->f_11 = iParam0;
						return true;
					}
				}
			}
			if (func_725(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_726(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_727(uParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_554(int iParam0, var uParam1)
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

bool func_555(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_562();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_556(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1) || DECORATOR::DECOR_EXIST_ON(iParam0, "DamagedByPlayer"))
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
		if (func_728(iVar0, &iVar2))
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
	if (func_729(iVar0, iParam0))
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

int func_557(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_6))
		{
		}
	}
	else if (uParam0->f_6 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_558(var uParam0, int iParam1)
{
	if (func_730(uParam0))
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
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_34) != 0)
	{
		return true;
	}
	if (WEAPON::_0x8D50F43298AB9545(Global_34, iParam1))
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	return false;
}

bool func_559(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_588(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_560()
{
}

bool func_561(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_34);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_731(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_562();
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
						if (func_732(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_10 = func_562();
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

int func_562()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_563()
{
	if (Global_1940258.f_36 == 0)
	{
		return false;
	}
	if (Global_1940258.f_36 == Global_1940258.f_34)
	{
		return false;
	}
	if (Global_1940258.f_37 <= 0)
	{
		return false;
	}
	if ((func_562() - Global_1940258.f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_564(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_709(uParam0);
	if (uParam0->f_13 > func_484(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_733(iParam1);
	iVar1 = func_734(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_34, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_565(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	if (!Global_1940258.f_50)
	{
		return false;
	}
	if (!uParam0->f_1 & 1 != 0)
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (func_412(iVar0, iParam1, 1060437492 /* Float: 0.707f */) != 0)
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar7 = func_735(vVar1, vVar4);
	fVar8 = MISC::ABSF((vVar1.z - vVar4.z));
	if (fVar8 >= 2f)
	{
		return false;
	}
	if (fVar7 > uParam0->f_31)
	{
		return false;
	}
	return true;
}

int func_566(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_736(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_567(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1940258.f_18)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_737(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_34, 1, false) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_34);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true)) || Global_1940258.f_24)
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!func_407(iParam0))
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
			if (func_738(uParam1))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_34)
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
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
				{
					if (!func_739(uParam1, iParam0))
					{
						if (func_732(iVar4, Global_35, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
		case joaat("EVENT_SHOCKING_SEEN_MELEE_ACTION"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (!PED::IS_PED_A_PLAYER(iVar4) || !PED::IS_PED_A_PLAYER(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) || PED::_0x06087579E7AA85A9(iParam0, iVar5, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar5, 17))
				{
					return true;
				}
			}
			EVENT::_0x1A5C5D350068A673(iParam0, 0);
			return false;
	}
	return false;
}

bool func_568(int iParam0, var uParam1)
{
	if (!func_740(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_34, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_569(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_562();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_570(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_571(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_562();
	}
	else if (func_562() - uParam1->f_5) > func_741(uParam1)
	{
		return func_742(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_572(var uParam0, int iParam1)
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
	if (Global_34 == iVar1 || Global_1940258.f_34 == iVar1)
	{
		return true;
	}
	return false;
}

int func_573(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_743(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_744(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_574(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_174(Local_829.f_204.f_2, 4))
	{
		return false;
	}
	if (!MISC::IS_BIT_SET(Local_829.f_204.f_65, iParam0))
	{
		return false;
	}
	MISC::CLEAR_BIT(&(Local_829.f_204.f_65), iParam0);
	if (!bParam3 && Local_60[iParam2 /*24*/].f_12.f_4 == 0)
	{
		return false;
	}
	if (!bParam3 && NETWORK::GET_TIME_DIFFERENCE(Local_60[iParam2 /*24*/].f_12.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 750)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_OCCLUDED(*iParam1))
	{
		return false;
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam1, 17))
	{
		return false;
	}
	iVar0 = func_745(PLAYER::PLAYER_PED_ID(), 0, 1, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0) || !((WEAPON::_0x705BE297EEBDB95D(iVar0) || func_746(iVar0)) || WEAPON::_IS_WEAPON_THROWABLE(iVar0)))
	{
		return false;
	}
	if (WEAPON::_0x79B1A6E780266DB0(PLAYER::PLAYER_PED_ID()) < iParam1->f_2)
	{
		return false;
	}
	return true;
}

void func_575(int* iParam0, var uParam1)
{
	GRAPHICS::GET_SCREEN_RESOLUTION(iParam0, &(iParam0->f_1));
	*iParam0 = (*iParam0 / 2);
	iParam0->f_1 = (iParam0->f_1 / 2);
	iParam0->f_2 = uParam1;
}

Vector3 func_576(int iParam0)
{
	return iParam0->f_6, iParam0->f_7, iParam0->f_8;
}

int func_577(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	vector3 vVar25;
	vector3 vVar28;
	vector3 vVar31;
	int iVar34;
	int iVar35;
	vector3 vVar36;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	int iVar45;
	int iVar46;

	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = 0;
	uParam1->f_3 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return 0;
	}
	MISC::GET_MODEL_DIMENSIONS(iVar0, &vVar1, &vVar4);
	vVar7 = { vVar4 - vVar1 * Vector(0.5f, 0.5f, 0.5f) };
	if (bParam8)
	{
		vVar7.x = ((func_747(iParam0) * 0.5f) + vParam5.x);
		vVar7.f_1 = ((func_748(iParam0) * 0.5f) + vParam5.y);
		vVar7.f_2 = ((func_749(iParam0) * 0.5f) + vParam5.z);
	}
	vVar10 = { func_751(func_750(CAM::GET_RENDERING_CAM())) };
	vVar13 = { func_752(vVar10, 0f, 0f, 1f) };
	vVar16 = { func_752(vVar13, vVar10) };
	vVar19 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + vParam2 };
	vVar22 = { vVar19 - vVar7 * vVar13 + vVar7 * vVar16 };
	vVar25 = { vVar19 + vVar7 * vVar13 + vVar7 * vVar16 };
	vVar28 = { vVar19 - vVar7 * vVar13 - vVar7 * vVar16 };
	vVar31 = { vVar19 + vVar7 * vVar13 - vVar7 * vVar16 };
	GRAPHICS::GET_SCREEN_RESOLUTION(&iVar34, &iVar35);
	vVar36 = { BUILTIN::TO_FLOAT(iVar34), BUILTIN::TO_FLOAT(iVar35), 0f };
	bVar39 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar19, &vVar19, &(vVar19.f_1));
	bVar40 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar22, &vVar22, &(vVar22.f_1));
	bVar41 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar25, &vVar25, &(vVar25.f_1));
	bVar42 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar28, &vVar28, &(vVar28.f_1));
	bVar43 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar31, &vVar31, &(vVar31.f_1));
	bVar44 = (((bVar40 || bVar41) || bVar42) || bVar43);
	if (bVar39)
	{
		vVar19 = { vVar19 * vVar36 };
	}
	if (bVar40)
	{
		vVar22 = { vVar22 * vVar36 };
	}
	if (bVar41)
	{
		vVar25 = { vVar25 * vVar36 };
	}
	if (bVar42)
	{
		vVar28 = { vVar28 * vVar36 };
	}
	if (bVar43)
	{
		vVar31 = { vVar31 * vVar36 };
	}
	iVar45 = (iParam9 / 2);
	iVar46 = (iParam10 / 2);
	if (!bVar39 && !bVar44)
	{
		return 0;
	}
	else if (bVar39 && !bVar44)
	{
		*uParam1 = 0;
		uParam1->f_1 = 0;
		uParam1->f_2 = iVar34;
		uParam1->f_3 = iVar35;
	}
	else if (!bVar44)
	{
		return 0;
	}
	else if (bVar40)
	{
		if (!bVar41)
		{
			uParam1->f_2 = (iParam9 + (iVar34 - BUILTIN::FLOOR(vVar22.x)));
		}
		else
		{
			uParam1->f_2 = (iParam9 + BUILTIN::FLOOR((func_753((!bVar43 || vVar25.x < vVar31.x), vVar25.x, vVar31.x) - vVar22.x)));
		}
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			return 0;
		}
		if (bVar42)
		{
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_753((!bVar43 || vVar28.y > vVar31.y), vVar28.y, vVar31.y) - vVar22.y)));
		}
		else
		{
			uParam1->f_3 = (iParam10 + (iVar35 - BUILTIN::FLOOR(vVar22.y)));
		}
		if (uParam1->f_3 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
		*uParam1 = (BUILTIN::FLOOR(vVar22.x) - iVar45);
		uParam1->f_1 = (BUILTIN::FLOOR(vVar22.y) - iVar46);
	}
	else if (bVar41)
	{
		if (bVar43)
		{
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_753(vVar28.y > vVar31.y, vVar28.y, vVar31.y) - vVar25.y)));
		}
		else
		{
			uParam1->f_3 = (iParam10 + (iVar35 - BUILTIN::FLOOR(vVar25.y)));
		}
		if (uParam1->f_3 < 1)
		{
			uParam1->f_3 = 0;
			return 0;
		}
		uParam1->f_2 = (iParam9 + BUILTIN::FLOOR(func_753((!bVar43 || vVar25.x > vVar31.x), vVar25.x, vVar31.x)));
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
		*uParam1 = 0;
		uParam1->f_1 = (BUILTIN::FLOOR(vVar25.y) - iVar46);
	}
	else if (bVar42)
	{
		if (bVar43)
		{
			uParam1->f_2 = (iParam9 + BUILTIN::FLOOR((vVar31.x - vVar28.x)));
			if (uParam1->f_2 < 1)
			{
				uParam1->f_2 = 0;
				return 0;
			}
		}
		else
		{
			uParam1->f_2 = (iParam9 + (iVar34 - BUILTIN::FLOOR(vVar28.x)));
			if (uParam1->f_2 < 1)
			{
				uParam1->f_2 = 0;
				return 0;
			}
		}
		uParam1->f_3 = (iParam10 + BUILTIN::FLOOR(vVar28.y));
		if (uParam1->f_3 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
		*uParam1 = (BUILTIN::FLOOR(vVar28.x) - iVar45);
		uParam1->f_1 = 0;
	}
	else if (bVar43)
	{
		*uParam1 = 0;
		uParam1->f_1 = 0;
		uParam1->f_2 = (iParam9 + BUILTIN::FLOOR(vVar31.x));
		uParam1->f_3 = (iParam10 + BUILTIN::FLOOR(vVar28.y));
		if (uParam1->f_2 < 1 || uParam1->f_3 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_578(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = (uParam1->f_2 / 2);
	iVar1 = (uParam1->f_3 / 2);
	iVar2 = (*uParam1 + iVar0);
	iVar3 = (uParam1->f_1 + iVar1);
	iVar4 = MISC::ABSI((*iParam0 - iVar2));
	iVar5 = MISC::ABSI((iParam0->f_1 - iVar3));
	if (iVar4 > (iVar0 + iParam0->f_2) || iVar5 > (iVar1 + iParam0->f_2))
	{
		return 0;
	}
	if (iVar4 <= iVar0 || iVar5 <= iVar1)
	{
		return 1;
	}
	iVar6 = (iVar4 - iVar0);
	iVar7 = (iVar5 - iVar1);
	iVar6 = (iVar6 * iVar6);
	iVar7 = (iVar7 * iVar7);
	if (iVar6 + iVar7) <= (iParam0->f_2 * iParam0->f_2)
	{
		return 1;
	}
	return 0;
}

int func_579(var uParam0)
{
	return uParam0->f_23;
}

bool func_580(var uParam0)
{
	return func_452(uParam0, 1);
}

float func_581(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_582(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_583(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_582(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_584() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_584()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_585(int iParam0)
{
	return func_754(iParam0);
}

bool func_586(int iParam0)
{
	var uVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Local_829.f_163.f_7[iParam0 /*11*/]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_829.f_163.f_7[iParam0 /*11*/]))
		{
			uVar0 = Local_829.f_163.f_7[iParam0 /*11*/];
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uVar0);
			return true;
		}
	}
	return false;
}

void func_587(var uParam0, var uParam1)
{
	switch (uParam0->f_4)
	{
		case 1:
			func_755(uParam0, uParam1);
			break;
		case 2:
			func_756(uParam0, uParam1);
			break;
	}
}

float func_588(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_589()
{
	return false;
}

void func_590(int iParam0)
{
	MAP::ALLOW_SONAR_BLIPS(true);
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	MAP::_TRIGGER_SONAR_BLIP_2(1231752879, iParam0);
}

void func_591(int iParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("rdro_boost_animal_scene"))
	{
		AUDIO::START_AUDIO_SCENE("rdro_boost_animal_scene");
	}
	if (AUDIO::_0x8B25A18E390F75BF(iParam0) != joaat("RDRO_TARGET_ANIMAL_GROUP"))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam0, "rdro_target_animal_group", 0f);
	}
}

void func_592(int iParam0, int iParam1)
{
	struct<6> Var0;
	var uVar6;

	Var0 = 194;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var0.f_4 = iParam0;
	if (iParam0 == 2)
	{
		if (iParam1 == 0 || !ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			return;
		}
		if (((!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam1, false) || !NETWORK::_0xB07D3185E11657A5(iParam1)) || !NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam1)) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(NETWORK::PED_TO_NET(iParam1)))
		{
			return;
		}
		Var0.f_5 = NETWORK::PED_TO_NET(iParam1);
	}
	uVar6 = func_510(0, 8);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, 42, &uVar6);
}

void func_593(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_594()
{
	return func_601(2, -1);
}

bool func_595(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_226(iParam0);
	if ((MISC::GET_FRAME_COUNT() % iParam5) != iParam6)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return false;
	}
	if (!func_453(Global_34, iVar0, fParam3, 1, 1))
	{
		return false;
	}
	if (func_642(iVar0))
	{
		return false;
	}
	if (!PED::_0x5102307CE88798EB(iVar0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		return false;
	}
	if (bParam7)
	{
		if (func_757(PLAYER::PLAYER_ID(), iVar0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iVar0))
		{
			return true;
		}
	}
	bVar1 = false;
	if (func_453(Global_34, iVar0, fParam1, 1, 1))
	{
		bVar1 = true;
	}
	else if (func_453(Global_34, iVar0, fParam2, 1, 1) && PED::IS_TRACKED_PED_VISIBLE(iVar0))
	{
		bVar1 = true;
	}
	else if ((func_453(Global_34, iVar0, fParam3, 1, 1) && func_758()) && PED::IS_TRACKED_PED_VISIBLE(iVar0))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (!func_385(&(Local_829.f_53.f_3[iParam0 /*3*/])))
		{
			func_622(&(Local_829.f_53.f_3[iParam0 /*3*/]), 0);
		}
		else if (func_536(&(Local_829.f_53.f_3[iParam0 /*3*/])) > fParam4)
		{
			return true;
		}
	}
	else if (func_385(&(Local_829.f_53.f_3[iParam0 /*3*/])))
	{
		func_387(&(Local_829.f_53.f_3[iParam0 /*3*/]));
	}
	return false;
}

void func_596()
{
	func_612(2);
}

bool func_597(int iParam0, var uParam1)
{
	float fVar0;

	fVar0 = 5f;
	if (func_754(iParam0))
	{
		fVar0 = func_759(iParam0);
	}
	if (func_453(Global_34, iParam0, fVar0, 1, 1))
	{
		uParam1->f_32 = 262144;
		return true;
	}
	if (!func_385(&(uParam1->f_35)))
	{
		if (PED::_0xD55DB4466D00A258(iParam0))
		{
			func_622(&(uParam1->f_35), 0);
		}
	}
	else if (func_536(&(uParam1->f_35)) > 2.5f)
	{
		uParam1->f_32 = 262144;
		return true;
	}
	if (func_540(iParam0, uParam1, &(uParam1->f_32), 0))
	{
		return true;
	}
	return false;
}

bool func_598(int iParam0, var uParam1, bool bParam2)
{
	if (func_411(iParam0, 0, uParam1, &(uParam1->f_33), 0, 0))
	{
		return true;
	}
	if (Global_1940258.f_19 && !uParam1->f_2 & 4 != 0)
	{
		if (((func_453(Global_34, iParam0, WEAPON::_0x79B1A6E780266DB0(Global_34), 1, 1) && PED::_0x285D36C5C72B0569(Global_34) <= 0.5f) && func_760(iParam0, 0.45f, 0.55f, 0.45f, 0.55f)) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			uParam1->f_33 = 4;
			return true;
		}
	}
	if (bParam2 && func_453(Global_34, iParam0, 7f, 1, 1))
	{
		uParam1->f_33 = 65536;
		return true;
	}
	return false;
}

void func_599()
{
	Local_829.f_25.f_20 = PLAYER::PLAYER_ID();
	func_612(4);
}

void func_600(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_498(uParam1->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 580, true))
	{
		return;
	}
	bVar2 = false;
	bVar3 = false;
	if ((uParam1->f_20 == 255 || func_761(uParam0, 1)) || bParam2)
	{
		iVar1 = func_507(iVar0);
		if (!func_453(iVar1, iVar0, 100f, 1, 1))
		{
			bVar2 = true;
		}
	}
	else
	{
		iVar1 = PLAYER::GET_PLAYER_PED(uParam1->f_20);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		bVar2 = true;
		bVar3 = true;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
	{
		if (uParam0->f_1 == 0)
		{
			PED::_0xEEED8FAFEC331A70(iVar0, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 3);
		}
		else
		{
			PED::_0x463803429297117C(iVar0, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 3, 1);
		}
	}
	if (bVar2)
	{
		if ((!PED::IS_PED_FLEEING(iVar0) || !func_616(iVar0, 518218985)) || bParam3)
		{
			if (func_505(uParam1, 16))
			{
				iVar4 |= 67108864;
			}
			if (bVar3)
			{
				TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 0, iVar4, 500f, -1, 0);
			}
			else
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, iVar1, 3, iVar4, -1082130432 /* Float: -1f */, -1, 0);
			}
			func_612(8);
		}
		return;
	}
	switch (uParam0->f_1)
	{
		case 1:
			if ((!PED::IS_PED_IN_COMBAT(iVar0, 0) || !func_616(iVar0, 780511057)) || bParam3)
			{
				TASK::TASK_COMBAT_PED(iVar0, iVar1, 0, 0);
				func_612(8);
			}
			break;
		case 0:
			if ((!PED::IS_PED_FLEEING(iVar0) || !func_616(iVar0, 518218985)) || bParam3)
			{
				if (func_505(uParam1, 16))
				{
					iVar5 |= 67108864;
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, iVar1, 3, iVar5, 400f, -1, 0);
				func_612(8);
			}
			break;
		default:
			break;
	}
}

bool func_601(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (!func_467(iParam1, 0, 1))
	{
		return false;
	}
	return func_215(Local_60[iParam1 /*24*/].f_5, iParam0);
}

bool func_602(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 1:
			return (func_616(iParam1, 780511057) || PED::IS_PED_IN_COMBAT(iParam1, 0));
		case 0:
			return (func_616(iParam1, 518218985) || PED::IS_PED_FLEEING(iParam1));
	}
	return false;
}

void func_603(var uParam0)
{
}

void func_604(var uParam0, int iParam1)
{
	func_240(&(uParam0->f_21), iParam1);
}

void func_605(var uParam0, var uParam1)
{
}

void func_606(var uParam0)
{
	if (func_452(uParam0, 1))
	{
		return;
	}
	func_641();
	func_367(uParam0, 1);
}

void func_607(var uParam0)
{
	if (func_452(uParam0, 2))
	{
		return;
	}
	func_623(1);
	func_367(uParam0, 2);
}

void func_608(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_468(255))
	{
		return;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		iVar0 = Local_829.f_163.f_7[iVar2 /*11*/];
		if (((iVar2 != uParam1->f_1 && iVar2 != uParam1->f_2) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			switch (uParam0->f_1)
			{
				case 1:
					if (func_602(uParam0, iVar0))
					{
						iVar1 = 1;
					}
					else
					{
						iVar1 = 0;
					}
					break;
				case 0:
					iVar1 = 0;
					break;
			}
			if (iVar1 == 1 && func_453(iVar0, Global_34, uParam2->f_16, 1, 1))
			{
				if (!MAP::_DOES_ENTITY_HAVE_BLIP(iVar0) && ENTITY::IS_ENTITY_VISIBLE(iVar0))
				{
					MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iVar0);
				}
			}
			else if (!func_453(iVar0, Global_34, uParam2->f_20, 1, 1) || iVar1 == 0)
			{
				if (MAP::_DOES_ENTITY_HAVE_BLIP(iVar0))
				{
					func_762(iVar0);
				}
			}
		}
		iVar2++;
	}
}

void func_609(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 <= 1)
	{
		iVar0 = Local_829.f_163.f_7[iVar2 /*11*/];
		if ((((((iVar2 != uParam1->f_1 && iVar2 != uParam1->f_2) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !func_602(uParam0, iVar0))
		{
			switch (uParam0->f_1)
			{
				case 1:
					TASK::TASK_COMBAT_PED(iVar0, PLAYER::GET_PLAYER_PED(uParam1->f_20), 0, 0);
					break;
				case 0:
					iVar1 = 0;
					if (func_505(uParam1, 16))
					{
						iVar1 |= 67108864;
					}
					TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, PLAYER::GET_PLAYER_PED(uParam1->f_20), 3, iVar1, -1082130432 /* Float: -1f */, -1, 0);
					break;
			}
		}
		iVar2++;
	}
}

void func_610(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 1)
	{
		iVar0 = Local_829.f_163.f_7[iVar1 /*11*/];
		if ((((((iVar1 != uParam0->f_1 && iVar1 != uParam0->f_2) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && PED::_0x268B3AEBF032A88D(iVar0))
		{
			TASK::TASK_WANDER_IN_AREA(iVar0, Local_829.f_163.f_7[uParam0->f_1 /*11*/].f_6, uParam0->f_27, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
			PED::SET_PED_KEEP_TASK(iVar0, true);
			if (Local_13.f_7.f_1 == 1)
			{
				FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 74, 1f);
			}
			else
			{
				FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 74, 0f);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
		}
		iVar1++;
	}
}

void func_611(int iParam0)
{
	MISC::SET_BIT(&(Local_829.f_53.f_44), iParam0);
}

void func_612(int iParam0)
{
	if (!func_467(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_240(&(Local_60[NETWORK::PARTICIPANT_ID_TO_INT() /*24*/].f_5), iParam0);
}

int func_613(var uParam0)
{
	return 0;
}

void func_614(var uParam0)
{
}

void func_615()
{
}

bool func_616(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_617(int iParam0)
{
	if (!func_467(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_241(&(Local_60[NETWORK::PARTICIPANT_ID_TO_INT() /*24*/].f_5), iParam0);
}

bool func_618(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (!func_467(iParam1, 0, 1))
	{
		return false;
	}
	return func_215(Local_60[iParam1 /*24*/].f_1, iParam0);
}

bool func_619(int iParam0)
{
	return func_215(Local_829.f_53.f_46, iParam0);
}

void func_620(int iParam0)
{
	if (!func_467(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_241(&(Local_60[NETWORK::PARTICIPANT_ID_TO_INT() /*24*/].f_1), iParam0);
}

int func_621(int iParam0, int iParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;

	if (!func_453(iParam0, iParam1, 50f, 1, 1))
	{
		return 2;
	}
	if (!func_385(uParam2))
	{
		func_384(uParam2);
		*uParam3 = 0;
		return 2;
	}
	else if (func_536(uParam2) > 4f)
	{
		if (*uParam3 == 0)
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
			vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
			*uParam3 = PATHFIND::_0x348F211CA2404039(iParam0, vVar0, vVar3, 29);
			if (*uParam3 == -1)
			{
				func_384(uParam2);
				*uParam3 = 0;
				return 2;
			}
		}
		if (PATHFIND::_0x3A0F82F6EE2291C8(*uParam3) == 1)
		{
			func_384(uParam2);
			if (PATHFIND::_0x8800776E410EB669(*uParam3))
			{
				vVar6 = { PATHFIND::_0x430F8319AE56C8A9(*uParam3, (PATHFIND::_0xD470725E0703D22F(*uParam3) - 1)) };
				fVar9 = FLOCK::GET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 164);
				fVar10 = (Global_35.f_2 - 1f);
				if ((vVar6.z + fVar9) < fVar10)
				{
					PATHFIND::_0x661BB1E1FF77742D(*uParam3);
					*uParam3 = 0;
					return 1;
				}
				else
				{
					PATHFIND::_0x661BB1E1FF77742D(*uParam3);
					*uParam3 = 0;
					return 0;
				}
			}
			else
			{
				PATHFIND::_0x661BB1E1FF77742D(*uParam3);
				*uParam3 = 0;
				return 1;
			}
		}
	}
	return 2;
}

void func_622(var uParam0, bool bParam1)
{
	if (bParam1 || !func_385(uParam0))
	{
		func_384(uParam0);
	}
}

void func_623(int iParam0)
{
	if (!func_467(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_240(&(Local_60[NETWORK::PARTICIPANT_ID_TO_INT() /*24*/].f_1), iParam0);
}

void func_624()
{
	if (func_452(&(Local_829.f_53), 256))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_829.f_53))
	{
		return;
	}
	func_763(Local_829.f_53);
	func_367(&(Local_829.f_53), 256);
}

void func_625()
{
	if (!func_452(&(Local_829.f_53), 256))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_829.f_53))
	{
		func_369(&(Local_829.f_53), 256);
		return;
	}
	func_764(Local_829.f_53);
	func_369(&(Local_829.f_53), 256);
}

bool func_626()
{
	return func_619(1);
}

bool func_627(var uParam0)
{
	return AUDIO::_0xD9130842D7226045(&(uParam0->f_25), 0);
}

bool func_628(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (bParam4 * bParam4))
		{
			return true;
		}
	}
	else if (func_665(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (bParam4 * bParam4))
	{
		return true;
	}
	return false;
}

void func_629(var uParam0, int iParam1)
{
	if (uParam0->f_38 == iParam1)
	{
		return;
	}
	uParam0->f_38 = iParam1;
}

Vector3 func_630(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;

	fVar3 = (fParam3 * fParam3);
	iVar5 = 0;
	while (iVar5 < 10)
	{
		vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), 0f };
		if (((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= fVar3)
		{
			fVar4 = (fParam4 / 2f);
			vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar4, fVar4);
			return vParam0 + vVar0;
		}
		iVar5++;
	}
	return func_765(vParam0, fParam3, fParam4);
}

void func_631(vector3 vParam0, int iParam3)
{
	MAP::ALLOW_SONAR_BLIPS(true);
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	MAP::TRIGGER_SONAR_BLIP(iParam3, vParam0);
}

void func_632()
{
}

void func_633(var uParam0, vector3 vParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_25)))
	{
		return;
	}
	AUDIO::_PLAY_SOUND_FROM_POSITION("CALL", vParam1, &(uParam0->f_25), false, 0, true, 0);
}

int func_634(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	iVar2 = iParam0;
	while (iVar2 <= iParam1)
	{
		iVar1 = func_766(iVar2);
		if (iVar1 >= 0)
		{
			iVar0 = (iVar0 + iVar1);
		}
		iVar2++;
	}
	return iVar0;
}

bool func_635(var uParam0)
{
	return func_535(*uParam0, 1);
}

void func_636(int iParam0, var uParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!func_635(uParam1))
		{
			if (bParam2)
			{
				func_767(uParam1, 0);
			}
		}
		else
		{
			uParam1->f_3 = (func_506(uParam1) * Global_1901947.f_852.f_8);
			if (uParam1->f_3 > 1f)
			{
				uParam1->f_3 = 1f;
			}
		}
	}
	if ((((!ENTITY::IS_ENTITY_DEAD(iParam0) && func_635(uParam1)) && !PED::GET_PED_CONFIG_FLAG(iParam0, 580, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) && (MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (!PED::_0x33FA048675821DA7(iParam0, 5))
		{
			PED::_0x2EB75FB86C41F026(iParam0, 5, 1);
		}
		PED::_0x06D26A96CA1BCA75(iParam0, 5, uParam1->f_3, 0);
	}
}

void func_637(var uParam0, int iParam1)
{
	if (uParam0->f_2 == iParam1)
	{
		return;
	}
	uParam0->f_2 = iParam1;
}

bool func_638(var uParam0)
{
	return func_452(uParam0, 2);
}

bool func_639()
{
	return func_66(2);
}

void func_640()
{
	int iVar0;

	if (!func_126(32, 255))
	{
		func_768(Local_829.f_1, Local_829.f_3);
		if (!func_126(1024, 255))
		{
			func_769(Local_829.f_1);
			func_143(1024);
		}
		iVar0 = func_300(Local_829.f_1, Local_829.f_2);
		func_770(iVar0);
		func_771(iVar0);
		func_141(2);
		func_772(Local_829.f_9);
		func_773(Local_829.f_1);
		func_774(Local_829.f_1, Local_829.f_2, Local_829.f_3);
		func_143(32);
	}
}

void func_641()
{
	if (!func_66(2))
	{
		return;
	}
	func_141(8);
}

bool func_642(int iParam0)
{
	return !ENTITY::IS_ENTITY_VISIBLE(iParam0);
}

bool func_643(var uParam0)
{
	return func_628(Global_34, uParam0->f_33, uParam0->f_15, 1, !func_775(uParam0));
}

int func_644()
{
	return -108658760;
}

void func_645(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!MAP::DOES_BLIP_EXIST(*uParam1))
	{
		*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(func_776(), iParam0);
		MAP::SET_BLIP_SPRITE(*uParam1, joaat("BLIP_ANIMAL"), false);
		MAP::_BLIP_SET_MODIFIER(*uParam1, joaat("BLIP_MODIFIER_LEGENDARY"));
		if (bParam2)
		{
			MAP::_BLIP_SET_MODIFIER(*uParam1, -1445216292);
		}
		if (bParam3)
		{
			MAP::_BLIP_SET_MODIFIER(*uParam1, -1654168258);
		}
		MAP::_BLIP_SET_MODIFIER(*uParam1, 847579139);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, func_777(func_361(ENTITY::GET_ENTITY_MODEL(iParam0))));
	}
}

void func_646(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_385(uParam0))
	{
		func_534(uParam0, fParam1);
	}
}

void func_647(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(*uParam0))
	{
		MAP::_BLIP_REMOVE_MODIFIER(*uParam0, -1833912565);
		MAP::_BLIP_SET_MODIFIER(*uParam0, 197772266);
	}
}

void func_648(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(*uParam0))
	{
		MAP::_BLIP_REMOVE_MODIFIER(*uParam0, 197772266);
		MAP::_BLIP_SET_MODIFIER(*uParam0, -1833912565);
	}
}

void func_649(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(*uParam0))
	{
		MAP::_BLIP_REMOVE_MODIFIER(*uParam0, 197772266);
	}
}

void func_650(int iParam0, int iParam1)
{
	MAP::ALLOW_SONAR_BLIPS(true);
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	MAP::_TRIGGER_SONAR_BLIP_2(iParam1, iParam0);
}

void func_651()
{
	struct<15> Var0;

	Var0 = { func_778(-922869466) };
	func_779(&Var0);
}

void func_652(int iParam0)
{
	func_240(&(Local_829.f_145), iParam0);
}

void func_653()
{
	struct<15> Var0;

	Var0 = { func_778(2126697993) };
	func_779(&Var0);
}

void func_654(int iParam0)
{
	if (!func_467(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_240(&(Local_60[NETWORK::PARTICIPANT_ID_TO_INT() /*24*/].f_4), iParam0);
}

int func_655(int iParam0)
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
	if (PED::_0x4642182A298187D0(iParam0, -1, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 2, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 4, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 5, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 10, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 1, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

void func_656()
{
	struct<15> Var0;

	Var0 = { func_778(-1485898032) };
	func_779(&Var0);
}

bool func_657(int iParam0)
{
	return func_215(Local_829.f_145.f_2, iParam0);
}

bool func_658(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_829.f_163.f_7[iParam0 /*11*/]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_829.f_163.f_7[iParam0 /*11*/]))
		{
			PED::DELETE_PED(&(Local_829.f_163.f_7[iParam0 /*11*/]));
			Local_829.f_163.f_7[iParam0 /*11*/] = 0;
			return true;
		}
	}
	return false;
}

void func_659(int iParam0)
{
	if (!func_467(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_241(&(Local_60[NETWORK::PARTICIPANT_ID_TO_INT() /*24*/].f_4), iParam0);
}

bool func_660(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;

	if (bParam3)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (Global_1298536[iVar0 /*87*/].f_1 == -1)
	{
		return false;
	}
	*uParam1 = Global_1298536[iVar0 /*87*/].f_1;
	*uParam2 = Global_1298536[iVar0 /*87*/].f_3;
	return true;
}

bool func_661()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	return false;
}

bool func_662(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_829.f_19.f_1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (MISC::IS_BIT_SET(Local_829.f_19, iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
			{
				if (func_780(Local_829.f_19.f_1, (*iParam0)[iVar0]))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_663()
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::PLAYER_ID());
	if (iVar0 == 255 || !NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return false;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return false;
	}
	if (Local_60[iVar1 /*24*/].f_2.f_1 != 0)
	{
	}
	Local_60[iVar1 /*24*/].f_2.f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return true;
}

void func_664(int iParam0)
{
	func_216(&(Local_829.f_155.f_2), iParam0);
}

float func_665(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_666(int iParam0, int iParam1)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_667(iParam0, iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	return iVar1;
}

char* func_667(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_ALLIGATOR_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_ALLIGATOR_02";
					break;
				case 2:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BEAR_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BEAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BEAVER_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BEAVER_02";
					break;
				case 2:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BISON_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BISON_02";
					break;
				case 2:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BOAR_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BOAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BUCK_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BUCK_02";
					break;
				case 2:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_COUGAR_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_COUGAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_PANTHER_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_PANTHER_02";
					break;
				case 2:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_COYOTE_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_COYOTE_02";
					break;
				case 2:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_FOX_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_FOX_02";
					break;
				case 2:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_MOOSE_02";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_MOOSE_01";
					break;
				case 2:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BIG_HORN_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BIG_HORN_02";
					break;
				case 2:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_WOLF_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_WOLF_02";
					break;
				case 2:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_ELK_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_ELK_02";
					break;
				case 2:
					break;
			}
			break;
	}
	return sVar0;
}

Vector3 func_668(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_669(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_829.f_163.f_7[iParam0 /*11*/]))
		{
			return 255;
		}
	}
	iVar1 = -1;
	bVar2 = fParam1 > 0f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
		{
		}
		else if (Local_60[iVar0 /*24*/].f_7.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam3 && !func_468(iVar0))
		{
		}
		else if (iVar1 != -1 && Local_60[iVar0 /*24*/].f_7.f_2[iParam0] > Local_60[iVar1 /*24*/].f_7.f_2[iParam0])
		{
		}
		else if (bVar2 && Local_60[iVar0 /*24*/].f_7.f_2[iParam0] > fParam1)
		{
		}
		else
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
	}
	return 255;
}

bool func_670(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("WORLD_ANIMAL_DEER_GRAZING");
			break;
		case 1:
			*iParam1 = joaat("WORLD_ANIMAL_DEER_GRAZING");
			break;
		case 2:
			*iParam1 = joaat("WORLD_ANIMAL_DEER_RESTING");
			break;
	}
	return *iParam1 != 0;
}

char* func_671()
{
	switch (func_332())
	{
		case 1:
			return "pbl_action";
		case 2:
			return "pbl_action";
		default:
			break;
	}
	return "";
}

bool func_672(int iParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iParam0))
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
		{
			return false;
		}
		if (bParam2)
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1))
			{
				return false;
			}
		}
		return true;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
		}
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		if (bParam2)
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
				return false;
			}
		}
		return true;
	}
	return false;
}

bool func_673(int iParam0)
{
	if (!ENTITY::_0x0B7CB1300CBFE19C(func_226(iParam0), 1) || ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_829.f_155.f_6) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_829.f_155.f_6, false)) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_829.f_155.f_6, func_513(iParam0))))
	{
		return false;
	}
	return ANIMSCENE::_GET_ANIM_SCENE_PED(Local_829.f_155.f_6, func_513(iParam0), false) == func_226(iParam0);
}

void func_674(bool bParam0)
{
	if (!bParam0)
	{
		return;
	}
	if (func_211() != 0)
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_829.f_155.f_6))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_829.f_155.f_6, false))
	{
		return;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_829.f_155.f_6))
	{
		return;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_PED(Local_829.f_155.f_6, func_513(1), false) == func_226(1))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_829.f_155.f_6, func_513(1), func_226(1));
	}
}

bool func_675(int iParam0)
{
	int iVar0;

	if (iParam0 >= 100)
	{
		return true;
	}
	iVar0 = (1 + MISC::GET_RANDOM_INT_IN_RANGE(0, 100));
	return iVar0 <= iParam0;
}

bool func_676(int iParam0)
{
	*iParam0 = func_669(0, 30f, 1, 0);
	return NETWORK::NETWORK_IS_PLAYER_ACTIVE(*iParam0);
}

bool func_677(struct<2> Param0, var uParam2)
{
	if (!func_38(Param0))
	{
		return false;
	}
	func_781(uParam2);
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

int func_678()
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

void func_679(var uParam0, var uParam1)
{
}

bool func_680(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_681(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

void func_682(var uParam0)
{
}

void func_683(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_697(uParam0, 1);
	func_698(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_684(var uParam0)
{
	if (!func_635(uParam0))
	{
		return 0;
	}
	if (func_782(uParam0))
	{
		return uParam0->f_2;
	}
	return func_783(uParam0->f_1);
}

int func_685(int iParam0)
{
	return func_784(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1203982208 /* Float: 99999f */, 1, 1);
}

var func_686(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_785() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_786());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_786());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_786());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_787(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_788(iVar2))
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
				if (iVar9 & 8192 != 0 && func_789(iVar2) != 1)
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
					if (!func_790(iVar10))
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

int func_687(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1718188498;
		case 1:
			return -1718188498;
		case 2:
			return -1754709769;
		case 3:
			return -1718188498;
		case 4:
			return 986272521;
		case 5:
			return 986272521;
		case 6:
			return 986272521;
		case 7:
			return 986272521;
		case 8:
			return 916613222;
		case 9:
			return 916613222;
		case 10:
			return -1718188498;
		case 11:
			return 986272521;
		case 12:
			return 986272521;
		case 13:
			return -1718188498;
		default:
			break;
	}
	return 0;
}

void func_688(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	FLOCK::_0x8B6F0F59B1B99801(iParam0, 2);
	PED::_0x992187D975635DF5(iParam0, 283549708);
	PED::_0x0B787A37EEDD226F(iParam0, iParam1);
	PED::_0x6569F31A01B4C097(iParam0, 10, 1);
	ENTITY::_0x18FF3110CF47115D(iParam0, 23, 1);
	PED::_0xAE6004120C18DF97(iParam0, 10, 1);
	PED::_0xAE6004120C18DF97(iParam0, 1, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 542, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 15, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 529, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 370, true);
	ENTITY::_0x4B436BAC8CBE9B07(iParam0, 1, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 588, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 568, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 585, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 583, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 305, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 306, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 186, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 465, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 388, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 587, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 76, true);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 81, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 82, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 85, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 83, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 84, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 89, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 90, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 105, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 106, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 78, 20f);
	PED::SET_PED_HEARING_RANGE(iParam0, 20f);
	if (iParam2 != -1)
	{
		iVar0 = func_361(ENTITY::GET_ENTITY_MODEL(iParam0));
		iVar1 = func_791(iVar0, iParam2);
		ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, iVar1);
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar1, 0);
	}
}

void func_689(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 78, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 58, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 512, true);
	PED::_0xC163DAC52AC975D3(iParam0, 16);
}

int func_690(int iParam0)
{
	if (!func_349(iParam0))
	{
		return 0;
	}
	return NETWORK::GET_TIME_DIFFERENCE(Local_13.f_24.f_7[iParam0], NETWORK::GET_NETWORK_TIME_ACCURATE());
}

bool func_691()
{
	return func_66(32);
}

void func_692(bool bParam0)
{
	if (!func_66(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_66(256))
		{
			func_173(Local_829.f_18, 0);
			func_141(256);
		}
	}
	func_141(32);
}

bool func_693()
{
	return func_66(16);
}

void func_694(bool bParam0)
{
	if (!func_66(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_66(256))
		{
			func_173(Local_829.f_18, 0);
			func_141(256);
		}
	}
	func_141(16);
}

float func_695(float fParam0, float fParam1, float fParam2)
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

char* func_696(int iParam0)
{
	switch (func_361(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		case 0:
			return "LEGENDARY_ALLIGATOR_CALL_SOUNDS";
		case 1:
			return "LEGENDARY_BEAR_CALL_SOUNDS";
		case 2:
			return "LEGENDARY_BEAVER_CALL_SOUNDS";
		case 3:
			return "LEGENDARY_BISON_CALL_SOUNDS";
		case 4:
			return "LEGENDARY_BOAR_CALL_SOUNDS";
		case 5:
			return "LEGENDARY_BUCK_CALL_SOUNDS";
		case 6:
			return "LEGENDARY_COUGAR_CALL_SOUNDS";
		case 7:
			return "LEGENDARY_PANTHER_CALL_SOUNDS";
		case 8:
			return "LEGENDARY_COYOTE_CALL_SOUNDS";
		case 9:
			return "LEGENDARY_FOX_CALL_SOUNDS";
		case 10:
			return "LEGENDARY_MOOSE_CALL_SOUNDS";
		case 11:
			return "LEGENDARY_RAM_CALL_SOUNDS";
		case 12:
			return "LEGENDARY_WOLF_CALL_SOUNDS";
		case 13:
			return "LEGENDARY_ELK_CALL_SOUNDS";
		default:
			break;
	}
	return "";
}

void func_697(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_698(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_699(var uParam0)
{
	return func_535(*uParam0, 2);
}

bool func_700(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;

	fVar0 = func_792(uParam1);
	if (uParam1->f_13 > (fVar0 + 5f))
	{
		return false;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (uParam1->f_13 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_793(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		bVar3 = uParam1->f_1 & 2 != false;
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_34, 1, bVar3) == 1)
		{
			return true;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_38))
		{
			if (WEAPON::_IS_WEAPON_LANTERN(Global_1940258.f_38) || WEAPON::_IS_WEAPON_TORCH(Global_1940258.f_38))
			{
				if (uParam1->f_13 <= 5f)
				{
					if (func_794())
					{
						if (PED::IS_PED_FACING_PED(Global_34, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_701(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_795(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::_GET_PED_CROUCH_MOVEMENT(Global_34) || PED::IS_PED_IN_COVER(Global_34, false, false)) || PED::IS_PED_GOING_INTO_COVER(Global_34)) || *uParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_34, iParam0, iVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_34, false, false) || PED::IS_PED_GOING_INTO_COVER(Global_34))
			{
				return false;
			}
			if (PED::_GET_PED_CROUCH_MOVEMENT(Global_34) || ((PED::_GET_PED_BLACKBOARD_FLOAT(Global_34, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *uParam1 & 2097152 != 0))
			{
				return false;
			}
		}
		if (PED::_GET_PED_BLACKBOARD_FLOAT(Global_34, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

void func_702(int iParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;

	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1940258.f_32);
	Global_1940258.f_21 = func_796();
	if (Global_1940258.f_21)
	{
		Global_1940258.f_22 = MISC::GET_GAME_TIMER();
	}
	bVar1 = false;
	if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_38))
	{
		bVar1 = true;
		if (PED::IS_PED_SHOOTING(Global_34))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar2))
			{
			}
			else
			{
				uVar2 = Global_1940258.f_38;
			}
			Global_1940258.f_40 = uVar2;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_797(&(Global_1940258.f_28), &(Global_1940258.f_33));
			Global_1940258.f_32 = iParam0;
			break;
		case 1:
			Global_1940258.f_24 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1940258.f_24)
			{
				if (bVar1 && WEAPON::_IS_WEAPON_LASSO(Global_1940258.f_38))
				{
					Global_1940258.f_24 = PED::_GET_LASSO_TARGET(Global_34) != 0;
				}
				if (Global_1940258.f_40 == joaat("WEAPON_THROWN_BOLAS"))
				{
					Global_1940258.f_24 = WEAPON::_0x46D42883E873C1D7(Global_34) > 0;
				}
			}
			break;
		case 2:
			bVar3 = WEAPON::IS_WEAPON_VALID(Global_1940258.f_40);
			if (bVar3 && WEAPON::_IS_WEAPON_LASSO(Global_1940258.f_40))
			{
				Global_1940258.f_19 = 0;
			}
			else
			{
				if (bVar3 && WEAPON::_0x5809DBCA0A37C82B(Global_1940258.f_40))
				{
					Global_1940258.f_19 = PED::_0x285D36C5C72B0569(Global_34) <= 3f;
				}
				else
				{
					Global_1940258.f_19 = PED::_0x285D36C5C72B0569(Global_34) <= 1f;
				}
				if (Global_1940258.f_19)
				{
					Global_1940258.f_23 = MISC::GET_FRAME_COUNT();
				}
			}
			break;
		default:
			Global_1940258.f_32 = iParam0 + 1;
			break;
	}
	Global_19 |= 4;
}

var func_703(int iParam0)
{
	return Global_1102219.f_3705[iParam0 /*3*/];
}

bool func_704(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_798(bParam0, &iVar0, &iVar1))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
			{
				return false;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::GET_PED_CONFIG_FLAG(iVar1, 6, false))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

bool func_705(var uParam0)
{
	int iVar0;

	iVar0 = Global_1940258.f_34;
	if (func_28() == -1)
	{
		if (Global_1940258.f_34 == 0)
		{
			iVar0 = func_799(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_34) || !Global_1956200.f_1716[4])
	{
		iVar0 = func_799(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_734(iVar0) == -1)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
	{
		return false;
	}
	uParam0->f_15 = iVar0;
	return true;
}

void func_706(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_800(uParam0);
	}
}

bool func_707(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_734(iParam2);
	}
	else
	{
		iVar1 = func_733(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_734(iParam0);
	}
	else
	{
		iVar0 = func_733(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_174(*uParam1, 8388608))
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

float func_708(int iParam0, int iParam1)
{
	return func_588(iParam0, iParam1, 1, 1);
}

float func_709(var uParam0)
{
	return uParam0->f_29;
}

bool func_710(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_711(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_216(uParam0, 134217728);
	}
	else
	{
		func_238(uParam0, 134217728);
	}
}

void func_712()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_713(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
	if ((WEAPON::_IS_WEAPON_LASSO(Global_1940258.f_38) || joaat("WEAPON_THROWN_BOLAS") == Global_1940258.f_38) && Global_1940258.f_21)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1940258.f_34 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1940258.f_34, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_588(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_801(iVar0, 0)))
		{
			if (func_760(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_714(var uParam0)
{
	return uParam0->f_18;
}

bool func_715(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_174(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_34, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_34, 17))
		{
			return true;
		}
	}
	return false;
}

int func_716(var uParam0)
{
	return uParam0->f_19;
}

int func_717(var uParam0)
{
	return uParam0->f_20;
}

bool func_718(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_801(iVar0, 0)))
		{
			if (func_802(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_719(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258.f_12)
	{
		if ((bParam2 || Global_1940258.f_13 > 0) || Global_1940258.f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258.f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258.f_14 > 0 || (bParam2 && Global_1940258.f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258.f_7)
		{
			if (bParam2 || Global_1940258.f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_720(var uParam0)
{
	return uParam0->f_25;
}

int func_721(var uParam0)
{
	int iVar0;

	switch (uParam0->f_8)
	{
		case 0:
			switch (uParam0->f_7)
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
			switch (uParam0->f_7)
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
			switch (uParam0->f_7)
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
			switch (uParam0->f_7)
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
			switch (uParam0->f_7)
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
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_722(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_803(iParam0, vParam4, 0.5f))
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

int func_723(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1940258.f_38 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_40))
		{
			if (WEAPON::_IS_WEAPON_MELEE(Global_1940258.f_40) || WEAPON::_IS_WEAPON_BOW(Global_1940258.f_40))
			{
				return 1;
			}
		}
	}
	if (func_804(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_724(int iParam0)
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

bool func_725(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_795(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_726(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_795(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_727(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_805(uParam0);
	if (func_795(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_1940258.f_28[iParam3], 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, Global_1940258.f_28[iParam3], -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_728(int iParam0, int iParam1)
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

bool func_729(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return true;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_806(iParam0, 1, 0, 0)) && !func_806(iParam0, 1, 0, 0) == joaat("WEAPON_THROWN_BOLAS"))
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

bool func_730(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_731(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_732(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_732(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_733(int iParam0)
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

int func_734(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
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

float func_735(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_736(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1940258.f_34 != 0)
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
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1940258.f_34, 1, 1))
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
			if (func_728(Global_34, &iVar1))
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
		fVar2 = func_588(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_588(iParam0, Global_1940258.f_34, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1940258.f_34, iParam0))
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

bool func_737(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_798(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
				{
					if (!bParam2 || !func_739(uParam1, iVar0))
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
			if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
			{
				if (!bParam2 || !func_739(uParam1, iVar1))
				{
					if (func_732(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_738(var uParam0)
{
	return func_174(*uParam0, 131072);
}

bool func_739(var uParam0, int iParam1)
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

bool func_740(int iParam0)
{
	return false;
}

int func_741(var uParam0)
{
	return uParam0->f_22;
}

int func_742(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_5 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_13;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_34, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_34))
		{
			return 1;
		}
	}
	return 0;
}

float func_743(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_744(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_745(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_746(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

float func_747(int iParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_807(vVar2.x, fVar0);
	fVar1 = func_793(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_807(vVar2.x, fVar0);
	fVar1 = func_793(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_807(vVar2.x, fVar0);
	fVar1 = func_793(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_807(vVar2.x, fVar0);
	fVar1 = func_793(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_807(vVar2.x, fVar0);
	fVar1 = func_793(vVar2.x, fVar1);
	return (fVar0 - fVar1);
}

float func_748(int iParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_807(vVar2.y, fVar0);
	fVar1 = func_793(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_807(vVar2.y, fVar0);
	fVar1 = func_793(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_807(vVar2.y, fVar0);
	fVar1 = func_793(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_807(vVar2.y, fVar0);
	fVar1 = func_793(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_807(vVar2.y, fVar0);
	fVar1 = func_793(vVar2.y, fVar1);
	return (fVar0 - fVar1);
}

float func_749(int iParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_807(vVar2.z, fVar0);
	fVar1 = func_793(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_807(vVar2.z, fVar0);
	fVar1 = func_793(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_807(vVar2.z, fVar0);
	fVar1 = func_793(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_807(vVar2.z, fVar0);
	fVar1 = func_793(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_807(vVar2.z, fVar0);
	fVar1 = func_793(vVar2.z, fVar1);
	return (fVar0 - fVar1);
}

Vector3 func_750(int iParam0)
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
	return func_751((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_751(vector3 vParam0)
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

Vector3 func_752(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_753(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_754(int iParam0)
{
	return FLOCK::_0xF8B48A361DC388AE(iParam0) == 2;
}

void func_755(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (uParam0->f_1 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_1))
	{
		return;
	}
	bVar0 = false;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1) && func_732(*uParam1, Global_35, 1) < 300f)
	{
		bVar0 = true;
	}
	bVar1 = false;
	bVar1 = func_808();
	if (uParam0->f_1 == PLAYER::PLAYER_ID())
	{
		if (bVar1)
		{
			Global_1198045 = 1;
		}
		else if (bVar0)
		{
			Global_1198045 = 1;
			if ((PED::IS_PED_DEAD_OR_DYING(*uParam1, true) || PED::IS_PED_INJURED(*uParam1)) || PED::GET_PED_CONFIG_FLAG(*uParam1, 580, true))
			{
				func_809(*uParam1);
			}
		}
	}
	if (!bVar1)
	{
		if (((!ENTITY::DOES_ENTITY_EXIST(*uParam1) || PED::IS_PED_DEAD_OR_DYING(*uParam1, true)) || PED::IS_PED_INJURED(*uParam1)) || PED::GET_PED_CONFIG_FLAG(*uParam1, 580, true))
		{
			return;
		}
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_1))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	if (!bVar1)
	{
		if (func_588(iVar2, *uParam1, 1, 1) > 300f)
		{
			return;
		}
	}
	if ((func_215(uParam1->f_2, 1) || func_215(uParam1->f_2, 2)) && uParam1->f_1 != 0)
	{
		return;
	}
	uParam1->f_1 = Global_1296859.f_21;
	if (uParam0->f_1 == PLAYER::PLAYER_ID())
	{
		func_240(&(uParam1->f_2), 1);
	}
	else if (GANG::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), uParam0->f_1))
	{
		func_240(&(uParam1->f_2), 2);
	}
}

void func_756(var uParam0, var uParam1)
{
	int iVar0;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_5))
	{
		iVar0 = NETWORK::NET_TO_PED(uParam0->f_5);
		if (!ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(uParam0->f_5)))
		{
			return;
		}
		if (iVar0 != *uParam1)
		{
			return;
		}
		if (ENTITY::_IS_ENTITY_FROZEN(iVar0) && !ENTITY::IS_ENTITY_VISIBLE(iVar0))
		{
			func_810(947, 1);
			func_811(*uParam1);
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_5))
		{
			if (((PED::IS_PED_DEAD_OR_DYING(iVar0, true) || PED::IS_PED_INJURED(iVar0)) || PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) || (ENTITY::_IS_ENTITY_FROZEN(iVar0) && !ENTITY::IS_ENTITY_VISIBLE(iVar0)))
			{
				return;
			}
			func_812(*uParam1);
		}
	}
}

bool func_757(int iParam0, int iParam1)
{
	int iVar0;

	if ((PLAYER::IS_PLAYER_PLAYING(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (((PLAYER::_0x3EE1F7A8C32F24E1(iParam0, &iVar0, 0, 0) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && iVar0 == iParam1) || ((PLAYER::_0xBEA3A6E5F5F79A6F(iParam0, &iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && iVar0 == iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_758()
{
	if (!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if ((Global_1940258.f_38 == joaat("WEAPON_KIT_BINOCULARS") || Global_1940258.f_38 == joaat("WEAPON_KIT_BINOCULARS_IMPROVED")) || WEAPON::_IS_WEAPON_SNIPER(Global_1940258.f_38))
	{
		if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
		{
			return true;
		}
	}
	return false;
}

float func_759(int iParam0)
{
	switch (func_687(func_361(ENTITY::GET_ENTITY_MODEL(iParam0))))
	{
		case -1630294353:
			return 5f;
		case -1754709769:
			return 6f;
		case 916613222:
			return 7f;
		case 986272521:
			return 9f;
		case -1718188498:
			return 11f;
		default:
			break;
	}
	return 10f;
}

bool func_760(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_802(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_761(var uParam0, int iParam1)
{
	return func_215(uParam0->f_10, iParam1);
}

void func_762(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	func_813(&iVar0);
}

void func_763(var uParam0)
{
	PED::_0xE37287EE358939C3(uParam0);
}

void func_764(var uParam0)
{
	PED::_0x011A42FD923D41CA(uParam0);
}

Vector3 func_765(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_814(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_766(int iParam0)
{
	struct<2> Var0;
	var uVar2;

	Var0 = { func_376(iParam0, joaat("NUM_TIMES_SEEN")) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &uVar2))
	{
		return -1;
	}
	return uVar2;
}

void func_767(var uParam0, bool bParam1)
{
	if (bParam1 || !func_635(uParam0))
	{
		func_504(uParam0);
	}
}

void func_768(int iParam0, int iParam1)
{
	struct<29> Var0;
	struct<2> Var31;
	int iVar33;

	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, iParam0, -1, -1, 255);
	Var31 = { func_376(iParam0, joaat("VARIATIONS_SEEN")) };
	if (!STATS::STAT_ID_GET_INT(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar33, iParam1);
	if (!func_116(&Var0, 4) && func_815(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var31, iVar33, true))
	{
	}
	Global_1268861[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*99*/].f_56[iParam0] = iVar33;
}

void func_769(int iParam0)
{
	func_816(iParam0);
}

void func_770(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	int iVar33;
	struct<2> Var34;
	int iVar36;
	struct<2> Var37;

	if (func_123(Global_1272030[iParam0 /*4*/]))
	{
		return;
	}
	func_817(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_124(&(Global_1272030[iParam0 /*4*/]));
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_818(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_UNLOCK")) };
		STATS::STAT_ID_SET_INT(&Var34, iVar33, true);
		Var34 = { func_818(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var34, Global_1296859.f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_818(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_ID")) };
		STATS::STAT_ID_SET_INT(&Var37, iVar36, true);
		Var37 = { func_818(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var37, Global_1296859.f_21, true);
	}
}

void func_771(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_475(&Var0);
}

void func_772(struct<2> Param0)
{
	struct<32> Var0;

	if (func_298(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_298(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_298(Param0), Global_265377.f_124517.f_71.f_17);
		if (func_819(Param0, &Var0))
		{
			if (Var0.f_29 == joaat("RACE_IMPROMPTU"))
			{
				STATS::_0xF21A5D66874FCEDD(Var0.f_2, 0, joaat("RACE"));
			}
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_31, 0);
		}
	}
}

void func_773(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_376(iParam0, joaat("NUM_TIMES_SEEN")) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_774(int iParam0, int iParam1, int iParam2)
{
	struct<29> Var0;
	int iVar31;

	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	iVar31 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar31 > -1 && iVar31 < 32)
	{
		func_32(&Var0, iParam0, iParam1, iParam2, 255);
		if (Var0.f_7 < 3 && Var0.f_7 >= 0)
		{
			Global_1268861[iVar31 /*99*/].f_95[Var0.f_7] = 0;
		}
	}
}

bool func_775(var uParam0)
{
	return func_452(uParam0, 16);
}

int func_776()
{
	return -839369609;
}

char* func_777(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LA_ALLIGATOR";
		case 1:
			return "LA_BEAR";
		case 2:
			return "LA_BEAVER";
		case 3:
			return "LA_BISON";
		case 4:
			return "LA_BOAR";
		case 5:
			return "LA_BUCK";
		case 6:
			return "LA_COUGAR";
		case 7:
			return "LA_PANTHER";
		case 8:
			return "LA_COYOTE";
		case 13:
			return "LA_ELK";
		case 9:
			return "LA_FOX";
		case 10:
			return "LA_MOOSE";
		case 11:
			return "LA_RAM";
		case 12:
			return "LA_WOLF";
		default:
			break;
	}
	return "";
}

struct<15> func_778(int iParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::_COPY_MEMORY(&(Var0.f_4), &Local_829, 5);
	Var0.f_9 = iParam0;
	Var0 = 182;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_779(var uParam0)
{
	func_820(uParam0, func_510(4, 117));
}

bool func_780(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)) == iParam1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_781(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_782(var uParam0)
{
	return func_535(*uParam0, 2);
}

int func_783(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_784(vector3 vParam0, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	fVar2 = iParam3;
	iVar5 = 255;
	fVar3 = iParam3;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
			if (bParam4 && !func_467(iVar1, 1, 1))
			{
			}
			else if (!func_468(iVar1))
			{
			}
			else
			{
				iVar6 = PLAYER::GET_PLAYER_PED(iVar4);
				if (bParam5)
				{
					if (((PED::_IS_PED_HOGTIED(iVar6) || PED::_GET_LASSOER_OF_PED(iVar6)) || func_618(4, iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar6, false))
					{
					}
					else
					{
						fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar6, false, false), vParam0);
						if (fVar2 < fVar3)
						{
							iVar5 = iVar4;
							fVar3 = fVar2;
						}
					}
					iVar0++;
					return iVar5;
				}
			}
		}
	}
}

int func_785()
{
	return Global_1051252.f_12;
}

char* func_786()
{
	return "unnamed";
}

int func_787(int iParam0)
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

bool func_788(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_821(36, iParam0);
}

int func_789(int iParam0)
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

bool func_790(int iParam0)
{
	if (func_822(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_823(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

int func_791(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	switch (iParam0)
	{
		case 0:
			fVar0 = 230f;
			break;
		case 1:
			fVar0 = 270f;
			break;
		case 2:
			fVar0 = 70f;
			break;
		case 3:
			fVar0 = 220f;
			break;
		case 4:
			fVar0 = 200f;
			break;
		case 5:
			fVar0 = 110f;
			break;
		case 6:
			fVar0 = 200f;
			break;
		case 7:
			fVar0 = 200f;
			break;
		case 8:
			fVar0 = 85f;
			break;
		case 13:
			fVar0 = 110f;
			break;
		case 9:
			fVar0 = 85f;
			break;
		case 10:
			fVar0 = 220f;
			break;
		case 11:
			fVar0 = 110f;
			break;
		case 12:
			fVar0 = 130f;
			break;
	}
	fVar1 = 1f;
	switch (iParam1)
	{
		case 0:
			fVar1 = Global_1901947.f_852.f_5;
			break;
		case 1:
			fVar1 = Global_1901947.f_852.f_6;
			break;
		case 2:
			fVar1 = Global_1901947.f_852.f_7;
			break;
	}
	fVar0 = (fVar0 * fVar1);
	return BUILTIN::ROUND(fVar0);
}

float func_792(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_484(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_824(uParam0);
	}
	return func_484(uParam0);
}

float func_793(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_794()
{
	int iVar0;
	int iVar1;

	iVar0 = func_826(func_825());
	iVar1 = func_827(func_825());
	if (iVar0 >= 21)
	{
		return true;
	}
	else if (iVar0 < 5)
	{
		return true;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return true;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return true;
		}
	}
	return false;
}

bool func_795(int iParam0)
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
	if (((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT")) || iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
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

bool func_796()
{
	if (func_828())
	{
		return false;
	}
	if (Global_1572887.f_13 == -1)
	{
		if (Global_1940258.f_38 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_34, 311);
	}
	else
	{
		return Global_1956200.f_1716[3];
	}
	return false;
}

void func_797(var uParam0, var uParam1)
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

bool func_798(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_26))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940258.f_26))
		{
			*iParam1 = Global_1940258.f_26;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_27))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940258.f_27))
		{
			if (PED::_IS_PED_HOGTIED(Global_1940258.f_27) || ENTITY::IS_ENTITY_DEAD(Global_1940258.f_27))
			{
				*iParam2 = Global_1940258.f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1940258.f_24 && !PED::IS_PED_INJURED(Global_34))
	{
		iVar1 = PED::_GET_LASSO_TARGET(Global_34);
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

int func_799(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
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
	if (uParam0->f_7 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1940258.f_6)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_34);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_34);
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

void func_800(var uParam0)
{
	int iVar0;

	if (Global_1940258.f_32 == 0)
	{
		func_238(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258.f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_28[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1940258.f_28[iVar0]))
				{
					func_216(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_801(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_802(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_803(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_804(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_38))
			{
				if (WEAPON::_IS_WEAPON_MELEE(Global_1940258.f_38) || Global_1940258.f_38 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1940258.f_38, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

float func_805(var uParam0)
{
	return uParam0->f_28;
}

int func_806(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_807(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_808()
{
	return 0;
}

void func_809(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (MAP::_DOES_ENTITY_HAVE_BLIP(iParam0))
	{
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::_BLIP_REMOVE_MODIFIER(iVar0, 580546400);
			MAP::_BLIP_SET_MODIFIER(iVar0, 580546400);
		}
	}
}

void func_810(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_829(iParam0, &iVar0, &iVar1);
	if (!func_830(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_831(iVar0, iVar1);
}

void func_811(int iParam0)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar0.f_2 = Global_35.f_2;
	vVar0 = { vVar0 - Global_35 };
	if (func_218(vVar0))
	{
		vVar0 = { 1f, 0f, 0f };
	}
	vVar0 = { func_751(vVar0) };
	vVar0 = { Global_35 + vVar0 * Vector(160f, 160f, 160f) };
	AUDIO::_PLAY_SOUND_FROM_POSITION(func_832(iParam0), vVar0, func_696(iParam0), false, 0, true, 0);
}

void func_812(var uParam0)
{
	AUDIO::_0x0E53530D9B2DB01D(uParam0, -1574878795, 1);
}

void func_813(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

Vector3 func_814(vector3 vParam0, float fParam3)
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

int func_815(int iParam0)
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

void func_816(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1296859.f_21;
	Var1 = { func_376(iParam0, joaat("COOLDOWN")) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_817(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;

	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	iVar1 = 1;
	while (iVar1 <= 43)
	{
		*iParam1 = iVar1;
		func_32(&Var2, *iParam1, -1, -1, 255);
		iVar0 = (iVar0 + Var2);
		if (iVar0 >= iParam0)
		{
			iVar0 = (iVar0 - Var2);
			*iParam2 = 0;
			while (*iParam2 <= (Var2 - 1))
			{
				if (iVar0 == iParam0)
				{
					return 1;
				}
				iVar0++;
				*iParam2++;
			}
		}
		iVar1++;
	}
	return 0;
}

struct<2> func_818(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

bool func_819(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_677(Param0, &vVar0);
	if (func_833(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_820(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 41, &uParam1);
}

bool func_821(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_834(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_835())
	{
		return func_834(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_834(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_822(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_823(int iParam0)
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
		func_836(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_837(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

var func_824(var uParam0)
{
	return uParam0->f_27;
}

int func_825()
{
	return Global_1902818;
}

int func_826(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_827(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

bool func_828()
{
	switch (Global_1940258.f_38)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
			return true;
		default:
			break;
	}
	return false;
}

void func_829(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_830(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_838(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_839(iParam0))
	{
		return false;
	}
	if (func_840(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_841(iParam0, 1)) || func_842(32768))
	{
		if (!func_841(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_843())
	{
		return false;
	}
	return true;
}

void func_831(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

char* func_832(int iParam0)
{
	return "CALL";
}

bool func_833(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_844(iParam0))
	{
		return false;
	}
	if (func_845(iParam0, uParam1, &uVar0))
	{
		func_846(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_834(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_835()
{
	return Global_1102219.f_3672;
}

void func_836(int iParam0)
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
	func_837(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_837(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_838(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_839(int iParam0)
{
	if (func_841(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_840(int iParam0)
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

bool func_841(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_842(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_843()
{
	if (!func_18())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

bool func_844(int iParam0)
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

bool func_845(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_847(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_846(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_848(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_849(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_850(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_851(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_852(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_853(iVar0);
	uParam1->f_2 = 1060782978;
	DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -739728609;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_32 = iVar0;
}

int func_847(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("CHALLENGE");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = joaat("FEATURE");
			break;
		case -2:
			iVar0 = joaat("GOLD");
			break;
		case 2:
			iVar0 = joaat("MISSION_STORY");
			break;
		case 3:
			iVar0 = joaat("MISSION_PROCEDURAL");
			break;
		case 4:
			iVar0 = joaat("MISSION_FETCH");
			break;
		case 5:
			iVar0 = joaat("MISSION_MINIGAME");
			break;
		case 6:
			iVar0 = joaat("MISSION_FREE_MODE_EVENT");
			break;
		case 7:
			iVar0 = joaat("MISSION_UGC");
			break;
		case 8:
			iVar0 = joaat("MISSION_BEAT");
			break;
		case 9:
			iVar0 = joaat("PROPERTY");
			break;
		case 10:
			iVar0 = joaat("RECIPE");
			break;
		case 11:
			iVar0 = joaat("TITLE");
			break;
		case 12:
			iVar0 = joaat("SHOP");
			break;
		case 13:
			iVar0 = joaat("GFH_GIVERS");
			break;
		case 14:
			iVar0 = joaat("GFH_LOCATIONS");
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = joaat("GVO_UNLOCKS");
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

int func_848(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_854(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_849(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case joaat("ROBBERY_TRAIN"):
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case joaat("AMBUSH"):
			return 10;
		case -621956193:
			return 11;
		case joaat("GANG_EVENT_SHOWDOWN"):
			return 12;
		case joaat("GANG_EVENT_IMPROMPTU_RACE"):
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case joaat("TRAIN_ESCORT"):
			return 16;
		case joaat("IWD_1V1"):
			return 17;
		case joaat("IWD_PVP"):
			return 18;
		case joaat("IWD_PF"):
			return 20;
		case joaat("IWD_PLF"):
			return 21;
		case joaat("IWD_F"):
			return 28;
		case joaat("IWD_INF"):
			return 19;
		case joaat("ASSASSINATION"):
			return 22;
		case joaat("ASSASSINATION_TRACKING"):
			return 23;
		case joaat("ASSASSINATION_PVP_PLAYER"):
			return 24;
		case joaat("ASSASSINATION_PVP_POSSE"):
			return 25;
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 26;
		case joaat("COACH_HOLDUP_KIDNAPPING"):
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_850(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLACKJACK"):
			return 0;
		case joaat("DOMINOES"):
			return 1;
		case joaat("POKER"):
			return 2;
		case joaat("FILLET"):
			return 3;
		case joaat("MILKING_COW"):
			return 4;
		case joaat("CLEAN_STALLS"):
			return 5;
		case joaat("FENCE_BUILDING"):
			return 6;
		default:
			break;
	}
	return -1;
}

int func_851(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ARCHERY"):
			return 0;
		case joaat("CHALLENGES"):
			return 1;
		case joaat("DEAD_DROP"):
			return 2;
		case joaat("GOLDEN_HAT"):
			return 3;
		case joaat("HOT_PROPERTY"):
			return 4;
		case joaat("KING_OF_THE_CASTLE"):
			return 5;
		case joaat("KING_OF_THE_RAILS"):
			return 6;
		case joaat("PV_CHALLENGE_HERBALIST"):
			return 15;
		case joaat("PV_CHALLENGE_BIGGEST_FISH"):
			return 16;
		case joaat("PV_CHALLENGE_FLYING_BIRD"):
			return 17;
		case joaat("HUNT_THE_POSSE_LEADER"):
			return 18;
		case joaat("ESCAPED_CONVICTS"):
			return 8;
		case joaat("SUPPLY_TRAIN"):
			return 10;
		case joaat("ROUND_UP"):
			return 9;
		case joaat("WRECKAGE"):
			return 11;
		case joaat("CONDOR_EGG"):
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_852(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UGC_MAJOR_ID_DBG_VERSUS"):
			return 0;
		case joaat("UGC_MAJOR_ID_DBG_DEATHMATCH"):
			return 1;
		case joaat("UGC_MAJOR_ID_DBG_RACE"):
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case joaat("UGC_MAJOR_ID_LBM"):
			return 8;
		case joaat("UGC_MAJOR_ID_MOONSHINE_COOP"):
			return 9;
		case 1039801657:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_853(int iParam0)
{
	switch (iParam0)
	{
		case joaat("NULL"):
			return -1;
		case joaat("NORMAL"):
			return 0;
		case joaat("INTRO_CHAR"):
			return 1;
		case joaat("INTRO_GENERIC"):
			return 2;
		case 1322114923:
			return 3;
		case joaat("INTRO_FREEMODE"):
			return 4;
		case joaat("INTRO_CLAY2"):
			return 5;
		case joaat("TEAMSTER"):
			return 6;
		case joaat("BOUNTYHUNTER"):
			return 7;
		case joaat("GUNSLINGER"):
			return 8;
		case joaat("OUTLAW"):
			return 9;
		case joaat("HUNTER"):
			return 10;
		case joaat("TRADER"):
			return 11;
		case joaat("COLLECTOR"):
			return 12;
		case joaat("SEASON005"):
			return 13;
		case joaat("VIPSEASON005"):
			return 14;
		case joaat("MOONSHINER"):
			return 15;
		case joaat("SEASON006"):
			return 16;
		case joaat("VIPSEASON006"):
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		default:
			break;
	}
	return -1;
}

bool func_854(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_855(iParam0, uParam1, &uVar0))
	{
		func_856(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_855(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_847(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_856(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_3), uParam0);
}


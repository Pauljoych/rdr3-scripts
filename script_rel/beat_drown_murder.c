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
	int iLocal_14[2] = { 0, 0 };
	int iLocal_17 = 0;
	var uLocal_18 = 6;
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
	struct<2> Local_67[6];
	struct<8> Local_80 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_88[1];
	struct<193> Local_101 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_294 = 0;
	struct<10> Local_295 = { 0, -89429847, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<32> Local_305[2];
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372[2] = { 0, 0 };
	int iLocal_375 = 0;
	vector3 vLocal_376 = { 0f, 0f, 0f };
	vector3 vLocal_379 = { 0f, 0f, 0f };
	vector3 vLocal_382 = { 0f, 0f, 0f };
	vector3 vLocal_385[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_395 = 0f;
	float fLocal_396 = 0f;
	bool bLocal_397 = false;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404[2] = { 0, 0 };
	int iLocal_407[2] = { 0, 0 };
	var uLocal_410[2] = { 0, 0 };
	var uLocal_413[2] = { 0, 0 };
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	var uLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	struct<23> Local_423 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	struct<21> Local_463[2];
	struct<17> Local_506[2];
	struct<17> Local_541[2];
	int iLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 1112014848;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 9;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 1;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 24;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = -1082130432;
	var uLocal_762 = -1082130432;
	var uLocal_763 = 1103626240;
	var uLocal_764 = -1067450368;
	var uLocal_765 = 1097859072;
	var uLocal_766 = 1073741824;
	var uLocal_767 = 4000;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 1073741824;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	int iLocal_792 = 0;
	int iLocal_793 = 0;
	int iLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = -1;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 1097859072;
	var uLocal_814 = 1000;
	var uLocal_815 = 1067450368;
	var uLocal_816 = 5000;
	var uLocal_817 = 42;
	var uLocal_818 = 1103626240;
	var uLocal_819 = 1077936128;
	var uLocal_820 = 1106247680;
	var uLocal_821 = 1103101952;
	var uLocal_822 = 1097859072;
	var uLocal_823 = 1103626240;
	int iLocal_824 = 0;
	char[] cLocal_825[8] = 0;
	int iLocal_826 = 0;
	int iLocal_827 = 0;
	bool bLocal_828 = false;
	bool bLocal_829 = false;
	bool bLocal_830 = false;
	bool bLocal_831 = false;
	int iLocal_832 = 0;
	int iLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	int iLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859[2] = { 0, 0 };
	var uLocal_862[2] = { 0, 0 };
	int iLocal_865 = 0;
	struct<7> Local_866 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_576 = -1;
	cLocal_825 = "DROWN";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_829 = true;
	}
	if (!bLocal_829)
	{
		Local_101.f_3 = func_1(&vScriptParam_0);
		Local_101.f_43 = func_2();
		Local_101.f_161 = func_3(vScriptParam_0.z, 2);
		func_4(&Local_101, 1);
		func_5();
		func_6();
	}
	while (true)
	{
		func_8(bLocal_829, 947, 0);
		if (bLocal_829)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_793)
			{
				case 0:
					if (func_9())
					{
						iLocal_793 = 1;
					}
					break;
				case 1:
					if (func_10(&Local_101, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_11(&Local_101, &iLocal_370, &(Local_101.f_51.f_4));
						func_13(&Local_101, iLocal_370, 1905);
						func_14(&uLocal_577);
						func_15(Local_101.f_51, 15f, 1, 0, 0, 0, 0);
						iLocal_793 = 3;
					}
					else if (Local_101.f_160)
					{
						func_7();
					}
					break;
				case 3:
					if (func_16())
					{
						func_17();
						func_18();
						func_19();
						func_20();
						func_21();
						func_22(&(uLocal_859[0]), Local_101.f_51, 1.5f, 0, 0);
						func_23(&(uLocal_862[0]), Local_101.f_51, 1.5f);
						func_22(&(uLocal_859[1]), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_101.f_51, Local_101.f_51.f_3, -1f, -2.75f, 0f), 1.5f, 0, 0);
						func_23(&(uLocal_862[1]), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_101.f_51, Local_101.f_51.f_3, -1f, -2.75f, 0f), 1.5f);
						func_24();
						if (!func_25(Local_88[0 /*12*/]))
						{
							func_26(Local_101.f_51, &Local_88, 0, 0, 0, -1, 0);
						}
						else if (Local_88[0 /*12*/].f_7 == 0)
						{
						}
						else
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_88[0 /*12*/].f_7);
						}
						iLocal_793 = 4;
					}
					break;
				case 4:
					if (!func_27(&Local_101, &uLocal_410, iLocal_17, 0, 1, 0, 1, 0))
					{
						func_7();
					}
					if (!Local_101.f_46)
					{
						func_28(&Local_295, &(uLocal_413[0]), 0);
						if (func_29())
						{
							func_30(&iLocal_400, 2);
						}
						if (((func_31() || func_32(1056964608 /* Float: 0.5f */)) || func_33(iLocal_400, 2)) || func_33(iLocal_403, 256))
						{
							func_34(&(uLocal_413[0]));
							Local_101.f_46 = 1;
							if (iLocal_794 != 16384)
							{
								iLocal_371 = 6;
							}
							else
							{
								func_35();
								iLocal_371 = 7;
							}
						}
					}
					if (func_36())
					{
						Local_101.f_50 = 1;
						func_7();
					}
					if (func_37(&Local_101, &uLocal_410, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0) || func_38())
					{
						func_7();
					}
					break;
			}
			BUILTIN::WAIT(Local_101.f_158);
		}
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

int func_2()
{
	return Global_1894899.f_2;
}

bool func_3(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_4(var uParam0, bool bParam1)
{
	func_39(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_40("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_5()
{
	if (func_41() == 10)
	{
		iLocal_17 = 1;
	}
	else
	{
		iLocal_17 = 0;
	}
}

void func_6()
{
	func_39(&(Local_101.f_5));
	func_42(&(Local_101.f_5), 1);
	func_43(&(Local_101.f_5), 0);
	func_44(&(Local_101.f_5), 10f);
	func_45(&(Local_101.f_5), 30);
	func_46(&(Local_101.f_5), 10f);
	func_47(&(Local_101.f_5), 1);
	func_48(&(Local_101.f_5), 0);
	func_42(&uLocal_796, 1);
	func_49(&uLocal_796, 0);
	func_50(&uLocal_796, 0);
	func_43(&uLocal_796, 0);
	func_44(&uLocal_796, 10f);
}

void func_7()
{
	if ((func_51(uLocal_410[1], 0, 1) || func_33(iLocal_400, 524288)) || PED::GET_PED_CONFIG_FLAG(uLocal_410[1], 11, true))
	{
		if (func_33(iLocal_400, 1024))
		{
			if (func_52())
			{
				func_53(87, iLocal_17, 3, 0, joaat("CS_JOHNMARSTON"));
			}
			else
			{
				func_53(87, iLocal_17, 3, 0, 0);
			}
			func_54(106, 1, 0, 0, 12, 0, 0, 1);
			func_54(113, 1, 0, 0, 12, 0, 0, 1);
		}
	}
	if (func_33(iLocal_402, 32768))
	{
		AUDIO::_0x660A8F876DF1D4F8(39);
	}
	if (func_51(uLocal_410[0], 0, 1))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uLocal_410[0], 1, 1);
	}
	if (iLocal_827 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(iLocal_827))
		{
			ENTITY::_0xD2B9C78537ED5759(iLocal_827);
		}
	}
	func_56(&Local_101, &uLocal_410, &uLocal_413, iLocal_17, iLocal_370, func_55(&Local_101), 0, 1, 0, 1);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_833);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_834);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_835);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_836);
	func_57(Local_80);
	func_58();
	func_59(&(uLocal_859[0]), 1);
	func_59(&(uLocal_862[0]), 1);
	func_59(&(uLocal_859[1]), 1);
	func_59(&(uLocal_862[1]), 1);
	func_60(1024);
	STREAMING::REMOVE_PTFX_ASSET();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_8(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_61(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_9()
{
	switch (iLocal_792)
	{
		case 0:
			if (func_62(&Local_101))
			{
				iLocal_422 = func_2();
				if (iLocal_422 == -1)
				{
				}
				else
				{
					if (iLocal_422 == 76)
					{
					}
					else if (iLocal_422 == 105)
					{
					}
					func_63();
					func_64(&Local_305);
					func_65();
					func_66();
					func_67();
					func_68(&Local_88);
					STREAMING::REQUEST_PTFX_ASSET();
					STREAMING::REQUEST_MODEL(joaat("P_WATERTROUGH01X"), false);
					func_69();
					iLocal_792 = 1;
				}
			}
			break;
		case 1:
			if (!func_70(&uLocal_791, cLocal_825))
			{
				return false;
			}
			if (!func_71(&Local_88))
			{
				return false;
			}
			if (!func_72(&Local_305))
			{
				return false;
			}
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_WATERTROUGH01X")))
			{
				return false;
			}
			if (!func_73())
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_10(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (bParam6 || func_74(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_75(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_76(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_77(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_78(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_11(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 9;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 9;
			*uParam2 = 1;
			break;
		case 2:
			*iParam1 = 9;
			*uParam2 = 2;
			break;
		case 3:
			*iParam1 = 10;
			*uParam2 = 0;
			break;
		case 4:
			*iParam1 = 10;
			*uParam2 = 1;
			break;
		case 5:
			*iParam1 = 11;
			*uParam2 = 0;
			break;
		case 6:
			*iParam1 = 11;
			*uParam2 = 1;
			break;
		case 7:
			*iParam1 = 11;
			*uParam2 = 2;
			break;
		case 8:
			*iParam1 = 11;
			*uParam2 = 3;
			break;
	}
}

Vector3 func_12(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 11.01f;
				case 1:
					return 0f, 0f, 20f;
				case 2:
					return 0f, 0f, -144.98f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 24.45f;
				case 1:
					return 0f, 0f, 172f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 15.32f;
				case 1:
					return 0f, 0f, 65.77f;
				case 2:
					return 0f, 0f, -19.73f;
				case 3:
					return 0f, 0f, -16.24f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_13(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	Stack.Push(iParam1);
	Stack.Push(uParam0->f_51.f_4);
	Call_Loc(iParam2);
	vVar0 = { StackVal, StackVal, StackVal };
	uParam0->f_51.f_3 = vVar0.z;
}

void func_14(var uParam0)
{
	uParam0->f_190 = 1;
	uParam0->f_182 = 1;
	if (iLocal_422 == 76)
	{
		if (iLocal_17 == 0)
		{
			StringCopy(&(uParam0->f_34), "RE_DM_VAL_V1_THANKS", 64);
			StringCopy(&(uParam0->f_2), "SCRIPT_RE@DROWN_MURDER@DROWNED", 64);
			StringCopy(&(uParam0->f_10), "LINE01_VICTIM", 64);
		}
	}
	else if (iLocal_422 == 105)
	{
		StringCopy(&(uParam0->f_34), "RE_DM_RHD_V1_THANKS_ALT", 64);
		StringCopy(&(uParam0->f_2), "SCRIPT_RE@DROWN_MURDER@DROWNED", 64);
		StringCopy(&(uParam0->f_10), "LINE03_VICTIM", 64);
	}
	else
	{
		StringCopy(&(uParam0->f_34), "RE_DM_VAL_V2_DROWN_THANKS", 64);
		StringCopy(&(uParam0->f_2), "SCRIPT_RE@DROWN_MURDER@DROWNED", 64);
		StringCopy(&(uParam0->f_10), "LINE02_VICTIM", 64);
	}
	func_79(&(uParam0->f_2), &uLocal_18);
	uParam0->f_72 = func_80(Local_101.f_3);
}

void func_15(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

bool func_16()
{
	switch (iLocal_824)
	{
		case 0:
			iLocal_824 = 1;
			break;
		case 1:
			if (!func_81(Local_101.f_51, Local_101.f_51.f_3, &Local_305, &uLocal_410, 0, 0, -1, 1))
			{
				return false;
			}
			Local_80 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_80.f_4, 64, "pblAll", false, true);
			iLocal_824 = 6;
			break;
		case 6:
			if (func_82())
			{
				return true;
			}
			break;
	}
	return false;
}

void func_17()
{
	if (func_51(uLocal_410[1], 0, 1))
	{
		PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_410[1], "Default_Angry");
	}
	if (func_51(uLocal_410[0], 0, 1))
	{
		PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_410[0], "Default_Angry");
	}
}

void func_18()
{
	if (func_51(uLocal_410[0], 0, 1))
	{
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_410[0], false);
		func_83(uLocal_410[0], 1);
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uLocal_410[0], 0, 1);
		PED::SET_PED_CONFIG_FLAG(uLocal_410[0], 245, true);
	}
	if (func_51(uLocal_410[1], 0, 1))
	{
		func_84(uLocal_410[1], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		func_84(uLocal_410[1], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_410[1], true, 0f);
		PED::ADD_RELATIONSHIP_GROUP("m_relAttacker", &iLocal_865);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_410[1], iLocal_865);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_865, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, joaat("PLAYER"), iLocal_865);
		func_85(uLocal_410[1], 0);
		func_83(uLocal_410[1], 1);
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_410[1], joaat("WEAPON_UNARMED"), true, 0, false, false);
		PED::SET_PED_CONFIG_FLAG(uLocal_410[1], 249, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_410[1], 233, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_410[1], 245, true);
	}
	func_86();
	func_87(uLocal_410[0], &Local_101, 0);
	func_87(uLocal_410[1], &Local_101, 0);
}

void func_19()
{
	switch (func_41())
	{
		case 9:
			break;
		case 11:
			switch (Local_101.f_51.f_4)
			{
				case 0:
					Local_88[0 /*12*/] = { 1435.678f, -1296.653f, 76.32323f };
					break;
			}
			break;
	}
}

void func_20()
{
	VOLUME::_SET_VOLUME_SCALE(Local_101.f_171, 4f, 4f, 3f);
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_101.f_51, vLocal_382, true) > 25f)
	{
		if (iLocal_17 == 0 && (Local_101.f_51.f_4 == 0 || Local_101.f_51.f_4 == 1))
		{
			if (Local_101.f_51.f_4 == 0)
			{
				func_88(&uLocal_416, &uLocal_417, -313.654f, 832.029f, 118.494f, 0f, 0f, 9f, 25f, 25f, 25f, 1, 0, 1, 0, 0);
			}
			else
			{
				func_88(&uLocal_416, &uLocal_417, Local_101.f_51, 0f, 0f, 20f, 30f, 30f, 30f, 1, 0, 1, 0, 0);
			}
		}
		else
		{
			func_88(&uLocal_416, &uLocal_417, Local_101.f_51, 0f, 0f, 0f, 25f, 25f, 25f, 0, 0, 1, 0, 0);
		}
	}
}

void func_21()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_419))
	{
		return;
	}
	if (iLocal_422 == 76)
	{
		iLocal_419 = VOLUME::_CREATE_VOLUME_AGGREGATE();
		VOLUME::_0x39816F6F94F385AD(iLocal_419, -278.0329f, 807.903f, 119.4f, 0f, 0f, -79.7f, 11.40093f, 8.344561f, 10.8f);
		VOLUME::_0x39816F6F94F385AD(iLocal_419, -272.7689f, 809.2057f, 120.423f, 0f, 0f, -79.7f, 8.085273f, 4.505096f, 4.33611f);
		VOLUME::_0x39816F6F94F385AD(iLocal_419, -277.0814f, 800.534f, 119.4f, 0f, 0f, -79.7f, 3.711809f, 7.095345f, 4f);
		vLocal_376 = { VOLUME::_GET_VOLUME_COORDS(iLocal_419) };
	}
	else if (iLocal_422 == 105)
	{
		vLocal_376 = { 1357.908f, -1304.094f, 77.4f };
		iLocal_419 = VOLUME::_CREATE_VOLUME_BOX(vLocal_376, 0f, 0f, -20f, 11.367f, 15.188f, 8.228f);
	}
}

void func_22(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;

	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_89(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_23(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;

	iVar0 = 258;
	func_89(uParam0, vParam1, fParam4, 2, iVar0, 0);
}

void func_24()
{
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_80, Local_101.f_51, 0f, 0f, Local_101.f_51.f_3, 2);
	func_90(Local_101.f_51, 25f, 0);
	if (func_51(uLocal_410[0], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_80, "PED_VICTIM", uLocal_410[0], 0);
	}
	if (func_51(uLocal_410[1], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_80, "PED_BADGUY", uLocal_410[1], 0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_80.f_4))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_80, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_80);
		}
	}
}

bool func_25(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_26(vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;

	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *iParam3)
	{
		iParam7 = (*iParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && ENTITY::DOES_ENTITY_EXIST((iParam3[iVar0 /*12*/])->f_8))
		{
		}
		else if ((iParam3[iVar0 /*12*/])->f_7 != 0 && !func_33((iParam3[iVar0 /*12*/])->f_11, 16))
		{
			if (!STREAMING::HAS_MODEL_LOADED((iParam3[iVar0 /*12*/])->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((iParam3[iVar0 /*12*/])->f_9 != -1)
				{
					iVar8 = (iParam3[iVar0 /*12*/])->f_9;
					vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((iParam3[iVar8 /*12*/])->f_8, *(iParam3[iVar0 /*12*/])) };
					if (func_33((iParam3[iVar0 /*12*/])->f_11, 64))
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY((iParam3[iVar0 /*12*/])->f_8, (iParam3[iVar8 /*12*/])->f_8, 0, *(iParam3[iVar0 /*12*/]), (iParam3[iVar0 /*12*/])->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!func_33((iParam3[iVar0 /*12*/])->f_11, 8))
					{
						vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam4, *(iParam3[iVar0 /*12*/])) };
					}
					else
					{
						vVar5 = { *(iParam3[iVar0 /*12*/]) };
					}
					if (!func_33((iParam3[iVar0 /*12*/])->f_11, 128))
					{
						func_91(&vVar5, (iParam3[iVar0 /*12*/])->f_10);
					}
					if (func_33((iParam3[iVar0 /*12*/])->f_11, 64))
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					if (func_25((iParam3[iVar0 /*12*/])->f_4))
					{
						vVar1 = { 0f, 0f, (iParam3[iVar0 /*12*/])->f_3 };
					}
					else
					{
						vVar1 = { (iParam3[iVar0 /*12*/])->f_4 };
					}
					if (func_33((iParam3[iVar0 /*12*/])->f_11, 4))
					{
						vVar1.f_2 = func_92((vVar1.z + fParam4));
					}
					ENTITY::SET_ENTITY_ROTATION((iParam3[iVar0 /*12*/])->f_8, vVar1, 2, true);
					if (!func_33((iParam3[iVar0 /*12*/])->f_11, 128))
					{
						if ((iParam3[iVar0 /*12*/])->f_10)
						{
							ENTITY::_0x9587913B9E772D29((iParam3[iVar0 /*12*/])->f_8, 0);
						}
					}
				}
				if (func_33((iParam3[iVar0 /*12*/])->f_11, 2))
				{
					ENTITY::FREEZE_ENTITY_POSITION((iParam3[iVar0 /*12*/])->f_8, true);
				}
				if (func_33((iParam3[iVar0 /*12*/])->f_11, 32))
				{
					ENTITY::SET_ENTITY_VISIBLE((iParam3[iVar0 /*12*/])->f_8, false);
				}
				if (bParam5)
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((iParam3[iVar0 /*12*/])->f_8, 1);
					PHYSICS::ACTIVATE_PHYSICS((iParam3[iVar0 /*12*/])->f_8);
				}
				ENTITY::_0xA91E6CF94404E8C9((iParam3[iVar0 /*12*/])->f_8);
				vVar9 = { ENTITY::GET_ENTITY_COORDS((iParam3[iVar0 /*12*/])->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

bool func_27(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_93(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_94(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_95(&(uParam0->f_5));
			}
			func_96(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_97(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_98(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_99(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_100(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_101(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_76(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[0]) && !PED::IS_PED_INJURED((*uParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*uParam1)[0])))
			{
				func_102(uParam0, (*uParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

void func_28(int* iParam0, var uParam1, bool bParam2)
{
	if (!iParam0->f_2 && iParam0->f_7 != 0)
	{
		if ((!bParam2 && !func_103(0)) || (MISC::GET_GAME_TIMER() - iParam0->f_7) > 3500)
		{
			if (MAP::DOES_BLIP_EXIST(*iParam0))
			{
				MAP::REMOVE_BLIP(iParam0);
			}
			if (!func_25(iParam0->f_3))
			{
				*uParam1 = MAP::_BLIP_ADD_FOR_COORD(iParam0->f_1, iParam0->f_3);
				iParam0->f_2 = 1;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_6))
			{
				*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(iParam0->f_1, iParam0->f_6);
				iParam0->f_2 = 1;
			}
			if (iParam0->f_2)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_9))
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, iParam0->f_9);
				}
			}
		}
	}
}

bool func_29()
{
	if (!Local_101.f_48)
	{
		return false;
	}
	if (!func_104())
	{
		return false;
	}
	if (Local_101.f_98[1] < 2.25f || (func_51(Global_1935630.f_41, 0, 1) && func_105(uLocal_410[1], Global_1935630.f_41, 1, 1) < 2.25f))
	{
		return true;
	}
	return false;
}

void func_30(int iParam0, int iParam1)
{
	func_106(iParam0, iParam1);
}

int func_31()
{
	if (iLocal_837 == 0)
	{
		if (func_107(uLocal_410[1], 0, &(Local_101.f_5), &iLocal_794, 0, Local_101.f_98[1]))
		{
			return 1;
		}
	}
	else if (func_107(uLocal_410[0], 0, &uLocal_796, &uLocal_795, 0, Local_101.f_98[0]))
	{
		return 1;
	}
	iLocal_837++;
	if (iLocal_837 > 1)
	{
		iLocal_837 = 0;
	}
	return 0;
}

int func_32(float fParam0)
{
	vector3 vVar0;

	if (!Local_101.f_48)
	{
		return 0;
	}
	if (!func_33(iLocal_400, 2048))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_80) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false))
		{
			if (Local_101.f_98[1] < fParam0 || Local_101.f_98[0] < fParam0)
			{
				return 1;
			}
			if (iLocal_371 > 1)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (func_51(Global_1935630.f_41, 0, 1))
					{
						if (func_105(Global_1935630.f_41, uLocal_410[1], 1, 1) < fParam0 || func_105(Global_1935630.f_41, uLocal_410[0], 1, 1) < fParam0)
						{
							vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_41, true, false) };
							if (!func_25(vVar0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_33(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_34(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_35()
{
	if (func_51(uLocal_410[0], 0, 1))
	{
		TASK::TASK_SMART_FLEE_PED(uLocal_410[0], Global_35, 1000f, -1, 1, 1077936128 /* Float: 3f */, 0);
		PED::SET_PED_KEEP_TASK(uLocal_410[0], true);
	}
	if (!func_33(iLocal_400, 2048))
	{
		if (func_51(uLocal_410[1], 0, 1))
		{
			TASK::TASK_SMART_FLEE_PED(uLocal_410[1], Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			PED::SET_PED_KEEP_TASK(uLocal_410[1], true);
		}
	}
}

bool func_36()
{
	func_108();
	func_109();
	func_110();
	if (iLocal_371 > 1)
	{
		func_111();
	}
	func_112(uLocal_410[1]);
	func_113(uLocal_410[1]);
	func_114();
	func_115();
	func_116();
	if (!Local_101.f_46)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_80) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false))
		{
			func_82();
		}
	}
	switch (iLocal_371)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_80, true, false) && func_117())
			{
				ANIMSCENE::START_ANIM_SCENE(Local_80);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_80, "pblAll", true);
				iLocal_371 = 1;
			}
			break;
		case 1:
			if ((func_118(&Local_101, 0.75f, 60f, 20f, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0) || Local_101.f_98[1] < 45f) || Local_101.f_98[0] < 45f)
			{
				AUDIO::_0x0D7FD6A55FD63AEF(39, 3, 0);
				func_30(&iLocal_402, 32768);
				if (iLocal_370 == 9 || iLocal_370 == 11)
				{
					func_119();
				}
				else if (iLocal_370 == 10)
				{
					PED::SET_PED_CONFIG_FLAG(uLocal_410[1], 6, true);
				}
				func_120(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), 1114636288 /* Float: 60f */, 1101004800 /* Float: 20f */, 1108082688 /* Float: 35f */, -1082130432 /* Float: -1f */);
				func_121(1891783641, Local_101.f_51, 1);
				func_122();
				func_123(&Local_295, uLocal_410[0], &(uLocal_413[0]), 0f, 0f, 0f, 1065353216 /* Float: 1f */, 1, 5);
				Local_295.f_9 = "RE_INTER_STRANGER";
				func_124(&uLocal_838);
				func_99(&(Local_101.f_121));
				iLocal_371 = 2;
			}
			break;
		case 2:
			if (!bLocal_828)
			{
				if (((func_51(uLocal_410[0], 0, 1) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[0])) && func_118(&Local_101, 1f, 50f, 35f, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0)) && !func_125(Global_35, 1))
				{
					if (iLocal_422 == 76 && iLocal_17 == 0)
					{
					}
					else
					{
						func_126();
					}
					func_124(&uLocal_850);
					func_30(&iLocal_400, 1);
					iLocal_371 = 3;
				}
				else if (func_127(&uLocal_838) > 6f)
				{
					func_126();
				}
			}
			else
			{
				iLocal_371 = 4;
			}
			break;
		case 3:
			if (iLocal_17 == 1)
			{
				func_128();
				func_129();
				func_130();
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false))
				{
					func_131();
					func_132();
					iLocal_371 = 5;
				}
			}
			else if (iLocal_17 == 0)
			{
				func_133();
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], -647428130))
				{
					func_34(&(uLocal_413[0]));
					func_134();
				}
			}
			if (func_33(iLocal_400, 1024))
			{
				iLocal_371 = 4;
			}
			break;
		case 4:
			if (func_33(iLocal_400, 4096))
			{
				func_132();
				func_131();
				iLocal_371 = 5;
			}
			break;
		case 5:
			if (iLocal_17 == 1)
			{
				func_129();
				func_130();
				func_135(5f, 1);
				if (Local_101.f_98[0] > 40f && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false))
				{
					return true;
				}
			}
			else if (iLocal_17 == 0)
			{
				if (Local_101.f_98[1] > 40f && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false))
				{
					if (func_52())
					{
						func_53(87, iLocal_17, 3, 0, joaat("CS_JOHNMARSTON"));
					}
					else
					{
						func_53(87, iLocal_17, 3, 0, 0);
					}
					return true;
				}
			}
			break;
		case 6:
			Local_101.f_46 = 1;
			iLocal_372[1] = 9;
			iLocal_372[0] = 9;
			func_136(uLocal_410[0], 0);
			func_136(uLocal_410[1], 0);
			func_137();
			func_138();
			if (func_33(iLocal_400, 2))
			{
				if (func_104())
				{
					if (func_139(10f) && !func_33(iLocal_400, 1024))
					{
						iLocal_576 = 8;
					}
					else
					{
						func_138();
					}
				}
			}
			else
			{
				func_138();
			}
			if (iLocal_576 != -1)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_80, "action", true, false);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_80, func_140(iLocal_576), true);
			}
			else
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_80, "objTrough", iLocal_826);
			}
			if (func_33(iLocal_400, 2048))
			{
				func_30(&iLocal_400, 131072);
				iLocal_371 = 9;
			}
			else
			{
				iLocal_371 = 7;
				Jump @1678; //curOff = 1091
				func_141();
				if (func_33(iLocal_400, 64))
				{
					if (ENTITY::_0x3EC28DA1FFAC9DDD(uLocal_410[0], Global_35, 1, 1))
					{
						func_142(uLocal_410[0]);
					}
					iLocal_371 = 8;
				}
				if (!func_33(iLocal_400, 16))
				{
					if (WEAPON::_0xCB690F680A3EA971(Global_35, 4))
					{
						PED::SET_PED_CONFIG_FLAG(uLocal_410[1], 249, false);
						WEAPON::SET_CURRENT_PED_WEAPON(uLocal_410[1], WEAPON::GET_BEST_PED_WEAPON(uLocal_410[1], false, false), false, 0, false, false);
						func_143(uLocal_410[1], 1101004800 /* Float: 20f */, 1103626240 /* Float: 25f */, 1103626240 /* Float: 25f */, -1082130432 /* Float: -1f */);
						func_30(&iLocal_400, 16);
					}
				}
				Jump @1678; //curOff = 1245
				func_141();
				if (!TASK::GET_IS_TASK_ACTIVE(uLocal_410[0], 3) || func_33(iLocal_400, 262144))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_410[0], 2121492476, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_410[0], 2121492476, true) != 0)
					{
						if (func_33(iLocal_400, 65536) || func_51(uLocal_410[1], 2, 1))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uLocal_410[0], 0);
							AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_410[0], 0);
							func_132();
							func_144();
							iLocal_371 = 9;
						}
						else
						{
							if (func_145(uLocal_410[0], &(uLocal_413[0]), Global_35, &uLocal_790, &uLocal_577, &Local_101))
							{
								func_132();
								func_146(&uLocal_844);
								PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uLocal_410[0], 1, 1);
								func_30(&iLocal_400, 256);
								func_147(13, 0, 0, "RE_HONOR_SAVED_VICTIM", uLocal_410[0], 0, 1065353216 /* Float: 1f */, 0);
								iLocal_371 = 9;
							}
							Jump @1678; //curOff = 1490
							if (!func_33(iLocal_400, 65536))
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_410[0]))
								{
									func_141();
									if (func_107(uLocal_410[0], 0, &uLocal_796, &uLocal_795, 0, 0))
									{
										func_30(&iLocal_400, 65536);
									}
								}
							}
							if (func_148(&uLocal_844))
							{
								if (func_127(&uLocal_844) > 0.5f)
								{
									func_149(uLocal_410[0], "SCREAM_SHOCKED", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
									func_146(&uLocal_844);
								}
							}
							if (Local_101.f_98[0] > 35f)
							{
								if (!func_51(uLocal_410[1], 0, 0))
								{
									return true;
								}
								else if (Local_101.f_98[1] > 35f)
								{
									return true;
								}
							}
						}
						return false;
					}
				}
			}
			default:
				break;
	}
}

int func_37(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_150())
			{
				return 1;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return 1;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_151(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_76(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_76(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_76(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *uParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[uParam0->f_188]))
				{
					if (Global_1935630.f_40 != (*uParam1)[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD((*uParam1)[uParam0->f_188])) || !bParam3)
						{
							if ((uParam0->f_98[uParam0->f_188] * uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return 1;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_152(Global_36, uParam0->f_51) > fVar0)
				{
					return 1;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_152(Global_36, vVar1) > fVar0)
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return 1;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return 0;
}

int func_38()
{
	if (Local_101.f_48)
	{
		if (func_153())
		{
			return 1;
		}
	}
	return 0;
}

void func_39(var uParam0)
{
	func_42(uParam0, 0);
	func_47(uParam0, 0);
	func_49(uParam0, 1);
	func_154(uParam0, 1);
	func_155(uParam0, 0);
	func_48(uParam0, 1);
	func_156(uParam0, 1, 1, 1);
}

var func_40(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_157(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_158(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_157(sVar0, iParam1, 0, 0, 1, 1);
}

int func_41()
{
	return Global_1897952.f_41;
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_159(&(uParam0->f_1), 16384);
	}
	else
	{
		func_96(&(uParam0->f_1), 16384);
	}
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_159(&(uParam0->f_1), 1024);
	}
	else
	{
		func_96(&(uParam0->f_1), 1024);
	}
}

void func_44(var uParam0, float fParam1)
{
	uParam0->f_17 = fParam1;
}

void func_45(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_46(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

void func_47(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_159(&(uParam0->f_1), 2048);
	}
	else
	{
		func_96(&(uParam0->f_1), 2048);
	}
}

void func_48(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_96(iParam0, 256);
	}
	else
	{
		func_159(iParam0, 256);
	}
}

void func_49(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_159(&(uParam0->f_1), 256);
	}
	else
	{
		func_96(&(uParam0->f_1), 256);
	}
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_159(&(uParam0->f_1), 4);
	}
	else
	{
		func_96(&(uParam0->f_1), 4);
	}
}

bool func_51(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_160(iParam0, iParam1);
}

bool func_52()
{
	if (func_161() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 != 0)
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam3);
		if (iVar0 != 0)
		{
			func_162(iParam0, iParam1, iVar0);
			func_164(iParam0, iParam1, func_163(iParam3));
		}
	}
	else if (iParam4 != 0)
	{
		func_162(iParam0, iParam1, iParam4);
		func_164(iParam0, iParam1, func_163(iParam3));
	}
	func_165(iParam0, iParam1, iParam2);
	func_167(iParam0, iParam1, func_166(1));
	func_169(iParam0, iParam1, func_168());
}

void func_54(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_170(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_161() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 = (Global_17504.f_42[iParam0 /*8*/].f_4 + iVar0);
}

int func_55(var uParam0)
{
	return uParam0->f_51.f_4;
}

void func_56(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_171(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_172(uParam0->f_3, 524288);
		}
	}
	if (func_51(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*uParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (func_51((*uParam1)[iVar0], 0, 0))
			{
				func_173((*uParam1)[iVar0], bVar3);
				if (func_174(uParam0, uParam1[iVar0]))
				{
					func_175(uParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_51((*uParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_177((*uParam1)[iVar0], 1073741824 /* Float: 2f */, func_176(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*uParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_178(uParam0);
	}
	func_179(uParam0);
	if (!uParam0->f_186)
	{
		func_93(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_180(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_181(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_57(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Param0))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Param0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Param0.f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Param0.f_1);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Param0.f_2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Param0.f_2);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Param0.f_3))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Param0.f_3);
	}
}

void func_58()
{
	func_182(&uLocal_416, &uLocal_417);
	func_182(&iLocal_418, &uLocal_420);
}

void func_59(var uParam0, int iParam1)
{
	if (func_183(uParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(uParam0, iParam1);
	}
}

void func_60(int iParam0)
{
	Global_1310750.f_16035 = (Global_1310750.f_16035 - (Global_1310750.f_16035 && iParam0));
}

bool func_61(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_184(iVar0))
	{
		return false;
	}
	if (func_185(iVar0, 1) || func_185(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_62(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_186(uParam0->f_3);
	iVar1 = func_187(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	PED::_0xED9582B3DA8F02B4(iVar0);
	if (PED::_0x5C16855277819BBF() >= iVar0)
	{
		return true;
	}
	return false;
}

void func_63()
{
	func_188(&(Local_305[0 /*32*/].f_22));
	func_188(&(Local_305[1 /*32*/].f_22));
	switch (iLocal_422)
	{
		case 76:
			switch (iLocal_17)
			{
				case 0:
					Local_305[0 /*32*/].f_1 = joaat("RE_DROWNMURDER_FEMALES_01");
					Local_305[0 /*32*/] = 5;
					StringCopy(&(Local_305[0 /*32*/].f_23), "0546_A_F_M_Civ_White_15", 64);
					Local_305[0 /*32*/].f_3 = 1056682093;
					Local_305[1 /*32*/].f_1 = joaat("RE_DROWNMURDER_MALES_01");
					Local_305[1 /*32*/] = 22;
					StringCopy(&(Local_305[1 /*32*/].f_23), "0585_A_M_M_Civ_White_09", 64);
					Local_305[1 /*32*/].f_3 = -1645688396;
					break;
			}
			break;
		case 105:
			switch (iLocal_17)
			{
				case 0:
					Local_305[0 /*32*/].f_1 = joaat("RE_DROWNMURDER_FEMALES_01");
					Local_305[0 /*32*/] = 5;
					StringCopy(&(Local_305[0 /*32*/].f_23), "0537_A_F_M_Civ_White_06", 64);
					Local_305[0 /*32*/].f_3 = 311089032;
					Local_305[1 /*32*/].f_1 = joaat("RE_DROWNMURDER_MALES_01");
					Local_305[1 /*32*/] = 22;
					StringCopy(&(Local_305[1 /*32*/].f_23), "0677_A_M_M_RhdTownfolk_02_WHITE_01", 64);
					Local_305[1 /*32*/].f_3 = -806572609;
					break;
			}
			break;
		case 92:
			switch (iLocal_17)
			{
				case 1:
					Local_305[0 /*32*/].f_1 = joaat("RE_DROWNMURDER_FEMALES_01");
					Local_305[0 /*32*/] = 5;
					StringCopy(&(Local_305[0 /*32*/].f_23), "0863_A_F_M_Civ_Poor_White_AVOID_01", 64);
					Local_305[0 /*32*/].f_3 = -555691071;
					Local_305[1 /*32*/].f_1 = joaat("RE_DROWNMURDER_MALES_01");
					Local_305[1 /*32*/] = 22;
					StringCopy(&(Local_305[1 /*32*/].f_23), "0465_A_M_M_ValTownfolk_01_WHITE_01", 64);
					Local_305[1 /*32*/].f_3 = -175048441;
					break;
			}
			break;
	}
}

void func_64(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_189(&((iParam0[iVar0 /*32*/])->f_1));
		func_189(&((iParam0[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

void func_65()
{
	Local_67[0 /*2*/] = "script_re@drown_murder@drowned";
	Local_67[0 /*2*/].f_1 = "brkout_female_v1_victim";
	func_79(Local_67[0 /*2*/], &uLocal_18);
	Local_67[1 /*2*/] = "script_re@drown_murder@escape";
	Local_67[1 /*2*/].f_1 = "brkout_male_attacker";
	func_79(Local_67[1 /*2*/], &uLocal_18);
	Local_67[2 /*2*/] = "script_re@drown_murder@drowned";
	Local_67[2 /*2*/].f_1 = "quick_drown_attacker";
	Local_67[3 /*2*/] = "script_re@drown_murder@drowned";
	Local_67[3 /*2*/].f_1 = "quick_drown_victim";
	Local_67[4 /*2*/] = "script_re@drown_murder@drowned";
	Local_67[4 /*2*/].f_1 = "quick_drown_trough";
	func_79(Local_67[2 /*2*/], &uLocal_18);
}

void func_66()
{
	switch (iLocal_17)
	{
		case 0:
			Local_80.f_4 = "script@beat@town@drownMurder@drown";
			break;
		case 1:
			Local_80.f_4 = "script@beat@town@drownMurder@fightback";
			break;
	}
}

void func_67()
{
	Local_88[0 /*12*/].f_7 = joaat("P_LANTERN04X");
	func_30(&(Local_88[0 /*12*/].f_11), 8);
	func_30(&(Local_88[0 /*12*/].f_11), 2);
	Local_88[0 /*12*/].f_10 = 0;
}

void func_68(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*12*/])->f_7 != 0)
		{
			STREAMING::REQUEST_MODEL((uParam0[iVar0 /*12*/])->f_7, false);
		}
		iVar0++;
	}
}

void func_69()
{
	switch (func_2())
	{
		case 76:
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_STARE_STOIC"), 15, 0, 0);
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_STAND_WAITING"), 15, 0, 0);
			break;
		case 105:
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_LEAN_WALL_LEFT"), 15, 0, 0);
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_STAND_WAITING"), 15, 0, 0);
			break;
		case 92:
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_SMOKE"), 15, 0, 0);
			break;
	}
}

bool func_70(var uParam0, char* sParam1)
{
	return true;
}

bool func_71(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*12*/])->f_7 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((uParam0[iVar0 /*12*/])->f_7))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_72(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_190(iParam0[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_73()
{
	switch (func_2())
	{
		case 76:
			if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_STARE_STOIC"), false) && STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_STAND_WAITING"), false))
			{
				return true;
			}
			else
			{
				func_69();
			}
			break;
		case 105:
			if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_LEAN_WALL_LEFT"), false) && STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_STAND_WAITING"), false))
			{
				return true;
			}
			else
			{
				func_69();
			}
			break;
		case 92:
			if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_SMOKE"), false))
			{
				return true;
			}
			else
			{
				func_69();
			}
			break;
	}
	return false;
}

int func_74(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;

	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_191(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_192(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_97(iParam0, 128))
			{
				if (!func_193(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_194(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_195(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_25(*uParam1))
				{
					return func_196(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_197(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_3(Param4.f_2, 8))
				{
					func_192(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_198(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_199(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_200(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_97(iParam0, 128))
			{
				if (!func_201(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_196(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_194(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_198(uParam1))
					{
						return func_196(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_202(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_192(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_196(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_40("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			func_40("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_75(var uParam0, int iParam1)
{
	if (func_76(iParam1, 256))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_172) || func_203(iParam1, func_55(uParam0), &(uParam0->f_172)))
		{
			if (func_51(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_76(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

void func_77(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_205(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_76(uParam0->f_3, 1) && !func_76(uParam0->f_3, 32))
	{
		func_205(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_76(uParam0->f_3, 2) && !func_76(uParam0->f_3, 32))
	{
		func_205(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_206(uParam0->f_171, 1);
	}
	if (func_76(uParam0->f_3, 1))
	{
		func_205(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_GET_VOLUME_SCALE(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_207(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_78(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { Global_36 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

void func_79(char* sParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1[iVar0 /*8*/]))
		{
			StringCopy(uParam1[iVar0 /*8*/], sParam0, 64);
			STREAMING::REQUEST_ANIM_DICT(uParam1[iVar0 /*8*/]);
			return;
		}
		iVar0++;
	}
}

int func_80(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 60;
		case 1:
			return 50;
		case 2:
			return 30;
		case 3:
			return 60;
		case 4:
			return 60;
		case 10:
			return 50;
		case 79:
			return 50;
		case 14:
			return 50;
		case 80:
			return 50;
		case 82:
			return 50;
		case 87:
			return 50;
		case 90:
			return 50;
		case 27:
			return 50;
		case 28:
			return 60;
		case 31:
			return 50;
		case 32:
			return 50;
		case 33:
			return 50;
		case 34:
			return 50;
		case 37:
			return 30;
		case 97:
			return 30;
		case 38:
			return 30;
		case 39:
			return 30;
		case 40:
			return 30;
		case 100:
			return 30;
		case 102:
			return 30;
		case 45:
			return 50;
		case 48:
			return 50;
		case 49:
			return 50;
		case 50:
			return 50;
		case 106:
			return 60;
		case 107:
			return 60;
		case 54:
			return 60;
		case 109:
			return 50;
		case 62:
			return 50;
		case 115:
			return 50;
		case 119:
			return 50;
		default:
			break;
	}
	return 0;
	return 0;
}

bool func_81(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	int iVar0;

	if (*iParam4 != *iParam5)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_208() || !func_209(iParam4[iVar0 /*32*/], iParam5[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_82()
{
	int iVar0;

	iVar0 = 1;
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_80, true, false))
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblAll"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblAll");
			iVar0 = 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblBreakoutBack"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblBreakoutBack");
			iVar0 = 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblBreakoutBackV2"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblBreakoutBackV2");
			iVar0 = 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblBreakoutFront"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblBreakoutFront");
			iVar0 = 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblBreakoutFrontV2"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblBreakoutFrontV2");
			iVar0 = 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblBreakoutLeft"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblBreakoutLeft");
			iVar0 = 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblBreakoutLeftV2"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblBreakoutLeftV2");
			iVar0 = 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblBreakoutRight"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblBreakoutRight");
			iVar0 = 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblBreakoutRightV2"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblBreakoutRightV2");
			iVar0 = 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblQuickKill"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblQuickKill");
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_83(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_210(iParam3, 1);
	bVar1 = func_210(iParam3, 2);
	bVar2 = !func_210(iParam3, 4);
	bVar3 = func_210(iParam3, 8);
	bVar4 = !func_210(iParam3, 16);
	bVar5 = func_210(iParam3, 32);
	bVar6 = func_210(iParam3, 64);
	return func_211(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_85(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_212(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

void func_86()
{
	Local_423 = { 0f, 0f, 0f };
	Local_423.f_3 = Global_35;
	Local_423.f_8 = 4;
	Local_423.f_19 = 4;
	Local_423.f_20 = 4;
	Local_423.f_21 = 4;
	Local_423.f_22 = 4;
	Local_423.f_17 = 4;
	Local_423.f_18 = 4;
	Local_423.f_7 = 7000;
}

int func_87(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_213(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_88(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				func_214(iParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_215(iParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			func_216(iParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_217(iParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*iParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*iParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_0x4C39C95AE5DB1329(*iParam0, 0, 15);
		}
	}
}

void func_89(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_183(uParam0))
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, iParam4, iParam5, iParam6, iParam7);
		if (func_183(uParam0))
		{
		}
	}
}

void func_90(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 32768;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_91(var uParam0, bool bParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_218(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

float func_92(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

void func_93(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_219(uParam0) };
	iVar3 = func_180(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_94(var uParam0, var uParam1)
{
	if (uParam0->f_2 >= *uParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS((*uParam1)[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_95(var uParam0)
{
	func_49(uParam0, 1);
	func_45(uParam0, 20);
}

void func_96(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_97(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/].f_1 && iParam1) != 0;
}

void func_98(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_204(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_220())
	{
		func_221(1);
	}
	func_222(iParam2, uParam0->f_43);
	func_223(iParam2, 0, 0, 0, 0);
	if (func_224(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(true);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_171(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_225(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_99(var uParam0)
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

void func_100(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 && func_226())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_97(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_98(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_99(&(uParam0->f_121));
			return;
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!func_227(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_228(uParam0, bVar0);
		func_229(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432 /* Float: 4f */, 0, 90f, 0, uParam0->f_98[iParam1]);
		if (func_230(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_98(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_99(&(uParam0->f_121));
		}
	}
}

bool func_101(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30f;
	fVar1 = 150f;
	if (func_76(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_231())
			{
				fVar0 = 15f;
			}
		}
		if (func_232(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_233(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (!func_232(uParam2, fVar1))
		{
			if (!func_234(Global_1310750[uParam2->f_3 /*111*/].f_38))
			{
				return false;
			}
		}
		if (!func_235(uParam2->f_3, 2) && func_236(2))
		{
			return false;
		}
		if (func_76(iParam0, 4194304) || func_76(iParam0, 33554432))
		{
			if (func_237(1))
			{
				return false;
			}
		}
	}
	if (func_238(Global_35))
	{
		return false;
	}
	if (func_239(0, 1, 1) && !func_240(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_76(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (func_125(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_233(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (func_241())
		{
			return false;
		}
		iVar2 = func_242(func_2());
		if (func_243(iVar2))
		{
			if (func_244(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_245(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_246(&(uParam2->f_91), 0, 1084227584 /* Float: 5f */, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_102(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	if (func_247(uParam0->f_51))
	{
		func_248(uParam0->f_51, 0);
		fVar0 = func_249(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_250());
		bVar1 = func_176(!func_76(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_252(iVar2, func_251(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_103(float fParam0)
{
	return !func_253(fParam0, 1, 0, 0);
}

bool func_104()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_410[0]))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], 243556862))
		{
			if (!func_33(iLocal_400, 512))
			{
				PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(uLocal_410[0]);
				PED::SET_PED_WETNESS_HEIGHT(uLocal_410[0], 2f);
				func_30(&iLocal_400, 512);
			}
			return true;
		}
	}
	return false;
}

float func_105(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_106(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_107(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_254(iParam2, 1, iVar0);
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
			if (func_255(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_256(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_257(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_256(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (func_258(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_256(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_259(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_256(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_233(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_256(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_260(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_261(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_256(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_262(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_256(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_263(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_256(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (func_263(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_256(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_264(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_256(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (func_265(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					func_256(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_266(iParam2, 4000))
				{
					if ((func_267(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_268(iParam2, iParam0)) && func_269(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_256(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_267(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_268(iParam2, iParam0)) && func_269(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_256(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_270(iParam0, Global_1935630.f_41))
							{
								func_271();
								*iParam3 = 2;
								func_256(iParam0, iParam2, *iParam3);
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
						if (func_270(iParam0, Global_1935630.f_41))
						{
							func_271();
							*iParam3 = 2;
							func_256(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_272(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_273() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_271();
						*iParam3 = 2;
						func_256(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_274())
					{
						if (func_270(iParam0, Global_1935630.f_42))
						{
							func_271();
							*iParam3 = 2;
							func_256(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_275(iParam2, iParam0))
			{
				*iParam3 = 1024;
				func_256(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_276(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					func_256(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_277(iParam0, iParam2))
					{
						*iParam3 = 8192;
						func_256(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_278(iParam0, iParam2))
				{
					*iParam3 = 32768;
					func_256(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_279(iParam2, 4000))
				{
					if (func_280(&iParam0, iParam2))
					{
						*iParam3 = 512;
						func_256(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_281(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					func_256(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_282(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_256(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_108()
{
	if (Local_101.f_48)
	{
		if (!func_148(&uLocal_853))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], 243556862))
			{
				func_283(uLocal_410[0], joaat("EVENT_SHOCKING_BEAT_DISTURBING"), -1f, 15f, 15f, -1082130432 /* Float: -1f */);
				func_124(&uLocal_853);
			}
		}
	}
}

void func_109()
{
	if (!Local_101.f_46)
	{
		return;
	}
	if (!func_33(iLocal_400, 32768))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_410[1]) && func_51(uLocal_410[0], 0, 1))
		{
			if (!func_148(&uLocal_451))
			{
				func_124(&uLocal_451);
			}
			else if (func_127(&uLocal_451) > 3f)
			{
				if (!func_33(iLocal_400, 16384))
				{
					if (func_33(iLocal_403, 128))
					{
						if (!func_33(iLocal_400, 32768))
						{
							func_284(49);
							func_146(&uLocal_451);
							func_30(&iLocal_400, 32768);
						}
					}
					else if (!func_51(uLocal_410[1], 0, 1))
					{
						if (func_51(uLocal_410[0], 0, 1))
						{
							if (PED::GET_PED_CONFIG_FLAG(uLocal_410[1], 11, true))
							{
								if (func_285(uLocal_410[1], 2000, 0, 0) && !func_33(iLocal_400, 32768))
								{
									func_284(29);
									func_146(&uLocal_451);
									func_30(&iLocal_400, 32768);
								}
							}
							else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_410[1], Global_35, 1, 1) && !func_33(iLocal_400, 32768))
							{
								func_284(49);
								func_146(&uLocal_451);
								func_30(&iLocal_400, 32768);
							}
							else
							{
								func_146(&uLocal_451);
								func_30(&iLocal_400, 32768);
							}
						}
						else
						{
							func_146(&uLocal_451);
							func_30(&iLocal_400, 32768);
						}
					}
				}
			}
		}
	}
	else if (!func_33(iLocal_401, 1))
	{
		if (!func_148(&uLocal_451))
		{
			func_124(&uLocal_451);
		}
		else if (func_127(&uLocal_451) > 2f)
		{
			if (func_51(uLocal_410[0], 0, 1))
			{
				func_286(uLocal_410[0], 4);
				func_30(&iLocal_401, 1);
			}
		}
	}
}

void func_110()
{
	bool bVar0;

	if (!func_33(iLocal_400, 32))
	{
		bVar0 = true;
		if (func_51(uLocal_410[1], 0, 1))
		{
			if (!PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_410[1], "Default_Angry"))
			{
				PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_410[1], "Default_Angry");
				bVar0 = false;
			}
		}
		if (func_51(uLocal_410[0], 0, 1))
		{
			if (!PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_410[0], "Default_Angry"))
			{
				PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_410[0], "Default_Angry");
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			func_30(&iLocal_400, 32);
		}
	}
}

void func_111()
{
	if (func_33(iLocal_400, 8388608))
	{
		if (!func_33(iLocal_401, 2))
		{
			if (func_33(iLocal_400, 1024))
			{
				func_147(4, 0, 0, "RE_HONOR_WATCHED_MURDER", uLocal_410[0], 0, 1065353216 /* Float: 1f */, 0);
				func_30(&iLocal_401, 2);
			}
		}
	}
	if (func_33(iLocal_400, 8388608))
	{
		if (!func_33(iLocal_401, 8))
		{
			if (func_33(iLocal_400, 2048) && iLocal_372[0] >= 7)
			{
				func_147(2, 0, 0, "RE_HONOR_WITNESSED_CRIME", uLocal_410[0], 0, 1065353216 /* Float: 1f */, 0);
				func_30(&iLocal_401, 8);
			}
		}
	}
	if (!func_33(iLocal_401, 4))
	{
		if (!func_33(iLocal_401, 8) && !func_33(iLocal_401, 2))
		{
			if (func_287())
			{
				func_147(2, 0, 0, "RE_HONOR_IGNORED_VICTIM", uLocal_410[0], 0, 1065353216 /* Float: 1f */, 0);
				func_30(&iLocal_401, 4);
			}
		}
	}
}

void func_112(int iParam0)
{
	if (bLocal_830 || iLocal_371 <= 1)
	{
		return;
	}
	if (!func_288())
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PED::_IS_PED_HOGTIED(iParam0))
			{
				if (func_289(Global_35))
				{
					if (func_290(Global_35) == func_291(iParam0))
					{
						PED::SET_PED_CONFIG_FLAG(iParam0, 6, false);
						bLocal_830 = true;
					}
				}
			}
		}
	}
}

void func_113(int iParam0)
{
	if (bLocal_831)
	{
		return;
	}
	if (!func_288())
	{
		bLocal_831 = true;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			if (func_289(Global_35))
			{
				if (func_290(Global_35) == func_291(iParam0))
				{
					DECORATOR::DECOR_SET_BOOL(iParam0, "bIgnoreLawMissionEntity", true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
					bLocal_831 = true;
				}
			}
		}
	}
}

void func_114()
{
	int iVar0;
	bool bVar1;

	if (func_292(uLocal_410[1], Local_101.f_51, 1) < 1.5f)
	{
		if (func_51(uLocal_410[1], 0, 1))
		{
			PED::SET_PED_RESET_FLAG(uLocal_410[1], 47, true);
		}
	}
	func_293();
	func_294();
	switch (iLocal_372[1])
	{
		case 0:
			iLocal_372[1] = 1;
			break;
		case 1:
			if (func_33(iLocal_400, 1))
			{
				if (iLocal_17 == 1)
				{
					iLocal_372[1] = 2;
				}
				else
				{
					PED::_0x89F5E7ADECCCB49C(uLocal_410[1], "Angry");
					iLocal_372[1] = 3;
				}
			}
			else if (bLocal_828)
			{
				iLocal_372[1] = 4;
			}
			break;
		case 2:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false))
			{
				iLocal_372[1] = 7;
			}
			if (func_33(iLocal_400, 1024))
			{
				iLocal_372[1] = 4;
			}
			break;
		case 3:
			func_295();
			func_296();
			if (func_33(iLocal_400, 1024))
			{
				iLocal_372[1] = 4;
			}
			break;
		case 4:
			func_295();
			func_296();
			if (!TASK::GET_IS_TASK_ACTIVE(uLocal_410[1], 3) || (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false) && ANIMSCENE::_0x005E6F28DD7ED58D(Local_80, "PED_BADGUY")))
			{
				func_30(&iLocal_400, 4096);
				func_297(uLocal_410[1], 1f, 1, 1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_410[1], joaat("REL_CIVMALE"));
				iLocal_372[1] = 7;
			}
			break;
		case 7:
			func_295();
			if (iLocal_17 == 1)
			{
			}
			else if (iLocal_17 == 0)
			{
				func_296();
				if (!func_33(iLocal_403, 128))
				{
					if (func_33(iLocal_400, 16777216))
					{
						func_30(&iLocal_400, 33554432);
						func_298();
						Local_101.f_46 = 1;
						iLocal_372[1] = 9;
					}
				}
				else
				{
					iLocal_372[1] = 8;
				}
				func_298();
			}
			break;
		case 8:
			func_298();
			break;
		case 6:
			break;
		case 9:
			if (func_33(iLocal_400, 2048))
			{
				if (func_51(uLocal_410[1], 0, 1))
				{
					func_299(uLocal_410[1], 1, 0);
					func_30(&iLocal_400, 16384);
				}
				func_34(&(uLocal_413[1]));
			}
			else if (func_51(uLocal_410[1], 0, 1))
			{
				func_300();
				if (iLocal_576 == -1)
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_410[1], -1))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_80, "PED_BADGUY", uLocal_410[1]);
					}
					if (func_33(iLocal_403, 256) || func_33(iLocal_400, 16777216))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_410[1], 93, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_410[1], 92, true);
						PED::_0x8ACC0506743A8A5C(uLocal_410[1], joaat("SITUATIONNORMAL"), 1, -1082130432 /* Float: -1f */);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					PED::REGISTER_TARGET(uLocal_410[1], Global_35, 1);
					if (func_33(iLocal_400, 16777216) || func_33(iLocal_403, 256))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(uLocal_410[1], joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
						if ((func_33(iLocal_400, 16777216) && Local_101.f_98[1] > 5f) && !func_33(iLocal_403, 256))
						{
							TASK::TASK_REACT(0, Global_35, Global_36, "Default_Angry", 1f, 0, 4);
							TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, Global_35, 0f, 0.5f, 0f, 1f, 4000, 1f, 1, 1, 0, 0, 1);
						}
						else
						{
							TASK::TASK_REACT(0, Global_35, Global_36, "Default_Angry", 3f, 0, 4);
						}
						TASK::TASK_SWAP_WEAPON(0, 1, 1, 0, 0);
						TASK::TASK_COMBAT_PED(0, Global_35, 1048576, 4096);
					}
					else if (WEAPON::_0xCB690F680A3EA971(Global_35, 4))
					{
						TASK::TASK_COMBAT_PED(0, Global_35, 16384, 16);
					}
					else
					{
						TASK::TASK_REACT(0, Global_35, Global_36, "Default_Angry", 1.5f, 0, 4);
						TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
					}
					func_301(uLocal_410[1], &iVar0, 0, 0, 1, 1);
					PED::SET_PED_KEEP_TASK(uLocal_410[1], true);
					func_302(uLocal_410[1], &(uLocal_413[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					iLocal_372[1] = 14;
				}
				else
				{
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_410[1], 0);
					iLocal_372[1] = 10;
				}
			}
			else
			{
				iLocal_372[1] = 14;
			}
			break;
		case 10:
			func_300();
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_410[1], -1))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_410[1], Local_80))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_80, "PED_BADGUY", uLocal_410[1]);
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				PED::REGISTER_TARGET(uLocal_410[1], Global_35, 1);
				if (func_33(iLocal_403, 256))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_410[1], 93, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_410[1], 92, true);
					PED::_0x8ACC0506743A8A5C(uLocal_410[1], joaat("SITUATIONNORMAL"), 1, -1082130432 /* Float: -1f */);
					TASK::TASK_COMBAT_PED(0, Global_35, 68157440, 4096);
				}
				else
				{
					TASK::TASK_COMBAT_PED(0, Global_35, 16384, 16);
				}
				func_301(uLocal_410[1], &iVar0, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(uLocal_410[1], true);
				func_302(uLocal_410[1], &(uLocal_413[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				iLocal_372[1] = 14;
			}
			break;
		case 11:
			break;
		case 12:
			break;
		case 14:
			if (Local_101.f_46)
			{
				func_300();
				func_303();
			}
			if (func_2() == 105)
			{
				bVar1 = func_304(&Local_101, &uLocal_410, 1, 1);
				if (!func_305(1024))
				{
					if (bVar1)
					{
						func_306(1024);
					}
				}
				else if (!bVar1)
				{
					func_60(1024);
				}
			}
			func_307();
			func_298();
			break;
		case 15:
			break;
	}
}

void func_115()
{
	func_308();
	switch (iLocal_372[0])
	{
		case 0:
			iLocal_372[0] = 1;
			break;
		case 1:
			if (func_33(iLocal_400, 1))
			{
				if (iLocal_17 == 0)
				{
					iLocal_372[0] = 3;
				}
				else
				{
					iLocal_372[0] = 2;
				}
			}
			else if (bLocal_828)
			{
				iLocal_372[0] = 4;
			}
			break;
		case 2:
			if (func_309())
			{
				PED::FORCE_PED_MOTION_STATE(uLocal_410[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
				func_310(uLocal_410[0], joaat("EVENT_SHOCKING_BEAT_SURPRISING"), 1097859072 /* Float: 15f */, 1101004800 /* Float: 20f */, 1101004800 /* Float: 20f */, -1082130432 /* Float: -1f */);
				func_297(uLocal_410[0], 2f, 1, bLocal_397, uLocal_410[1], 0);
				func_34(&(uLocal_413[0]));
				func_124(&uLocal_850);
				iLocal_372[0] = 7;
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], 428295725))
			{
			}
			if (func_33(iLocal_400, 1024))
			{
				iLocal_372[0] = 4;
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], -647428130))
			{
				func_34(&(uLocal_413[0]));
				func_134();
			}
			if (func_33(iLocal_400, 1024))
			{
				iLocal_372[0] = 4;
			}
			break;
		case 4:
			break;
		case 5:
			break;
		case 7:
			if (iLocal_17 == 1)
			{
				PED::_0x89F5E7ADECCCB49C(uLocal_410[0], "Angry");
				iLocal_372[0] = 14;
			}
			else if (iLocal_17 == 0)
			{
				iLocal_372[0] = 14;
			}
			break;
		case 9:
			if (iLocal_576 == -1)
			{
				if (func_51(uLocal_410[0], 0, 1))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], -218438047))
					{
						if (!PED::IS_PED_RUNNING_RAGDOLL_TASK(uLocal_410[0]))
						{
							if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_410[0], -1))
							{
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_80, "PED_VICTIM", uLocal_410[0]);
							}
							PED::SET_PED_TO_RAGDOLL(uLocal_410[0], 1500, 4000, 0, false, false, false);
						}
					}
					else if (!PED::IS_PED_RUNNING_RAGDOLL_TASK(uLocal_410[0]))
					{
						if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_410[0], -1))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_80, "PED_VICTIM", uLocal_410[0]);
						}
						if (func_311())
						{
							iLocal_372[0] = 11;
						}
					}
				}
			}
			else
			{
				iLocal_372[0] = 10;
			}
			break;
		case 10:
			if (func_33(iLocal_400, 8))
			{
				func_312();
			}
			else if (iLocal_576 == -1)
			{
				if (func_51(uLocal_410[0], 0, 1) && !func_33(iLocal_400, 1024))
				{
					if (!func_51(uLocal_410[1], 0, 1))
					{
						iLocal_372[0] = 11;
					}
					else
					{
						func_311();
						iLocal_372[0] = 11;
					}
				}
			}
			else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_410[0], -1))
			{
				if (func_51(uLocal_410[0], 0, 1) && !func_33(iLocal_400, 1024))
				{
					if (!func_51(uLocal_410[1], 0, 1))
					{
						iLocal_372[0] = 11;
					}
					else if (func_311())
					{
						iLocal_372[0] = 11;
					}
				}
			}
			else
			{
				if (func_51(uLocal_410[1], 0, 1))
				{
					PED::SET_PED_RESET_FLAG(uLocal_410[0], 36, true);
					PED::SET_PED_RESET_FLAG(uLocal_410[0], 31, true);
				}
				func_313();
				if (func_33(iLocal_402, 1024))
				{
					func_314(&(uLocal_410[0]), 0, Global_35, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 11:
			if (!func_33(iLocal_400, 65536))
			{
				if (func_51(uLocal_410[0], 0, 1) && !func_33(iLocal_400, 1024))
				{
					func_315();
					if (!func_51(uLocal_410[1], 0, 1))
					{
						if (((!func_33(iLocal_400, 2048) && Local_101.f_98[0] < 20f) && !func_233(PLAYER::PLAYER_ID(), 1, 0, 1)) && !func_316())
						{
							if (!func_33(iLocal_400, 64))
							{
								if (!func_148(&uLocal_841))
								{
									func_317(&uLocal_841, 0);
								}
								PED::_0x89F5E7ADECCCB49C(uLocal_410[0], "Nervous");
								func_30(&iLocal_400, 64);
								iLocal_372[0] = 12;
							}
							else
							{
								iLocal_372[0] = 12;
							}
						}
						else
						{
							if (func_51(uLocal_410[0], 0, 1))
							{
								func_318(func_80(87), 1);
							}
							func_132();
							iLocal_372[0] = 14;
						}
					}
				}
			}
			else if (func_311())
			{
				if (func_33(iLocal_400, 64) && !func_33(iLocal_400, 65536))
				{
					iLocal_371 = 8;
				}
				else
				{
					func_144();
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_410[0], 518218985, true) != 1)
					{
						TASK::TASK_SMART_FLEE_PED(uLocal_410[0], Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
					}
					iLocal_372[0] = 16;
					iLocal_371 = 9;
				}
			}
			break;
		case 12:
			if (func_33(iLocal_400, 65536))
			{
				if (func_51(uLocal_410[0], 0, 1))
				{
					TASK::TASK_SMART_FLEE_PED(uLocal_410[0], Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
					PED::SET_PED_KEEP_TASK(uLocal_410[0], true);
					iLocal_372[0] = 14;
				}
			}
			else if (func_33(iLocal_400, 256))
			{
				func_320(Global_35, uLocal_410[0], func_319(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1506116031, 1, 0, 0);
				func_142(uLocal_410[0]);
				PED::_0x89F5E7ADECCCB49C(uLocal_410[0], "Nervous");
				func_297(uLocal_410[0], 2f, 1, 1, 0, 0);
				func_321();
				iLocal_372[0] = 14;
			}
			break;
		case 13:
			break;
		case 14:
			if (!func_33(iLocal_400, 65536))
			{
				if (func_107(uLocal_410[0], 0, &uLocal_796, &uLocal_795, 0, Local_101.f_98[0]))
				{
					TASK::TASK_SMART_FLEE_PED(uLocal_410[0], Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
					func_30(&iLocal_400, 65536);
					iLocal_372[0] = 16;
				}
				else
				{
					if (!Local_101.f_46)
					{
						if (iLocal_17 == 1)
						{
							if (func_127(&uLocal_850) > 1f)
							{
								func_135(5f, 1);
							}
							func_322();
						}
					}
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_421))
					{
						if (PED::_IS_PED_USING_SCENARIO_POINT(uLocal_410[0], iLocal_421))
						{
							if (!func_148(&uLocal_457))
							{
								func_124(&uLocal_457);
							}
							else if (func_127(&uLocal_457) > 30f)
							{
								func_323(uLocal_410[0], &(Local_463[0 /*21*/]), &Local_541, 1);
								iLocal_372[0] = 15;
							}
						}
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_410[0], 518218985, true) != 1)
			{
				TASK::TASK_SMART_FLEE_PED(uLocal_410[0], Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
				iLocal_372[0] = 16;
			}
			break;
		case 15:
			break;
		case 16:
			func_324();
			break;
	}
}

void func_116()
{
	if (func_33(iLocal_400, 268435456) || iLocal_371 <= 2)
	{
		return;
	}
	if (!func_33(iLocal_400, 134217728))
	{
		if (func_33(iLocal_400, 1024))
		{
			func_325();
			func_30(&iLocal_400, 134217728);
		}
		else
		{
			func_326();
		}
	}
	else
	{
		func_326();
	}
}

bool func_117()
{
	if (!func_33(iLocal_400, 4))
	{
		switch (iLocal_398)
		{
			case 0:
				iLocal_827 = ENTITY::_0x6F3068258A499E52(joaat("P_WATERTROUGH01X"), Local_101.f_51, 9);
				iLocal_398++;
				break;
			case 1:
				if (ENTITY::_0x1FF441D7954F8709(iLocal_827))
				{
					iLocal_826 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_827));
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_80, "objTrough", iLocal_826, 0);
					func_30(&iLocal_400, 4);
					return true;
				}
				break;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_118(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_228(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 && func_226())
	{
		bVar1 = true;
		fVar3 = func_176(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_229(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_229(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
		}
		if (func_230(&(uParam0->f_121), iParam4, fParam1))
		{
			func_99(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(func_180(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_121[iVar0 /*9*/].f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_121[iVar0 /*9*/].f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) && !(bParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						func_98(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_99(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(func_180(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_119()
{
	PED::SET_PED_CONFIG_FLAG(uLocal_410[1], 6, true);
	func_327(&(uLocal_410[1]), 0);
	func_325();
	func_30(&iLocal_401, 32);
}

void func_120(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	iLocal_834 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(iParam0, uLocal_410[1], fParam1, fParam2, fParam3, fParam4, 7f, 180f, false, false, -1, -1);
}

void func_121(int iParam0, vector3 vParam1, bool bParam4)
{
	if (bParam4)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::TRIGGER_SONAR_BLIP(iParam0, vParam1);
}

void func_122()
{
	if (func_33(iLocal_402, 512))
	{
		return;
	}
	if (!func_104())
	{
		if (iLocal_422 == 76)
		{
			if (iLocal_17 == 0)
			{
				func_320(uLocal_410[0], 0, "RE_DM_VAL_V1_WIFE_CALLOUT_B", "", 75f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
			}
		}
		else if (iLocal_422 == 105)
		{
			func_149(uLocal_410[0], "RE_DM_RHD_V1_WIFE_CALLOUT_A", 1744022339, 0, 1, &(Local_305[0 /*32*/].f_23), 2, 1);
		}
		else if (iLocal_422 == 92)
		{
			func_320(uLocal_410[0], 0, "PANIC_HELP", "", 75f, 1, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
		}
		func_30(&iLocal_402, 512);
	}
	else
	{
		if (iLocal_422 == 76)
		{
			if (iLocal_17 == 0)
			{
			}
		}
		else if (iLocal_422 == 105)
		{
		}
		else if (iLocal_422 == 92)
		{
			func_320(uLocal_410[0], 0, "PANIC_HELP", "", 75f, 1, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
		}
		func_30(&iLocal_402, 512);
	}
}

void func_123(int iParam0, var uParam1, var uParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8)
{
	iParam0->f_6 = uParam1;
	iParam0->f_3 = { vParam3 };
	iParam0->f_2 = 0;
	iParam0->f_7 = MISC::GET_GAME_TIMER();
	*iParam0 = *uParam2;
	iParam0->f_8 = iParam8;
}

void func_124(var uParam0)
{
	func_328(uParam0, 0f);
}

bool func_125(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_329(iVar0) || func_330(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

void func_126()
{
	if (func_33(iLocal_402, 4))
	{
		return;
	}
	if (iLocal_17 == 0)
	{
		if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[0]))
		{
			func_320(uLocal_410[0], uLocal_410[1], func_331("DEFENSIVE"), "", 75f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
			func_121(1891783641, Local_101.f_51, 1);
			func_30(&iLocal_402, 4);
		}
	}
	else if (iLocal_17 == 1)
	{
		if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[0]))
		{
			func_320(uLocal_410[0], uLocal_410[1], func_331("HELP"), "", 75f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
			func_121(1891783641, Local_101.f_51, 1);
			func_124(&uLocal_838);
			func_30(&iLocal_402, 4);
		}
	}
}

float func_127(var uParam0)
{
	if (!func_148(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_332(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_333() - uParam0->f_1);
}

void func_128()
{
	bool bVar0;

	if (iLocal_371 > 1)
	{
		if (!Local_101.f_44)
		{
			if (iLocal_832 > 2)
			{
				if (PED::_0x7F9B9791D4CB71F6(uLocal_410[1], Global_35, true, 0) == 1 || PED::_0x7F9B9791D4CB71F6(uLocal_410[0], Global_35, true, 0) == 1)
				{
					func_132();
				}
			}
		}
		switch (iLocal_832)
		{
			case 0:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(15)))
				{
					if (func_127(&uLocal_850) > 1.5f)
					{
						func_320(uLocal_410[1], uLocal_410[0], func_331("BERATE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
						func_335(&iLocal_402, 64);
						func_124(&uLocal_850);
						iLocal_832++;
					}
				}
				if (func_33(iLocal_402, 2))
				{
					if ((!func_104() && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[0])) && !func_33(iLocal_402, 64))
					{
						func_149(uLocal_410[0], "SCREAM_TERROR", joaat("SPEECH_PARAMS_STANDARD"), 0, 1, 0, 0, 1);
						func_30(&iLocal_400, 64);
					}
				}
				else if (func_104())
				{
				}
				else if (!func_33(iLocal_402, 1))
				{
					if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[0]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_410[0]))
					{
						func_149(uLocal_410[0], "SCREAM_SHOCKED", 1744022339, 0, 1, 0, 0, 1);
						func_30(&iLocal_402, 1);
					}
				}
				break;
			case 1:
				if (func_33(iLocal_402, 128) && func_33(iLocal_402, 64))
				{
					iLocal_832++;
				}
				else
				{
					if (!func_33(iLocal_402, 128))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(1)) && func_33(iLocal_402, 64))
						{
							func_320(uLocal_410[1], uLocal_410[0], func_331("ANGRY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
							func_30(&iLocal_402, 128);
						}
					}
					if (iLocal_370 == 9)
					{
						if (func_104())
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], func_334(28)))
							{
								bVar0 = false;
							}
							else
							{
								bVar0 = true;
							}
						}
					}
					else if (func_104())
					{
						bVar0 = true;
					}
					if (bVar0)
					{
						if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[0]) && !ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], func_334(28)))
						{
						}
					}
					else if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[0]) && !func_33(iLocal_402, 64))
					{
						func_121(1891783641, Local_101.f_51, 1);
						func_320(uLocal_410[0], uLocal_410[1], func_331("STOP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
						func_30(&iLocal_402, 64);
					}
				}
				break;
			case 2:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], func_334(16)) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_80) < 0.1f)
				{
					func_320(uLocal_410[0], uLocal_410[1], func_331("STRUGGLE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_80, "action", true, false);
					iLocal_832++;
				}
				break;
			case 3:
				if (!func_33(iLocal_402, 32))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], joaat("ONKNEES")) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], joaat("HEADBUTT")))
					{
						func_320(uLocal_410[0], uLocal_410[1], func_331("SCREAM"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
						func_30(&iLocal_402, 32);
					}
				}
				if ((!func_33(iLocal_402, 8192) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_80) > 0.248558f)
				{
					func_121(1891783641, Local_101.f_51, 1);
					func_30(&iLocal_402, 8192);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], joaat("HEADBUTT")))
				{
					func_30(&iLocal_400, 2048);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(3)))
				{
					func_320(uLocal_410[1], uLocal_410[0], func_331("AGONY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], func_334(4)))
				{
					func_320(uLocal_410[0], uLocal_410[1], func_331("HEADBUTT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(5)))
				{
					func_320(uLocal_410[1], uLocal_410[0], func_331("PAIN_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(6)))
				{
					func_320(uLocal_410[1], uLocal_410[0], func_331("PAIN_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], func_334(7)))
				{
					func_320(uLocal_410[0], uLocal_410[1], func_331("STOMP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				break;
		}
	}
}

int func_129()
{
	if (func_33(iLocal_400, 2048))
	{
		return 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], 1270344867))
	{
		func_30(&iLocal_400, 2048);
		return 1;
	}
	return 0;
}

void func_130()
{
	if (func_33(iLocal_400, 67108864))
	{
		return;
	}
	if (func_33(iLocal_400, 2048))
	{
		PED::APPLY_PED_DAMAGE_PACK(uLocal_410[1], "PD_Blood_Spray_Front_att", 0f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(uLocal_410[1], "PD_Burst_lip", 0f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(uLocal_410[1], "PD_Nose_cut", 0f, 1f);
		func_30(&iLocal_400, 67108864);
	}
}

void func_131()
{
	func_44(&(Local_101.f_5), 15f);
	func_44(&uLocal_796, 15f);
}

void func_132()
{
	if (!Local_101.f_44)
	{
		Local_101.f_44 = 1;
		if (func_41() == 9)
		{
			if (iLocal_17 == 1)
			{
				func_164(87, iLocal_17, 7);
			}
		}
	}
}

void func_133()
{
	if (Local_101.f_46)
	{
		return;
	}
	switch (iLocal_832)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_80) > 0.192647f)
			{
				func_121(1891783641, Local_101.f_51, 1);
				iLocal_832++;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_80) > 0.35701f)
			{
				func_121(1891783641, Local_101.f_51, 1);
				iLocal_832++;
			}
			break;
		case 2:
			break;
	}
	if (!func_33(iLocal_402, 2))
	{
		func_124(&uLocal_847);
		func_30(&iLocal_402, 2);
	}
	else
	{
		if (!func_33(iLocal_400, 2097152))
		{
			if (func_127(&uLocal_847) > 0.75f || (func_253(0, 1, uLocal_410[1], 1) && func_253(0, 1, uLocal_410[0], 1)))
			{
				func_320(uLocal_410[1], uLocal_410[0], func_331("ACCUSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_121(1891783641, Local_101.f_51, 1);
				func_124(&uLocal_847);
				func_30(&iLocal_400, 2097152);
			}
		}
		else if (!func_33(iLocal_400, 4194304))
		{
			if (func_127(&uLocal_847) > 0.5f || (func_253(0, 1, uLocal_410[1], 1) && func_253(0, 1, uLocal_410[0], 1)))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_80, "action", true, false);
				func_30(&iLocal_400, 4194304);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], func_334(14)))
		{
			func_320(uLocal_410[0], uLocal_410[1], func_331("LET_GO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(15)))
		{
			func_320(uLocal_410[1], uLocal_410[0], func_331("BERATE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], func_334(16)))
		{
			func_320(uLocal_410[0], uLocal_410[1], func_331("STRUGGLE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(17)))
		{
			func_320(uLocal_410[1], uLocal_410[0], func_331("MOCK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(26)))
		{
			func_320(uLocal_410[1], uLocal_410[0], func_331("DROWNING_A_01"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(27)))
		{
			func_320(uLocal_410[1], uLocal_410[0], func_331("DROWNING_B_01"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(18)))
		{
			func_320(uLocal_410[1], Global_35, func_331("DROWNED"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (!func_33(iLocal_400, 1024))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], 707255528))
			{
				func_134();
			}
		}
	}
}

void func_134()
{
	if (!func_33(iLocal_400, 1024))
	{
		func_47(&(Local_101.f_5), 0);
		func_48(&(Local_101.f_5), 1);
		func_336(uLocal_410[0], 1, 0);
		func_165(87, 2, 1);
		func_30(&iLocal_400, 1024);
	}
}

void func_135(float fParam0, int iParam1)
{
	if (func_33(iLocal_402, 256))
	{
		return;
	}
	if (!func_33(iLocal_402, 8))
	{
		if (func_292(Global_35, Local_101.f_51, 1) < 10f)
		{
			if (func_253(-3f, 1, uLocal_410[0], 1))
			{
				if (func_337(uLocal_410[0], Global_35, 1, fParam0, 0) || ((Local_101.f_98[0] < fParam0 && iParam1 == 0) && !ENTITY::IS_ENTITY_OCCLUDED(uLocal_410[0])))
				{
					func_320(uLocal_410[0], Global_35, func_331("HANG_AROUND"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_30(&iLocal_402, 8);
				}
			}
		}
	}
}

void func_136(var uParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(uParam0, iParam1);
}

void func_137()
{
	if (iLocal_834 != -1)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_834);
	}
}

void func_138()
{
	int iVar0;

	if (func_338())
	{
		iVar0 = func_339(uLocal_410[1], Global_35, 1060437492 /* Float: 0.707f */);
		if (func_104())
		{
			switch (iVar0)
			{
				case 0:
					iLocal_576 = 1;
					break;
				case 1:
					iLocal_576 = 3;
					break;
				case 3:
					iLocal_576 = 5;
					break;
				case 2:
					iLocal_576 = 7;
					break;
			}
		}
		else
		{
			switch (iVar0)
			{
				case 0:
					iLocal_576 = 0;
					break;
				case 1:
					iLocal_576 = 2;
					break;
				case 3:
					iLocal_576 = 4;
					break;
				case 2:
					iLocal_576 = 6;
					break;
			}
		}
	}
	else if (!func_51(uLocal_410[0], 0, 1))
	{
		if (func_51(uLocal_410[1], 0, 1))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], 1350074909))
			{
				iVar0 = func_339(uLocal_410[1], Global_35, 1060437492 /* Float: 0.707f */);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], -1299051536))
				{
					switch (iVar0)
					{
						case 0:
							iLocal_576 = 1;
							break;
						case 1:
							iLocal_576 = 3;
							break;
						case 3:
							iLocal_576 = 5;
							break;
						case 2:
							iLocal_576 = 7;
							break;
					}
				}
				else
				{
					switch (iVar0)
					{
						case 0:
							iLocal_576 = 0;
							break;
						case 1:
							iLocal_576 = 2;
							break;
						case 3:
							iLocal_576 = 4;
							break;
						case 2:
							iLocal_576 = 6;
							break;
					}
				}
			}
		}
	}
	else
	{
		iLocal_576 = -1;
	}
	if (iLocal_576 == 8)
	{
		func_30(&iLocal_400, 8);
	}
}

bool func_139(float fParam0)
{
	if (func_148(&uLocal_853))
	{
		if (func_127(&uLocal_853) >= fParam0)
		{
			return true;
		}
	}
	return false;
}

char* func_140(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
		case 0:
			return "pblBreakoutFront";
		case 1:
			return "pblBreakoutFrontV2";
		case 2:
			return "pblBreakoutBack";
		case 3:
			return "pblBreakoutBackV2";
		case 4:
			return "pblBreakoutRight";
		case 5:
			return "pblBreakoutRightV2";
		case 6:
			return "pblBreakoutLeft";
		case 7:
			return "pblBreakoutLeftV2";
		case 8:
			return "pblQuickKill";
		default:
			break;
	}
	return "invalid playlist";
}

void func_141()
{
	if (func_33(iLocal_400, 65536))
	{
		return;
	}
	if (func_33(iLocal_400, 262144))
	{
		if (func_107(uLocal_410[0], 0, &uLocal_796, &uLocal_795, 0, 0))
		{
			func_30(&iLocal_400, 65536);
		}
	}
	else if (func_51(uLocal_410[0], 0, 1))
	{
		if (func_340())
		{
			if ((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_410[0], Local_67[0 /*2*/], "brkout_female_v1_victim", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_410[0], Local_67[0 /*2*/], "brkout_female_v1_victim") > 0.91f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_410[0], Local_67[0 /*2*/], "brkout_female_v2_victim", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_410[0], Local_67[0 /*2*/], "brkout_female_v2_victim") > 0.91f))
			{
				func_321();
			}
		}
		else if (func_341(&uLocal_841, 2.5f))
		{
			func_48(&uLocal_796, 1);
			func_321();
		}
	}
}

void func_142(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
	}
}

void func_143(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	func_137();
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_835);
	iLocal_833 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), iParam0, fParam1, fParam2, fParam3, fParam4, 7f, 180f, false, false, -1, -1);
}

void func_144()
{
	if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[0]))
	{
		if (iLocal_422 == 76)
		{
			func_320(uLocal_410[0], Global_35, "RE_DM_VAL_V1_AGGRO_RESP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, -500314840, 1, 0, 0);
		}
		else if (iLocal_422 == 92)
		{
			func_320(uLocal_410[0], Global_35, "PANIC_HELP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, -500314840, 1, 0, 0);
		}
		else if (iLocal_422 == 105)
		{
			func_320(uLocal_410[0], Global_35, "RE_DM_RHD_V1_AGGRO_RESP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, -500314840, 1, 0, 0);
		}
		func_30(&iLocal_402, 16384);
	}
}

bool func_145(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	if (func_342(iParam0, iParam1, iParam2, uParam3, uParam4))
	{
		return true;
	}
	else if (*uParam3 > 2 && uParam5->f_44 == 0)
	{
		uParam5->f_44 = 1;
	}
	return false;
}

void func_146(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_147(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_161() != -1)
	{
		return;
	}
	if ((Global_36616 && func_212(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_343(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_344(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_345(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_344(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_148(var uParam0)
{
	return func_346(*uParam0, 1);
}

bool func_149(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_347(iParam0, &Var0);
}

bool func_150()
{
	if (!func_348(Global_1395482.f_1))
	{
		return false;
	}
	return func_349(Global_1395482.f_1, 32);
}

bool func_151(int iParam0)
{
	if (func_76(iParam0, 1))
	{
		return false;
	}
	return (1 == func_170(iParam0) || 2 == func_170(iParam0));
}

float func_152(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_153()
{
	if (func_2() != iLocal_422)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_101.f_51, true) > 200f)
		{
			return true;
		}
	}
	return false;
}

void func_154(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_96(iParam0, 16);
	}
	else
	{
		func_159(iParam0, 67108864);
		func_159(iParam0, 16);
	}
}

void func_155(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_159(&(uParam0->f_1), 128);
	}
	else
	{
		func_96(&(uParam0->f_1), 128);
	}
}

void func_156(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_96(iParam0, 268435456);
	}
	else
	{
		func_159(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_96(iParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_159(iParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_96(iParam0, 536870912);
	}
	else
	{
		func_159(iParam0, 536870912);
	}
}

var func_157(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = UIFEED::_SHOW_OBJECTIVE(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_158(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_350(sParam1));
}

void func_159(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_160(int iParam0, int iParam1)
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
	if (func_33(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_33(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_33(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_33(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_161()
{
	return Global_1572887.f_12;
}

void func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_351(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_3 = iParam2;
}

int func_163(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = (ENTITY::GET_ENTITY_MODEL(iParam0) + SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	PED::_0xCB1A3864C524F784(iParam0, iVar0);
	return iVar0;
}

void func_164(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_351(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_2 = iParam2;
}

void func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_351(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_1 = iParam2;
}

int func_166(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_352(1, 0, 0);
	}
	else
	{
		iVar0 = func_2();
	}
	return func_353(iVar0);
}

void func_167(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_351(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_4 = iParam2;
}

int func_168()
{
	return Global_1899515;
}

void func_169(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_351(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_5 = iParam2;
}

int func_170(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

char* func_171(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_172(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 || iParam1);
}

void func_173(int iParam0, bool bParam1)
{
	if (func_51(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_354(iParam0, 1088421888 /* Float: 7f */, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

bool func_174(var uParam0, var uParam1)
{
	if (func_76(uParam0->f_3, 16777216))
	{
		if (func_355(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("G_M_M_UNIBRONTEGOONS_01"))
		{
			return true;
		}
	}
	return false;
}

void func_175(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_176(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_177(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630.f_12 && (!bParam4 || func_51(iParam0, 0, 1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
		{
			iParam3 = PED::GET_MOUNT(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
			fVar2 = func_176(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_356(&iParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, iParam1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 0.1f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iVar1 = PED::GET_MOUNT(iParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::_0x39A2FC5AF55A52B1(iVar1, -1);
				}
				PED::_0x39A2FC5AF55A52B1(iParam0, -1);
			}
		}
	}
}

void func_178(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_357(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_358(uParam0);
	func_359(uParam0);
	func_360(uParam0);
	if (!func_361(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		func_248(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_362();
	}
	if (!func_363(uParam0->f_3) && !func_76(uParam0->f_3, 256))
	{
		func_54(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_364(uParam0->f_173);
	func_364(uParam0->f_172);
}

void func_179(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_180(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
			case 117:
				return -689015496;
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

void func_181(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_161() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

void func_182(int iParam0, var uParam1)
{
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		POPULATION::_0x74C2B3DC0B294102(*iParam0);
		POPULATION::_0xA1CFB35069D23C23(*iParam0);
		VOLUME::_DELETE_VOLUME(*iParam0);
	}
	if (PED::_0x91A5F9CBEBB9D936(*uParam1))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam1, false);
	}
}

bool func_183(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_184(int iParam0)
{
	if (((func_185(iParam0, 1) && func_185(iParam0, 2)) && func_185(iParam0, 8)) && func_185(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_185(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_186(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_187(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_365(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_366(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_366(), iVar3);
		if (func_367(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_188(int iParam0)
{
	func_30(iParam0, 256);
}

void func_189(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

bool func_190(var uParam0)
{
	if (!func_368(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_368(uParam0->f_12))
		{
			return false;
		}
	}
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_1, uParam0->f_3);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			{
				uParam0->f_3 = joaat("META_OUTFIT_DEFAULT");
			}
			return false;
		}
		else if (!PED::_0x610438375E5D1801(uParam0->f_5))
		{
			return false;
		}
	}
	return true;
}

Vector3 func_191(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_204(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_369(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_370(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return Global_1310750.f_13358[iVar0 /*3*/];
}

void func_192(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (func_76(iParam0, 32))
	{
		if (func_371(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_372(Global_35, &(uParam1->f_12)) };
				if (!func_25(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_373(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_249(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_250());
		if (func_374(Global_1310750[iParam0 /*111*/], 33554432))
		{
			func_252(iVar0, func_251(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			func_252(iVar0, func_251(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (func_76(iParam0, 1))
		{
			func_375(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	func_376(iParam0);
}

bool func_193(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;

	*uParam1 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(*uParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/].f_1 != -1)
		{
			func_377(uParam1, Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/]);
		}
		iVar0++;
	}
	if (func_97(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(func_378(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(func_378(iParam0));
		fVar1 = 60f;
	}
	TASK::_0x9B6A58FDB0024F12(*uParam1, 35f);
	TASK::_0x954451EA2D2120FB(*uParam1, fVar2);
	TASK::_0x0F4F6C4CE471259D(*uParam1, (fVar2 + fVar1));
	TASK::_0x4A7D73989F52EB37(*uParam1, (fVar2 + 10f));
	TASK::_0x8F8C84363810691A(*uParam1, 7f);
	TASK::_0x2B8AF29A78024BD3(*uParam1);
	return true;
}

void func_194(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_379(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*iParam3 = 2500;
			break;
		case 1:
			if (!func_76(iParam0, 1))
			{
				if (func_97(iParam0, 2))
				{
				}
			}
			func_380(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_381(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_381(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_151(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_195(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_369(iParam1))
	{
		if (!func_382(iParam1, iVar0))
		{
			vVar4 = { func_191(iParam1, iVar0) };
			if (!func_25(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_200(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_383(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_25(vVar4))
	{
	}
	return vVar1;
}

int func_196(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			func_40("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_197(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_369(iParam0))
	{
		vVar1 = { func_191(iParam0, iVar0) };
		if (func_384(vVar1, vParam1, 1056964608 /* Float: 0.5f */, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_198(var uParam0)
{
	int iVar0;

	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = GRAPHICS::CREATE_TRACKED_POINT();
		if (uParam0->f_7 == 0)
		{
		}
		GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return false;
		}
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

int func_199(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	vVar2 = { *uParam0 };
	func_385(Global_35, *uParam0, &(uParam0->f_37), 1061158912 /* Float: 0.75f */, 0, 0);
	if (func_386(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_25(uParam0->f_12[iVar0 /*3*/]))
			{
				vVar5 = { uParam0->f_12[iVar0 /*3*/] };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_387(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { uParam0->f_12[iVar1 /*3*/] };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_196(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_200(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_194(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_76(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_201(var uParam0, bool bParam1)
{
	*bParam1 = 0;
	if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 4)
	{
		*bParam1 = 1;
	}
	else if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { TASK::_0x865732725536EE39(&(uParam0->f_10)) };
		return true;
	}
	return false;
}

bool func_202(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_388(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_389(iParam0, uParam2))
	{
		return false;
	}
	if (!func_390(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_391(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

bool func_203(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return true;
				case 2:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return true;
			}
			break;
	}
	return false;
}

bool func_204(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_205(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_206(int iParam0, int iParam1)
{
	if (func_392(iParam0))
	{
		return;
	}
	if (func_393(iParam0) == iParam1)
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

void func_207(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_159(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

bool func_208()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1899517)
	{
		if (Global_1899517[iVar0] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_209(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	struct<4> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && uParam0->f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
			{
				Var2 = { func_394(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_395(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_396(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_397(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						func_85(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
			return false;
		}
		else
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
			{
				bVar0 = (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { func_394(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_395(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_398(&(uParam0->f_22)));
					Var2 = { func_394(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_395(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_396(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, PED::_IS_THIS_MODEL_A_HORSE(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						func_399(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						func_400(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_1, false);
			}
			return false;
		}
	}
	return true;
}

bool func_210(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_211(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_401(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_401(iVar4) && iVar4 != iVar0)
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
	if (func_161() == -1 && !func_402(iVar0))
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
				if (func_402(joaat("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_35 && func_401(iVar0))
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
		func_403(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_404(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_405(iVar0))
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

int func_212(int iParam0)
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

bool func_213(int iParam0, var uParam1)
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

void func_214(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_250());
	}
}

void func_215(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_216(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_250());
	}
}

void func_217(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

bool func_218(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_406(*uParam0, 0f, 0f, 0f))
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

Vector3 func_219(var uParam0)
{
	return uParam0->f_51;
}

bool func_220()
{
	return Global_1935436 == 2;
}

void func_221(int iParam0)
{
	if (iParam0 >= Global_1935436)
	{
		return;
	}
	Global_1935436.f_1 = iParam0;
}

void func_222(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0 /*8*/].f_1++;
	if (func_76(iParam0, 2))
	{
		func_408(iParam0, func_407(iParam1));
	}
	else
	{
		func_409(iParam0, func_41());
	}
	fVar0 = (1f + (BUILTIN::TO_FLOAT((Global_17504.f_42[iParam0 /*8*/].f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	func_410(iParam0, Global_1310750[iParam0 /*111*/].f_36, fVar0, 1, 0);
	func_411(iParam0, 0);
	func_412(iParam0);
	func_413(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(true);
	}
	AUDIO::_0x33D51F801CB16E4F();
	Global_1310750[iParam0 /*111*/].f_110 |= 4;
	Global_17504.f_6 = iParam0;
	Global_17504.f_10 = 1;
	Global_17504.f_7 = 0;
	Global_17504.f_8 = 0;
	if (!func_76(iParam0, 16))
	{
		func_223(iParam0, 0, 0, 0, 0);
	}
}

void func_223(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_414() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_204(iVar1) && !func_76(iVar1, iParam2)) && (!bParam3 || !func_240(iVar1))) && (!bParam4 || !func_415(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_416(iVar0);
			}
		}
		iVar0++;
	}
}

int func_224(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_39;
}

void func_225(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_374(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (func_76(uParam0->f_3, 1073741824 /* Float: 2f */))
			{
				func_417(2, -1, 0, 0, 0);
			}
			else
			{
				func_417(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_417(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_418(1, uParam0->f_177))
				{
					func_419(16, uParam0->f_177);
					func_420(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_421(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_417(8, -1, 0, 0, 0);
	}
}

int func_226()
{
	if (func_401(Global_1935630.f_44))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44))
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (func_422())
		{
			return 1;
		}
	}
	return 0;
}

bool func_227(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_228(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1f)
	{
		if (func_76(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_76(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_76(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_76(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_76(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_76(uParam0->f_3, 1))
		{
		}
		else if (func_76(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_229(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_423(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_424(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_333() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_230(var uParam0, int iParam1, float fParam2)
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
	func_99(uParam0);
	return true;
}

bool func_231()
{
	return (Global_1894899 & 1 != 0 && func_2() != -1);
}

bool func_232(var uParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (uParam0->f_98[iVar0] != 0f)
		{
			if (uParam0->f_98[iVar0] < fParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_233(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_425(bParam1, bParam2, bParam3);
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

bool func_234(int iParam0)
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
	iVar0 = func_426(func_168());
	if (func_3(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_3(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_3(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_3(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_3(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_3(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_3(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_3(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_3(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_3(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_3(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_3(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_3(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_3(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_235(int iParam0, int iParam1)
{
	return (func_224(iParam0) && iParam1) != 0;
}

bool func_236(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (iParam0 == 0)
	{
		return false;
	}
	else if (iParam0 & -1 == -1)
	{
		return true;
	}
	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (iParam0 & 1 == 1 && func_427(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_428(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_429(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_430(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_431(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_432(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_433(iVar3))
	{
		return true;
	}
	return false;
}

bool func_237(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_434(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_238(int iParam0)
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

bool func_239(int iParam0, bool bParam1, bool bParam2)
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
		if (func_435())
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
		iVar0 = func_436(Global_1898164.f_1[0 /*5*/]);
		if (func_437(iVar0) && func_438(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_439(Global_1898164.f_1[0 /*5*/]))
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

bool func_240(int iParam0)
{
	if (!func_204(iParam0))
	{
		return false;
	}
	if (func_305(64) && func_440(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_241()
{
	return Global_1894899 & 4 != 0;
}

int func_242(int iParam0)
{
	if (!func_441(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_243(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_244(vector3 vParam0, int iParam3)
{
	if (!func_243(iParam3))
	{
		return false;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[iParam3 /*10*/].f_5))
	{
		return VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1392194[iParam3 /*10*/].f_5, vParam0);
	}
	return false;
}

bool func_245(vector3 vParam0)
{
	float fVar0;

	if (func_25(vParam0))
	{
		return false;
	}
	fVar0 = func_176(func_231(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

bool func_246(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam4)
	{
		if (PLAYER::_IS_PLAYER_FREE_FOCUSING(iVar0))
		{
			if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &iVar1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						func_124(uParam0);
						if (bParam3)
						{
							return true;
						}
					}
					if (!bParam3)
					{
						return true;
					}
				}
			}
		}
	}
	if (PLAYER::_0x6C54E69516CC56BD(iVar0) > 0)
	{
		func_124(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_148(uParam0))
		{
			return false;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return true;
		}
		if (!func_442(uParam0, fParam2))
		{
			return true;
		}
		if (func_148(uParam0))
		{
			func_146(uParam0);
		}
	}
	return false;
}

bool func_247(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

void func_248(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_25(vParam0))
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
			if (func_384(vVar2, vParam0, 2f, 1))
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

float func_249(int iParam0)
{
	if (!func_204(iParam0))
	{
		return 0f;
	}
	if (!func_443(iParam0))
	{
		return 0f;
	}
	return Global_1310750[iParam0 /*111*/].f_44;
}

char* func_250()
{
	return "unnamed";
}

char* func_251(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_252(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_375(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_253(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_444(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_445(fParam0))
	{
		return false;
	}
	return true;
}

void func_254(int iParam0, bool bParam1, int iParam2)
{
	func_446(iParam2);
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
		iParam0->f_13 = func_447(0);
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
							func_96(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_237(1))
						{
							func_96(iParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_237(1) || *iParam0 & 8192 != 0))
				{
					func_159(iParam0, 33554432);
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
			if (func_448(iParam0))
			{
				iParam0->f_15 = func_273();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_273() - iParam0->f_15) > 500)
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
	func_449(iParam0);
}

bool func_255(int iParam0, int iParam1)
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
			if (!func_450(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_451(iParam0, iVar2) <= func_452(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_256(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_453(iParam2, 1, 1, 1, 0))
	{
		func_96(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_454(iParam1, 1);
	func_362();
}

bool func_257(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_455(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_456(iParam1);
			if (func_457(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_458(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_454(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_454(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_258(int iParam0, int iParam1, int iParam2)
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
	if (func_459(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_456(iParam2);
		if (func_457(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_458(iParam2)
				{
					func_454(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_259(int iParam0, int iParam1)
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
	if (func_450(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_458(iParam1)
		{
			fVar3 = func_456(iParam1);
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

bool func_260(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_273();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_261(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_460(iParam2);
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
			if (func_269(iParam2, iParam1))
			{
				func_454(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_262(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < IntToFloat(func_461(iParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_269(iParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_454(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_263(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_462(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_454(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_454(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, 0, 0);
					if (func_463(iParam1, vVar0, vVar4))
					{
						func_454(iParam2, 1);
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
					func_454(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, 0, 0);
					if (func_463(iParam1, vVar0, vVar7))
					{
						func_454(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_264(int iParam0, int iParam1)
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
		if (!func_450(iParam0, iParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_464(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_465(Global_1935630.f_34[iVar0]))
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
			if (func_466(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_467(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_468(iParam1, iParam0, fVar1, iVar0))
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

bool func_265(int iParam0, int iParam1)
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

bool func_266(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_273();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_267(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_469(iVar0, &iVar2))
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
	if (func_470(iVar0, iParam0))
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

int func_268(int iParam0, int iParam1)
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

bool func_269(int iParam0, int iParam1)
{
	if (func_471(iParam0))
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

bool func_270(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_105(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_271()
{
}

bool func_272(int iParam0, int iParam1)
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
		if (func_472(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_273();
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
						if (func_292(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_273();
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

int func_273()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_274()
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
	if ((func_273() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_275(int iParam0, int iParam1)
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
	fVar0 = func_452(iParam0);
	if (iParam0->f_12 > func_473(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_474(iParam1);
	iVar1 = func_475(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, true, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_276(int iParam0, int iParam1, int iParam2)
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
	return func_476(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_277(int iParam0, int iParam1)
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
		if (func_477(iParam0, iParam1, 1))
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
					if (!func_478(iParam1, iParam0))
					{
						if (func_292(iVar4, Global_36, 1) < 7f)
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

bool func_278(int iParam0, int iParam1)
{
	if (!func_479(0))
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

bool func_279(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_273();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_280(int iParam0, int iParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_281(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_273();
	}
	else if (func_273() - iParam1->f_4) > func_480(iParam1)
	{
		return func_481(iParam0, iParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_282(int iParam0, int iParam1)
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

void func_283(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_834);
	iLocal_835 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(iParam1, iParam0, fParam2, fParam3, fParam4, fParam5, 7f, 180f, false, false, -1, -1);
}

void func_284(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_161() != -1)
	{
		return;
	}
	iVar0 = func_482(iParam0);
	fVar1 = func_483(iParam0);
	if ((Global_1347477.f_117 || !func_484(31)) || !func_485(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_486(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477.f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_487(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_490(MISC::_CREATE_VAR_STRING(6, func_488(iParam0), fVar1), "itemtype_textures", func_489(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_285(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_286(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = func_343(iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "honor_bank", MISC::ABSI(iVar0));
	}
}

bool func_287()
{
	if (!func_33(iLocal_400, 536870912))
	{
		if (func_33(iLocal_400, 1))
		{
			if (!func_33(iLocal_400, 2048) && !func_33(iLocal_400, 1024))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(uLocal_410[0]))
				{
					fLocal_396 = Local_101.f_98[0];
					func_124(&uLocal_448);
					func_30(&iLocal_400, 536870912);
				}
			}
		}
	}
	else if (!Local_101.f_46)
	{
		if (func_127(&uLocal_448) > 10f)
		{
			if (Local_101.f_98[0] > (fLocal_396 + 25f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_288()
{
	if (!func_491())
	{
		func_492(2);
	}
	else
	{
		func_493(2);
	}
	return func_494();
}

bool func_289(int iParam0)
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
	if (PED::_0x4642182A298187D0(iParam0, -1, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 2, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 4, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 5, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 10, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 1, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	return false;
}

int func_290(int iParam0)
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

int func_291(int iParam0)
{
	return iParam0;
}

float func_292(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_293()
{
	if (!func_33(iLocal_400, 524288))
	{
		if (func_150())
		{
			func_30(&iLocal_400, 524288);
		}
	}
}

void func_294()
{
	if (!Local_101.f_48)
	{
		return;
	}
	if ((iLocal_371 <= 0 || func_33(iLocal_403, 64)) || func_33(iLocal_403, 2048))
	{
		return;
	}
	if (((Local_101.f_46 || func_33(iLocal_403, 8)) || func_33(iLocal_403, 256)) || !func_51(uLocal_410[1], 0, 1))
	{
		if (!func_33(iLocal_403, 64))
		{
			func_495(&(Local_463[1 /*21*/]), &Local_506);
			func_30(&iLocal_403, 64);
		}
		return;
	}
	if (iLocal_14[1] > 0)
	{
		iLocal_407[1] = func_497(&(uLocal_410[1]), &(Local_463[1 /*21*/]), 20f, &Local_506, &(Local_101.f_192), 0f, 1, 0, 0, func_496(3, 0, 0), 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
	}
	if (!func_33(iLocal_400, 1024) && !func_33(iLocal_400, 2048))
	{
		switch (iLocal_14[1])
		{
			case 0:
				func_499(&(Local_506[0 /*17*/]), func_498(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_499(&(Local_506[1 /*17*/]), func_498(26), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_500(&(Local_506[0 /*17*/]), 0, 0);
				func_500(&(Local_506[1 /*17*/]), 1, 0);
				iLocal_14[1] = 1;
				break;
			case 1:
				switch (iLocal_407[1])
				{
					case 0:
						break;
					case 1:
						func_320(Global_35, uLocal_410[1], func_331("AIM"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						func_500(&(Local_506[0 /*17*/]), 0, 0);
						func_500(&(Local_506[1 /*17*/]), 0, 0);
						func_124(&uLocal_454);
						if (func_51(uLocal_410[0], 0, 1))
						{
							func_147(12, joaat("HONOR_EVENT_INTERVENED"), 0, "RE_HONOR_INTERVENED", uLocal_410[0], 0, 1065353216 /* Float: 1f */, 0);
						}
						iLocal_14[1] = 3;
						break;
				}
				break;
			case 3:
				if (func_127(&uLocal_454) > 1f && func_501())
				{
					func_30(&iLocal_403, 256);
					iLocal_14[1] = 4;
				}
				break;
			case 4:
				break;
		}
	}
	else if (iLocal_17 == 0)
	{
		if (func_33(iLocal_400, 1024))
		{
			if (!func_33(iLocal_403, 1))
			{
				if (!func_502(PLAYER::PLAYER_ID(), &(uLocal_410[1])))
				{
					iLocal_404[1] = 0;
					func_495(&(Local_463[1 /*21*/]), &Local_506);
					func_499(&(Local_506[0 /*17*/]), func_498(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_499(&(Local_506[1 /*17*/]), func_498(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					func_500(&(Local_506[0 /*17*/]), 0, 0);
					func_500(&(Local_506[1 /*17*/]), 1, 0);
					func_30(&iLocal_403, 1);
				}
				else
				{
					if (func_503(&(Local_506[0 /*17*/]), 1, 0))
					{
						func_500(&(Local_506[0 /*17*/]), 0, 0);
					}
					if (func_503(&(Local_506[1 /*17*/]), 1, 0))
					{
						func_500(&(Local_506[1 /*17*/]), 0, 0);
					}
				}
			}
			else
			{
				switch (iLocal_404[1])
				{
					case 0:
						switch (iLocal_407[1])
						{
							case 0:
								break;
							case 1:
								func_320(Global_35, uLocal_410[1], func_331("INSULT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1506116031, 1, 0, 0);
								func_500(&(Local_506[0 /*17*/]), 0, 0);
								func_500(&(Local_506[1 /*17*/]), 0, 0);
								func_124(&uLocal_454);
								if (func_51(uLocal_410[0], 0, 1))
								{
									func_147(12, joaat("HONOR_EVENT_INTERVENED"), 0, "RE_HONOR_INTERVENED", uLocal_410[0], 0, 1065353216 /* Float: 1f */, 0);
								}
								func_30(&iLocal_403, 128);
								iLocal_404[1]++;
								break;
						}
						break;
					case 1:
						if (func_127(&uLocal_454) > 2.5f)
						{
							func_30(&iLocal_403, 256);
						}
						break;
					case 5:
						break;
				}
			}
		}
	}
	else if (func_33(iLocal_400, 2048))
	{
		if (!func_33(iLocal_403, 8))
		{
			func_495(&(Local_463[1 /*21*/]), &Local_506);
			func_30(&iLocal_403, 8);
		}
	}
}

int func_295()
{
	if (func_33(iLocal_400, 8388608))
	{
		return 1;
	}
	if (func_33(iLocal_400, 1024))
	{
		if (func_504(uLocal_410[0], 25f))
		{
			func_30(&iLocal_400, 8388608);
			return 1;
		}
	}
	else if (func_33(iLocal_400, 2048) && iLocal_372[0] >= 7)
	{
		func_30(&iLocal_400, 8388608);
		return 1;
	}
	return 0;
}

int func_296()
{
	if (func_33(iLocal_400, 16777216))
	{
		return 1;
	}
	if (func_33(iLocal_400, 8388608))
	{
		if (func_292(uLocal_410[1], Local_101.f_51, 1) < 25f)
		{
			if ((func_337(uLocal_410[1], Global_35, 1, 15f, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_410[1], Local_67[2 /*2*/], "action_attacker", 1)) && !func_125(Global_35, 1))
			{
				func_30(&iLocal_400, 16777216);
				return 1;
			}
		}
	}
	return 0;
}

void func_297(int iParam0, float fParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;

	if (!func_51(iParam0, 0, 1))
	{
		return;
	}
	if (PED::IS_PED_MALE(iParam0))
	{
		func_505(1);
	}
	else
	{
		func_505(0);
	}
	func_506();
	bParam3 = bLocal_397;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (bParam5 && iParam0 == uLocal_410[0])
	{
		TASK::TASK_REACT(0, uLocal_410[1], ENTITY::GET_ENTITY_COORDS(uLocal_410[1], true, false), "Default_Angry", 2.5f, 0, 4);
	}
	if (!func_25(vLocal_385[0 /*3*/]))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_385[0 /*3*/], fParam1, -1, 2.5f, 4194305, 40000f);
	}
	if (!func_25(vLocal_385[1 /*3*/]))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_385[1 /*3*/], fParam1, -1, 3f, 1, 40000f);
	}
	if (!func_25(vLocal_385[2 /*3*/]))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_385[2 /*3*/], fParam1, -1, 1.5f, 1, 40000f);
	}
	if (bParam3)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_379, fParam1, -1, 10f, 4, 40000f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_382, 1f, 30000, 1.5f, 0, 40000f);
		if (iLocal_375 != -1)
		{
			iLocal_421 = func_507(iLocal_375, vLocal_382, fLocal_395, 0, -1f, 0);
			TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_421, 0, -1, true, false, 0, false, -1f, false);
		}
		else
		{
			TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_382, 10f, 0, false, true, false, false);
		}
		TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
	}
	else
	{
		if (iParam4 != 0)
		{
			TASK::TASK_SMART_FLEE_PED(0, iParam4, 500f, -1, 385, 2f, 0);
		}
		else
		{
			TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 500f, -1, 385, 2f);
		}
		TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
	}
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, bParam2);
	PED::_0x2208438012482A1A(iParam0, false, false);
}

void func_298()
{
	if (!func_33(iLocal_400, 1048576))
	{
		if (func_508(Global_35) == uLocal_410[1])
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_410[1], 6, false);
			func_30(&iLocal_400, 1048576);
		}
	}
}

void func_299(int iParam0, bool bParam1, bool bParam2)
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

void func_300()
{
	float fVar0;

	if (Local_101.f_46)
	{
		if (func_51(uLocal_410[1], 0, 1))
		{
			if (!func_148(&uLocal_844))
			{
				func_124(&uLocal_844);
			}
			else if (!func_33(iLocal_402, 16))
			{
				fVar0 = func_127(&uLocal_844);
				if (fVar0 > 1f)
				{
					if ((func_51(uLocal_410[0], 0, 1) || func_33(iLocal_400, 8)) || func_33(iLocal_400, 16777216))
					{
						if (func_509(fVar0))
						{
							if (iLocal_17 == 0)
							{
								if (iLocal_422 == 105)
								{
									func_320(uLocal_410[1], Global_35, "OPENS_FIRE", "", 70f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
								}
								else
								{
									func_320(uLocal_410[1], Global_35, "CHALLENGE_THREATEN_ARMED", "", 70f, 2, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
								}
							}
							else
							{
								func_320(uLocal_410[1], Global_35, "GENERIC_INSULT_MED_MALE", "", 70f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							}
							func_83(uLocal_410[1], 0);
							_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_410[1], &Local_423);
							func_30(&iLocal_402, 16);
						}
					}
					else
					{
						if (!PED::_IS_PED_LASSOED(uLocal_410[1]))
						{
							if (iLocal_422 == 105)
							{
								if ((func_33(iLocal_403, 256) && func_33(iLocal_400, 8388608)) && !func_51(uLocal_410[0], 0, 1))
								{
									func_320(uLocal_410[1], Global_35, "RE_DM_RHD_V1_POST_AGGRO_RESP", "", 70f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
								}
								else
								{
									func_320(uLocal_410[1], Global_35, "OPENS_FIRE", "", 70f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
								}
							}
							else if (((iLocal_422 == 76 && func_33(iLocal_403, 256)) && func_33(iLocal_400, 8388608)) && !func_51(uLocal_410[0], 0, 1))
							{
								func_320(uLocal_410[1], Global_35, "RE_DM_VAL_V1_POST_AGGRO_RESP", "", 70f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							}
							else
							{
								func_320(uLocal_410[1], Global_35, "CHALLENGE_THREATEN_ARMED", "", 70f, 2, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							}
						}
						else
						{
							func_320(uLocal_410[1], 0, "GENERIC_ANGRY_SHOUT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_SHOUTED_CLEAR"), 1, 0, 0);
						}
						func_83(uLocal_410[1], 0);
						_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_410[1], &Local_423);
						func_30(&iLocal_402, 16);
					}
				}
			}
		}
	}
}

void func_301(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_302(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

void func_303()
{
	if (!func_33(iLocal_400, 8192))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_419))
		{
			if (func_227(Global_35, iLocal_419, 1, 0) && func_253(0, 1, uLocal_410[1], 1))
			{
				if (!PED::_IS_PED_HOGTIED(uLocal_410[1]) && !func_33(iLocal_402, 65536))
				{
					if (iLocal_422 == 76)
					{
						func_320(uLocal_410[1], Global_35, "STORM_OFF", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_422 == 105)
					{
						func_320(uLocal_410[1], Global_35, "STORM_OFF", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_30(&iLocal_402, 65536);
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_410[1], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
				func_30(&iLocal_400, 8192);
			}
		}
	}
	else if (func_510(iLocal_419, vLocal_376) > 50f && PED::_0x7F9B9791D4CB71F6(uLocal_410[1], Global_35, false, 0) == 1)
	{
		TASK::TASK_COMBAT_PED(uLocal_410[1], Global_35, 0, 0);
		func_335(&iLocal_400, 8192);
	}
}

int func_304(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (func_51((*uParam1)[iVar0], 0, 0))
		{
			if (uParam0->f_98[iVar0] < 3f)
			{
				if (PED::IS_PED_IN_COMBAT((*uParam1)[iVar0], Global_35))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_305(int iParam0)
{
	return (Global_1310750.f_16035 && iParam0) != 0;
}

void func_306(int iParam0)
{
	Global_1310750.f_16035 = (Global_1310750.f_16035 || iParam0);
}

void func_307()
{
	if (!func_33(iLocal_402, 4096))
	{
		if (!func_33(iLocal_402, 2048))
		{
			if ((func_511(Global_35, 0) == func_291(uLocal_410[1]) || func_511(Global_35, 1) == func_291(uLocal_410[1])) || func_511(Global_35, 2) == func_291(uLocal_410[1]))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_410[1]) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[1]))
				{
					func_30(&iLocal_402, 2048);
				}
			}
		}
		else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_410[1]) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[1]))
		{
			if ((func_511(Global_35, 0) == func_291(uLocal_410[1]) || func_511(Global_35, 1) == func_291(uLocal_410[1])) || func_511(Global_35, 2) == func_291(uLocal_410[1]))
			{
				iLocal_399++;
				if (iLocal_399 > 60)
				{
					if (iLocal_422 == 105)
					{
						func_320(uLocal_410[1], Global_35, "POST_THEFT", "", -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					else
					{
						func_320(uLocal_410[1], Global_35, "POST_THEFT", "", -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					func_30(&iLocal_402, 4096);
				}
			}
		}
	}
}

void func_308()
{
	if (!Local_101.f_48)
	{
		return;
	}
	if ((iLocal_371 <= 0 || func_33(iLocal_403, 16)) || func_33(iLocal_403, 2048))
	{
		return;
	}
	if (func_33(iLocal_400, 65536) || !func_51(uLocal_410[0], 0, 1))
	{
		if (!func_33(iLocal_403, 16))
		{
			func_495(&(Local_463[0 /*21*/]), &Local_541);
			func_30(&iLocal_403, 16);
		}
		return;
	}
	if (iLocal_14[0] > 0)
	{
		iLocal_407[0] = func_497(&(uLocal_410[0]), &(Local_463[0 /*21*/]), 20f, &Local_541, &(Local_101.f_192), 0f, 1, 0, 0, func_496(3, 0, 0), 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
	}
	if ((!func_33(iLocal_400, 1024) && !func_33(iLocal_400, 2048)) && !Local_101.f_46)
	{
		switch (iLocal_14[0])
		{
			case 0:
				func_499(&(Local_541[0 /*17*/]), func_498(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_499(&(Local_541[1 /*17*/]), func_498(26), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_500(&(Local_541[0 /*17*/]), 0, 0);
				func_500(&(Local_541[1 /*17*/]), 1, 0);
				iLocal_14[0] = 1;
				break;
			case 1:
				if (!func_33(iLocal_400, 2048))
				{
					switch (iLocal_407[0])
					{
						case 0:
							break;
						case 1:
							func_320(Global_35, uLocal_410[0], func_331("AIM"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							func_124(&uLocal_454);
							func_147(12, joaat("HONOR_EVENT_INTERVENED"), 0, "RE_HONOR_INTERVENED", uLocal_410[0], 0, 1065353216 /* Float: 1f */, 0);
							iLocal_14[0] = 3;
							break;
					}
				}
				break;
			case 3:
				if (func_127(&uLocal_454) > 1f)
				{
					func_30(&iLocal_403, 256);
					iLocal_14[0] = 4;
				}
				break;
			case 4:
				break;
			case 7:
				break;
		}
	}
	else if (!Local_101.f_46)
	{
		if (!func_33(iLocal_403, 2))
		{
			if (!func_502(PLAYER::PLAYER_ID(), &(uLocal_410[0])))
			{
				iLocal_404[0] = 0;
				func_495(&(Local_463[0 /*21*/]), &Local_541);
				func_499(&(Local_541[0 /*17*/]), func_498(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_499(&(Local_541[1 /*17*/]), func_498(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_500(&(Local_541[0 /*17*/]), 0, 0);
				func_500(&(Local_541[1 /*17*/]), 0, 0);
				func_30(&iLocal_403, 2);
			}
			else
			{
				if (func_503(&(Local_541[0 /*17*/]), 1, 0))
				{
					func_500(&(Local_541[0 /*17*/]), 0, 0);
				}
				if (func_503(&(Local_541[1 /*17*/]), 1, 0))
				{
					func_500(&(Local_541[1 /*17*/]), 0, 0);
				}
			}
		}
		else
		{
			switch (iLocal_404[0])
			{
				case 0:
					if (!func_51(uLocal_410[1], 0, 1))
					{
						func_500(&(Local_541[0 /*17*/]), 1, 0);
						func_500(&(Local_541[1 /*17*/]), 1, 0);
						iLocal_404[0]++;
					}
					break;
				case 1:
					switch (iLocal_407[0])
					{
						case 0:
							func_320(Global_35, uLocal_410[0], func_331("GRT_POS_WOMAN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							func_500(&(Local_541[0 /*17*/]), 0, 0);
							func_500(&(Local_541[1 /*17*/]), 0, 0);
							func_124(&uLocal_454);
							func_30(&iLocal_403, 512);
							iLocal_404[0]++;
							break;
						case 1:
							func_320(Global_35, uLocal_410[0], func_331("GRT_NEG_WOMAN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							func_500(&(Local_541[0 /*17*/]), 0, 0);
							func_500(&(Local_541[1 /*17*/]), 0, 0);
							func_124(&uLocal_454);
							func_30(&iLocal_403, 1024);
							iLocal_404[0]++;
							break;
					}
					break;
				case 2:
					if ((func_127(&uLocal_454) > 1f && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[0]))
					{
						if (iLocal_422 == 76 && func_33(iLocal_403, 512))
						{
							func_320(uLocal_410[0], Global_35, "PLAYER_LOITERING", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_320(uLocal_410[0], Global_35, "GET_AWAY_FROM_ME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						}
						iLocal_404[0]++;
					}
					break;
				case 3:
					break;
			}
		}
	}
	else
	{
		if (!func_33(iLocal_403, 4))
		{
			if (!func_502(PLAYER::PLAYER_ID(), &(uLocal_410[0])))
			{
				func_495(&(Local_463[0 /*21*/]), &Local_541);
				func_499(&(Local_541[0 /*17*/]), func_498(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_499(&(Local_541[1 /*17*/]), func_498(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_500(&(Local_541[0 /*17*/]), 1, 0);
				func_500(&(Local_541[1 /*17*/]), 0, 0);
				iLocal_404[0] = 0;
				func_30(&iLocal_403, 4);
			}
			else
			{
				if (func_503(&(Local_541[0 /*17*/]), 1, 0))
				{
					func_500(&(Local_541[0 /*17*/]), 0, 0);
				}
				if (func_503(&(Local_541[1 /*17*/]), 1, 0))
				{
					func_500(&(Local_541[1 /*17*/]), 0, 0);
				}
			}
		}
		if (func_33(iLocal_403, 4))
		{
			switch (iLocal_404[0])
			{
				case 0:
					if (func_340())
					{
						if (!func_503(&(Local_541[0 /*17*/]), 1, 0))
						{
							func_500(&(Local_541[0 /*17*/]), 1, 0);
						}
						if (func_503(&(Local_541[1 /*17*/]), 1, 0))
						{
							func_500(&(Local_541[1 /*17*/]), 0, 0);
						}
						iLocal_404[0]++;
					}
					else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_410[0], -1))
					{
						if (func_503(&(Local_541[0 /*17*/]), 1, 0))
						{
							func_500(&(Local_541[0 /*17*/]), 0, 0);
						}
						if (func_503(&(Local_541[1 /*17*/]), 1, 0))
						{
							func_500(&(Local_541[1 /*17*/]), 0, 0);
						}
						iLocal_404[0]++;
					}
					break;
				case 1:
					if (!func_33(iLocal_403, 32))
					{
						if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_410[0], -1))
						{
							if (func_503(&(Local_541[0 /*17*/]), 1, 0))
							{
								func_500(&(Local_541[0 /*17*/]), 0, 0);
							}
							if (func_503(&(Local_541[1 /*17*/]), 1, 0))
							{
								func_500(&(Local_541[1 /*17*/]), 0, 0);
							}
						}
						else
						{
							switch (iLocal_407[0])
							{
								case 0:
									func_320(Global_35, uLocal_410[0], func_331("GRT_POS_ASK_IF_OK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
									func_500(&(Local_541[0 /*17*/]), 0, 0);
									func_500(&(Local_541[1 /*17*/]), 0, 0);
									func_30(&iLocal_403, 32);
									break;
								case 1:
									break;
							}
						}
					}
					break;
				case 2:
					switch (iLocal_407[0])
					{
						case 0:
							break;
						case 1:
							break;
					}
					break;
				case 3:
					if (func_127(&uLocal_454) > 1f && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
					{
						if (!ENTITY::IS_ENTITY_OCCLUDED(uLocal_410[0]))
						{
							if (iLocal_422 == 76)
							{
								func_320(uLocal_410[0], Global_35, "RE_FM_VAL_V1_GRT_POS_WOMAN_SAVED_RESP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							else if (iLocal_422 == 105)
							{
								func_320(uLocal_410[0], Global_35, "RE_FM_RHD_V1_GRT_POS_WOMAN_SAVED_RESP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								func_320(uLocal_410[0], Global_35, "RELIEVED_REACT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
						}
						iLocal_404[0]++;
					}
					break;
				case 4:
					break;
			}
		}
	}
}

bool func_309()
{
	if (!TASK::GET_IS_TASK_ACTIVE(uLocal_410[0], 3))
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false) && ANIMSCENE::_0x005E6F28DD7ED58D(Local_80, "PED_VICTIM"))
	{
		return true;
	}
	return false;
}

void func_310(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	iLocal_836 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(iParam1, iParam0, fParam2, fParam3, fParam4, fParam5, -1f, 180f, false, false, -1, -1);
}

bool func_311()
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(uLocal_410[0]) || func_33(iLocal_400, 128))
	{
		return true;
	}
	if (func_51(uLocal_410[0], 0, 1))
	{
		if (func_33(iLocal_400, 1024))
		{
			func_34(&(uLocal_413[0]));
			func_299(uLocal_410[0], 1, 0);
			return true;
		}
	}
	if (!func_33(iLocal_402, 256))
	{
		if (!func_104())
		{
			func_30(&iLocal_402, 256);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], -1894130223))
	{
		return false;
	}
	else if (!PED::IS_PED_RAGDOLL(uLocal_410[0]))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (func_51(uLocal_410[1], 0, 1) && !func_33(iLocal_400, 2048))
		{
			TASK::TASK_SMART_FLEE_PED(0, uLocal_410[1], (20f / 2f), 7000, 1, 2f, 0);
			TASK::TASK_COWER(0, 6000, uLocal_410[1], 0);
			TASK::TASK_SMART_FLEE_COORD(0, Local_101.f_51, 200f, -1, true, 2f);
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 200f, -1, 0, 2f, 0);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			func_30(&iLocal_400, 1073741824 /* Float: 2f */);
		}
		else if (!func_33(iLocal_400, 65536) && !func_33(iLocal_400, 131072))
		{
			func_30(&iLocal_400, 64);
			func_335(&iLocal_400, 65536);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
		}
		else
		{
			if ((func_33(iLocal_400, 131072) && !func_104()) && func_253(0, 1, uLocal_410[0], 1))
			{
				func_149(uLocal_410[0], "SCREAM_TERROR", 1744022339, 0, 1, 0, 0, 1);
			}
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
		}
		func_301(uLocal_410[0], &iVar0, 0, 0, 1, 1);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uLocal_410[0], true);
		PED::SET_PED_KEEP_TASK(uLocal_410[0], true);
		func_30(&iLocal_400, 128);
		return true;
	}
	return false;
}

void func_312()
{
	if (func_51(uLocal_410[0], 0, 1))
	{
		if (PED::IS_PED_RAGDOLL(uLocal_410[0]) || !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_410[0], Local_67[3 /*2*/], Local_67[3 /*2*/].f_1, 1))
		{
			func_34(&(uLocal_413[0]));
			func_299(uLocal_410[0], 1, 0);
		}
	}
}

void func_313()
{
	if (func_33(iLocal_402, 1024))
	{
		return;
	}
	if (!func_148(&uLocal_856))
	{
		func_124(&uLocal_856);
	}
	else if ((func_127(&uLocal_856) > 1.5f || iLocal_422 == 105) || iLocal_422 == 76)
	{
		switch (iLocal_422)
		{
			case 76:
				func_320(uLocal_410[0], Global_35, "RE_DM_VAL_V1_RECOVER_B", 0, -1082130432 /* Float: -1f */, 3, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				break;
			case 105:
				func_320(uLocal_410[0], Global_35, "RE_DM_RHD_V1_RECOVER_A", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				break;
			case 92:
				func_320(uLocal_410[0], Global_35, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				break;
		}
		func_30(&iLocal_402, 1024);
	}
}

void func_314(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> Var0;

	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		func_30(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_335(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
	}
}

void func_315()
{
	int iVar0;

	if (!func_33(iLocal_400, -2147483648))
	{
		if (func_33(iLocal_400, 1073741824 /* Float: 2f */))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_410[0], 242628503, true) == 1)
			{
				iVar0 = TASK::GET_SEQUENCE_PROGRESS(uLocal_410[0]);
				if (iVar0 >= 2)
				{
					func_30(&iLocal_400, -2147483648);
				}
			}
		}
	}
}

bool func_316()
{
	if (func_33(iLocal_400, -2147483648))
	{
		return true;
	}
	return false;
}

void func_317(var uParam0, bool bParam1)
{
	if (bParam1 || !func_148(uParam0))
	{
		func_124(uParam0);
	}
}

void func_318(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (func_161() != -1)
	{
		return;
	}
	if (func_512(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_513())
	{
		iVar1 = 0;
	}
	func_514(iParam0, iVar1);
}

char* func_319()
{
	if (iLocal_422 == 76)
	{
		return "RE_DM_VAL_V1_PLAYER";
	}
	if (iLocal_422 == 105)
	{
		return "RE_DM_RHD_V1_PLAYER";
	}
	return "RE_DM_VAL_V2_DROWN_PLAYER";
}

bool func_320(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_515(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_321()
{
	if (!func_33(iLocal_400, 262144))
	{
		func_50(&uLocal_796, 1);
		func_49(&uLocal_796, 1);
		func_30(&iLocal_400, 262144);
	}
}

void func_322()
{
	if (iLocal_17 == 1 && !Local_101.f_46)
	{
		if (func_25(Local_866.f_6))
		{
			ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_80, "PED_VICTIM", &Local_866, true, "pblAll", 2);
		}
		else if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_80, "PED_VICTIM"))
		{
			if (func_292(uLocal_410[0], Local_866.f_6, 1) < 3f)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_410[0], 1.5f);
			}
		}
	}
}

void func_323(int iParam0, int* iParam1, var uParam2, bool bParam3)
{
	if (func_51(iParam0, 0, 1))
	{
		func_516(uParam2, 1, 1, 1, 0);
		func_495(iParam1, uParam2);
		func_517(iParam1, 0);
		PED::_0xE737D5F14304A2EC(iParam0, PLAYER::GET_PLAYER_INDEX(), 120000);
		if (iParam0 == uLocal_410[1])
		{
			PED::_0x24C82EF607105FAA(uLocal_410[1], joaat("AGGRESSIVE"));
		}
		else if (iParam0 == uLocal_410[0])
		{
			PED::_0x24C82EF607105FAA(uLocal_410[0], joaat("AVOID"));
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, !bParam3);
		func_354(iParam0, 1088421888 /* Float: 7f */, 0, 0);
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
		func_182(&iLocal_418, &uLocal_420);
		func_30(&iLocal_403, 2048);
	}
}

void func_324()
{
	if (func_33(iLocal_400, 65536))
	{
		if (!func_33(iLocal_402, 16384))
		{
			if (!func_148(&uLocal_460))
			{
				func_124(&uLocal_460);
			}
			else if (func_127(&uLocal_460) > 1f && func_253(0, 1, uLocal_410[0], 1))
			{
				func_144();
			}
		}
	}
}

void func_325()
{
	if (func_33(iLocal_400, 1024))
	{
		if (func_52())
		{
			func_518("REDM_GRT_J2", 1, 1);
		}
		else
		{
			func_518("REDM_GRT_A2", 1, 1);
		}
	}
	else if (func_52())
	{
		func_518("REDM_GRT_J1", 1, 1);
	}
	else
	{
		func_518("REDM_GRT_A1", 1, 1);
	}
}

void func_326()
{
	if (func_33(iLocal_401, 32))
	{
		if (!func_33(iLocal_400, 268435456))
		{
			if (func_153())
			{
				func_519();
				func_30(&iLocal_400, 268435456);
			}
		}
	}
}

int func_327(var uParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 186, false);
			DECORATOR::DECOR_SET_BOOL(*uParam0, "bDeadOrAlive", true);
		}
		DECORATOR::DECOR_SET_BOOL(*uParam0, "bIsCriminal", true);
		func_493(4);
		return 1;
	}
	return 0;
}

void func_328(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_333() - fParam1);
	func_520(uParam0, 1);
	func_521(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_329(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("L_14_CAVE_INT"):
			case joaat("GAP_MINE_INT"):
			case joaat("MIL_MINE_CAVE_INT"):
			case joaat("M05_BEARCAVE_MAIN"):
			case joaat("ELH_SEACAVES_INT"):
			case joaat("BEA_01_INT"):
			case joaat("AGU_FUS_CAVE_INT"):
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_330(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("Q0304_TUNNEL_ENT"):
			case joaat("J_10P_TUNNEL_1A_INT"):
			case joaat("BAC_TUNNELCURVE_INT"):
			case joaat("Q0304_TUNNEL_INT"):
			case joaat("L_08_TRAIN_TUNNEL2_INT"):
			case joaat("BAC_TUNNELEXIT_INT"):
			case joaat("BAC_TUNNELENT_INT"):
			case joaat("J_14_TUNNEL01_INT"):
			case 653987431:
			case joaat("BAC_TUNNEL_INT"):
			case joaat("HEA_TUNNEL_01"):
			case joaat("HEA_TUNNEL_02"):
			case joaat("Q0304_TUNNEL_EXIT"):
			case joaat("J_16_TUNNEL_INT"):
				return 1;
		}
	}
	return 0;
}

char* func_331(char* sParam0)
{
	char cVar0[64];
	var uVar8;

	StringCopy(&cVar0, "RE_DM_", 64);
	if (iLocal_422 == 76)
	{
		StringConCat(&cVar0, "VAL_", 64);
	}
	else if (iLocal_422 == 105)
	{
		StringConCat(&cVar0, "RHD_", 64);
	}
	else if (iLocal_422 == 92)
	{
		StringConCat(&cVar0, "VAL_", 64);
	}
	if (iLocal_17 == 0)
	{
		StringConCat(&cVar0, "V1_", 64);
	}
	else if (iLocal_17 == 1)
	{
		StringConCat(&cVar0, "V2_", 64);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringConCat(&cVar0, sParam0, 64);
	}
	uVar8 = func_522(cVar0);
	return uVar8;
}

bool func_332(var uParam0)
{
	return func_346(*uParam0, 2);
}

float func_333()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_334(int iParam0)
{
	switch (iLocal_422)
	{
		case 76:
			switch (iLocal_17)
			{
				case 0:
					switch (iParam0)
					{
						case 13:
							return 234475003;
						case 15:
							return 1194892292;
						case 17:
							return -1604552848;
						case 18:
							return -189454566;
						case 14:
							return 230997717;
						case 16:
							return -212649225;
						case 19:
							return -189454566;
					}
					break;
			}
			break;
		case 105:
			switch (iLocal_17)
			{
				case 0:
					switch (iParam0)
					{
						case 13:
							return -526512643;
						case 15:
							return -1306145892;
						case 17:
							return 201003381;
						case 26:
							return joaat("RE_DM_RHD_V1_DROWNING_A_01");
						case 27:
							return joaat("RE_DM_RHD_V1_DROWNING_B_01");
						case 18:
							return 2080523210;
						case 19:
							return -189454566;
						case 14:
							return -184699597;
						case 16:
							return 2146050495;
					}
					break;
			}
			break;
		case 92:
			switch (iLocal_17)
			{
				case 1:
					switch (iParam0)
					{
						case 15:
							return -146115896;
						case 1:
							return 1991258338;
						case 16:
							return 1017184366;
						case 3:
							return 2065234346;
						case 5:
							return 50580232;
						case 6:
							return -440627078;
						case 2:
							return -1960230997;
						case 4:
							return 1991705139;
						case 7:
							return -380506787;
						case 28:
							return -1652129750;
					}
					break;
			}
			break;
	}
	return -1;
}

void func_335(int iParam0, int iParam1)
{
	func_523(iParam0, iParam1);
}

void func_336(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return;
	}
	else if (ENTITY::_0x9A100F1CF4546629(iParam0))
	{
		iVar0 = func_524(iParam0);
		func_525(iVar0, ENTITY::_0xC346A546612C49A9(iParam0));
	}
	if (bParam1)
	{
		func_526(iParam0, 0);
	}
}

bool func_337(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_527(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_528(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

bool func_338()
{
	if (func_51(uLocal_410[0], 0, 1))
	{
		if ((ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], joaat("ONKNEES")) || func_340()) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_410[0], "script_re@drown_murder@escape", "drown_dunk_loop_victim", 1))
		{
			return true;
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_410[0], "script_re@drown_murder@escape", "drown_dunk_loop_victim", 1))
		{
			return true;
		}
	}
	return false;
}

int func_339(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_529(iParam0, vVar0, iParam2);
}

bool func_340()
{
	if (func_51(uLocal_410[0], 0, 1))
	{
		if ((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_410[0], Local_67[0 /*2*/], "brkout_female_v1_victim", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_410[0], Local_67[0 /*2*/], "brkout_female_v2_victim", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_410[0], Local_67[0 /*2*/], "brkout_female_quick_victim", 1))
		{
			return true;
		}
	}
	return false;
}

bool func_341(var uParam0, float fParam1)
{
	if (func_442(uParam0, fParam1))
	{
		func_146(uParam0);
		return true;
	}
	return false;
}

bool func_342(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!func_51(iParam0, 0, 1))
	{
		return true;
	}
	else if (!func_51(iParam2, 0, 1))
	{
		return true;
	}
	switch (*uParam3)
	{
		case 0:
			uParam4->f_183 = func_105(iParam0, iParam2, 0, 1);
			TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam2, -1, 0, 51, 0);
			if (!(func_530(iParam0, uParam4->f_188, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || func_105(iParam0, iParam2, 1, 1) < 2f) && !uParam4->f_79)
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iParam0, iParam2, 0f, 6f, 0.5f, uParam4->f_212, -1, 0.1f, 1, 1, 0, 0, 1);
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam2, 0, -1f, -1f, -1f);
			}
			if (uParam4->f_180)
			{
				if (func_531(iParam0, iParam2, 1) >= 16f)
				{
					TASK::TASK_GO_TO_ENTITY(iParam0, iParam2, 20000, 0.5f, uParam4->f_212, 2f, 0);
					func_124(&(uParam4->f_191));
				}
				else
				{
					uParam4->f_180 = 0;
					uParam4->f_79 = 1;
				}
			}
			*uParam3 = 1;
			break;
		case 1:
			if (func_105(iParam0, iParam2, 0, 1) > (uParam4->f_183 + uParam4->f_1))
			{
				TASK::TASK_SMART_FLEE_PED(iParam0, iParam2, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
				return true;
			}
			else if ((!uParam4->f_180 && (func_105(iParam0, iParam2, 1, 1) < uParam4->f_188 || uParam4->f_79)) || (uParam4->f_180 && (func_341(&(uParam4->f_191), uParam4->f_189) || func_531(iParam0, iParam2, 1) < 16f)))
			{
				if (((uParam4->f_180 || func_530(iParam0, uParam4->f_188, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)) || uParam4->f_77) || (uParam4->f_79 && (uParam4->f_77 || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))))
				{
					if (uParam4->f_80)
					{
						TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam2, &(uParam4->f_62), &(uParam4->f_66), uParam4->f_184, uParam4->f_185, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
					}
					else
					{
						func_532(iParam0, &(uParam4->f_181), -1, !uParam4->f_77);
					}
					*uParam3 = 2;
				}
			}
			break;
		case 2:
			if ((uParam4->f_76 || uParam4->f_79) || ((func_337(iParam0, iParam2, 0, uParam4->f_188, 0) && (uParam4->f_80 || func_532(iParam0, &(uParam4->f_181), -1, !uParam4->f_77))) || uParam4->f_180))
			{
				if (func_253(0, 1, iParam0, uParam4->f_182))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2)))
					{
						if (uParam4->f_80 || uParam4->f_180)
						{
							TASK::TASK_PLAY_ANIM(iParam0, &(uParam4->f_2), &(uParam4->f_10), 1.5f, -1.5f, -1, 24, 0f, false, 0, false, 0, false);
						}
						else
						{
							TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_2), &(uParam4->f_10), iParam2, -1, 4f, -4f, 67108880, 0f, false, false, -1f, 0, 65536, -1f);
						}
					}
					*uParam4 = MISC::GET_GAME_TIMER();
					if (uParam4->f_194)
					{
						MemCopy(&(uParam4->f_34), {uParam4->f_199}, 8);
					}
					func_533(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_34), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
					func_534(uParam4);
					if (uParam4->f_194 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_204)))
					{
						*uParam3 = 4;
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_42)))
					{
						*uParam3 = 3;
					}
					else
					{
						*uParam3 = 5;
					}
				}
			}
			else if (!func_51(iParam0, 0, 1))
			{
				return true;
			}
			break;
		case 3:
			if (func_253(0, 1, iParam0, uParam4->f_182))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2)))
				{
					if (uParam4->f_80)
					{
						TASK::TASK_PLAY_ANIM(iParam0, &(uParam4->f_2), &(uParam4->f_10), 4f, -4f, -1, 24, 0f, false, 0, false, 0, false);
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_26)))
					{
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_18), &(uParam4->f_26), iParam2, -1, 4f, -4f, 16, 0f, false, false, -1f, 0, 0, -1f);
					}
					else
					{
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_2), &(uParam4->f_10), iParam2, -1, 4f, -4f, 16, 0f, false, false, -1f, 0, 0, -1f);
					}
				}
				func_533(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_42), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
				*uParam3 = 5;
			}
			break;
		case 4:
			if (func_253(0, 1, iParam0, uParam4->f_182))
			{
				if (func_535(&(uParam4->f_203), &(uParam4->f_204), 0f, 0f, 0f, iParam0, joaat("INPUT_CONTEXT_B"), 10f, 0f, 0, 1, 0, 0, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
				{
					MemCopy(&(uParam4->f_54), {uParam4->f_195}, 8);
					*uParam3 = 5;
				}
				else if ((MISC::GET_GAME_TIMER() - *uParam4) > 18000)
				{
					func_536(&(uParam4->f_203), 1, 1);
					uParam4->f_194 = 0;
					*uParam3 = 6;
				}
			}
			break;
		case 5:
			if ((func_253(uParam4->f_187, 1, iParam0, uParam4->f_182) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0))
			{
				if (!MISC::IS_STRING_NULL(&(uParam4->f_54)))
				{
					*uParam4 = MISC::GET_GAME_TIMER();
					func_533(uParam4->f_179, &(uParam4->f_81), iParam2, iParam0, &(uParam4->f_54), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
					*uParam3 = 6;
				}
				else
				{
					if (uParam4->f_75 != 0)
					{
						func_537(uParam4->f_75, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
					}
					else if (uParam4->f_70 != 0)
					{
						func_538(uParam4->f_70, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
					}
					*uParam3 = 6;
				}
			}
			break;
		case 6:
			if (func_253(0, 1, iParam0, uParam4->f_182) || (uParam4->f_190 > 0 && (MISC::GET_GAME_TIMER() - *uParam4) > uParam4->f_190))
			{
				if (MAP::DOES_BLIP_EXIST(*iParam1))
				{
					MAP::REMOVE_BLIP(iParam1);
				}
				if (uParam4->f_78)
				{
					TASK::TASK_WANDER_STANDARD(iParam0, 40000f, 0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_208)))
				{
					func_539(&(uParam4->f_208), 10000, 0, 0, 0, 1);
				}
				*uParam3 = 7;
				return true;
			}
			break;
		case 7:
			return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
	{
		TASK::TASK_SMART_FLEE_PED(iParam0, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
		return true;
	}
	return false;
}

int func_343(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_344(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;

	iVar0 = func_540();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_541(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_484(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_52())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_542(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_540();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_543(iVar1);
		func_545(func_544(), 0, 4000);
		func_546(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_547(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_549(func_548(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_343(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_550(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_490(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_490(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_549(func_548(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_343(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_550(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_490(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_490(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_548(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_551(10, 1);
	}
}

void func_345(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

bool func_346(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_347(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_348(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_349(int iParam0, int iParam1)
{
	if (!func_348(iParam0))
	{
		return false;
	}
	return (Global_1395482.f_2[iParam0] && iParam1) != 0;
}

char* func_350(char* sParam0)
{
	return sParam0;
}

int func_351(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_552(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (Global_17504.f_1003[iVar0 /*6*/] == iVar1 || Global_17504.f_1003[iVar0 /*6*/] == -1)
		{
			Global_17504.f_1003[iVar0 /*6*/] = iVar1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_352(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if (Global_1888801[iVar2 /*35*/].f_20 == iParam0)
		{
			if (!(bParam2 && iVar2 == Global_1894899.f_2))
			{
				if (!bParam1 || func_553(iVar2))
				{
					vVar3 = { VOLUME::_GET_VOLUME_COORDS(Global_1888801[iVar2 /*35*/].f_3) };
					fVar6 = BUILTIN::VDIST(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_353(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

int func_354(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (MISC::_0x870708A6E147A9AD(iParam0, "INTERACT_LOCKON", fParam1, 0, 0, 0, 0, 0, 0, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_355(int iParam0)
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

void func_356(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_357(int iParam0)
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

void func_358(var uParam0)
{
	if (func_554(uParam0->f_162))
	{
		func_536(&(uParam0->f_162), 1, 1);
	}
	if (func_554(uParam0->f_163))
	{
		func_536(&(uParam0->f_163), 1, 1);
	}
	if (func_554(uParam0->f_164))
	{
		func_536(&(uParam0->f_164), 1, 1);
	}
	if (func_554(uParam0->f_165))
	{
		func_536(&(uParam0->f_165), 1, 1);
	}
}

void func_359(var uParam0)
{
	if (uParam0->f_170)
	{
		func_555();
	}
}

void func_360(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_306(32);
		func_54(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_361(var uParam0)
{
	if (func_556(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_557(uParam0->f_3);
		func_225(uParam0, 0, 1);
		func_558(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_559(0, 0);
		return true;
	}
	return false;
}

void func_362()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_363(int iParam0)
{
	if (!func_204(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

void func_364(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

int func_365(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_523(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_366()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_367(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_161() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_368(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

bool func_371(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*(uParam2[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*(uParam2[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*(uParam2[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*(uParam2[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*(uParam2[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*(uParam2[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*(uParam2[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*(uParam2[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 4:
					*(uParam2[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*(uParam2[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 5:
					*(uParam2[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*(uParam2[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*(uParam2[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*(uParam2[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*(uParam2[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*(uParam2[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*(uParam2[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*(uParam2[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*(uParam2[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*(uParam2[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 11:
					*(uParam2[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*(uParam2[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*(uParam2[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*(uParam2[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*(uParam2[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*(uParam2[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*(uParam2[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*(uParam2[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*(uParam2[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*(uParam2[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*(uParam2[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*(uParam2[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*(uParam2[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*(uParam2[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*(uParam2[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*(uParam2[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*(uParam2[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*(uParam2[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*(uParam2[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 20:
					*(uParam2[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*(uParam2[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*(uParam2[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 21:
					*(uParam2[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*(uParam2[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*(uParam2[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 22:
					*(uParam2[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*(uParam2[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(uParam2[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*(uParam2[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*(uParam2[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*(uParam2[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*(uParam2[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*(uParam2[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*(uParam2[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
					*(uParam2[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
					*(uParam2[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
					*(uParam2[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
					*(uParam2[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
					*(uParam2[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
					*(uParam2[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 26:
					*(uParam2[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
					*(uParam2[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 27:
					*(uParam2[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
					*(uParam2[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
					*(uParam2[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
					*(uParam2[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
					*(uParam2[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*(uParam2[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
					*(uParam2[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
					*(uParam2[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
					*(uParam2[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
					*(uParam2[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
					*(uParam2[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
					*(uParam2[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
					*(uParam2[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
					*(uParam2[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
					*(uParam2[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*(uParam2[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
					*(uParam2[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
					*(uParam2[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
					*(uParam2[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
					*(uParam2[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
					*(uParam2[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
					*(uParam2[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
					*(uParam2[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 24:
					*(uParam2[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
					*(uParam2[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 25:
					*(uParam2[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
					*(uParam2[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
					*(uParam2[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
					*(uParam2[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
					*(uParam2[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
					*(uParam2[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
					*(uParam2[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 31:
					*(uParam2[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
					*(uParam2[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 32:
					*(uParam2[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
					*(uParam2[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 33:
					*(uParam2[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
					*(uParam2[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
	}
	return false;
}

Vector3 func_372(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_25(*(uParam1[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *(uParam1[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *(uParam1[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(uParam1[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

void func_373(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::_BLIP_ADD_FOR_COORD(-1702907713, *uParam0);
		MAP::_BLIP_SET_MODIFIER(uParam0->f_6, 580546400);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			func_40("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}
}

bool func_374(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_375(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_25(vParam0))
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
		if (func_247(vParam0))
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
	if (bParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, bParam9);
	}
	func_560(iVar0, bParam8);
	return iVar0;
}

void func_376(int iParam0)
{
	if (!func_204(iParam0))
	{
		return;
	}
	func_561(iParam0);
}

void func_377(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		TASK::_0x5D9B0BAAF04CF65B(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		TASK::_0x19BC99C678FBA139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_378(int iParam0)
{
	if (func_97(iParam0, 2))
	{
		return 200;
	}
	if (func_97(iParam0, 4))
	{
		return 70;
	}
	if (func_97(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_379(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_76(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_41() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_76(iParam0, 2);
		bVar1 = func_76(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_231())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_380(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam0 = 45f;
		*fParam1 = 135f;
	}
	else
	{
		*fParam0 = 45f;
		*fParam1 = 125f;
	}
	if (func_97(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_381(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam1 = 240f;
	}
	else
	{
		*fParam1 = 215f;
	}
	*fParam0 = 110f;
	if (func_97(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 110f));
	}
	else if (func_97(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_382(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_370(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17504.f_12[iVar1], iVar2);
}

bool func_383(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_25(vParam1))
	{
		return false;
	}
	if (func_388(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return false;
		}
	}
	fVar0 = BUILTIN::VDIST2(vParam1, Global_36);
	if (func_151(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return true;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return true;
	}
	return false;
}

bool func_384(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_385(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;

	fVar0 = func_176(bParam6, iParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_391(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*iParam4 = func_273();
			iParam4->f_2 = func_292(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_391(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*iParam4 = func_273();
		iParam4->f_2 = func_292(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_386(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_273() - *uParam0) >= iParam1;
	}
	return false;
}

int func_387(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_25(uParam0->f_12[iVar0 /*3*/]))
		{
			if (iVar1 < 0 || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar1 /*3*/]) < BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_388(int iParam0, vector3 vParam1)
{
	int iVar0;

	if (!func_76(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_562(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_76(iParam0, 33554432))
	{
		if (func_563(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_389(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_97(iParam0, 128))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, false))
		{
			return false;
		}
		if (MISC::_0xBBE5B63EFFB08E68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return false;
			}
		}
	}
	if (func_76(iParam0, 1) && !func_76(iParam0, 2))
	{
		if (func_76(iParam0, 4096) || func_76(iParam0, 2048))
		{
			if (func_564(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_390(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_1(&uParam0);
	if (!func_565())
	{
		return false;
	}
	return true;
}

bool func_391(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_566(vVar0, vParam0) > func_566(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

bool func_392(int iParam0)
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

int func_393(int iParam0)
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

Vector3 func_394(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, bParam3, vParam4);
}

float func_395(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_92((fParam0 + fParam1));
}

int func_396(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_567(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_568(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_569(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_569(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_570(iVar0))
		{
			func_400(iVar0, &(uParam1->f_23), 0);
		}
		if (func_570(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_571(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_572(&(uParam1->f_22)));
			func_299(iVar0, func_573(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_574(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_575(&(uParam1->f_22)))
		{
			func_576(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_577(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_33(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!func_570(iVar0))
		{
			func_579(iVar0, !func_578(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_580(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_581(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_581(&(uParam1->f_22)));
			if (uParam1->f_31 != joaat("REL_NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

bool func_397(int iParam0, int iParam1)
{
	if (func_582(iParam0) != -1)
	{
		return true;
	}
	switch (iParam0)
	{
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("G_M_M_UNISWAMP_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			return true;
		case joaat("G_M_M_UNICRIMINALS_02"):
		case joaat("G_M_M_UNICRIMINALS_01"):
			return iParam1;
		default:
			break;
	}
	return false;
}

bool func_398(var uParam0)
{
	return func_33(*uParam0, 32);
}

int func_399(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::_SET_PED_ON_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

void func_400(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_51(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

bool func_401(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_402(int iParam0)
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

bool func_403(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_583(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_584((386 + iVar28), 1);
			if (func_585(iParam0, &Var0, iVar5, 0))
			{
				if (func_586(iParam0, &Var6, iVar5))
				{
					Var29 = { func_587(iParam0, Var0, iVar5, 0) };
					func_588(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_589(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_590(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_591(iParam0, iParam1);
					return true;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

void func_404(int iParam0, int iParam1, float fParam2)
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

bool func_405(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

bool func_406(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_407(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iVar0 = func_166(1);
	}
	else
	{
		iVar0 = func_353(iParam0);
	}
	return iVar0;
}

void func_408(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_592(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_593(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/]++;
	}
}

void func_409(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_97(iParam0, 8192))
	{
		iVar0 = func_593(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/]++;
	}
}

void func_410(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_54(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_411(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_76(iParam0, 262144))
	{
		if (Global_1392135.f_3 == -1)
		{
			func_594(262144, iVar0, 0, 1);
		}
	}
	if (func_76(iParam0, 128))
	{
		func_594(128, iVar0, 0, 1);
	}
	else if (func_76(iParam0, 524288))
	{
		func_594(524288, iVar0, 0, 1);
	}
	else if (func_76(iParam0, 536870912))
	{
		func_594(536870912, iVar0, 0, 1);
	}
	else if (func_76(iParam0, 4194304))
	{
		func_594(4194304, iVar0, 0, 1);
	}
	else if (func_76(iParam0, 8388608))
	{
		func_594(8388608, iVar0, 0, 1);
	}
}

void func_412(int iParam0)
{
	Global_1310750.f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750.f_16071 = iParam0;
}

int func_413(bool bParam0)
{
	if (!bParam0 && func_595(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_414()
{
	return Global_1310750.f_16037;
}

bool func_415(int iParam0)
{
	if (!func_204(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_416(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_204(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_596(iParam0);
	Global_1310750.f_16037 = (Global_1310750.f_16037 - 1);
}

void func_417(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_597(&Global_1393447, 1);
	func_598();
	func_599();
	func_600((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (func_273() / 1000);
		if (Global_1392135.f_1 & 4 != 0)
		{
			Global_1392135.f_1 = (Global_1392135.f_1 - Global_1392135.f_1 & 4);
		}
		func_601();
		if (iParam1 == -1)
		{
			if (func_3(iParam0, 1))
			{
				func_594(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_3(iParam0, 2))
			{
				func_594(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_3(iParam0, 4))
			{
				func_594(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			func_602(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_603(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_603((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

bool func_418(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

void func_419(int iParam0, int iParam1)
{
	Global_1392050[iParam1 /*14*/].f_1 = (Global_1392050[iParam1 /*14*/].f_1 - (Global_1392050[iParam1 /*14*/].f_1 && iParam0));
}

void func_420(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] = (Global_40.f_9571[iParam1 /*10*/] || iParam0);
}

int func_421(int iParam0)
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

bool func_422()
{
	return (Global_1935630.f_44 == joaat("WEAPON_KIT_BINOCULARS") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

bool func_423(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_424(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_423(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_333() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

int func_425(bool bParam0, bool bParam1, bool bParam2)
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

int func_426(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_427(int iParam0)
{
	switch (iParam0)
	{
		case joaat("OVERCAST"):
		case joaat("HIGHPRESSURE"):
		case joaat("OVERCASTDARK"):
		case joaat("CLOUDS"):
		case joaat("MISTY"):
		case joaat("SUNNY"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_428(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("SHOWER"):
		case joaat("SLEET"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_429(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOW"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("SNOWCLEARING"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_430(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FOG"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_431(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("MISTY"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_432(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOWLIGHT"):
		case joaat("SNOWCLEARING"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_433(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SANDSTORM"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_434(bool bParam0, int iParam1, int iParam2)
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

bool func_435()
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

int func_436(int iParam0)
{
	if (!func_439(iParam0))
	{
		return -1;
	}
	return func_605(func_604(iParam0));
}

bool func_437(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_438(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_439(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_440(int iParam0)
{
	return func_76(iParam0, Global_1310750.f_16072 | 64);
}

bool func_441(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_442(var uParam0, float fParam1)
{
	if (!func_148(uParam0))
	{
		return false;
	}
	if (func_127(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_443(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1310750[iParam0 /*111*/].f_40)) != 0);
}

bool func_444(int iParam0, bool bParam1)
{
	if (func_51(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

bool func_445(float fParam0)
{
	if (func_606(1))
	{
		return true;
	}
	if (func_148(&uLocal_0) && !func_341(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_446(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_607();
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
			func_608(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_447(int iParam0)
{
	return Global_1109400.f_276[iParam0 /*3*/];
}

bool func_448(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_161() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_609(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = func_609(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_475(iVar0) == -1)
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

void func_449(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_610(iParam0);
	}
}

bool func_450(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_475(iParam2);
	}
	else
	{
		iVar1 = func_474(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_475(iParam0);
	}
	else
	{
		iVar0 = func_474(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_3(*iParam1, 8388608))
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

float func_451(int iParam0, int iParam1)
{
	return func_105(iParam0, iParam1, 1, 1);
}

float func_452(int iParam0)
{
	return iParam0->f_26;
}

bool func_453(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_454(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_96(iParam0, 134217728);
	}
	else
	{
		func_159(iParam0, 134217728);
	}
}

bool func_455(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_105(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_611(iVar0, 0)))
		{
			if (func_612(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_456(int iParam0)
{
	return iParam0->f_17;
}

bool func_457(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_3(*iParam0, 4194304))
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

int func_458(int iParam0)
{
	return iParam0->f_18;
}

bool func_459(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_611(iVar0, 0)))
		{
			if (func_613(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_460(int iParam0)
{
	return iParam0->f_23;
}

int func_461(int iParam0)
{
	return iParam0->f_21;
}

int func_462(int iParam0)
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

bool func_463(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_614(iParam0, vParam4, 0.5f))
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

int func_464(int iParam0)
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
	if (func_285(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_465(int iParam0)
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

bool func_466(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_238(iParam1))
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

bool func_467(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_238(iParam1))
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

bool func_468(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_238(iParam1))
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

bool func_469(int iParam0, int iParam1)
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

bool func_470(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_615(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_471(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_472(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_292(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_473(int iParam0)
{
	return iParam0->f_24;
}

int func_474(int iParam0)
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

int func_475(int iParam0)
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

int func_476(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_469(Global_35, &iVar1))
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
		fVar2 = func_105(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_105(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_477(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_434(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_478(iParam1, iVar0))
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
				if (!bParam2 || !func_478(iParam1, iVar1))
				{
					if (func_292(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_478(int iParam0, int iParam1)
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

bool func_479(int iParam0)
{
	if (func_52())
	{
		return false;
	}
	return func_616(Global_1347702[58 /*49*/].f_15, 1);
}

int func_480(int iParam0)
{
	return iParam0->f_20;
}

int func_481(int iParam0, int iParam1, bool bParam2, float fParam3)
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

int func_482(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_483(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_617(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_617(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_617(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

bool func_484(int iParam0)
{
	if (!func_618(iParam0))
	{
		return false;
	}
	return func_619(iParam0);
}

bool func_485(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_484(18);
		case 2:
			return func_484(20);
		case 1:
			return func_484(19);
		default:
			break;
	}
	return true;
}

int func_486(int iParam0)
{
	return func_620(Global_40.f_11095.f_11[iParam0]);
}

void func_487(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_161() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_484(31))
	{
		return;
	}
	iVar0 = func_486(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_486(iParam0);
	if (func_621(iParam0) && func_622(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_623(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_624(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_626(func_625(iParam0), 0);
					}
					func_627(iParam0, iVar2, iVar3);
					func_628(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_488(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_489(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("ITEMTYPE_PLAYER_STAMINA");
		case 0:
			return joaat("ITEMTYPE_PLAYER_HEALTH");
		case 2:
			return joaat("ITEMTYPE_PLAYER_DEADEYE");
		default:
			break;
	}
	return 0;
}

var func_490(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_629(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_491()
{
	if (func_52())
	{
		if (!func_630(69))
		{
			return false;
		}
	}
	else if (func_631())
	{
		if (!func_630(7))
		{
			return false;
		}
	}
	return true;
}

void func_492(int iParam0)
{
	Global_1395482.f_10 = (Global_1395482.f_10 - (Global_1395482.f_10 && iParam0));
}

void func_493(int iParam0)
{
	Global_1395482.f_10 = (Global_1395482.f_10 || iParam0);
}

bool func_494()
{
	return func_632(2);
}

void func_495(int* iParam0, var uParam1)
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
	func_633(iParam0, uParam1, 1);
	func_516(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

int func_496(int iParam0, int iParam1, int iParam2)
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

int func_497(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_634(&iVar0);
	if (func_3(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_635(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_3(iVar0, 134217728))
	{
		func_636(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_637(558))
				{
					func_626(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

char* func_498(int iParam0)
{
	if (func_638(iParam0))
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

void func_499(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_554(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_639(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_640(iParam0->f_6, iParam0->f_5, 0);
			}
			func_641(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_642(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_500(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_643(iParam0, 13))
	{
		func_644(iParam0, 0);
	}
	else
	{
		func_645(iParam0, 0);
	}
	if (func_554(iParam0->f_6))
	{
		if (bParam2)
		{
			func_536(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_501()
{
	if ((iLocal_17 == 1 && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false)) && ANIMSCENE::_0x8D81E7824B7753F7(Local_80, "action", 1))
	{
		return false;
	}
	return true;
}

bool func_502(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = *uParam1;
	if (PLAYER::_0x3EE1F7A8C32F24E1(iParam0, &uVar0, false, false))
	{
		return true;
	}
	return false;
}

bool func_503(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_554(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_646(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_504(int iParam0, float fParam1)
{
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && func_337(Global_35, iParam0, 0, fParam1, 0))
	{
		return true;
	}
	return false;
}

void func_505(bool bParam0)
{
	switch (func_2())
	{
		case 76:
			switch (iLocal_17)
			{
				case 0:
					bLocal_397 = true;
					vLocal_379 = { -307.4005f, 797.8436f, 117.947f };
					if (bParam0)
					{
						vLocal_382 = { -304.634f, 811.7f, 120.976f };
						fLocal_395 = 112.808f;
						iLocal_375 = joaat("WORLD_HUMAN_STARE_STOIC");
					}
					else
					{
						vLocal_382 = { -304.825f, 811.922f, 120.976f };
						fLocal_395 = -164.278f;
						iLocal_375 = joaat("WORLD_HUMAN_STAND_WAITING");
					}
					break;
				case 1:
					switch (Local_101.f_51.f_4)
					{
						case 0:
							vLocal_385[0 /*3*/] = { -305.9674f, 825.1412f, 118.3967f };
							vLocal_385[1 /*3*/] = { -302.6452f, 814.72f, 117.4108f };
							vLocal_379 = { -307.4005f, 797.8436f, 117.947f };
							bLocal_397 = true;
							vLocal_382 = { -304.825f, 811.922f, 120.976f };
							fLocal_395 = -164.278f;
							iLocal_375 = joaat("WORLD_HUMAN_STAND_WAITING");
							break;
						case 1:
							vLocal_385[1 /*3*/] = { -225.7226f, 763.439f, 116.2204f };
							vLocal_379 = { -307.4005f, 797.8436f, 117.947f };
							bLocal_397 = true;
							vLocal_382 = { -304.825f, 811.922f, 120.976f };
							fLocal_395 = -164.278f;
							iLocal_375 = joaat("WORLD_HUMAN_STAND_WAITING");
							break;
						case 2:
							vLocal_385[0 /*3*/] = { -275.3085f, 641.9633f, 112.379f };
							vLocal_385[1 /*3*/] = { -230.2025f, 687.0725f, 112.3302f };
							vLocal_379 = { -307.4005f, 797.8436f, 117.947f };
							bLocal_397 = true;
							vLocal_382 = { -304.825f, 811.922f, 120.976f };
							fLocal_395 = -164.278f;
							iLocal_375 = joaat("WORLD_HUMAN_STAND_WAITING");
							break;
					}
					break;
			}
			break;
		case 105:
			vLocal_379 = { 1353.808f, -1377.04f, 79.50304f };
			bLocal_397 = true;
			if (bParam0)
			{
				vLocal_382 = { 1348.383f, -1377.68f, 83.289f };
				fLocal_395 = -10.462f;
				iLocal_375 = joaat("WORLD_HUMAN_LEAN_WALL_LEFT");
			}
			else
			{
				vLocal_382 = { 1348.618f, -1376.747f, 83.289f };
				fLocal_395 = 158.583f;
				iLocal_375 = joaat("WORLD_HUMAN_STAND_WAITING");
			}
			break;
		case 92:
			vLocal_379 = { 2952.098f, 523.3885f, 44.46711f };
			vLocal_382 = { 2941.216f, 522.585f, 44.331f };
			fLocal_395 = 164.833f;
			bLocal_397 = true;
			switch (Local_101.f_51.f_4)
			{
				case 0:
					vLocal_385[0 /*3*/] = { 2970.667f, 462.3464f, 48.38306f };
					iLocal_375 = joaat("WORLD_HUMAN_SMOKE");
					break;
				case 1:
					break;
			}
			break;
	}
}

void func_506()
{
	if (!func_25(vLocal_382))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_418))
		{
			if (!CAM::IS_SPHERE_VISIBLE(vLocal_382, 1f))
			{
				func_15(vLocal_382, 0.5f, 1, 0, 0, 0, 0);
			}
			func_88(&iLocal_418, &uLocal_420, vLocal_382, 0f, 0f, 0f, 0.5f, 0.5f, 0.5f, 0, 0, 1, 0, 0);
		}
	}
}

int func_507(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, fParam4, iParam5, fParam6, iParam7);
}

int func_508(int iParam0)
{
	int iVar0;

	iVar0 = func_647(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_INJURED(iVar0))
	{
		return iVar0;
	}
	return 0;
}

bool func_509(float fParam0)
{
	if (!func_33(iLocal_400, 16777216))
	{
		return true;
	}
	else if (fParam0 > 4f)
	{
		return true;
	}
	else if ((Local_101.f_98[1] < 4f && func_527(uLocal_410[1], Global_35, 0)) && fParam0 > 2f)
	{
		return true;
	}
	return false;
}

float func_510(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;
	vector3 vVar30;
	float fVar33[4];
	int iVar38;
	int iVar39;
	float fVar40;
	float fVar41;
	vector3 vVar42;
	vector3 vVar45;
	vector3 vVar48;
	float fVar51;
	float fVar52;

	if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam0, vParam1))
	{
		return 0f;
	}
	iVar39 = -1;
	fVar40 = 9999999f;
	vVar42 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	vVar45 = { VOLUME::_GET_VOLUME_ROTATION(iParam0) };
	vVar48 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	fVar51 = (vVar48.x / 2f);
	fVar52 = (vVar48.y / 2f);
	vVar15.x = fVar51;
	vVar15.f_1 = fVar52;
	vVar18.x = -fVar51;
	vVar18.f_1 = -fVar52;
	vVar12 = { -fVar51, fVar52, 0f };
	vVar21 = { fVar51, -fVar52, 0f };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar42, vVar45.z, vVar12) };
	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar42, vVar45.z, vVar15) };
	vVar6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar42, vVar45.z, vVar18) };
	vVar9 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar42, vVar45.z, vVar21) };
	fVar33[0] = BUILTIN::VDIST2(vVar0, vParam1);
	fVar33[1] = BUILTIN::VDIST2(vVar3, vParam1);
	fVar33[2] = BUILTIN::VDIST2(vVar6, vParam1);
	fVar33[3] = BUILTIN::VDIST2(vVar9, vParam1);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		if (fVar33[iVar38] < fVar40)
		{
			iVar39 = iVar38;
			fVar40 = fVar33[iVar38];
		}
		iVar38++;
	}
	vVar0.f_2 = vParam1.z;
	vVar3.f_2 = vParam1.z;
	vVar6.f_2 = vParam1.z;
	vVar9.f_2 = vParam1.z;
	if (iVar39 > -1)
	{
		switch (iVar39)
		{
			case 0:
				vVar24 = { vVar0 };
				vVar27 = { vVar3 };
				vVar30 = { vVar6 };
				break;
			case 1:
				vVar24 = { vVar3 };
				vVar27 = { vVar0 };
				vVar30 = { vVar9 };
				break;
			case 2:
				vVar24 = { vVar6 };
				vVar27 = { vVar0 };
				vVar30 = { vVar9 };
				break;
			case 3:
				vVar24 = { vVar9 };
				vVar27 = { vVar6 };
				vVar30 = { vVar3 };
				break;
		}
	}
	fVar41 = func_649(func_648(vVar24, vVar27, vParam1, 0), func_648(vVar24, vVar30, vParam1, 0));
	return fVar41;
}

int func_511(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar1 = PED::_0x5463C962BC7777C3(iParam0, iParam1, &uVar0, 1, 0);
	if (iVar1 != 0)
	{
		return uVar0;
	}
	return 0;
}

bool func_512(var uParam0)
{
	if (-1829635046 == func_650(81053684))
	{
		if (func_651(uParam0))
		{
			return true;
		}
	}
	else if (func_652(-525676072, uParam0))
	{
		if (func_651(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_513()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_43800, false));
}

void func_514(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	char* sVar9;
	int iVar10;

	if (func_161() != -1)
	{
		return;
	}
	iVar0 = func_653();
	if (iParam0 <= 0)
	{
		return;
	}
	else if (iParam0 > 0 && (iVar0 + iParam0) > 3000)
	{
		iVar1 = (3000 - iVar0);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 < 0)
	{
		iVar2 = MISC::ABSI(iVar1);
		sVar9 = "FAME_EVENT_DEC";
	}
	else
	{
		iVar2 = iVar1;
		sVar9 = "FAME_EVENT_INC";
	}
	iVar3 = (iVar0 + iVar1);
	fVar6 = BUILTIN::TO_FLOAT(iVar0);
	fVar7 = BUILTIN::TO_FLOAT(Global_1347398);
	fVar8 = BUILTIN::TO_FLOAT(iVar3);
	iVar4 = func_542(BUILTIN::CEIL(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_542(BUILTIN::CEIL(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_654())
		{
			func_655(0);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_656())
		{
			func_655(1000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_657())
		{
			func_655(2000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_658())
	{
		func_655(3000);
		AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_549(func_548(joaat("FAME")), iVar1);
	iVar10 = func_653();
	AUDIO::_0x078F77FD1A43EAB3(iVar0, iVar10);
}

int func_515(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_231())
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
				if (func_659(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_105(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_124(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_660(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_661(func_149(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_516(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_554((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_536(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_517(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_146(&(iParam0->f_18));
}

void func_518(char* sParam0, bool bParam1, bool bParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		Global_1395482.f_11 = { func_662(sParam0) };
		if (bParam1)
		{
			func_493(8);
		}
		if (bParam2)
		{
			func_493(16);
		}
	}
}

void func_519()
{
	func_663();
	func_664(&(uLocal_410[1]));
	PED::SET_PED_CONFIG_FLAG(uLocal_410[1], 6, false);
}

void func_520(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_521(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

var func_522(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

void func_523(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_524(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (ENTITY::_0x9A100F1CF4546629(iParam0))
	{
		iVar0 = func_665(iParam0);
	}
	return iVar0;
}

void func_525(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !Global_1935630.f_12)
	{
		iVar0 = func_666(iParam0);
		if (iVar0 <= 1)
		{
			iVar1 = 462;
			if (func_667(iParam0))
			{
				iVar1 = 463;
			}
			iVar2 = func_668(iParam0);
			func_669(iVar1, iVar2, 1);
		}
	}
}

void func_526(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 0, iParam1);
	PED::_0x6569F31A01B4C097(iVar0, 1, iParam1);
}

bool func_527(int iParam0, int iParam1, float fParam2)
{
	return func_614(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_528(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_529(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_670(vVar3, vVar6);
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
	if (func_671(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_530(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_292(iParam0, Global_36, 1);
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

float func_531(int iParam0, int iParam1, bool bParam2)
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
	return func_152(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_532(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!*uParam1)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, 3f, 0.55f, -1f);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, iParam2, 2f, 0.2f, -1f);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		if (bParam3)
		{
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 1f, 1.5f);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		}
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		*uParam1 = 1;
	}
	if ((TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503, true) == 1 && TASK::GET_SEQUENCE_PROGRESS(iParam0) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503, true) != 1)
	{
		return 1;
	}
	return 0;
}

bool func_533(bool bParam0, var uParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, float fParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam0)
	{
		return func_672(uParam1, sParam4, iParam2, iParam3, iParam7, bParam9, 1, 1);
	}
	return func_320(iParam2, iParam3, sParam4, sParam5, fParam6, iParam7, bParam8, bParam9, iParam10, 0, 1, 1744022339, 1, 0, 0);
}

void func_534(var uParam0)
{
	int iVar0;

	if (uParam0->f_75 != 0)
	{
		func_537(uParam0->f_75, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	}
	else if (uParam0->f_70 != 0)
	{
		func_538(uParam0->f_70, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
	}
	if (func_673(uParam0->f_74, 0))
	{
		func_674(uParam0->f_74, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	if (uParam0->f_72 != 0)
	{
		if (uParam0->f_71)
		{
			iVar0 = (func_653() + uParam0->f_72);
			func_675(iVar0);
		}
		else
		{
			func_318(uParam0->f_72, 1);
		}
	}
	if (uParam0->f_73 != 9)
	{
		func_147(uParam0->f_73, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	}
}

bool func_535(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	int iVar0;

	if (!func_554(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = func_676(sParam1, iParam6, iParam5, iParam10, fParam9, 0, iParam15, iVar0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0, 0);
			func_677(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_678(sParam1, iParam6, iParam13, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0);
		}
		else
		{
			if (func_25(vParam2))
			{
				return false;
			}
			*uParam0 = func_679(sParam1, iParam6, vParam2, fParam7, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_639(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_680(1))
			{
				func_641(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			func_681(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_646(*uParam0, 0))
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				func_641(*uParam0, 0, 1);
			}
		}
		else if (!PED::_IS_PED_CARRYING(Global_35))
		{
			func_641(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_680(1))
		{
			func_641(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (func_554(*uParam0))
			{
				func_536(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_682(*uParam0, 1)) || (bParam17 && func_683(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_684(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_537(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
		}
		func_536(uParam0, 1, 1);
		return true;
	}
	return false;
}

void func_536(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_554(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_685(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_686(iVar0);
	*uParam0 = 0;
}

void func_537(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_687(iParam0, sParam4, iParam5);
	}
	func_688(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_538(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_689(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_687(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_688(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

var func_539(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_540()
{
	int iVar0;

	iVar0 = func_690();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_541(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_161() != -1)
	{
		return iParam0;
	}
	if (Global_1347477.f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3++;
	if (Global_1347477.f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477.f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_176(MISC::ABSF(fVar1) < 1f, func_176(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_542(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_543(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_544()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_545(int iParam0, bool bParam1, int iParam2)
{
	func_691((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569.f_1.f_2.f_1, iParam0);
	func_692(iParam0);
}

void func_546(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[2], func_693(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_547(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_694(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_695(iVar5, &iVar2, &iVar0))
			{
				if (!func_673(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_696(iVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_697(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_540() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_540() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_698();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

struct<2> func_548(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_549(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

char* func_550(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return "HONOR_EVENT_LOOT_INNOCENT";
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return "HONOR_EVENT_AMBIENT_KILL";
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return "HONOR_EVENT_AMBIENT_KO";
		case joaat("HONOR_EVENT_SCARE"):
			return "HONOR_EVENT_SCARE";
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return "HONOR_EVENT_KILL_VERMIN";
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return "HONOR_EVENT_KILL_HORSE";
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return "HONOR_EVENT_STEAL_HORSE";
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return "HONOR_EVENT_STEAL_DONKEY";
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return "HONOR_EVENT_STEAL_MULE";
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return "HONOR_EVENT_STEAL_WAGON";
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return "HONOR_EVENT_ANTAGONIZE";
		case joaat("HONOR_EVENT_THEFT"):
			return "HONOR_EVENT_THEFT";
		case joaat("HONOR_EVENT_INTERVENED"):
			return "HONOR_EVENT_INTERVENED";
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return "HONOR_EVENT_DONATED_GAME";
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return "HONOR_EVENT_ITEM_REQUEST";
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return "HONOR_EVENT_LONG_ABSENCE";
		case joaat("HONOR_EVENT_CRUEL_DEATH"):
			return "HONOR_EVENT_CRUEL_DEATH";
		case joaat("HONOR_EVENT_JUSTICE_SERVED"):
			return "HONOR_EVENT_JUSTICE_SERVED";
		case joaat("HONOR_EVENT_CHEAT"):
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

int func_551(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_699(iParam0))
	{
		return 0;
	}
	if (!func_700())
	{
		return 0;
	}
	if (!func_701(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

int func_552(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

bool func_553(int iParam0)
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

bool func_554(int iParam0)
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

void func_555()
{
	func_702(23);
}

int func_556(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_557(int iParam0)
{
	int iVar0;

	iVar0 = func_703(iParam0);
	if (iVar0 != 0)
	{
		func_704(-1, 24, 0, iVar0);
	}
}

void func_558(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750.f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (Global_17504.f_42[iParam0 /*8*/] == 0)
	{
		func_549(func_548(joaat("UNIQUE_BEATS_COMPLETED")), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0 /*8*/]++;
	Global_1310750[iParam0 /*111*/].f_110 |= 8;
	if (func_76(iParam0, 2))
	{
		func_705(iParam0, func_407(iParam3));
	}
	if (func_76(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_41();
		}
		func_706(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_97(iParam0, 65536))
	{
		func_707(iParam0, iParam1);
		func_708(iParam0, func_191(iParam0, iParam1));
		func_306(128);
	}
	func_410(iParam0, Global_1310750[iParam0 /*111*/].f_37, 1065353216 /* Float: 1f */, 0, 0);
	func_411(iParam0, 1);
	if (!bParam2)
	{
		func_306(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_709(524288);
	}
	if (func_710(iParam0) != 0)
	{
		if (Global_17504.f_42[iParam0 /*8*/] >= func_710(iParam0))
		{
			Global_17504.f_42[iParam0 /*8*/].f_6 = 1;
		}
	}
}

void func_559(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_711(&Global_0, 8);
	}
	if (!func_700() || func_161() != -1)
	{
		return;
	}
	func_711(&Global_0, 1);
}

int func_560(int iParam0, bool bParam1)
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

void func_561(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0 /*8*/].f_3++;
	Global_1310750[iParam0 /*111*/].f_110 |= 2;
}

bool func_562(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_25(vParam0))
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

bool func_563(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_25(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_564(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750.f_16043)
	{
		if (!func_25(Global_1310750.f_16043[iVar0 /*3*/]))
		{
			if (func_152(vParam0, Global_1310750.f_16043[iVar0 /*3*/]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_565()
{
	int iVar0;
	int iVar1;

	iVar0 = func_712(func_2());
	if (iVar0 == 8)
	{
		iVar1 = func_242(func_2());
		if (func_244(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_713(func_166(0)))
	{
		return false;
	}
	if (func_714())
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

float func_566(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_567(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	if (func_715(&uParam1))
	{
		return 1;
	}
	if (!func_218(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_568(var uParam0)
{
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			if (PED::_0x610438375E5D1801(uParam0->f_5))
			{
				return true;
			}
		}
	}
	return false;
}

int func_569(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_716(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_570(int iParam0)
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

bool func_571(var uParam0)
{
	return func_33(*uParam0, 4);
}

bool func_572(var uParam0)
{
	return func_33(*uParam0, 64);
}

bool func_573(var uParam0)
{
	return func_33(*uParam0, 8);
}

bool func_574(var uParam0)
{
	return func_33(*uParam0, 128);
}

bool func_575(var uParam0)
{
	return func_33(*uParam0, 2048);
}

void func_576(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_577(var uParam0)
{
	return func_33(*uParam0, 1024);
}

bool func_578(var uParam0)
{
	return func_33(*uParam0, 256);
}

void func_579(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_580(var uParam0)
{
	return func_33(*uParam0, 512);
}

bool func_581(var uParam0)
{
	return func_33(*uParam0, 4096);
}

int func_582(int iParam0)
{
	switch (iParam0)
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
			return 0;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			return 2;
		case joaat("G_M_M_UNIINBRED_01"):
			return 1;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			return 3;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			return 4;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			return 5;
	}
	return -1;
}

struct<5> func_583(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_717(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_697(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_587(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_718(bParam1) };
			if (bParam2 && func_719(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_585(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_585(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_586(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_720(bParam1) };
			switch (func_721(iParam0))
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
			if (func_722(iParam0, -1823706425))
			{
				Var0 = { func_587(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_722(iParam0, -1483207246))
			{
				Var0 = { func_587(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_723(Var0, &Var27, bParam1, 0))
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

int func_584(int iParam0, int iParam1)
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

bool func_585(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_724(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_586(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_725(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_587(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_673(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_726(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_588(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_727(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_723(*uParam1, &Var0, bParam6, 0))
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
	if (!func_589(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_726(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_589(bool bParam0)
{
	if (func_161() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_726(bParam0));
}

bool func_590(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_728(iParam0))
	{
		return false;
	}
	if (!func_589(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

void func_591(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_729(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_592(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_593(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1326862.f_512[iParam1];
	iVar1 = Global_1326862.f_558[iParam1];
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == Global_1326862.f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_594(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_374(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_363(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_730(iVar0) < func_731(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_410(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_595(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_732(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

void func_596(int iParam0)
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

void func_597(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_598()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_733(iVar0, 128))
		{
			func_734(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_599()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_733(iVar0, 128) && func_733(iVar0, 1))
		{
			func_734(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_600(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237.f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237.f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_601()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_76(iVar0, 16777216))
		{
			if (!func_735(iVar0))
			{
				func_736(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_602(int iParam0, int iParam1, int iParam2, int iParam3)
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
			func_54(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_54(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_54(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_54(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_54(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_54(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_54(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_603(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_333();
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

int func_604(int iParam0)
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

int func_605(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_606(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

bool func_607()
{
	if (func_737())
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

void func_608(var uParam0, var uParam1)
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

int func_609(int iParam0)
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

void func_610(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_159(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_96(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_611(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_612(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_613(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_613(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_614(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_615(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_616(int iParam0, bool bParam1)
{
	switch (func_738(iParam0))
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

float func_617(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_482(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_620(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_739(iVar6) - func_739(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

bool func_618(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_619(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

int func_620(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_621(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_622(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_623(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_620(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_739(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_739(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_624(int iParam0)
{
	int iVar0;

	if (func_740(iParam0, &iVar0))
	{
		return func_739(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_741())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_741())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_741())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_625(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_626(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_742(iParam0, &iVar0, &iVar1);
	if (!func_743(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_744(iVar0, iVar1);
}

void func_627(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<6> Var10;

	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_745(iParam0));
	sVar4 = func_747(func_746(iVar3, iParam2));
	sVar6 = func_748(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_749(iParam0));
	iVar8 = func_750(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_751(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_753(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_752(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_628(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_629(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_630(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_616(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_631()
{
	if (func_161() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

bool func_632(int iParam0)
{
	return (Global_1395482.f_10 && iParam0) != 0;
}

void func_633(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_536(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_517(iParam0, 0);
		}
	}
}

void func_634(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_635(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_634(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_176(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_124(&(iParam1->f_13));
		}
		if (func_754(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_755(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_635(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_756(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_757(*uParam0, 1, 1);
						}
					}
					else if (func_758(iParam1, 22))
					{
						func_757(*uParam0, 0, 1);
					}
				}
				if (func_759(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_760(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_761(iParam8);
					if (func_762(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_763(uParam3);
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
					func_764(iParam1, uParam3, fVar8);
					if (func_765(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_516(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_766(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_759(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_767(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_762(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_760(uParam0, func_759(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_761(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_516(uParam3, 0, 0, 1, 1);
					}
					func_768(iParam1, 1);
				}
				func_764(iParam1, uParam3, fVar8);
				if (func_766(uParam0, iParam1, fParam4, bVar6))
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
			func_495(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_636(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_769(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_320(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_637(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_161() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

bool func_638(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_639(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_554(iParam0))
	{
		return;
	}
	iVar0 = func_685(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_640(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_554(iParam0))
	{
		return;
	}
	iVar0 = func_685(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, sParam1);
}

void func_641(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_554(iParam0))
	{
		return;
	}
	iVar0 = func_685(iParam0);
	if (bParam1)
	{
		func_770(iParam0, 4);
		func_771(iVar0, 1);
		func_772(iVar0, 1);
	}
	else
	{
		func_773(iParam0, 4);
		func_772(iVar0, 0);
	}
}

void func_642(int* iParam0, char* sParam1)
{
	if (func_554(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_640(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_645(iParam0, 1);
}

bool func_643(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_644(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_645(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_646(int iParam0, bool bParam1)
{
	if (bParam1 && !func_554(iParam0))
	{
		return false;
	}
	return !func_774(iParam0, 4);
}

int func_647(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return iVar1;
		}
	}
	return 0;
}

float func_648(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (bParam9)
	{
		vParam0.f_2 = 0f;
		vParam3.f_2 = 0f;
		vParam6.f_2 = 0f;
	}
	fVar0 = BUILTIN::VDIST2(vParam0, vParam3);
	if (fVar0 == 0f)
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(vParam6, vParam0, true);
	}
	fVar1 = (func_566(vParam6 - vParam0, vParam3 - vParam0) / fVar0);
	if (fVar1 < 0f)
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(vParam6, vParam0, true);
	}
	else if (fVar1 > 1f)
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(vParam6, vParam3, true);
	}
	vVar2 = { vParam0 + Vector(fVar1, fVar1, fVar1) * vParam3 - vParam0 };
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vParam6, vVar2, true);
}

float func_649(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_650(int iParam0)
{
	int iVar0;

	iVar0 = func_776(func_775(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_651(var uParam0)
{
	if (func_652(81053684, uParam0))
	{
		return true;
	}
	if (func_652(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_652(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_776(func_775(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946804.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946804.f_1497.f_1[iVar1 /*3*/];
		if (func_721(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_653()
{
	if (func_161() != -1)
	{
		return 0;
	}
	return func_777(joaat("FAME"));
}

bool func_654()
{
	return Global_1347398.f_1 == 0;
}

void func_655(int iParam0)
{
	Global_1347398.f_1 = iParam0;
}

bool func_656()
{
	return Global_1347398.f_1 == 1000;
}

bool func_657()
{
	return Global_1347398.f_1 == 2000;
}

bool func_658()
{
	return Global_1347398.f_1 == 3000;
}

float func_659(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_105(Global_35, iParam0, bParam1, bParam2);
}

bool func_660(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_661(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

Vector3 func_662(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

void func_663()
{
	StringCopy(&(Global_1395482.f_11), "", 24);
	StringCopy(&(Global_1395482.f_14), "", 24);
	StringCopy(&(Global_1395482.f_17), "", 24);
	StringCopy(&(Global_1395482.f_76), "", 32);
	func_778();
	func_779();
	func_780();
	Global_1395482.f_115 = 0;
	Global_1395482.f_116 = 0;
	Global_1395482.f_114 = 0;
	Global_1395482.f_94 = 0;
	Global_1395482.f_72 = 0;
	Global_1395482.f_73 = 0;
	Global_1395482.f_74 = 0;
	Global_1395482.f_75 = 0;
	Global_1395482.f_117 = 0;
	Global_1395482.f_93 = 0;
	func_781();
	func_492(4);
}

int func_664(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		PED::SET_PED_CONFIG_FLAG(*uParam0, 186, true);
		DECORATOR::DECOR_SET_BOOL(*uParam0, "bDeadOrAlive", true);
		if (DECORATOR::DECOR_EXIST_ON(*uParam0, "bDeadOrAlive"))
		{
			DECORATOR::DECOR_REMOVE(*uParam0, "bDeadOrAlive");
		}
		if (DECORATOR::DECOR_EXIST_ON(*uParam0, "bIsCriminal"))
		{
			DECORATOR::DECOR_REMOVE(*uParam0, "bIsCriminal");
		}
		return 1;
	}
	return 0;
}

int func_665(int iParam0)
{
	return ENTITY::_GET_PED_ANIMAL_TYPE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
}

int func_666(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	if (!func_782(iParam0))
	{
		return 0;
	}
	Var1 = { func_783(iParam0) };
	if (STATS::STAT_ID_GET_INT(&Var1, &uVar0))
	{
		return uVar0;
	}
	return 0;
}

bool func_667(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_784(joaat("PLUCKED"), func_668(iParam0)) };
	return STATS::_STAT_ID_IS_VALID(&Var0);
}

int func_668(int iParam0)
{
	return iParam0;
}

void func_669(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_742(iParam0, &iVar0, &iVar1);
	if (!func_743(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_785(iParam0, 1024))
	{
		return;
	}
	func_744(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

float func_670(vector3 vParam0, vector3 vParam3)
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

bool func_671(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_672(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	vector3 vVar0[24];
	int iVar3;

	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2) && (func_105(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_105(iParam2, iParam3, 1, 1) < 25f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_124(&uLocal_0);
		if (AUDIO::_0xD89504D9D7D5057D(sParam1))
		{
			if (func_786(sParam1))
			{
				return 1;
			}
		}
		else if (func_787(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_673(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_674(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;

	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	if (!func_788(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_789(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_790(iParam0, bParam2);
	iVar2 = 0;
	if (func_791(iParam0, 0, 0) == 0)
	{
		if (func_792(iParam0))
		{
			iVar5 = func_793(iParam0);
			iVar6 = func_794(iVar5);
			iVar7 = func_795(iVar6) + 1;
			func_796(iVar5);
			if (func_797(38))
			{
				func_626(483, 0);
			}
			else
			{
				func_626(482, 0);
			}
			if (iVar7 == func_798(iVar6))
			{
				func_674(func_799(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_700() && func_800(4))
				{
					if (func_700() && (func_801(38) || func_797(38)))
					{
						func_803(38, func_799(iVar6), 0, 0, func_802(), 0, -1, 0);
						func_804(2);
					}
					else
					{
						func_803(38, func_799(iVar6), 0, 0, func_802(), 0, -1, 0);
						func_804(1);
					}
				}
			}
			else if (func_700() && func_800(4))
			{
				if (func_700() && (func_801(38) || func_797(38)))
				{
					func_803(38, 0, 0, 0, func_802(), 0, -1, 0);
					func_804(2);
				}
				else
				{
					func_803(38, 0, 0, 0, func_802(), 0, -1, 0);
					func_804(1);
				}
			}
			if (func_700() && func_800(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_700() && (func_801(38) || func_797(38)))
					{
						func_805(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_805(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_697(iParam0) == joaat("CLOTHING"))
	{
		if ((!func_806(iParam0, 866047851) && !func_806(iParam0, -1979000645)) && !func_806(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_807(iParam0, 8388608) && !func_484(28))
	{
		func_808(28);
	}
	if (!bVar3)
	{
		if (func_806(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_721(iParam0) == -1447088266)
			{
				iVar1 = func_810(func_809(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_161() == -1)
					{
						func_811(iVar1);
					}
					if (func_589(0) && func_403(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_590(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (func_161() == -1)
					{
						func_811(iParam0);
					}
					if (func_589(0) && func_403(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_590(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_697(iParam0) == joaat("WEAPON"))
		{
			if (!func_812(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_697(iParam0) == joaat("AMMO") && func_728(iParam0))
		{
			if (!func_813(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_806(iParam0, 866047851))
		{
			func_814(iParam0);
		}
		else if (func_806(iParam0, 2000026003))
		{
			func_815(iParam0);
		}
		else if (func_806(iParam0, -103750053))
		{
			func_549(func_816(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_549(func_784(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_806(iParam0, -121341956) && !func_806(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_616(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_626(498, 0);
				}
			}
			if (func_806(iParam0, -2017733358) || func_806(iParam0, -1369131378))
			{
				func_817(iParam0);
			}
		}
		else if (func_806(iParam0, -136654233))
		{
			if (func_806(iParam0, -1021472396))
			{
			}
		}
		else if (func_806(iParam0, -1466706512) && func_806(iParam0, 1147021565))
		{
			func_626(484, 0);
		}
		else if (func_806(iParam0, 1147021565) && func_806(iParam0, -524514947))
		{
		}
		else if (func_806(iParam0, 554195525))
		{
		}
		else if (func_806(iParam0, 589988438))
		{
			if (func_818())
			{
				func_538(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_806(iParam0, 787083290) && func_806(iParam0, 949916894))
		{
			func_819(iParam0);
		}
		else if (func_806(iParam0, -1718133314))
		{
			func_820(iParam0);
		}
		else if (func_806(iParam0, -1738650224))
		{
			func_821(iParam0);
		}
		else if (func_806(iParam0, -1112814642) && func_806(iParam0, 949916894))
		{
			func_822(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_806(iParam0, 1841149704))
		{
			func_823();
		}
		else if (func_806(iParam0, 606799272))
		{
			func_824(iParam0, iParam1);
			func_825(iParam0);
		}
		else if (func_806(iParam0, -1112814642) && func_806(iParam0, -1697809989))
		{
			func_826(iParam0, 0, 0, 0);
		}
		else if (func_806(iParam0, -2017733358) || func_806(iParam0, -1369131378))
		{
			func_817(iParam0);
		}
		else if (func_806(iParam0, -1921346699))
		{
			if (func_161() != -1)
			{
				return 0;
			}
			func_827(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_806(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_828(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_674(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_828(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_674(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_828(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_674(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_828(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_674(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_828(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_674(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_828(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_674(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_806(iParam0, -839724752) && func_807(iParam0, 4))
		{
			if (!func_797(42))
			{
				func_829(iParam0);
			}
		}
		else if (func_806(iParam0, 1399091007))
		{
			func_830(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_806(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_674(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				func_808(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_831(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_832(&iVar9, 0))
				{
					func_403(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_161() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_831(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_626(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_833();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_834();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_835();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_836();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_837();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_838(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_839(499813453, 0);
				func_840(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_838(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_839(499813453, 0);
				func_840(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_838(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_839(499813453, 0);
				func_840(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_838(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_839(666607663, 0);
				func_841(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_838(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_839(666607663, 0);
				func_841(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_838(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_839(666607663, 0);
				func_841(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_838(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_839(-220219788, 0);
				func_842(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_838(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_839(-220219788, 0);
				func_842(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_838(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_839(-220219788, 0);
				func_842(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_838(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_839(218622660, 0);
				func_843(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_838(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_839(218622660, 0);
				func_843(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_838(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_839(390004462, 0);
				func_844(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_838(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_839(390004462, 0);
				func_844(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_838(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_839(390004462, 0);
				func_844(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_838(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_839(6410548, 0);
				func_845(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_838(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_839(6410548, 0);
				func_845(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_838(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_839(6410548, 0);
				func_845(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_838(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_839(6410548, 0);
				func_845(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_669(242, func_846(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_669(240, func_846(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_669(241, func_846(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_847(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_847(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_847(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_847(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_847(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_847(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_626(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_626(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_626(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_674(func_848(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_674(func_849(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_484(1))
				{
					func_626(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_626(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_161() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_626(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_850(&iVar10);
		if (!func_851(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_589(0))
		{
			return 1;
		}
		if (func_697(iParam0) == joaat("CLOTHING"))
		{
			func_852(iParam0);
		}
		if (func_806(iParam0, -1979000645))
		{
			func_853(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_589(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_674(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_854(iVar2, 0);
		}
	}
	Var35 = { func_855(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_856(iParam0);
	if (fParam6 > 0f)
	{
		if (func_806(iParam0, -839724752))
		{
			func_857(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_858(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_675(int iParam0)
{
	struct<2> Var0;

	if (func_161() != -1)
	{
		return;
	}
	if (iParam0 > 3000 || iParam0 < 0)
	{
		return;
	}
	else
	{
		Var0 = { func_548(joaat("FAME")) };
		STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
	}
}

int func_676(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_774(iVar0, 2))
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
				func_859(iVar1, iParam1, sParam0, 5, iParam3, fParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_677(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_554(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_685(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	Global_1945938[iVar0 /*18*/].f_9 = fParam1;
	HUD::_UIPROMPT_CONTEXT_SET_SIZE(Global_1945938[iVar0 /*18*/].f_3, fParam1);
}

int func_678(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
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
		if (func_774(iVar0, 2))
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
		func_859(iVar1, iParam1, sParam0, 2, iParam3, fParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216 /* Float: 1f */, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_679(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
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
	if (func_25(vParam2))
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
		if (func_774(iVar0, 2))
		{
			if (func_384(vParam2, Global_1945938[iVar0 /*18*/].f_6, 0.01f, 1) && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
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
		func_859(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

int func_680(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_681(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_554(iParam0))
	{
		return;
	}
	iVar0 = func_685(iParam0);
	func_771(iVar0, bParam1);
}

bool func_682(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_554(iParam0))
	{
		return false;
	}
	iVar0 = func_685(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_683(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_554(iParam0))
	{
		return false;
	}
	iVar0 = func_685(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_684(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_860(iParam0);
	if (bParam3)
	{
		func_861(iParam0, sParam1, iParam2);
	}
}

int func_685(int iParam0)
{
	return iParam0;
}

void func_686(int iParam0)
{
	if (!func_862(iParam0))
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

void func_687(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_490(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_688(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_863())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_490(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_864(iVar0);
			func_865(iVar0, 0, 0);
		}
		func_490(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_549(func_548(joaat("CAREER_CASH")), iVar1);
	}
}

int func_689(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_828(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = Var1.f_1[iVar24];
			if (func_673(iVar25, 0) && func_806(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

int func_690()
{
	return Global_40.f_11095.f_35;
}

void func_691(int iParam0, bool bParam1)
{
	Global_1955569.f_1 = iParam0;
	if (bParam1)
	{
		func_866(bParam1);
	}
}

void func_692(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_693(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_694(int iParam0)
{
	vector3 vVar0;

	if (!func_867(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return true;
	}
	return false;
}

bool func_695(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_867(23, &Var0))
	{
		return false;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

int func_696(int iParam0)
{
	return iParam0;
}

int func_697(int iParam0)
{
	vector3 vVar0;

	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_698()
{
	int iVar0;

	iVar0 = func_540();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return joaat("SHOP_HONOR_LOW");
		case 240:
		case 280:
		case 320:
			return joaat("SHOP_HONOR_HIGH");
		default:
			break;
	}
	return joaat("SHOP_HONOR_AMORAL");
}

bool func_699(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_700()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_701(int iParam0, int iParam1, int iParam2)
{
	if (!func_699(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP1");
			break;
		case 1:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP2");
			break;
		case 2:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP3");
			break;
		case 3:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP4");
			break;
		case 4:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP5");
			break;
		case 5:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_GOLDRUSH");
			break;
		case 6:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MINIGAMES");
			break;
		case 7:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_B_AND_E");
			break;
		case 8:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RCKPT");
			break;
		case 9:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_TO_POOR");
			break;
		case 10:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_HONOR");
			break;
		case 11:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RC");
			break;
		case 12:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BOUNTY");
			break;
		case 13:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_UPGR_W");
			break;
		case 14:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BEAR");
			break;
		case 15:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_ART");
			break;
		case 16:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_COLLECT");
			break;
		default:
			return false;
	}
	return true;
}

void func_702(int iParam0)
{
	int iVar0;

	if (func_161() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_160(func_868(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_868(iVar0), func_366(), 1))
			{
				func_869(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_703(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_704(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 0)
	{
		iParam3 = Global_1415419.f_19[iParam0 /*12*/].f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if (Global_1415419.f_19[iVar0 /*12*/].f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_870() > Global_32074.f_2697.f_6[iVar0 /*6*/].f_5)
					{
						Global_32074.f_2697.f_6[iVar0 /*6*/].f_5 = func_870();
					}
					func_871(&(Global_32074.f_2697.f_6[iVar0 /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_159(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_705(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_592(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_593(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/].f_1++;
	}
}

void func_706(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_97(iParam0, 8192))
	{
		iVar0 = func_593(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/].f_1++;
	}
}

void func_707(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_370(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_17504.f_12[iVar1]), iVar2);
}

void func_708(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_76(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_25(vParam1))
	{
		return;
	}
	if (!func_204(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { Global_17504.f_2084[iVar0 /*5*/] };
		if (func_25(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0 /*5*/].f_3 == iParam0)
		{
			if (func_384(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		Global_17504.f_2084[iVar1 /*5*/] = { vParam1 };
		Global_17504.f_2084[iVar1 /*5*/].f_3 = iParam0;
		Global_17504.f_2084[iVar1 /*5*/].f_4 = Global_1310750[iParam0 /*111*/].f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17504.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				Global_17504.f_2084[iVar0 /*5*/] = { vParam1 };
				Global_17504.f_2084[iVar0 /*5*/].f_3 = iParam0;
				Global_17504.f_2084[iVar0 /*5*/].f_4 = Global_1310750[iParam0 /*111*/].f_62;
			}
			else
			{
				Global_17504.f_2084[iVar0 /*5*/] = { Global_17504.f_2084[iVar0 + 1 /*5*/] };
			}
			iVar0++;
		}
	}
}

void func_709(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_736(iVar0, iParam0);
		iVar0++;
	}
}

int func_710(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_711(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_712(int iParam0)
{
	if (!func_441(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

bool func_713(int iParam0)
{
	return (Global_1310750.f_16074 && iParam0) != 0;
}

bool func_714()
{
	return Global_1894899 & 2 != 0;
}

bool func_715(var uParam0)
{
	return func_33(*uParam0, 1);
}

void func_716(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_872(iParam1))
		{
			func_873(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_874(iParam0, 0, 1);
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
			func_875(iParam0, 0);
			bVar0 = true;
		}
		func_876(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

struct<4> func_717(bool bParam0)
{
	return func_587(joaat("CHARACTER"), func_877(), -1591664384, bParam0);
}

struct<4> func_718(bool bParam0)
{
	int iVar0;

	iVar0 = func_726(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224215))
		{
			Global_1224215 = { func_587(923904168, func_717(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224223))
		{
			Global_1224223 = { func_587(923904168, func_717(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_587(923904168, func_717(bParam0), -740156546, 0);
}

bool func_719(int iParam0, bool bParam1)
{
	if (func_721(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_484(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_720(bool bParam0)
{
	int iVar0;

	iVar0 = func_726(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224219))
		{
			Global_1224219 = { func_587(271701509, func_717(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return func_587(271701509, func_717(bParam0), 12999093, 0);
}

int func_721(int iParam0)
{
	struct<2> Var0;

	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_722(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_721(iParam0);
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

bool func_723(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_726(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_724(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_587(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_726(bParam6), &Var0, 0);
	return uVar4;
}

bool func_725(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_726(0);
	*uParam1 = { func_587(iParam0, func_718(0), iParam3, 0) };
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

int func_726(bool bParam0)
{
	if (func_161() == -1)
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

bool func_727(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_728(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_729(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_730(int iParam0)
{
	if (func_204(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_731(int iParam0)
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

int func_732(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 348;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 313;
		case 1250636944:
			return 259;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 315;
		case 1306158345:
			return 202;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 332;
		case 1703426636:
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
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

bool func_733(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return (Global_1393237.f_11[iParam0 /*30*/].f_10 && iParam1) != 0;
}

void func_734(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 = (Global_1393237.f_11[iParam0 /*30*/].f_10 || iParam1);
}

bool func_735(int iParam0)
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

void func_736(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 - (Global_1310750[iParam0 /*111*/].f_1 && iParam1));
}

bool func_737()
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

int func_738(int iParam0)
{
	if (!func_439(iParam0))
	{
		return -1;
	}
	return func_878(iParam0);
}

int func_739(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

bool func_740(int iParam0, int iParam1)
{
	return false;
}

bool func_741()
{
	return false;
}

void func_742(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_743(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_879(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_880(iParam0))
	{
		return false;
	}
	if (func_881(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_785(iParam0, 1)) || func_882(32768))
	{
		if (!func_785(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_883())
	{
		return false;
	}
	return true;
}

void func_744(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_745(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_726(0), joaat("UPGRADE_HEALTH_TANK_1"), 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_726(0), joaat("UPGRADE_STAMINA_TANK_1"), 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_726(0), joaat("UPGRADE_DEADEYE_TANK_1"), 0);
	}
	return 0;
}

struct<4> func_746(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_747(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_748(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_749(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_750(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("TOAST_RPG_LEVEL_STAMINA");
		case 0:
			return joaat("TOAST_RPG_LEVEL_HEALTH");
		case 2:
			return joaat("TOAST_RPG_LEVEL_DEADEYE");
		default:
			break;
	}
	return 0;
}

int func_751(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_752(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

var func_753(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

bool func_754(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_884(iParam0, iParam1))
		{
			if (!func_3(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_516(uParam2, 0, 0, 1, 0);
				func_96(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_3(iParam1->f_10, 1))
		{
			func_885(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_159(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_755(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_3(iParam4, 32);
		func_633(iParam1, uParam2, 0);
		iVar5 = func_886(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_516(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_3(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_3(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_3(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_3(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_3(iParam4, 8388608) || func_3(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_3(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_3(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_758(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_758(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_3(iParam4, 67108864))
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
				iParam6 = func_887(uParam0);
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
			if (func_3(iParam4, 268435456))
			{
				iVar8 = func_888(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_889(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_758(iParam1, 23))
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
			if (func_3(iParam4, 2) || func_3(iParam4, 16))
			{
				func_757(*uParam0, 1, 1);
			}
			else
			{
				func_757(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_756(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_757(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_758(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_759(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_890(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_760(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_891(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_3(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_761(int iParam0)
{
	if (func_3(iParam0, 4))
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
	if (func_3(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_3(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_762(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_680(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || func_892(Global_35)) || func_893(Global_35)) || func_894(Global_35));
	fVar12 = -1f;
	if (func_148(&(iParam1->f_13)))
	{
		fVar12 = func_127(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_554((uParam4[iVar0 /*17*/])->f_6);
		func_895(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_896(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_897(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_516(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_898(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_633(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_899(iParam1, fParam6, iParam1->f_9))
					{
						func_124(&(iParam1->f_18));
						if (bVar6)
						{
							func_898(uParam4, 0, 0);
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
		func_900(iParam1, fParam2);
	}
	return bVar5;
}

void func_763(var uParam0)
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

void func_764(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_901(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_900(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_765(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_902(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_903(iParam1, 0);
				func_633(iParam1, uParam2, func_758(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_766(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_124(&(iParam1->f_18));
			return false;
		}
		else if (func_148(&(iParam1->f_18)))
		{
			func_146(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_148(&(iParam1->f_18)))
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
	return func_341(&(iParam1->f_18), fParam2);
	return true;
}

void func_767(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_895(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_768(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_769(int* iParam0)
{
	if (func_758(iParam0, 0))
	{
		if (func_904(iParam0))
		{
			func_768(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_770(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_771(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_774(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_772(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_773(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

bool func_774(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

int func_775(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_905(iVar0);
}

int func_776(int iParam0, int iParam1)
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

var func_777(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_548(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

void func_778()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&(Global_1395482.f_20[iVar0 /*3*/]), "", 24);
		StringCopy(&(Global_1395482.f_36[iVar0 /*3*/]), "", 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&(Global_1395482.f_52[iVar0 /*3*/]), "", 24);
		StringCopy(&(Global_1395482.f_62[iVar0 /*3*/]), "", 24);
		iVar0++;
	}
	Global_1395482.f_115 = 0;
	Global_1395482.f_114 = 0;
	Global_1395482.f_72 = 0;
	Global_1395482.f_73 = 0;
	Global_1395482.f_74 = 0;
	Global_1395482.f_75 = 0;
	func_906(Global_1395482.f_1, 8);
	func_906(Global_1395482.f_1, 16);
}

void func_779()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&(Global_1395482.f_95[iVar0 /*6*/]), "", 32);
		Global_1395482.f_95[iVar0 /*6*/].f_4 = 2;
		iVar0++;
	}
	Global_1395482.f_94 = 0;
	func_906(Global_1395482.f_1, 512);
}

void func_780()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&(Global_1395482.f_80[iVar0 /*4*/]), "", 32);
		iVar0++;
	}
	Global_1395482.f_93 = 0;
}

void func_781()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

bool func_782(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

struct<2> func_783(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_784(joaat("SKINNED"), func_668(iParam0)) };
	if (STATS::_STAT_ID_IS_VALID(&Var0))
	{
		Var0 = { func_784(joaat("PLUCKED"), func_668(iParam0)) };
	}
	return Var0;
}

struct<2> func_784(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_785(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_786(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return true;
	}
	return false;
}

bool func_787(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_907(cParam1, cParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_788(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_161() == -1)
	{
		if (func_908(iParam0) && func_909(iParam0))
		{
			func_910(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_789(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_911(iParam0, iParam1);
	Var0 = { func_583(iParam0, 0, 1) };
	iVar5 = func_912(iParam0, &Var0, 0, 0);
	iVar6 = func_913(iParam0, 0);
	if ((iVar5 > 1 && !func_914()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_806(iParam0, -2051813666))
		{
			func_626(583, 1);
		}
		else
		{
			func_626(582, 0);
		}
	}
	if (func_915(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_790(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_916(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496.f_59.f_6 = 1;
			Global_1935496.f_59.f_7 = 0;
			Global_1935496.f_59.f_1 = iParam0;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

int func_791(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_697(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_917(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_918(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_726(bParam2), iParam0, 0);
	return iVar2;
}

bool func_792(int iParam0)
{
	if (func_161() != -1)
	{
		return false;
	}
	return func_793(iParam0) != 0;
}

int func_793(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_919())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_920(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_794(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_795(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_919())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_794(iVar0))
		{
			if (func_828(func_920(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_796(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_284(48);
	func_559(0, -1);
}

bool func_797(int iParam0)
{
	if (func_161() != -1)
	{
		return false;
	}
	return func_616(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_798(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_799(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

bool func_800(int iParam0)
{
	if (func_161() != -1)
	{
		return false;
	}
	return func_616(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_801(int iParam0)
{
	if (func_161() != -1)
	{
		return false;
	}
	if (!func_437(iParam0))
	{
		return false;
	}
	return func_921(Global_1347702[iParam0 /*49*/].f_15);
}

int func_802()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_828(func_922(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_803(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_700() && (func_801(38) || func_797(38)))
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
			if (func_700() && (func_801(39) || func_797(39)))
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
			iVar9 = func_923(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_700() && (func_801(41) || func_797(41)))
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
			if (func_700() && (func_801(49) || func_797(49)))
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
			iVar9 = func_923(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_924(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_925(iParam0, iVar13, iVar14))
	{
	}
	if (func_926(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_927(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_928(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_929(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_930(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_804(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_805(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_700() && (func_801(38) || func_797(38)))
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
			if (func_700() && (func_801(39) || func_797(39)))
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
			if (func_700() && (func_801(49) || func_797(49)))
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
		if (func_700() && (func_801(38) || func_797(38)))
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
			func_753(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_753(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_932(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_931(func_799(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_753(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_753(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_700() && (func_801(39) || func_797(39)))
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
			func_753(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_753(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_700() && (func_801(49) || func_797(49)))
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
			func_753(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_753(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_753(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_753(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_806(int iParam0, int iParam1)
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

bool func_807(int iParam0, int iParam1)
{
	if (!func_673(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

void func_808(int iParam0)
{
	if (!func_618(iParam0))
	{
		return;
	}
	func_933(iParam0);
	func_934(iParam0);
}

int func_809(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_HATCHET"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			iVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			iVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (func_673(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_935(iVar0) || func_402(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_810(int iParam0, bool bParam1)
{
	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_811(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_401(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_812(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_810(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_161() == -1)
		{
			func_811(iVar0);
			if (iParam1 == 1248274121)
			{
				func_936(iVar0);
			}
		}
		if (!func_915(iParam0, &uVar1, 1, 0, 0))
		{
			func_910(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_937(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_403(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_403(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_403(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_52())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_405(iVar0))
				{
					func_403(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_403(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_938(Global_35, 2, 0, 1);
				if ((((func_401(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_484(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_401(iVar7) && func_484(24))
				{
					if (!func_403(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_403(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_403(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_626(480, 1);
	}
	return true;
}

bool func_813(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_728(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_401(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_828(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_669(func_939(iParam0), func_846(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_161() == -1)
		{
			if (func_616(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_626(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_589(0))
	{
		if (func_590(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_851(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_814(int iParam0)
{
	var uVar0;

	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_940()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_941(Global_35, iParam0, &uVar0))
		{
			func_831(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_837();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_837();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_837();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_835();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_833();
			break;
	}
}

void func_815(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_833();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_834();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_835();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_836();
			break;
		case joaat("PROVISION_TRINKET_LION_PAW"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_MOOSE_ANTLER"):
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_OWL_FEATHER"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_837();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_942();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_943();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_816(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_817(int iParam0)
{
	bool bVar0;

	bVar0 = func_806(iParam0, -2017733358);
	if (func_944() < 3)
	{
		if (bVar0)
		{
			if (func_946(func_945(iParam0), iParam0))
			{
				func_669(79, func_846(func_945(iParam0)), 1);
			}
			else
			{
				func_669(78, func_846(func_945(iParam0)), 1);
			}
		}
		else
		{
			func_669(80, func_846(func_947(iParam0)), 1);
		}
	}
}

bool func_818()
{
	if (((((func_948(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_948(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_948(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_948(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_948(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_948(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

void func_819(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_803(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_805(51, 0, 0, 0, 0, -1, 0);
			func_949(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_803(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_805(51, 0, 0, 0, 0, -1, 0);
			func_949(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_803(39, 0, 0, 0, 0, 0, 1, 0);
			func_805(39, 0, 0, 0, 0, -1, 0);
			func_950(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_803(41, 0, 0, 0, 0, 0, 1, 0);
			func_805(41, 0, 0, 0, 0, -1, 0);
			func_951(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_803(49, 0, 0, 0, 0, 0, 1, 0);
			func_805(49, 0, 0, 0, 0, -1, 0);
			func_952(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_803(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_953(1), 0, -1, 0);
			func_954(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_803(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_953(2), 0, -1, 0);
			func_954(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_803(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_953(4), 0, -1, 0);
			func_954(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_803(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_953(8), 0, -1, 0);
			func_954(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_803(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_953(16), 0, -1, 0);
			func_954(16);
			break;
	}
}

void func_820(int iParam0)
{
	if (func_955() == 1)
	{
		if (func_797(39))
		{
			func_626(342, 0);
		}
		else
		{
			func_626(343, 0);
			func_950(1);
		}
	}
	if (func_955() >= 30)
	{
		func_626(344, 0);
	}
	func_803(39, 0, 0, 0, 0, 0, -1, 0);
	func_805(39, 0, 0, func_955(), 30, 1, 0);
}

void func_821(int iParam0)
{
	if (func_956() == 1)
	{
		if (func_797(49))
		{
			func_626(409, 0);
		}
		else
		{
			func_626(410, 0);
			func_952(1);
		}
	}
	if (func_956() >= 10)
	{
		func_626(411, 0);
	}
	func_803(49, 0, 0, 0, 0, 0, -1, 0);
	func_805(49, 0, 0, func_956(), 10, 1, 0);
}

void func_822(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			func_626(437, 0);
			func_626(440, 0);
			func_957(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_803(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_805(51, 0, 0, sVar0, func_923(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_949(1);
			func_958(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_957(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_803(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_805(51, 0, 0, sVar0, func_923(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_949(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_957(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_803(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_805(51, 0, 0, sVar0, func_923(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_949(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_957(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_803(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_805(51, 0, 0, sVar0, func_923(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_949(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			func_626(438, 0);
			func_957(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_803(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_805(51, 0, 0, sVar0, func_923(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_949(32768);
			break;
		default:
			func_626(439, 0);
			break;
	}
}

void func_823()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_824(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_161() == -1)
	{
		if (!func_797(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_626(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_626(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_626(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_626(400, 0);
			}
		}
		else if (func_806(iParam0, 412399755))
		{
			func_959(joaat("EXOTIC_STAGE_01"));
			if (func_960() == 0)
			{
				func_559(0, 10);
				iVar1 = func_961(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_962(iParam0) < func_963(iParam0))
					{
						func_803(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_805(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_797(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_626(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_626(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_626(401, 0);
			}
		}
		else if (func_806(iParam0, 709057512))
		{
			func_959(joaat("EXOTIC_STAGE_02"));
			if (func_960() == 1)
			{
				func_559(0, 10);
				iVar1 = func_961(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_962(iParam0) < func_963(iParam0))
					{
						func_803(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_805(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_797(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_626(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_626(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_626(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_626(398, 0);
			}
		}
		else if (func_806(iParam0, -1478961327))
		{
			func_959(joaat("EXOTIC_STAGE_03"));
			if (func_960() == 2)
			{
				func_559(0, 10);
				iVar1 = func_961(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_964(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_965(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_284(48);
					}
					if (func_962(iParam0) < func_963(iParam0))
					{
						func_803(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_805(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_962(iParam0) < func_963(iParam0))
					{
						func_803(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_805(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_797(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_626(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_626(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_626(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_626(406, 0);
			}
		}
		else if (func_806(iParam0, -1238404098))
		{
			func_959(joaat("EXOTIC_STAGE_04"));
			if (func_960() == 3)
			{
				func_559(0, 10);
				iVar1 = func_961(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_962(iParam0) < func_963(iParam0))
					{
						func_803(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_805(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_797(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_626(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_626(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_626(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_626(403, 0);
			}
		}
		else if (func_806(iParam0, 1160548794))
		{
			func_959(joaat("EXOTIC_STAGE_05"));
			if (func_960() == 4)
			{
				func_559(0, 10);
				iVar1 = func_961(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_962(iParam0) < func_963(iParam0))
					{
						func_803(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_805(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_825(int iParam0)
{
	int iVar0;

	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_964(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_965(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_284(48);
		}
	}
}

void func_826(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_828(func_966(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_967(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_968(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_827(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_161() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_538(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_538(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_538(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_538(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_538(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_538(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_538(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COIN"):
			func_538(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_538(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_538(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_538(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_538(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_538(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_969())
			{
				func_538(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_538(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_538(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_538(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_538(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_538(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_538(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_538(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_538(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_538(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_538(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_538(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_538(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_828(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_673(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_697(iParam0);
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
		if (!func_970(iParam0, 1))
		{
			return false;
		}
	}
	return func_791(iParam0, 0, bParam2) >= iParam1;
}

void func_829(int iParam0)
{
	if (func_797(41))
	{
		func_626(363, 0);
	}
	else
	{
		func_626(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_971(joaat("LEGENDARY_FISH_01"));
			func_972(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_973(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_559(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_971(joaat("LEGENDARY_FISH_02"));
			func_972(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_973(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_559(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_971(joaat("LEGENDARY_FISH_03"));
			func_972(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_973(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_559(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_971(joaat("LEGENDARY_FISH_04"));
			func_972(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_973(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_559(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_971(joaat("LEGENDARY_FISH_05"));
			func_972(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_973(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_559(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_971(joaat("LEGENDARY_FISH_06"));
			func_972(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_973(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_559(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_971(joaat("LEGENDARY_FISH_07"));
			func_972(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_973(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_559(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_971(joaat("LEGENDARY_FISH_08"));
			func_972(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_973(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_559(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_971(joaat("LEGENDARY_FISH_09"));
			func_972(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_973(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_559(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_971(joaat("LEGENDARY_FISH_10"));
			func_972(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_973(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_559(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_971(joaat("LEGENDARY_FISH_11"));
			func_972(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_973(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_559(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_971(joaat("LEGENDARY_FISH_12"));
			func_972(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_973(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_559(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_971(joaat("LEGENDARY_FISH_13"));
			func_972(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_973(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_559(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_971(joaat("LEGENDARY_FISH_14"));
			func_972(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_973(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_830(int iParam0, int iParam1)
{
	var uVar0;

	func_974(iParam0, iParam1, &uVar0);
}

int func_831(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_583(iParam1, 1, 0) };
		iParam3 = func_905(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_975(iParam1, iParam2, func_776(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_976(1, (func_161() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[func_776(iParam3, 1) /*11*/])
			{
				func_977(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_978(32768) && iParam1 != Global_1946804.f_57[func_776(iParam3, 1) /*11*/])
			{
				func_979();
				func_977(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_977(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_980(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_977(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_981(0);
			func_982(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_977(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_832(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;

	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_938(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_938(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_983("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_984(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_985(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_833()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_834()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_835()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_836()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_837()
{
	func_986();
	func_987();
	func_988();
}

void func_838(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	switch (iParam1)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_03"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_04"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_07"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_08"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_09"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_10"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_11"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_12"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_13"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_14"):
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_15"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_17"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_18"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_19"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_20"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_21"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_22"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_23"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_24"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_839(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_753(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_840(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_841(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_842(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_843(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_844(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_845(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_846(int iParam0)
{
	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_847(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_742(iParam0, &iVar0, &iVar1);
	if (!func_743(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_785(iParam0, 1024))
	{
		return;
	}
	func_744(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
}

int func_848()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_919())
	{
		return func_849();
	}
	iVar4 = (func_919() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_919())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_989(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_920(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_849()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_919());
	return func_920(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_850(int iParam0)
{
	switch (*iParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

int func_851(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_583(iParam0, 0, 1) };
	Var5 = { func_587(iParam0, Var0, Var0.f_4, 0) };
	return func_990(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_852(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_161() != -1)
	{
		return;
	}
	switch (func_721(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && func_991(81053684, 0) <= 0)
			{
				func_977(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_977(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_992(iParam0);
			if (func_993(iVar0))
			{
				func_994(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_977(30, iParam0, 0, 0, 0);
			}
			if (func_995() == -2125499975 || func_995() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						func_977(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_995() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_977(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_996(-525676072, 0))
			{
				if (func_997(-525676072, &iVar1))
				{
					func_977(33, iVar1, 0, 0, 0);
				}
			}
			func_977(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_998(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_831(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_808(24);
		if (func_832(&iVar2, 0))
		{
			func_403(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_853(int iParam0)
{
	if (func_806(iParam0, 943695443))
	{
		func_999(0, iParam0);
	}
	else if (func_806(iParam0, -2096528786))
	{
		func_999(1, iParam0);
	}
	else if (func_806(iParam0, -1094167013))
	{
		func_999(2, iParam0);
	}
	else if (func_806(iParam0, 1936654645))
	{
		func_999(3, iParam0);
	}
	else if (func_806(iParam0, 1306489306))
	{
		func_999(4, iParam0);
	}
	else if (func_806(iParam0, 435762317))
	{
		func_999(5, iParam0);
	}
	else if (func_806(iParam0, 1259363210))
	{
		func_999(6, iParam0);
	}
	else if (func_806(iParam0, 881398259))
	{
		func_999(7, iParam0);
	}
	else if (func_806(iParam0, -541549214))
	{
		func_999(8, iParam0);
	}
	else if (func_806(iParam0, 130796156))
	{
		func_999(-1, iParam0);
	}
}

int func_854(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_1000(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_1001(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_855(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_673(iParam0, 0))
	{
		return Var0;
	}
	if (func_806(iParam0, -305066475))
	{
		if (func_161() == -1)
		{
			if (func_806(iParam0, -537818634))
			{
				return func_548(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_548(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_806(iParam0, -537818634))
	{
		return func_548(joaat("MEDICINE_ITEMS"));
	}
	if (func_806(iParam0, 2084895747))
	{
		return func_548(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_856(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_161() == -1)
			{
				if (func_616(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_626(109, 1);
				}
			}
			break;
	}
}

void func_857(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_1003(func_1002(0));
	func_490(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1004(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_858(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_673(iParam0, 0))
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
	if (!func_1005())
	{
		func_1006(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_1007(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1007(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_807(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_697(iParam0);
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
	else if (!func_1008(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	sVar15 = func_1009(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_846(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_806(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_846(iParam0));
	}
	func_490(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_859(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, float fParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_771(iParam0, 1);
	func_772(iParam0, 1);
	func_773(iParam0, 128);
}

void func_860(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_680(1) < iParam0)
	{
		iParam0 = func_680(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_548(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_861(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_490(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

bool func_862(int iParam0)
{
	return func_774(iParam0, 2);
}

bool func_863()
{
	if (func_940())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_864(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1010((Global_40.f_4283.f_325 + iParam0));
}

void func_865(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_863())
	{
		func_490(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_490(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

void func_866(bool bParam0)
{
	func_1011(bParam0);
	Global_1955569.f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_HIDE_HUD_COMPONENT(121713391);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(121713391);
	}
}

bool func_867(int iParam0, var uParam1)
{
	if (!func_1012(iParam0))
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

int func_868(int iParam0)
{
	if (!func_1013(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_869(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1014(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_870()
{
	return Global_1899515;
}

void func_871(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1015(*iParam0);
	iVar1 = func_1016(*iParam0);
	iVar2 = func_1017(*iParam0);
	iVar3 = func_426(*iParam0);
	iVar4 = func_1018(*iParam0);
	iVar5 = func_1019(*iParam0);
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
	iVar6 = func_1020(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1020(iVar1, iVar0);
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
	func_1021(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_872(int iParam0)
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

void func_873(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1022(iParam0, iParam1))
		{
			if (func_1023(iParam0, iParam1))
			{
				if (func_1024(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1025(iParam0);
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

void func_874(int iParam0, int iParam1, bool bParam2)
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

void func_875(int iParam0, bool bParam1)
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

void func_876(int iParam0, int iParam1)
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

struct<4> func_877()
{
	struct<4> Var0;

	return Var0;
}

int func_878(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_1026(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_879(int iParam0, int iParam1)
{
	if (func_161() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_880(int iParam0)
{
	if (func_161() != -1)
	{
		if (func_785(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_785(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_881(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_785(iParam0, 65536) && !func_785(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_785(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_785(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_882(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_883()
{
	return Global_1905944.f_5694;
}

bool func_884(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_1027((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_885(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_901(uParam0[iVar0 /*17*/]))
		{
			func_644(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_886(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_1028(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_554((uParam2[iVar0 /*17*/])->f_6))
		{
			func_644(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_887(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_355(*uParam0);
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

int func_888(var uParam0, int iParam1)
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

void func_889(int* iParam0, int* iParam1)
{
	if (!func_758(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_644(iParam1, 19);
			func_903(iParam0, 23);
			func_1029(iParam1, 2);
		}
	}
}

bool func_890(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_1030(16))
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
					func_1031(16);
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

void func_891(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1028(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

bool func_892(int iParam0)
{
	return (func_1032(iParam0, 4) || func_1032(iParam0, 5));
}

int func_893(int iParam0)
{
	return func_1032(iParam0, 7);
}

int func_894(int iParam0)
{
	return func_1032(iParam0, 6);
}

void func_895(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_901(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_1028(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_896(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1033(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_646(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_641(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_641(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_1034(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_897(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_683(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_1035(iParam1, 1))
	{
		func_1036(iParam1, 1);
		return true;
	}
	return false;
}

void func_898(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_500(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_899(int* iParam0, float fParam1, bool bParam2)
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

void func_900(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_901(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_902(int iParam0)
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

void func_903(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_904(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

int func_905(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_1037(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_906(int iParam0, int iParam1)
{
	if (!func_348(iParam0))
	{
		return;
	}
	if (func_349(iParam0, iParam1))
	{
		Global_1395482.f_2[iParam0] = (Global_1395482.f_2[iParam0] - (Global_1395482.f_2[iParam0] && iParam1));
	}
}

void func_907(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*cParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*cParam3)[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&cParam0, (*cParam3)[iVar0 /*4*/], &((cParam3[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

bool func_908(int iParam0)
{
	return func_697(iParam0) == joaat("WEAPON");
}

bool func_909(int iParam0)
{
	var uVar0;

	if (func_161() != -1)
	{
		return false;
	}
	if (func_807(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_915(iParam0, &uVar0, 1, 0, 0);
	}
	return func_828(iParam0, 1, 0);
}

void func_910(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_697(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_810(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_402(iVar0))
	{
		if (func_161() == -1)
		{
			func_811(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_791(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_858(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_911(int iParam0, int iParam1)
{
	int iVar0;

	if (func_806(iParam0, 58855631))
	{
		func_1038(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_912(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	if (!func_589(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_726(bParam3), iParam0);
}

int func_913(int iParam0, bool bParam1)
{
	if (func_728(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_726(bParam1), iParam0, 0);
}

bool func_914()
{
	if (func_161() != -1)
	{
		return false;
	}
	if (!func_700())
	{
		return false;
	}
	if (!func_616(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_616(Global_1835011[2 /*74*/].f_1, 1) && func_616(Global_1347702[120 /*49*/].f_15, 1)) && !func_616(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_616(Global_1835011[37 /*74*/].f_1, 1) && !func_616(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_616(Global_1835011[57 /*74*/].f_1, 1) && !func_616(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_616(Global_1835011[26 /*74*/].f_1, 1) && !func_616(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_616(Global_1835011[62 /*74*/].f_1, 1) && func_616(Global_1835011[63 /*74*/].f_1, 1)) && !func_616(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_616(Global_1835011[75 /*74*/].f_1, 1) && !func_616(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_616(Global_1835011[76 /*74*/].f_1, 1) && !func_616(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_616(Global_1835011[40 /*74*/].f_1, 1) && func_616(Global_1835011[41 /*74*/].f_1, 1)) && !func_616(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_616(Global_1835011[62 /*74*/].f_1, 1) && func_616(Global_1835011[63 /*74*/].f_1, 1)) && !func_616(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_616(Global_1835011[65 /*74*/].f_1, 1) && func_616(Global_1835011[66 /*74*/].f_1, 1)) && !func_616(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_915(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_1039(&iParam0);
	if (!func_673(iParam0, 0))
	{
		return false;
	}
	if (!func_589(0))
	{
		bParam3 = true;
	}
	if (func_908(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { func_718(0) };
			Var4.f_9 = -1591664384;
			if (!func_585(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (func_586(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (func_719(iParam0, 1))
			{
				if (!func_585(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (func_586(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_1040(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_912(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_724(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_726(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_916(int iParam0, int iParam1)
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

int func_917(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_673(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_697(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_806(iParam0, 1399091007))
	{
		func_974(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_918(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1041(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1042(&Var0, func_718(0));
	}
	if (!func_1043(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_985(iVar14);
	return uVar15;
}

int func_919()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_920(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

bool func_921(int iParam0)
{
	int iVar0;

	iVar0 = func_738(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_922(int iParam0)
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

int func_923(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_867(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_924(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_802() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1044(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1045(), 12);
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
			else if (func_955() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1046(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_955(), 30);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1047(), 13);
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
			else if (func_956() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1048(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_956(), 10);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_923(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_925(int iParam0, int iParam1, int iParam2)
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

bool func_926(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_927(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return true;
}

bool func_928(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_1049(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_828(iVar2, 1, 0) || func_1051(func_1050(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_931(func_1049(iVar0))), func_931(func_1049(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_955() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1052(iVar0)), func_1052(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1046() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1052(iVar0)), func_1052(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1052(iVar0)), func_1052(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_966(iParam3, func_1053(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_962(iVar2) - iParam7) >= func_923(iParam3, func_1054(iVar0));
				}
				else
				{
					bVar1 = func_962(iVar2) >= func_923(iParam3, func_1054(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_962(iVar2) + iParam7) >= func_923(iParam3, func_1054(iVar0));
			}
			else
			{
				bVar1 = func_962(iVar2) >= func_923(iParam3, func_1054(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1055(iVar2)), func_1055(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1056(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1057(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1057(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_956() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1058(iVar0)), func_1058(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1048() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1058(iVar0)), func_1058(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1058(iVar0)), func_1058(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_966(iParam3, func_1053(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_962(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1059(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1059(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1060(iVar2)), func_1060(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_929(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1047() >= 13)
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

bool func_930(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_439(func_1061(0)) && ((func_1062(0) == 1 || func_1062(0) == 8) || func_1062(0) == 6))
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

char* func_931(int iParam0)
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

var func_932(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_933(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_934(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1063(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_1064(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1064(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1064(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_1065(1);
			break;
		case 34:
			func_1066(1);
			break;
		case 35:
			func_1067(1);
			break;
		case 36:
			break;
		case 37:
			func_1068(0);
			break;
		case 38:
			func_1069(0);
			break;
		case 39:
			func_1070(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && func_700()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_932("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_626(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_700()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_932("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_626(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_700()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_932("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_626(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_700()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_932("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_626(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_161() == -1)
			{
				if (!func_998(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_1071(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_52())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_828(iVar0, 1, 0))
					{
						func_851(iVar0, 1, 752097756);
					}
					func_831(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_161() == -1)
			{
				if (!func_828(1013902307, 1, 0))
				{
					func_851(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_161() == -1)
			{
				if (!func_828(1013902307, 1, 0))
				{
					func_851(1013902307, 1, 752097756);
				}
				if (!func_828(142640135, 1, 0))
				{
					func_851(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_161() == -1)
			{
				if (!func_828(786809402, 1, 0))
				{
					func_851(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_161() == -1)
			{
				if (!func_828(786809402, 1, 0))
				{
					func_851(786809402, 1, 752097756);
				}
				if (!func_828(-518019409, 1, 0))
				{
					func_851(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1072();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

bool func_935(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return true;
	}
	return false;
}

void func_936(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		return;
	}
	if (WEAPON::_IS_WEAPON_BOW(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_IS_WEAPON_PISTOL(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_168();
	func_871(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_937(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1073(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_ARROW")) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

int func_938(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_939(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_484(50))
			{
				if (!func_484(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_484(51))
			{
				if (!func_484(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_940()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_941(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_673(iParam1, 0))
	{
		return false;
	}
	if (func_697(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_161() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_721(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_1074(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_806(iParam1, 866047851))
	{
		iVar5 = func_776(iVar4, 1);
		if (func_1075(&(Global_1946804.f_1497)) >= 2 && Global_1946804.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return false;
			}
			iVar5 = 10;
			iVar3 = func_721(Global_1946804.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] != Global_1946804.f_57[iVar5 /*11*/] && func_806(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return false;
			}
			break;
		case -1505978566:
			if (func_652(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
				iVar10 = func_1076(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1076(Global_1946804.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_721(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && func_806(Global_1946804.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && func_1077(Global_1946804.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
						return false;
					}
					if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_942()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_943()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xFECA17CF3343694B(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), (1f - fVar1));
}

int func_944()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_828(func_1078(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_945(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BRACELET_GOLD"):
		case joaat("PROVISION_CC_VINTAGE_HANDCUFFS"):
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"):
			return joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH");
		case joaat("PROVISION_BEAR_LEGENDARY_CLAW"):
		case joaat("PROVISION_BRACELET_SILVER"):
		case joaat("PROVISION_RC_QUARTZ_CHUNK"):
			return joaat("PROVISION_TALISMAN_BEAR_CLAW");
		case joaat("PROVISION_RF_WOOD_COBALT"):
		case joaat("PROVISION_EARRING_GOLD"):
		case joaat("PROVISION_BOAR_TUSK_LEGENDARY"):
			return joaat("PROVISION_TALISMAN_BOAR_TUSK");
		case joaat("PROVISION_BUFFALO_HORN_LEGENDARY"):
		case joaat("PROVISION_EARRING_SILVER"):
		case joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"):
			return joaat("PROVISION_TALISMAN_BUFFALO_HORN");
		case joaat("PROVISION_OLD_BRASS_COMPASS"):
			return joaat("PROVISION_TALISMAN_RAVEN_CLAW");
	}
	return 0;
}

bool func_946(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			if (iParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				iVar0 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
			}
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			if (iParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				iVar0 = joaat("PROVISION_RC_QUARTZ_CHUNK");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RC_QUARTZ_CHUNK"))
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_RC_QUARTZ_CHUNK");
			}
			break;
		case joaat("PROVISION_TALISMAN_BOAR_TUSK"):
			if (iParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RF_WOOD_COBALT");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_RF_WOOD_COBALT"))
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_RF_WOOD_COBALT");
			}
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			if (iParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
			}
			break;
	}
	if (func_828(iVar0, 1, 0) && func_828(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_947(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BEAVER_TOOTH_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BEAVER_TOOTH");
		case joaat("PROVISION_BISON_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BISON_HORN");
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BUCK_ANTLER");
		case joaat("PROVISION_COUGAR_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COUGAR_FANG");
		case joaat("PROVISION_COYOTE_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COYOTE_FANG");
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_ELK_ANTLER");
		case joaat("PROVISION_FOX_CLAW_LEGENDARY"):
			return joaat("PROVISION_TRINKET_FOX_CLAW");
		case joaat("PROVISION_LIONS_PAW"):
			return joaat("PROVISION_TRINKET_LION_PAW");
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_MOOSE_ANTLER");
		case joaat("PROVISION_PANTHER_EYE_LEGENDARY"):
			return joaat("PROVISION_TRINKET_PANTHER_EYE");
		case joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_PRONGHORN_ANTLER");
		case joaat("PROVISION_RAM_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_RAM_HORN");
		case joaat("PROVISION_WOLF_HEART_LEGENDARY"):
			return joaat("PROVISION_TRINKET_WOLF_HEART");
		default:
			break;
	}
	return 0;
}

bool func_948(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1079(iParam0);
	if (iVar0 != -15)
	{
		func_871(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_1080(iVar0, 1);
	}
	return false;
}

void func_949(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_950(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_951(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_952(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

char* func_953(int iParam0)
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
	switch (iParam0)
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
	iVar1 = func_962(iVar9);
	iVar2 = func_962(iVar10);
	iVar3 = func_962(iVar11);
	iVar5 = func_963(iVar9);
	iVar6 = func_963(iVar10);
	iVar7 = func_963(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_962(iVar12);
		iVar8 = func_963(iVar12);
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
	if (iParam0 != 2)
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

void func_954(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_955()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1081(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_956()
{
	return COLLECTION::_0x5461C821D00FE15A(joaat("ROCK_CARVINGS"), 0);
}

bool func_957(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1059(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1059(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1059(iVar0))
		{
			*sParam2++;
		}
		if (func_1059(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_1059(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1059(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1059(iVar0))
		{
			*sParam2++;
		}
		if (func_1059(iVar1))
		{
			*sParam2++;
		}
		if (func_1059(iVar0) && func_1059(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_1059(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1059(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1059(iVar0))
		{
			*sParam2++;
		}
		if (func_1059(iVar1))
		{
			*sParam2++;
		}
		if (func_1059(iVar2))
		{
			*sParam2++;
		}
		if ((func_1059(iVar0) && func_1059(iVar1)) && func_1059(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1059(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1059(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1059(iVar0))
		{
			*sParam2++;
		}
		if (func_1059(iVar1))
		{
			*sParam2++;
		}
		if (func_1059(iVar2))
		{
			*sParam2++;
		}
		if (func_1059(iVar3))
		{
			*sParam2++;
		}
		if (((func_1059(iVar0) && func_1059(iVar1)) && func_1059(iVar2)) && func_1059(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_958(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1082(1497516462);
			func_1083(2016141805);
			func_1083(1010885152);
			func_1083(-502324015);
			break;
		case 2016141805:
			func_1083(1497516462);
			func_1082(2016141805);
			func_1083(1010885152);
			func_1083(-502324015);
			break;
		case 1010885152:
			func_1083(1497516462);
			func_1083(2016141805);
			func_1082(1010885152);
			func_1083(-502324015);
			break;
		case -502324015:
			func_1083(1497516462);
			func_1083(2016141805);
			func_1083(1010885152);
			func_1082(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1083(-538889627);
			func_1083(-538880323);
			func_1083(-1056767524);
			func_1082(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1084();
			func_1082(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_1085();
			func_1082(iParam0);
			break;
		case 2019386373:
			func_1083(-664252410);
			func_1083(2109952320);
			func_1082(2019386373);
			break;
		case -664252410:
			func_1083(2019386373);
			func_1083(2109952320);
			func_1082(-664252410);
			break;
		case 2109952320:
			func_1083(2019386373);
			func_1083(-664252410);
			func_1082(2109952320);
			break;
		case -1674179981:
			func_1083(-1835851517);
			func_1083(-1838352012);
			func_1082(-1674179981);
			break;
		case -1835851517:
			func_1083(-1674179981);
			func_1083(-1838352012);
			func_1082(-1835851517);
			break;
		case -1838352012:
			func_1083(-1674179981);
			func_1083(-1835851517);
			func_1082(-1838352012);
			break;
		case -1717960576:
			func_1083(210001842);
			func_1082(-1717960576);
			break;
		case 210001842:
			func_1083(-1717960576);
			func_1082(210001842);
			break;
		case -150493654:
			func_1083(-1271608261);
			func_1083(1846061697);
			func_1083(-1145519186);
			func_1082(-150493654);
			break;
		case -1271608261:
			func_1083(-150493654);
			func_1083(1846061697);
			func_1083(-1145519186);
			func_1082(-1271608261);
			break;
		case 1846061697:
			func_1083(-150493654);
			func_1083(-1271608261);
			func_1083(-1145519186);
			func_1082(1846061697);
			break;
		case -1145519186:
			func_1083(-150493654);
			func_1083(-1271608261);
			func_1083(1846061697);
			func_1082(-1145519186);
			break;
		case 1766284049:
			func_1083(280705402);
			func_1083(1926308480);
			func_1082(1766284049);
			break;
		case 280705402:
			func_1083(1766284049);
			func_1083(1926308480);
			func_1082(280705402);
			break;
		case 1926308480:
			func_1083(1766284049);
			func_1083(280705402);
			func_1082(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1083(439465264);
				func_1082(1609506757);
			}
			else
			{
				func_1083(1609506757);
				func_1083(439465264);
			}
			break;
		case 439465264:
			if (func_595(1609506757))
			{
				if (bParam1)
				{
					func_1082(439465264);
				}
				else
				{
					func_1083(439465264);
				}
			}
			break;
		case 1822001510:
			func_1083(-1612662716);
			func_1082(1822001510);
			break;
		case -1612662716:
			func_1083(1822001510);
			func_1082(-1612662716);
			break;
		case 1306158345:
			func_1083(1952610440);
			func_1083(-223469678);
			func_1083(-404698347);
			func_1083(1517904467);
			func_1082(1306158345);
			break;
		case 1952610440:
			func_1083(1306158345);
			func_1083(-223469678);
			func_1083(-404698347);
			func_1083(1517904467);
			func_1082(1952610440);
			break;
		case -223469678:
			func_1083(1306158345);
			func_1083(1952610440);
			func_1083(-404698347);
			func_1083(1517904467);
			func_1082(-223469678);
			break;
		case -404698347:
			func_1083(1306158345);
			func_1083(1952610440);
			func_1083(-223469678);
			func_1083(1517904467);
			func_1082(-404698347);
			break;
		case 1517904467:
			func_1083(1306158345);
			func_1083(1952610440);
			func_1083(-223469678);
			func_1083(-404698347);
			func_1082(1517904467);
			break;
		case 1376646519:
			func_1083(931649776);
			func_1083(-434590080);
			func_1083(1743048395);
			func_1083(449774763);
			func_1082(1376646519);
			break;
		case 931649776:
			func_1083(1376646519);
			func_1083(-434590080);
			func_1083(1743048395);
			func_1083(449774763);
			func_1082(931649776);
			break;
		case -434590080:
			func_1083(1376646519);
			func_1083(931649776);
			func_1083(1743048395);
			func_1083(449774763);
			func_1082(-434590080);
			break;
		case 1743048395:
			func_1083(1376646519);
			func_1083(931649776);
			func_1083(-434590080);
			func_1083(449774763);
			func_1082(1743048395);
			break;
		case 449774763:
			func_1083(1376646519);
			func_1083(931649776);
			func_1083(-434590080);
			func_1083(1743048395);
			func_1082(449774763);
			break;
		case -1414537028:
			func_1083(38162571);
			func_1083(1350391819);
			func_1083(54073871);
			func_1082(-1414537028);
			break;
		case 38162571:
			func_1083(-1414537028);
			func_1083(1350391819);
			func_1083(54073871);
			func_1082(38162571);
			break;
		case 1350391819:
			func_1083(-1414537028);
			func_1083(38162571);
			func_1083(54073871);
			func_1082(1350391819);
			break;
		case 54073871:
			func_1083(-1414537028);
			func_1083(38162571);
			func_1083(1350391819);
			func_1082(54073871);
			break;
		case 198200492:
			func_1082(198200492);
			func_1083(-1124061431);
			func_1083(52706132);
			func_1083(-259123672);
			break;
		case -1124061431:
			func_1083(198200492);
			func_1082(-1124061431);
			func_1083(52706132);
			func_1083(-259123672);
			break;
		case 52706132:
			func_1083(198200492);
			func_1083(-1124061431);
			func_1082(52706132);
			func_1083(-259123672);
			break;
		case -259123672:
			func_1083(198200492);
			func_1083(-1124061431);
			func_1083(52706132);
			func_1082(-259123672);
			break;
		case -919512195:
			func_1082(-919512195);
			func_1083(-1925798111);
			func_1083(420709909);
			func_1083(1703426636);
			break;
		case -1925798111:
			func_1082(-1925798111);
			func_1083(-919512195);
			func_1083(420709909);
			func_1083(1703426636);
			break;
		case 420709909:
			func_1082(420709909);
			func_1083(-919512195);
			func_1083(-1925798111);
			func_1083(1703426636);
			break;
		case 1703426636:
			func_1082(1703426636);
			func_1083(-919512195);
			func_1083(-1925798111);
			func_1083(420709909);
			break;
		case -1223121209:
			func_1082(-1223121209);
			func_1083(630808005);
			break;
		case 630808005:
			func_1082(630808005);
			func_1083(-1223121209);
			break;
		case 1453909576:
			func_1082(1453909576);
			func_1083(1643531967);
			break;
		case 1643531967:
			func_1082(1643531967);
			func_1083(1453909576);
			break;
		case 0:
			func_1082(0);
			func_1083(473295046);
			func_1083(-1738165526);
			break;
		case 473295046:
			func_1082(473295046);
			func_1083(0);
			func_1083(-1738165526);
			break;
		case -1738165526:
			func_1082(-1738165526);
			func_1083(0);
			func_1083(473295046);
			break;
		case 932909855:
			func_1082(932909855);
			func_1083(2051822093);
			break;
		case 2051822093:
			func_1082(2051822093);
			func_1083(932909855);
			break;
		case 405586984:
			func_1082(405586984);
			func_1083(1509509592);
			func_1083(-959357075);
			func_1083(-1311865656);
			break;
		case 1509509592:
			func_1082(1509509592);
			func_1083(405586984);
			func_1083(-959357075);
			func_1083(-1311865656);
			break;
		case -959357075:
			func_1082(-959357075);
			func_1083(1509509592);
			func_1083(405586984);
			func_1083(-1311865656);
			break;
		case -1311865656:
			func_1082(-1311865656);
			func_1083(1509509592);
			func_1083(-959357075);
			func_1083(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1082(-524145696);
			}
			else
			{
				func_1083(-524145696);
			}
			func_1083(1626481264);
			func_1083(282809459);
			break;
		case 282809459:
			func_1082(282809459);
			func_1083(1626481264);
			func_1083(-524145696);
			break;
		case 1626481264:
			func_1082(1626481264);
			func_1083(-524145696);
			func_1083(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1082(885203519);
			}
			else
			{
				func_1083(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1082(-1080627546);
			}
			else
			{
				func_1083(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_595(iParam0))
				{
					func_1082(iParam0);
				}
			}
			else if (func_595(iParam0))
			{
				func_1083(iParam0);
			}
			break;
	}
}

void func_959(int iParam0)
{
	if (!func_1086(iParam0))
	{
		func_1088(func_1087(iParam0));
	}
}

int func_960()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1086(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_961(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_962(iVar9);
	iVar2 = func_962(iVar10);
	iVar3 = func_962(iVar11);
	iVar5 = func_963(iVar9);
	iVar6 = func_963(iVar10);
	iVar7 = func_963(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_962(iVar12);
		iVar8 = func_963(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
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

int func_962(int iParam0)
{
	int iVar0;

	if (func_828(iParam0, 1, 0))
	{
		iVar0 = func_791(iParam0, 0, 0);
	}
	return iVar0;
}

int func_963(int iParam0)
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

int func_964(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_965(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_966(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_867(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_967(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_966(iParam1, 5) || iParam0 == func_966(iParam1, 6)) || iParam0 == func_966(iParam1, 7)) || iParam0 == func_966(iParam1, 8)) || iParam0 == func_966(iParam1, 9))
	{
		func_957(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_803(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_805(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_968(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_966(iParam1, 5) || iParam0 == func_966(iParam1, 6)) || iParam0 == func_966(iParam1, 7)) || iParam0 == func_966(iParam1, 8)) || iParam0 == func_966(iParam1, 9))
	{
		if (func_957(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_803(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_805(51, 0, 0, iVar0, func_923(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_803(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_805(51, 0, 0, iVar0, func_923(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_969()
{
	if (func_921(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

bool func_970(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_673(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_917(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_983("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_984(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_401(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_985(iVar1);
				return true;
			}
			iVar3++;
		}
		func_985(iVar1);
	}
	return false;
}

void func_971(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_972(int iParam0)
{
	if (!func_1089(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_973(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_974(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*iParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

bool func_975(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_1090();
	if (iParam2 == 39)
	{
		Var0 = { func_583(iParam0, 1, 0) };
		iParam2 = func_776(func_905(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_806(iParam0, 866047851) && func_1075(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_978(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		func_1091(func_1037(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1092(iParam2);
	func_1093(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_1094(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_1094(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_1095(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = func_1096(iParam0, iParam2, iParam1, func_161() != -1);
	if (bParam4)
	{
		func_1097(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		func_1097(&(Global_1946804.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804.f_2589)
		{
			if (Global_1946804.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946804.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_1098(func_1037(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_976(bool bParam0, bool bParam1, bool bParam2)
{
	func_1099(&(Global_1946804.f_2589), bParam0, bParam1, bParam2);
}

void func_977(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_1100(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1101(Var0);
}

bool func_978(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_979()
{
	func_1102(&(Global_1946804.f_2776));
	func_1103(32768);
	func_1098(1108822547, 8, 6);
}

int func_980(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_776(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/] || Global_1946804.f_1378.f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_981(int iParam0)
{
	struct<4> Var0;

	if (func_1104(iParam0, 4096))
	{
		Global_1946804.f_858++;
	}
	if (Global_1946804.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1105(Var0);
}

void func_982(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1105(Var0);
}

bool func_983(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_726(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_984(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_985(int iParam0)
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

float func_986()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1106())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1107(2);
	}
	if (Global_1347477.f_119)
	{
		return func_1107(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1108();
	fVar2 = func_1109();
	fVar3 = func_1110();
	fVar4 = func_1111();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1112()));
	fVar7 = (func_1107(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1113(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1114(3, fVar9, fVar9 > 100f);
	return func_1115(fVar7, -100f, 100f);
}

float func_987()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1106())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1107(1);
	}
	if (Global_1347477.f_119)
	{
		return func_1107(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1108();
	fVar2 = func_1109();
	fVar3 = func_1110();
	fVar4 = func_1111();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1112()));
	fVar7 = (func_1107(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1113(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1114(2, fVar9, fVar9 > 100f);
	return func_1115(fVar7, -100f, 100f);
}

float func_988()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1106())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1107(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1116())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1117())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return func_1107(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1108();
	fVar2 = func_1109();
	fVar3 = func_1110();
	fVar4 = func_1111();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1112()));
	fVar7 = (func_1107(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1113(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1114(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1107(0);
	}
	return func_1115(fVar7, -100f, 100f);
}

bool func_989(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_990(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_673(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_915(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_589(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_726(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_991(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804.f_2657.f_21;
		case 81053684:
			return Global_1946804.f_2657.f_23;
		case -525676072:
			return Global_1946804.f_2657.f_22;
		case -1719060085:
			return Global_1946804.f_2657.f_24;
		case -413129408:
			return Global_1946804.f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804.f_2657.f_20;
			}
			else
			{
				return func_1118();
			}
			break;
	}
	return 0;
}

int func_992(int iParam0)
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

bool func_993(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_994(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_993(iParam0))
	{
		return;
	}
	if (func_1119(iParam0))
	{
		return;
	}
	if (!func_1120(iParam0))
	{
		func_1121(iParam0, 1, 0);
	}
	iVar0 = func_1122(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1123(iParam0, 512))
		{
			func_977(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1124() && !bParam1) && !func_239(0, 0, 1))
	{
		func_539(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1125(iParam0, 6);
	if (bParam2)
	{
		if (!func_239(0, 0, 1))
		{
			func_559(1, 4);
		}
	}
}

int func_995()
{
	return Global_1946804.f_1;
}

bool func_996(int iParam0, bool bParam1)
{
	return func_991(iParam0, 0) < func_1126(iParam0, bParam1);
}

bool func_997(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_721(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_998(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946804.f_1497.f_1[func_776(iParam0, 1) /*3*/] != Global_1946804.f_57[func_776(iParam0, 1) /*11*/];
}

void func_999(int iParam0, int iParam1)
{
	if (func_806(iParam1, 130796156))
	{
		func_1127(iParam1, 0);
	}
	else if (func_806(iParam1, 930141731))
	{
		func_1127(iParam1, 1);
		func_1128(iParam0);
	}
}

void func_1000(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == joaat("LOOTER_PED_IS_MALE") && uParam0->f_1[iVar0] == joaat("LOOTER_PED_IS_FEMALE")) || (iParam1 == joaat("LOOTER_PED_IS_FEMALE") && uParam0->f_1[iVar0] == joaat("LOOTER_PED_IS_MALE"))) || (iParam1 == joaat("LOOT_TYPE_NORMAL") && uParam0->f_1[iVar0] == joaat("LOOT_TYPE_SKINNING"))) || (iParam1 == joaat("LOOT_TYPE_SKINNING") && uParam0->f_1[iVar0] == joaat("LOOT_TYPE_NORMAL")))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_1001(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_1129(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1130(uParam2, iParam0, Var1);
	return 1;
}

int func_1002(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_1003(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_1004(int iParam0)
{
	var uVar0;

	if (!func_1131(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

bool func_1005()
{
	return !Global_1911774;
}

void func_1006(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = iParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;
	if (Global_1911774.f_3 < 20)
	{
		Global_1911774.f_3++;
	}
}

char* func_1007(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1008(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1009(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_1010(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_548(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_1011(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

bool func_1012(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_1013(int iParam0)
{
	return iParam0 > -1;
}

bool func_1014(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_1015(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_661(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1016(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1017(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1018(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1019(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1020(int iParam0, int iParam1)
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

void func_1021(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1132(iParam0, iParam6);
	func_1133(iParam0, iParam5);
	func_1134(iParam0, iParam4);
	func_1135(iParam0, iParam3);
	func_1136(iParam0, iParam2);
	func_1137(iParam0, iParam1);
}

bool func_1022(int iParam0, int iParam1)
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

bool func_1023(int iParam0, int iParam1)
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

bool func_1024(int iParam0, int iParam1)
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
	if (!func_1022(iParam0, iVar0))
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

void func_1025(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_1026(int iParam0)
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

int func_1027(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1028(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_554(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_536(&(iParam1->f_6), 0, 1);
	}
	if (!func_554(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_901(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_676(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_554(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1034(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1138(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_1139(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_639(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_1138(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_641(iParam1->f_6, 0, 1);
				}
				else
				{
					func_641(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_1029(int* iParam0, int iParam1)
{
	if (!func_643(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_644(iParam0, 14);
		}
	}
}

bool func_1030(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_1031(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_1032(int iParam0, int iParam1)
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

bool func_1033(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_1034(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_554(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_685(iParam0);
	func_1138(iParam0, 18, 0, 1);
	func_1138(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_1035(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_554(iParam0))
	{
		return false;
	}
	iVar0 = func_685(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_1036(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_554(iParam0))
	{
		return;
	}
	iVar0 = func_685(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945938[iVar0 /*18*/].f_3);
}

int func_1037(int iParam0, int iParam1)
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

int func_1038(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_673(iParam0, 0))
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

int func_1039(int iParam0)
{
	if (!func_673(*iParam0, 0))
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

bool func_1040(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_673(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_583(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_584((386 + iVar29), 1);
		if (func_585(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_586(iParam0, &Var6, iVar5);
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

struct<14> func_1041(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1042(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1043(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_726(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1044()
{
	return func_1140(Global_40.f_12019);
}

int func_1045()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_922(iVar1);
		if (func_828(iVar2, 1, 0) || func_1051(func_1050(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1046()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1141(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1047()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1056(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1048()
{
	return COLLECTION::_0x3A65F4844913A047(joaat("ROCK_CARVINGS"), 0);
}

int func_1049(int iParam0)
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

int func_1050(int iParam0)
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

bool func_1051(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1052(int iParam0)
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

int func_1053(int iParam0)
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

int func_1054(int iParam0)
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

char* func_1055(int iParam0)
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

bool func_1056(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_1057(int iParam0)
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

char* func_1058(int iParam0)
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

bool func_1059(int iParam0)
{
	if (func_1142(iParam0) && func_828(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1143(iParam0) && func_1144(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1060(int iParam0)
{
	if (!func_673(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_846(iParam0));
}

int func_1061(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_1062(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_1063(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_1064(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569.f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1955569.f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1955569.f_5.f_1, iParam0);
		if (iVar0 == Global_1955569.f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569.f_5.f_1, iParam0, "pause_info_panel_list", Global_1955569.f_5.f_2[iParam0 /*36*/]);
}

void func_1065(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

void func_1066(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

void func_1067(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

void func_1068(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_HIDE_HUD_COMPONENT(iVar0);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(iVar0);
	}
}

void func_1069(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_1070(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

int func_1071(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return Global_1946804.f_1497.f_1[func_776(iParam0, 1) /*3*/];
}

void func_1072()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1145();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_811(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_851(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_811(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_851(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

bool func_1073(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

int func_1074(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_583(iParam0, 1, 0) };
	return func_905(Var0.f_4);
}

int func_1075(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_806(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_806(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_806(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_806(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_806(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_806(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_1076(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946804.f_57[func_776(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_978(524288))
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

bool func_1077(int iParam0)
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

int func_1078(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_TOOTH_LEGENDARY");
		case 1:
			return joaat("PROVISION_BISON_HORN_LEGENDARY");
		case 2:
			return joaat("PROVISION_BUCK_ANTLER_LEGENDARY");
		case 3:
			return joaat("PROVISION_COUGAR_FANG_LEGENDARY");
		case 4:
			return joaat("PROVISION_COYOTE_FANG_LEGENDARY");
		case 5:
			return joaat("PROVISION_ELK_ANTLER_LEGENDARY");
		case 6:
			return joaat("PROVISION_FOX_CLAW_LEGENDARY");
		case 7:
			return joaat("PROVISION_LIONS_PAW");
		case 8:
			return joaat("PROVISION_MOOSE_ANTLER_LEGENDARY");
		case 9:
			return joaat("PROVISION_PANTHER_EYE_LEGENDARY");
		case 10:
			return joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY");
		case 11:
			return joaat("PROVISION_RAM_HORN_LEGENDARY");
		case 12:
			return joaat("PROVISION_WOLF_HEART_LEGENDARY");
		case 13:
			return joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
		case 14:
			return joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
		case 15:
			return joaat("PROVISION_BRACELET_GOLD");
		case 16:
			return joaat("PROVISION_BEAR_LEGENDARY_CLAW");
		case 17:
			return joaat("PROVISION_RC_QUARTZ_CHUNK");
		case 18:
			return joaat("PROVISION_BRACELET_SILVER");
		case 19:
			return joaat("PROVISION_BOAR_TUSK_LEGENDARY");
		case 20:
			return joaat("PROVISION_RF_WOOD_COBALT");
		case 21:
			return joaat("PROVISION_EARRING_GOLD");
		case 22:
			return joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
		case 23:
			return joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
		case 24:
			return joaat("PROVISION_EARRING_SILVER");
		case 25:
			return joaat("PROVISION_OLD_BRASS_COMPASS");
		default:
			break;
	}
	return 0;
}

int func_1079(int iParam0)
{
	return func_1146(iParam0, -1);
}

bool func_1080(int iParam0, bool bParam1)
{
	return func_1147(func_168(), iParam0, bParam1);
}

bool func_1081(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_1082(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_732(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40567.f_46 = 1;
			MISC::SET_BIT(&(Global_1058888.f_40567.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::SET_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
		MISC::SET_BIT(&(Global_1058888.f_40567[iVar1]), iVar2);
	}
	Global_1934765 = 0;
}

void func_1083(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_732(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40567.f_46 = 1;
			MISC::CLEAR_BIT(&(Global_1058888.f_40567.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_1084()
{
	func_1083(-939420910);
	func_1083(-1187950766);
	func_1083(356365161);
	func_1083(753127042);
	func_1083(-2038424081);
	func_1083(1884271742);
	func_1083(459290420);
}

void func_1085()
{
	func_1083(704802028);
	func_1083(588987611);
	func_1083(2008888900);
	func_1083(1649996811);
	func_1083(227918160);
	func_1083(168171957);
	func_1083(1193080109);
	func_1083(-491981251);
	func_1083(-639037538);
	func_1083(-618620429);
}

bool func_1086(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1087(int iParam0)
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

void func_1088(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1089(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_1090()
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

void func_1091(int iParam0)
{
	func_1098(iParam0, 8, 6);
}

void func_1092(int iParam0)
{
	func_1148(&(Global_1946804.f_2589), iParam0);
}

void func_1093(int iParam0, int iParam1)
{
	func_1149(&(Global_1946804.f_2589), iParam0, iParam1);
}

void func_1094(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1095(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_721(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1150(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_1093(iVar1, iVar3);
		}
	}
	if (func_998(-1586649372) && func_1150(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_1093(iVar1, iVar3);
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
						func_1093(iVar1, iVar3);
					}
				}
			}
			func_1151(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1151(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1093(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1151(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_1093(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_1093(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1151(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1151(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1093(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1151(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1093(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1093(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_721(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1093(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1077(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && -923693316 == func_721(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1093(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && func_806(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1093(iVar1, iVar3);
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
						func_1093(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && (func_1077(Global_1946804.f_1497.f_1[iVar1 /*3*/]) || func_806(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1093(iVar1, iVar3);
					}
				}
			}
			switch (func_721(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_721(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1093(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_721(uParam0->f_1[iVar1 /*3*/]) || func_806(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1093(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_1096(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_1152(0);
	if (iParam2 != 0 && func_1153(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1154(iParam0, func_1037(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1097(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_161() != -1;
	iVar7 = func_1152(0);
	if (func_978(32768))
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
			iVar5 = func_1037(iVar0, 1);
			if (func_1155(iVar5, 8))
			{
			}
			else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_1155(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1076(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1156(uParam0);
				if (iVar3 > 0)
				{
					if (!func_978(524288))
					{
						func_1100(524288);
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
							iVar5 = func_1037(iVar0, 1);
							if (func_1155(iVar5, 8))
							{
							}
							else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_1155(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1076(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_1093(iVar0, iParam2);
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
					func_1103(524288);
				}
			}
		}
	}
}

void func_1098(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_776(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[func_776(iParam0, 1) /*11*/].f_10 - (Global_1946804.f_57[func_776(iParam0, 1) /*11*/].f_10 && iParam1));
}

void func_1099(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1157(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_161() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1158(2, Global_26796.f_776)) || Global_1946804.f_1497 != func_1122(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = func_1122(Global_40.f_7729);
				Global_1946804.f_1378 = func_1122(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1159(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1160(0, 1);
	}
}

void func_1100(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1101(struct<4> Param0)
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
			if (func_1161(Param0))
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
			func_1162(Param0);
			Global_1946804.f_668[Global_1946804.f_856 /*4*/] = { Param0 };
			Global_1946804.f_850++;
			Global_1946804.f_856 = (Global_1946804.f_856 + 1 % 25);
			func_1100(8);
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
			if (func_1161(Param0))
			{
				return;
			}
			func_1162(Param0);
			Global_1946804.f_567[Global_1946804.f_851 /*4*/] = { Param0 };
			Global_1946804.f_851++;
			func_1100(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_982(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_1102(var uParam0)
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

void func_1103(int iParam0)
{
	Global_1946804 = (Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1104(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1105(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804.f_852 >= 20)
	{
		return;
	}
	if (func_1161(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_852)
		{
			iVar1 = ((Global_1946804.f_853 + iVar0) % 20);
			if (((Global_1946804.f_769[iVar1 /*4*/] == Param0 && Global_1946804.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946804.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946804.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946804.f_769[iVar1 /*4*/] == 34 && func_1161(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1162(Param0);
	Global_1946804.f_769[Global_1946804.f_854 /*4*/] = { Param0 };
	Global_1946804.f_852++;
	Global_1946804.f_854 = (Global_1946804.f_854 + 1 % 20);
	func_1100(8);
}

bool func_1106()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_1107(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_1108()
{
	float fVar0;
	int iVar1;

	fVar0 = func_1163(13);
	iVar1 = func_1164(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_1109()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1110()
{
	if (func_940())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1111()
{
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_1112()
{
	return Global_1955565.f_3;
}

void func_1113(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1165(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_1114(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1165(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[2], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[2], bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_32[2], false);
	}
}

float func_1115(float fParam0, float fParam1, float fParam2)
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

bool func_1116()
{
	return func_1163(12) <= -99f;
}

bool func_1117()
{
	return func_1163(12) >= 99f;
}

int func_1118()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_721(iVar1) == -999503751)
		{
			if (func_1166() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1119(int iParam0)
{
	if (!func_993(iParam0))
	{
		return false;
	}
	if (func_1123(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1120(int iParam0)
{
	if (!func_993(iParam0))
	{
		return false;
	}
	if (func_1123(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1121(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_993(iParam0))
	{
		return;
	}
	if (!func_1120(iParam0))
	{
		func_1125(iParam0, 2);
		if (bParam2)
		{
			if (!func_239(0, 0, 1))
			{
				func_559(1, 4);
			}
		}
		if ((!func_1124() && !bParam1) && !func_239(0, 0, 1))
		{
			func_539(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_1167(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1122(int iParam0)
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

bool func_1123(int iParam0, int iParam1)
{
	if (!func_993(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_1124()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_1125(int iParam0, int iParam1)
{
	if (!func_993(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_1126(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804.f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804.f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804.f_2657.f_26;
			break;
		case -413129408:
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

void func_1127(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1168(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_808(50);
			}
			else
			{
				func_808(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_808(51);
			}
			else
			{
				func_808(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1169(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_833();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_833();
			}
			break;
		case 3:
			func_808(24);
			if (bParam1)
			{
				if (!func_1169(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_833();
				}
			}
			break;
	}
}

void func_1128(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1170(0))
			{
				iVar0++;
			}
			if (func_1170(2))
			{
				iVar0++;
			}
			if (func_1170(4))
			{
				iVar0++;
			}
			if (!func_1171(16))
			{
				if (iVar0 == 1)
				{
					func_1172();
					func_626(456, 1);
					func_1173(16);
				}
			}
			if (!func_1171(32))
			{
				if (iVar0 >= 3)
				{
					func_1172();
					func_626(456, 1);
					func_1173(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1170(1))
			{
				iVar0++;
			}
			if (func_1170(3))
			{
				iVar0++;
			}
			if (func_1170(7))
			{
				iVar0++;
			}
			if (!func_1171(1))
			{
				if (iVar0 == 1)
				{
					func_1174();
					func_626(457, 1);
					func_1173(1);
				}
			}
			if (!func_1171(2))
			{
				if (iVar0 >= 3)
				{
					func_1174();
					func_626(457, 1);
					func_1173(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1170(5))
			{
				iVar0++;
			}
			if (func_1170(6))
			{
				iVar0++;
			}
			if (func_1170(8))
			{
				iVar0++;
			}
			if (!func_1171(4))
			{
				if (iVar0 == 1)
				{
					func_1175();
					func_626(455, 1);
					func_1173(4);
				}
			}
			if (!func_1171(8))
			{
				if (iVar0 >= 3)
				{
					func_1175();
					func_626(455, 1);
					func_1173(8);
				}
			}
			break;
	}
}

void func_1129(var uParam0)
{
	func_1000(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946804.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_1000(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_1000(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_1130(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_1176(uParam0))
	{
		return;
	}
	if (Global_1224866 < 20)
	{
		Global_1224866++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1224866.f_1[iVar0 /*21*/] = { Global_1224866.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1224866.f_1[(Global_1224866 - 1) /*21*/] = { Var1 };
}

bool func_1131(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @230; //curOff = 56
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
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_1132(int iParam0, int iParam1)
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

void func_1133(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1134(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1016(*iParam0);
	iVar1 = func_1015(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1020(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1135(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1136(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1137(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_1138(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_554(iParam0))
	{
		return;
	}
	iVar0 = func_685(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_1139(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_554(iParam0))
	{
		return;
	}
	iVar0 = func_685(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_1140(int iParam0)
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

bool func_1141(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_1142(int iParam0)
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

int func_1143(int iParam0)
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

int func_1144(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1177(&iVar0, 0, iVar95, &Var1) && !func_1177(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_1178(iVar0, &Var1);
			if (func_673(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1145()
{
	var uVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	func_1179(Global_35, &uVar0);
	Var30 = { func_717(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1180(0);
	func_1181(7);
	func_1182(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_995() == 1160113249)
	{
		func_1182(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_1182(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_1183(Global_35, &uVar0);
}

int func_1146(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (iParam1 < 0)
	{
		iParam1 = func_726(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_1132(&uVar6, iVar0);
	func_1133(&uVar6, iVar1);
	func_1134(&uVar6, iVar2);
	func_1135(&uVar6, iVar3);
	func_1136(&uVar6, iVar4);
	func_1137(&uVar6, iVar5);
	return uVar6;
}

bool func_1147(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1184(iParam1) || !func_1184(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1148(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1185(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_1185(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_1186(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
				}
				Var4[iVar1 /*2*/] = { uParam0->f_2[iVar0 /*2*/] };
				iVar1++;
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var4[iVar0 /*2*/] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_1149(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1187(uParam0, 1))
	{
		func_1188(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_1150(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

void func_1151(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1093(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1093(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_1093(iVar2, iVar0);
		}
	}
}

int func_1152(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_995();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1153(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, iParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1154(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

bool func_1155(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[func_776(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

int func_1156(var uParam0)
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

void func_1157(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946804.f_1497.f_1[iParam0 /*3*/] = { Global_1946804.f_1378.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_161() == -1)
	{
		func_1189(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_1190(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1158(int iParam0, int iParam1)
{
	if (func_161() == -1)
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

void func_1159(int iParam0, bool bParam1, int iParam2)
{
	func_1191(&(Global_1946804.f_1378), iParam0);
	func_1192(2, iParam0, 6);
	if (bParam1)
	{
		func_1160(0, 1);
	}
}

void func_1160(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1193(0);
	}
	if (bParam0)
	{
		func_1100(8);
		func_1100(512);
	}
	else
	{
		func_1100(8);
		func_1100(16);
	}
}

bool func_1161(int iParam0)
{
	return Global_1946804.f_529[iParam0] > 0;
}

void func_1162(int iParam0)
{
	Global_1946804.f_529[iParam0]++;
}

float func_1163(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_1164(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_1165(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_1007(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1007(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_1166()
{
	return Global_1946804.f_1497;
}

char* func_1167(int iParam0)
{
	int iVar0;

	iVar0 = func_1122(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1060(iVar0);
}

int func_1168(int iParam0)
{
	int iVar0;

	if (func_1194(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1195(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1196(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1197(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1169(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_828(func_1198(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_1170(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_828(func_1199(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_1171(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1172()
{
	int iVar0;

	if (func_161() != -1)
	{
		return;
	}
	func_851(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = func_486(1);
	func_627(1, iVar0, 0);
}

void func_1173(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1174()
{
	int iVar0;

	if (func_161() != -1)
	{
		return;
	}
	func_851(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = func_486(2);
	func_627(2, iVar0, 0);
}

void func_1175()
{
	int iVar0;

	if (func_161() != -1)
	{
		return;
	}
	func_851(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = func_486(0);
	func_627(0, iVar0, 0);
}

bool func_1176(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_1177(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (func_1200(iParam1) && !func_1201(iParam1))
	{
		iVar0 = func_1202(iParam1);
	}
	else
	{
		return false;
	}
	func_1203(uParam3);
	iVar5 = func_1204(iParam2);
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

void func_1178(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1205(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1206(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1179(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_401(iVar31))
		{
			(*iParam1)[iVar30] = iVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1180(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_673(iVar1, 0))
		{
			func_1207(iVar1, 0, bParam0);
		}
		Global_1946804.f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804.f_2657.f_20 = 0;
	Global_1946804.f_2657.f_21 = 0;
	Global_1946804.f_2657.f_22 = 0;
	Global_1946804.f_2657.f_23 = 0;
	Global_1946804.f_2657.f_24 = 0;
	Global_1946804.f_2657.f_25 = 0;
	Global_1946804.f_2657.f_19 = 0;
	Global_1946804.f_2657.f_26.f_6 = 0;
}

void func_1181(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804.f_2657.f_26.f_2 = 3;
	Global_1946804.f_2657.f_26.f_1 = 3;
	Global_1946804.f_2657.f_26 = 3;
	if (func_161() == -1)
	{
		func_1208(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_26796.f_20;
		Global_1946804.f_2657.f_21 = Global_26796.f_21;
		Global_1946804.f_2657.f_22 = Global_26796.f_22;
		Global_1946804.f_2657.f_23 = Global_26796.f_23;
		Global_1946804.f_2657.f_24 = Global_26796.f_24;
		Global_1946804.f_2657.f_25 = Global_26796.f_25;
		Global_1946804.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar2 = Global_1946804.f_2657[iVar0];
		if (func_721(iVar2) != -999503751)
		{
			func_1209(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1210(iVar2, 0))
		{
			func_1211(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1182(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1212(iParam0))
	{
		return;
	}
	iVar0 = func_721(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1213(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1213(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1213(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1213(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1213(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1213(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1214(0))
	{
		func_1215(iParam0, 1);
		if (func_995() == 1160113249)
		{
			func_1215(func_1214(-2125499975), 0);
		}
		else
		{
			func_1215(func_1214(1160113249), 0);
		}
	}
	func_1216();
	if (func_1217(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_726(0), iParam0, 0);
	}
	func_1211(iParam0, bParam3);
	if (bParam2)
	{
		func_1160(0, 0);
	}
}

void func_1183(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if ((*uParam1)[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, (*uParam1)[iVar0], 0, false))
			{
				if (func_402((*uParam1)[iVar0]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, (*uParam1)[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != (*uParam1)[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, (*uParam1)[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

bool func_1184(int iParam0)
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
	iVar0 = func_1019(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1018(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_426(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1015(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1016(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1017(iParam0);
	if (iVar5 < 1 || iVar5 > func_1020(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_1185(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1186(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1187(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1188(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1189(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_1190(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_1191(var uParam0, int iParam1)
{
	int iVar0;

	if (func_161() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1189(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_1190(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_1192(int iParam0, int iParam1, int iParam2)
{
	if (func_161() == -1)
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

void func_1193(int iParam0)
{
	Global_1946804.f_978 = iParam0;
}

bool func_1194(int iParam0)
{
	if (!func_673(iParam0, 0))
	{
		return false;
	}
	if (func_806(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1195(int iParam0)
{
	if (!func_673(iParam0, 0))
	{
		return false;
	}
	if (func_806(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1196(int iParam0)
{
	if (!func_673(iParam0, 0))
	{
		return false;
	}
	if (func_806(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1197(int iParam0)
{
	if (!func_673(iParam0, 0))
	{
		return false;
	}
	if (func_806(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1198(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1218(iParam0);
		case 1:
			return func_1219(iParam0);
		case 2:
			return func_1220(iParam0);
		case 3:
			return func_1221(iParam0);
	}
	return 0;
}

int func_1199(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1222(iParam0);
		case 1:
			return func_1223(iParam0);
		case 2:
			return func_1224(iParam0);
		case 3:
			return func_1225(iParam0);
		case 4:
			return func_1226(iParam0);
		case 5:
			return func_1227(iParam0);
		case 6:
			return func_1228(iParam0);
		case 7:
			return func_1229(iParam0);
		case 8:
			return func_1230(iParam0);
	}
	return 0;
}

bool func_1200(int iParam0)
{
	iParam0 = func_1231(iParam0);
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

bool func_1201(int iParam0)
{
	int iVar0;

	iParam0 = func_1231(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1200(iParam0))
	{
		return false;
	}
	iVar0 = func_1202(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

int func_1202(int iParam0)
{
	iParam0 = func_1231(iParam0);
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

void func_1203(var uParam0)
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

int func_1204(int iParam0)
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

void func_1205(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_1206(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_1207(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_721(iParam0))
	{
		case -2061583405:
			bVar0 = func_1232(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1232(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1232(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1232(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1232(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1232(iParam0, &(Global_1946804.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1216();
	}
	if (bParam1)
	{
		func_1160(0, 0);
	}
}

void func_1208(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;

	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_1041(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_1043(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804.f_2657.f_26.f_2 = 5;
					Global_1946804.f_2657.f_26.f_1 = 5;
					Global_1946804.f_2657.f_26 = 5;
					break;
			}
		}
		func_985(iVar0);
	}
}

void func_1209(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1233(iParam2, *uParam0);
	func_1234(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1210(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_583(iParam0, 0, 0) };
	Var5 = { func_587(iParam0, Var0, Var0.f_4, 0) };
	if (func_724(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(func_726(0), &Var5, iParam1);
	return true;
}

void func_1211(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_583(iParam0, 0, 0) };
	Var5 = { func_587(iParam0, Var0, Var0.f_4, 0) };
	if (func_724(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_726(0), &Var5, bParam1);
}

bool func_1212(int iParam0)
{
	if (func_161() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == joaat("CLOTHING_WINTER_OUTFIT"))
			{
				return false;
			}
		}
	}
	return true;
}

int func_1213(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1946804.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1235(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1210(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (func_721(iParam0) != -999503751)
	{
		func_1209(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1214(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_995();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_1215(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_583(iParam0, 0, 0) };
	Var5 = { func_587(iParam0, Var0, Var0.f_4, 0) };
	if (func_724(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_726(0), &Var5);
	return 1;
}

void func_1216()
{
	int iVar0;

	if (func_161() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_2657.f_19)
		{
			Global_26796[iVar0] = Global_1946804.f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946804.f_2657.f_20;
		Global_26796.f_21 = Global_1946804.f_2657.f_21;
		Global_26796.f_22 = Global_1946804.f_2657.f_22;
		Global_26796.f_23 = Global_1946804.f_2657.f_23;
		Global_26796.f_24 = Global_1946804.f_2657.f_24;
		Global_26796.f_19 = Global_1946804.f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = Global_1946804.f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946804.f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946804.f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946804.f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946804.f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946804.f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946804.f_2657.f_19;
}

bool func_1217(int iParam0)
{
	return func_1237(func_1236(iParam0));
}

int func_1218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1222(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR");
		default:
			break;
	}
	return 0;
}

int func_1223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR");
		default:
			break;
	}
	return 0;
}

int func_1224(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR");
		default:
			break;
	}
	return 0;
}

int func_1225(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		default:
			break;
	}
	return 0;
}

int func_1226(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR");
		default:
			break;
	}
	return 0;
}

int func_1227(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER");
		default:
			break;
	}
	return 0;
}

int func_1228(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER");
		default:
			break;
	}
	return 0;
}

int func_1229(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT");
		default:
			break;
	}
	return 0;
}

int func_1230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1231(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1232(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_1235(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804.f_2657.f_19 == 1)
	{
		Global_1946804.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_721(iParam0) != -999503751)
		{
			func_1238(&(Global_1946804.f_2657.f_26), 0, Global_1946804.f_2657.f_19);
		}
		Global_1946804.f_2657[0] = 0;
		return 1;
	}
	Global_1946804.f_2657.f_19 = (Global_1946804.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804.f_2657[iVar0] = Global_1946804.f_2657[Global_1946804.f_2657.f_19];
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = 0;
	if (func_721(iParam0) != -999503751)
	{
		func_1238(&(Global_1946804.f_2657.f_26), iVar0, Global_1946804.f_2657.f_19);
	}
	func_1210(iParam0, 1);
	return 1;
}

void func_1233(int iParam0, var uParam1)
{
	Global_1946804.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1234(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1239(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_776(func_1074(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1240(uParam0);
	}
}

bool func_1235(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804.f_2657.f_19)
	{
		if (iParam0 == Global_1946804.f_2657[*uParam1])
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

int func_1236(int iParam0)
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
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_1237(int iParam0)
{
	return (Global_1946804.f_2657.f_26.f_6 && iParam0) != 0;
}

void func_1238(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1241(iParam1);
	func_1242(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1243(&(uParam0->f_26), iVar1);
		if (func_1244(uParam0->f_26, &iVar0))
		{
			func_1245(iVar0, iVar1);
		}
	}
}

void func_1239(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1246(&(uParam0->f_3));
}

void func_1240(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1247(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

var func_1241(int iParam0)
{
	return Global_1946804.f_2657.f_26.f_7[iParam0];
}

void func_1242(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946804.f_2657.f_26.f_7[iParam0];
	Global_1946804.f_2657.f_26.f_7[iParam0] = Global_1946804.f_2657.f_26.f_7[iParam1];
	Global_1946804.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1243(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1239(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
}

bool func_1244(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804.f_2657.f_19)
	{
		if (Global_1946804.f_2657.f_26.f_7[*uParam1] == iParam0)
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

void func_1245(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1246(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1247(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_1248(func_995());
	if (*uParam0)
	{
		func_1246(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, uParam1, 0, func_161() != -1, uParam2);
	*uParam0 = 1;
}

int func_1248(int iParam0)
{
	if (func_161() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			return 0;
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			return 1;
		default:
			break;
	}
	return 0;
}


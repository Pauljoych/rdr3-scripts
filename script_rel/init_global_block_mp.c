void __EntryFunction__()
{
	Global_1048945 = { -557.7f, -3610.7f, 80.9f };
	Global_1051043 = -1;
	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(4))
	{
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(4);
	}
	else
	{
		SCRIPTS::_STORE_GLOBAL_BLOCK(4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}


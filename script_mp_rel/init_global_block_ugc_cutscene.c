void __EntryFunction__()
{
	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(14))
	{
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(14);
	}
	else
	{
		SCRIPTS::_STORE_GLOBAL_BLOCK(14);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

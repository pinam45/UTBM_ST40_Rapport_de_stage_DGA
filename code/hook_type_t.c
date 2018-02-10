enum hook_type_t
{
	HT_IDP,         ///< Hook to the processor module.
	HT_UI,          ///< Hook to the user interface.
	HT_DBG,         ///< Hook to the debugger.
	HT_IDB,         ///< Hook to the database events.
	HT_DEV,         ///< Internal debugger events.
	HT_VIEW,        ///< Custom/IDA views notifications.
	HT_OUTPUT,      ///< Output window notifications.
	HT_GRAPH,       ///< Handling graph operations
	HT_LAST
};

enum TRPCs
{
	// Client -> Server
	RPC_TRADER_MOD_IS_LOADED = 35466,
	RPC_BUY,
	RPC_SELL,
	
	// Server -> Client
	RPC_SEND_TRADER_CURRENCYNAME_ENTRY,
	RPC_SEND_TRADER_CURRENCY_ENTRY,
	RPC_SEND_TRADER_MANCLASSNAME_ENTRY,
	RPC_SEND_TRADER_NAME_ENTRY,
	RPC_SEND_TRADER_CATEGORY_ENTRY,
	RPC_SEND_TRADER_ITEM_ENTRY,
	RPC_SEND_TRADER_MARKER_ENTRY,
	RPC_SEND_TRADER_DATA_CONFIRMATION,
	RPC_SEND_TRADER_CLEAR,
	RPC_SEND_TRADER_IS_IN_SAFEZONE,
	RPC_TRADER_MOD_IS_LOADED_CONFIRM,
	RPC_SYNC_OBJECT_ORIENTATION,
	//RPC_SYNC_CARSCRIPT_ISINSAFEZONE,
	RPC_SEND_MENU_BACK,
	RPC_SEND_MESSAGE_WHITE,
	RPC_SEND_MESSAGE_RED,
	RPC_SEND_MESSAGE_SAFEZONE,
	RPC_DELETE_SAFEZONE_MESSAGES,
	RPC_SEND_TRADER_VARIABLES_ENTRY,
	RPC_SEND_TRADER_PLAYERUID,
	RPC_SEND_TRADER_ADMINS_ENTRY,
	RPC_SEND_TRADER_NPCDUMMY_ENTRY
}
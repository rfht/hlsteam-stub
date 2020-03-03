#include "steamwrap.h"

void hl_set_uid( vdynamic *out, int64 uid ) {
}

int hl_to_uid( vuid v ) {
	return 0;
}

uint64 hl_to_uint64(vuid v) {
	return 0;
}

vuid hl_of_uid( int uid ) {
	union {
		vbyte b[8];
		uint64 v;
	} data;
	//data.v = uid.ConvertToUint64();
	return (vuid)0;
}

vuid hl_of_uint64(uint64 uid) {
	union {
		vbyte b[8];
		uint64 v;
	} data;
	//data.v = uid;
	return (vuid)0;
}

void dyn_call_result( vclosure *c, vdynamic *p, bool error ) {
}

//just splits a string
void split(const std::string &s, char delim, std::vector<std::string> &elems) {
	std::stringstream ss;
	ss.str(s);
	std::string item;
	while (std::getline(ss, item, delim)) {
		elems.push_back(item);
	}
}


//-----------------------------------------------------------------------------------------------------------
// Event
//-----------------------------------------------------------------------------------------------------------

vclosure *g_eventHandler = 0;

void SendEvent(event_type type, bool success, const char *data) {
}


CallbackHandler* s_callbackHandler = NULL;
static vclosure *s_globalEvent = NULL;

bool CheckInit(){
	return 0;
}

static void GlobalEvent( int id, vdynamic *v ) {
}

#define EVENT_DECL(name,type) void CallbackHandler::On##name( type *t ) { GlobalEvent(type::k_iCallback, Encode##name(t)); }
#define GLOBAL_EVENTS
//#include "events.h"
#undef GLOBAL_EVENTS

/*
vdynamic *CallbackHandler::EncodeOverlayActivated(int *d) {
	HLValue ret;
	ret.Set("active", d->m_bActive != 0);
	return ret.value;
}
*/

HL_PRIM bool HL_NAME(init)( vclosure *onEvent, vclosure *onGlobalEvent ){
	return 0;
}

HL_PRIM void HL_NAME(set_notification_position)( int pos ) {
}

HL_PRIM void HL_NAME(shutdown)(){
}

HL_PRIM void HL_NAME(run_callbacks)(){
}

HL_PRIM bool HL_NAME(open_overlay)(vbyte *url){
	if (!CheckInit()) return false;
	return true;
}

DEFINE_PRIM(_BOOL, init, _FUN(_VOID, _I32 _BOOL _BYTES) _FUN(_VOID, _I32 _DYN));
DEFINE_PRIM(_VOID, set_notification_position, _I32);
DEFINE_PRIM(_VOID, shutdown, _NO_ARG);
DEFINE_PRIM(_VOID, run_callbacks, _NO_ARG);
DEFINE_PRIM(_BOOL, open_overlay, _BYTES);

//-----------------------------------------------------------------------------------------------------------

HL_PRIM vuid HL_NAME(get_steam_id)(){
	return (vuid)0;
}

HL_PRIM bool HL_NAME(restart_app_if_necessary)(int appId){
	return 0;
}

HL_PRIM bool HL_NAME(is_overlay_enabled)(){
	return false;
}

HL_PRIM bool HL_NAME(boverlay_needs_present)(){
	return false;
}

HL_PRIM bool HL_NAME(is_steam_in_big_picture_mode)(){
	return false;
}

HL_PRIM bool HL_NAME(is_steam_running)(){
	return false;
}

HL_PRIM vbyte *HL_NAME(get_current_game_language)(){
	if (!CheckInit()) return NULL;
	return (vbyte*)0;
}

HL_PRIM bool HL_NAME(is_dlc_installed)( int appid ) {
	return 0;
}

HL_PRIM vbyte *HL_NAME(get_current_beta_name)() {
	static char name[1024];
	if (!CheckInit()) return NULL;
	return NULL;
}

/*
vdynamic *CallbackHandler::EncodeAuthSessionTicketResponse(int *d) {
	HLValue ret;
	//ret.Set("authTicket", d->m_hAuthTicket);
	//ret.Set("result", d->m_eResult);
	return ret.value;
}
*/


HL_PRIM vbyte *HL_NAME(get_auth_ticket)( int *size, int *authTicket ) {
	vbyte *ticket = hl_alloc_bytes(1024);
	//*authTicket = SteamUser()->GetAuthSessionTicket(ticket,1024,(uint32*)size);
	return (vbyte*)"";
}

HL_PRIM void HL_NAME(cancel_call_result)( int *m_call ) {
}

DEFINE_PRIM(_UID, get_steam_id, _NO_ARG);
DEFINE_PRIM(_BOOL, restart_app_if_necessary, _I32);
DEFINE_PRIM(_BOOL, is_overlay_enabled, _NO_ARG);
DEFINE_PRIM(_BOOL, is_dlc_installed, _I32);
DEFINE_PRIM(_BOOL, boverlay_needs_present, _NO_ARG);
DEFINE_PRIM(_BOOL, is_steam_in_big_picture_mode, _NO_ARG);
DEFINE_PRIM(_BOOL, is_steam_running, _NO_ARG);
DEFINE_PRIM(_BYTES, get_current_game_language, _NO_ARG);
DEFINE_PRIM(_BYTES, get_auth_ticket, _REF(_I32) _REF(_I32));
DEFINE_PRIM(_VOID, cancel_call_result, _CRESULT);
DEFINE_PRIM(_BYTES, get_current_beta_name, _NO_ARG);

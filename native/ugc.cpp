#include "steamwrap.h"

/*
vdynamic *CallbackHandler::EncodeDownloadItem(int *d) {
	return nullptr;
}

vdynamic *CallbackHandler::EncodeItemInstalled(int *d) {
	return nullptr;
}
*/

HL_PRIM varray *HL_NAME(get_subscribed_items)(){
	return nullptr;
}

HL_PRIM int HL_NAME(get_item_state)(vuid publishedFileID){
	return 0;
}

HL_PRIM bool HL_NAME(get_item_download_info)(vuid publishedFileID, double *downloaded, double *total ){
	return false;
}

HL_PRIM bool HL_NAME(download_item)(vuid publishedFileID, bool highPriority){
	return false;
}

HL_PRIM vdynamic *HL_NAME(get_item_install_info)(vuid publishedFileID){
	return NULL;
}

static void on_item_subscribed(vclosure *c, int *result, bool error) {
}
HL_PRIM void* HL_NAME(subscribe_item)(vuid publishedFileID, vclosure *closure) {
	return nullptr;
}
HL_PRIM void* HL_NAME(unsubscribe_item)(vuid publishedFileID, vclosure *closure) {
	return nullptr;
}


DEFINE_PRIM(_ARR, get_subscribed_items, _NO_ARG);
DEFINE_PRIM(_I32, get_item_state, _UID);
DEFINE_PRIM(_BOOL, get_item_download_info, _UID _REF(_F64) _REF(_F64));
DEFINE_PRIM(_BOOL, download_item, _UID _BOOL);
DEFINE_PRIM(_DYN, get_item_install_info, _UID);
DEFINE_PRIM(_CRESULT, subscribe_item, _UID _CALLB(_UID));
DEFINE_PRIM(_CRESULT, unsubscribe_item, _UID _CALLB(_UID));

//-----------------------------------------------------------------------------------------------------------
// UGC QUERY
//-----------------------------------------------------------------------------------------------------------

HL_PRIM vuid HL_NAME(ugc_query_create_all_request)(int queryType, int matchingUGCType, int creatorAppID, int consumerAppID, int page){
	return nullptr;
}

HL_PRIM vuid HL_NAME(ugc_query_create_user_request)(int uid, int listType, int matchingUGCType, int sortOrder, int creatorAppID, int consumerAppID, int page) {
	return nullptr;
}

HL_PRIM vuid HL_NAME(ugc_query_create_details_request)(varray *fileIDs){
	return nullptr;
}

HL_PRIM bool HL_NAME(ugc_query_set_language)(vuid handle, vbyte *lang) {
	return false;
}

HL_PRIM bool HL_NAME(ugc_query_set_search_text)(vuid handle, vbyte *search) {
	return false;
}

HL_PRIM bool HL_NAME(ugc_query_add_required_tag)(vuid handle, vbyte *tagName) {
	return false;
}

HL_PRIM bool HL_NAME(ugc_query_add_required_key_value_tag)(vuid handle, vbyte *pKey, vbyte *pValue) {
	return false;
}

HL_PRIM bool HL_NAME(ugc_query_add_excluded_tag)(vuid handle, vbyte *tagName) {
	return false;
}

HL_PRIM bool HL_NAME(ugc_query_set_return_metadata)(vuid handle, bool returnMetadata) {
	return false;
}

HL_PRIM bool HL_NAME(ugc_query_set_return_key_value_tags)(vuid handle, bool returnKeyValueTags) {
	return false;
}

HL_PRIM bool HL_NAME(ugc_query_set_return_children)(vuid handle, bool returnChildren) {
	return false;
}

static void on_query_completed(vclosure *c, int *result, bool error) {
}
HL_PRIM void* HL_NAME(ugc_query_send_request)(vuid cHandle, vclosure *closure){
	return nullptr;
}

HL_PRIM bool HL_NAME(ugc_query_release_request)(vuid cHandle) {
	return false;
}

HL_PRIM varray *HL_NAME(ugc_query_get_key_value_tags)(vuid cHandle, int iIndex, int maxValueLength ){
	return nullptr;
}

HL_PRIM varray *HL_NAME(ugc_query_get_children)(vuid cHandle, int iIndex, int maxChildren) {
	return nullptr;
}

HL_PRIM vbyte *HL_NAME(ugc_query_get_metadata)(vuid sHandle, int iIndex){
	return nullptr;
}

HL_PRIM vdynamic *HL_NAME(ugc_query_get_result)(vuid sHandle, int iIndex){
	return nullptr;
}

DEFINE_PRIM(_UID, ugc_query_create_all_request, _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_UID, ugc_query_create_user_request, _I32 _I32 _I32 _I32 _I32 _I32 _I32);
DEFINE_PRIM(_UID, ugc_query_create_details_request, _ARR);

DEFINE_PRIM(_BOOL, ugc_query_set_language, _UID _BYTES);
DEFINE_PRIM(_BOOL, ugc_query_set_search_text, _UID _BYTES);
DEFINE_PRIM(_BOOL, ugc_query_add_required_tag, _UID _BYTES);
DEFINE_PRIM(_BOOL, ugc_query_add_required_key_value_tag, _UID _BYTES _BYTES);
DEFINE_PRIM(_BOOL, ugc_query_add_excluded_tag, _UID _BYTES);
DEFINE_PRIM(_BOOL, ugc_query_set_return_metadata, _UID _BOOL);
DEFINE_PRIM(_BOOL, ugc_query_set_return_key_value_tags, _UID _BOOL);
DEFINE_PRIM(_BOOL, ugc_query_set_return_children, _UID _BOOL);

DEFINE_PRIM(_CRESULT, ugc_query_send_request, _UID _CALLB(_DYN));
DEFINE_PRIM(_BOOL, ugc_query_release_request, _UID);

DEFINE_PRIM(_ARR, ugc_query_get_key_value_tags, _UID _I32 _I32);
DEFINE_PRIM(_ARR, ugc_query_get_children, _UID _I32 _I32);
DEFINE_PRIM(_BYTES, ugc_query_get_metadata, _UID _I32);
DEFINE_PRIM(_DYN, ugc_query_get_result, _UID _I32);


//-----------------------------------------------------------------------------------------------------------
// UGC UPDATE
//-----------------------------------------------------------------------------------------------------------

static void on_item_created(vclosure *c, int *result, bool error) {
}
HL_PRIM void* HL_NAME(ugc_item_create)(int appId, vclosure *closure) {
	return nullptr;
}

HL_PRIM vuid HL_NAME(ugc_item_start_update)(int id, vuid itemID) {
	return nullptr;
}

static void on_item_updated(vclosure *c, int *result, bool error) {
}
HL_PRIM void* HL_NAME(ugc_item_submit_update)(vuid updateHandle, vbyte *changeNotes, vclosure *closure){
 	return nullptr;
}

HL_PRIM bool HL_NAME(ugc_item_set_update_language)(vuid updateHandle, vbyte *lang) {
	return false;
}

HL_PRIM bool HL_NAME(ugc_item_set_title)(vuid updateHandle, vbyte *title) {
	return false;
}

HL_PRIM bool HL_NAME(ugc_item_set_description)(vuid updateHandle, vbyte *description){
	return false;
}

HL_PRIM bool HL_NAME(ugc_item_set_metadata)(vuid updateHandle, vbyte *metadata) {
	return false;
}

HL_PRIM bool HL_NAME(ugc_item_set_tags)(vuid updateHandle, varray *tags){
	return false;
}

HL_PRIM bool HL_NAME(ugc_item_add_key_value_tag)(vuid updateHandle, vbyte *keyStr, vbyte *valueStr){
	return false;
}

HL_PRIM bool HL_NAME(ugc_item_remove_key_value_tags)(vuid updateHandle, vbyte *keyStr) {
	return false;
}

HL_PRIM bool HL_NAME(ugc_item_set_visibility)(vuid updateHandle, int visibility) {
	return false;
}

HL_PRIM bool HL_NAME(ugc_item_set_content)(vuid updateHandle, vbyte *path){
	return false;
}

HL_PRIM bool HL_NAME(ugc_item_set_preview_image)(vuid updateHandle, vbyte *path){
	return false;
}


DEFINE_PRIM(_CRESULT, ugc_item_create, _I32 _CALLB(_DYN));
DEFINE_PRIM(_UID, ugc_item_start_update, _I32 _UID);
DEFINE_PRIM(_CRESULT, ugc_item_submit_update, _UID _BYTES _CALLB(_BOOL));
DEFINE_PRIM(_BOOL, ugc_item_set_update_language, _UID _BYTES);
DEFINE_PRIM(_BOOL, ugc_item_set_title, _UID _BYTES);
DEFINE_PRIM(_BOOL, ugc_item_set_description, _UID _BYTES);
DEFINE_PRIM(_BOOL, ugc_item_set_metadata, _UID _BYTES);
DEFINE_PRIM(_BOOL, ugc_item_set_tags, _UID _ARR);
DEFINE_PRIM(_BOOL, ugc_item_add_key_value_tag, _UID _BYTES _BYTES);
DEFINE_PRIM(_BOOL, ugc_item_remove_key_value_tags, _UID _BYTES);
DEFINE_PRIM(_BOOL, ugc_item_set_visibility, _UID _I32);
DEFINE_PRIM(_BOOL, ugc_item_set_content, _UID _BYTES);
DEFINE_PRIM(_BOOL, ugc_item_set_preview_image, _UID _BYTES);

HL_PRIM void HL_NAME(file_share)(){
}
DEFINE_PRIM(_VOID, file_share, _NO_ARG);

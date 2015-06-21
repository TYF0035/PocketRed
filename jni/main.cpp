#include <jni.h>
#include <dlfcn.h>
#include <android/log.h>
#include <stdlib.h>
#include <Substrate.h>

#include <mcpe/item/Item.h>
#include <mcpe/tile/Tile.h>

#include <PocketRed/item/RedstoneRepeaterItem.h>

#define LOG_TAG "pocketred"

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__))

static void (*Item_initItems_real)();
static void Item_initItems_hook() {
	Item_initItems_real();
	
	RedstoneRepeaterItem::itemRedstoneRepeater = new RedstoneRepeaterItem(RedstoneRepeaterItem::_id);
}

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
	MSHookFunction((void*) &Item::initItems, (void*) &Item_initItems_hook, (void**) &Item_initItems_real);
	return JNI_VERSION_1_2;
}

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_shnaider_usbcameraviewer_USBCameraViewer */

#ifndef _Included_com_shnaider_usbcameraviewer_USBCameraViewer
#define _Included_com_shnaider_usbcameraviewer_USBCameraViewer
#ifdef __cplusplus
extern "C" {
#endif
#undef com_shnaider_usbcameraviewer_USBCameraViewer_MODE_PRIVATE
#define com_shnaider_usbcameraviewer_USBCameraViewer_MODE_PRIVATE 0L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_MODE_WORLD_READABLE
#define com_shnaider_usbcameraviewer_USBCameraViewer_MODE_WORLD_READABLE 1L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_MODE_WORLD_WRITEABLE
#define com_shnaider_usbcameraviewer_USBCameraViewer_MODE_WORLD_WRITEABLE 2L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_MODE_APPEND
#define com_shnaider_usbcameraviewer_USBCameraViewer_MODE_APPEND 32768L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_MODE_MULTI_PROCESS
#define com_shnaider_usbcameraviewer_USBCameraViewer_MODE_MULTI_PROCESS 4L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_MODE_ENABLE_WRITE_AHEAD_LOGGING
#define com_shnaider_usbcameraviewer_USBCameraViewer_MODE_ENABLE_WRITE_AHEAD_LOGGING 8L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_BIND_AUTO_CREATE
#define com_shnaider_usbcameraviewer_USBCameraViewer_BIND_AUTO_CREATE 1L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_BIND_DEBUG_UNBIND
#define com_shnaider_usbcameraviewer_USBCameraViewer_BIND_DEBUG_UNBIND 2L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_BIND_NOT_FOREGROUND
#define com_shnaider_usbcameraviewer_USBCameraViewer_BIND_NOT_FOREGROUND 4L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_BIND_ABOVE_CLIENT
#define com_shnaider_usbcameraviewer_USBCameraViewer_BIND_ABOVE_CLIENT 8L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_BIND_ALLOW_OOM_MANAGEMENT
#define com_shnaider_usbcameraviewer_USBCameraViewer_BIND_ALLOW_OOM_MANAGEMENT 16L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_BIND_WAIVE_PRIORITY
#define com_shnaider_usbcameraviewer_USBCameraViewer_BIND_WAIVE_PRIORITY 32L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_BIND_IMPORTANT
#define com_shnaider_usbcameraviewer_USBCameraViewer_BIND_IMPORTANT 64L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_BIND_ADJUST_WITH_ACTIVITY
#define com_shnaider_usbcameraviewer_USBCameraViewer_BIND_ADJUST_WITH_ACTIVITY 128L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_CONTEXT_INCLUDE_CODE
#define com_shnaider_usbcameraviewer_USBCameraViewer_CONTEXT_INCLUDE_CODE 1L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_CONTEXT_IGNORE_SECURITY
#define com_shnaider_usbcameraviewer_USBCameraViewer_CONTEXT_IGNORE_SECURITY 2L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_CONTEXT_RESTRICTED
#define com_shnaider_usbcameraviewer_USBCameraViewer_CONTEXT_RESTRICTED 4L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_RESULT_CANCELED
#define com_shnaider_usbcameraviewer_USBCameraViewer_RESULT_CANCELED 0L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_RESULT_OK
#define com_shnaider_usbcameraviewer_USBCameraViewer_RESULT_OK -1L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_RESULT_FIRST_USER
#define com_shnaider_usbcameraviewer_USBCameraViewer_RESULT_FIRST_USER 1L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_DEFAULT_KEYS_DISABLE
#define com_shnaider_usbcameraviewer_USBCameraViewer_DEFAULT_KEYS_DISABLE 0L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_DEFAULT_KEYS_DIALER
#define com_shnaider_usbcameraviewer_USBCameraViewer_DEFAULT_KEYS_DIALER 1L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_DEFAULT_KEYS_SHORTCUT
#define com_shnaider_usbcameraviewer_USBCameraViewer_DEFAULT_KEYS_SHORTCUT 2L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_DEFAULT_KEYS_SEARCH_LOCAL
#define com_shnaider_usbcameraviewer_USBCameraViewer_DEFAULT_KEYS_SEARCH_LOCAL 3L
#undef com_shnaider_usbcameraviewer_USBCameraViewer_DEFAULT_KEYS_SEARCH_GLOBAL
#define com_shnaider_usbcameraviewer_USBCameraViewer_DEFAULT_KEYS_SEARCH_GLOBAL 4L
/*
 * Class:     com_shnaider_usbcameraviewer_USBCameraViewer
 * Method:    startUsbCameraViewer
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_com_shnaider_usbcameraviewer_USBCameraViewer_startUsbCameraViewer
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_shnaider_usbcameraviewer_USBCameraViewer
 * Method:    stopUsbCameraViewer
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_shnaider_usbcameraviewer_USBCameraViewer_stopUsbCameraViewer
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif

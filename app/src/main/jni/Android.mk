LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_LDLIBS := -llog
LOCAL_MODULE    := NDKManager
LOCAL_SRC_FILES := NDKManager.c
include $(BUILD_SHARED_LIBRARY)

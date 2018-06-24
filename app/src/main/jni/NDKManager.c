/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <string.h>
#include <android/log.h>
/* Header for class com_hteng_study_ndk_NDKManager */

#ifndef _Included_com_hteng_study_ndk_NDKManager
#define _Included_com_hteng_study_ndk_NDKManager
#ifdef __cplusplus
extern "C" {
#endif

//定义TAG之后，我们可以在LogCat通过TAG过滤出NDK打印的日志
#define TAG "JimmyZhang"
// 定义info信息
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,TAG,__VA_ARGS__)
// 定义debug信息
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, TAG, __VA_ARGS__)
// 定义error信息
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,TAG,__VA_ARGS__)

/*
 * Class:     com_hteng_study_ndk_NDKManager
 * Method:    getString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_hteng_study_ndk_NDKManager_getString
 (JNIEnv * env, jclass clazz) {
    return (*env)->NewStringUTF(env,"hello c");
}

/*
 * Class:     com_hteng_study_ndk_NDKManager
 * Method:    getStringFomc
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_hteng_study_ndk_NDKManager_getStringFomc
   (JNIEnv * env , jobject obj){
    return (*env)->NewStringUTF(env,"hello 2");
}

/*
 * Class:     com_hteng_study_ndk_NDKManager
 * Method:    accessField
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_hteng_study_ndk_NDKManager_accessField
 (JNIEnv * env, jobject jobj){
      jclass cls = (*env)->GetObjectClass(env, jobj);
      jfieldID fid = (*env)->GetFieldID(env, cls, "key","Ljava/lang/String;");
      jstring jstr = (*env)->GetObjectField(env,jobj,fid);
      const char *c_str = (*env)->GetStringUTFChars(env,jstr,JNI_FALSE);
      char text[20] = "super ";
      strcat(text, c_str);
      jstring new_jstr = (*env)->NewStringUTF(env,text);
      (*env)->SetObjectField(env, jobj, fid,new_jstr);
      return new_jstr;
}

/*
 * Class:     com_hteng_study_ndk_NDKManager
 * Method:    accessStaticField
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_hteng_study_ndk_NDKManager_accessStaticField
  (JNIEnv * env, jobject jobj){
      jclass cls = (*env)->GetObjectClass(env, jobj);
      jfieldID fid = (*env)->GetStaticFieldID(env, cls, "count","I");
      jint count = (*env)->GetStaticIntField(env,cls,fid);
      count++;
      (*env)->SetStaticIntField(env, cls, fid, count);
}

/*
 * Class:     com_hteng_study_ndk_NDKManager
 * Method:    accessMethod
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_hteng_study_ndk_NDKManager_accessMethod
 (JNIEnv * env, jobject jobj){
     jclass cls = (*env)->GetObjectClass(env, jobj);
     jmethodID mid = (*env)->GetMethodID(env, cls, "getRandInt", "(I)I");
     jint random = (*env)->CallIntMethod(env, jobj, mid, 200);
     LOGI("random num:%ld",random);
}

/*
 * Class:     com_hteng_study_ndk_NDKManager
 * Method:    accessStaticMethod
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_hteng_study_ndk_NDKManager_accessStaticMethod
 (JNIEnv * env, jobject jobj){
     jclass cls = (*env)->GetObjectClass(env, jobj);
     jmethodID mid = (*env)->GetStaticMethodID(env, cls, "getUuid", "()Ljava/lang/String;");
     jint uuid = (*env)->CallStaticObjectMethod(env, cls, mid);
     LOGI("uuid:%ld",uuid);
}

/*
 * Class:     com_hteng_study_ndk_NDKManager
 * Method:    accessConstructor
 * Signature: ()V
 */
JNIEXPORT jobject JNICALL Java_com_hteng_study_ndk_NDKManager_accessConstructor
  (JNIEnv * env, jobject jobj){
   jclass cls = (*env)->FindClass(env, "java/util/Date");
   	jmethodID constructor_mid = (*env)->GetMethodID(env, cls, "<init>", "()V");
   	jobject date_obj = (*env)->NewObject(env, cls, constructor_mid);
   	jmethodID mid = (*env)->GetMethodID(env, cls, "getTime", "()J");
   	jlong time = (*env)->CallLongMethod(env, date_obj, mid);
    LOGI("\ntime:%lld\n",time);
    return date_obj;
}

#ifdef __cplusplus
}
#endif
#endif
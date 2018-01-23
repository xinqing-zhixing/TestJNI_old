//
// Created by pc on 2018/1/23.
//

#include <jni.h>
#include "LogUtils.h"
#include <android/log.h>

JNIEXPORT jstring JNICALL
                  Java_hu_mobile_testcmake_JNIUtils_testPointer(JNIEnv *env, jobject instance) {

//    int *str = "测试指针";
    int *str = "abcd";

    int *str2 = &str;


    __android_log_print(ANDROID_LOG_INFO,"jni","----------------------" );
    __android_log_print(ANDROID_LOG_INFO,"jni","  str 的值：%s", str );
    __android_log_print(ANDROID_LOG_INFO,"jni","str++ 的值：%s", ++str );
//    __android_log_print(ANDROID_LOG_INFO,"jni","*str2 的值：%s", *str2 );
    __android_log_print(ANDROID_LOG_INFO,"jni","  str 的值：%d", str );
    __android_log_print(ANDROID_LOG_INFO,"jni","  str 的值：%p", str );
    __android_log_print(ANDROID_LOG_INFO,"jni","*str2 的值：%d", *str2 );
    __android_log_print(ANDROID_LOG_INFO,"jni","*str2 的值：%p", *str2 );
    __android_log_print(ANDROID_LOG_INFO,"jni"," &str 的值：%d", &str );
    __android_log_print(ANDROID_LOG_INFO,"jni"," *str 的值：%d", *str );

    int a = 1;
    int *b = &a;
    int *c = &b;
    __android_log_print(ANDROID_LOG_INFO,"jni","  b值：%d", b );
    __android_log_print(ANDROID_LOG_INFO,"jni"," *c值：%d", *c );
    __android_log_print(ANDROID_LOG_INFO,"jni","  b值：%p", b );
    __android_log_print(ANDROID_LOG_INFO,"jni"," *c值：%p", *c );
    __android_log_print(ANDROID_LOG_INFO,"jni"," *b值：%d", *b );
    __android_log_print(ANDROID_LOG_INFO,"jni"," *b值：%p", *b );
//    __android_log_print(ANDROID_LOG_INFO,"jni"," **c值：%d", **c );
//    __android_log_print(ANDROID_LOG_INFO,"jni"," **c值：%p", **c );
    __android_log_print(ANDROID_LOG_INFO,"jni"," &b值：%d", &b );
    __android_log_print(ANDROID_LOG_INFO,"jni"," &b值：%p", &b );
    __android_log_print(ANDROID_LOG_INFO,"jni","&*b值：%d", &*b );
    __android_log_print(ANDROID_LOG_INFO,"jni","&*b值：%p", &*b );
    __android_log_print(ANDROID_LOG_INFO,"jni","*&b值：%d", *&b );
    __android_log_print(ANDROID_LOG_INFO,"jni","*&b值：%p", *&b );


    return (*env)->NewStringUTF(env, str);
}
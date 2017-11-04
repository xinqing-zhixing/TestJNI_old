//
// Created by pc on 2017/8/9. test
//
#include <jni.h>

JNIEXPORT jstring JNICALL Java_bjsasc_com_testndkbuild_NdkJniUtils_getCLanguageString
        (JNIEnv *env, jobject obj){
    return (*env)->NewStringUTF(env,"This just a test for Android Studio NDK JNI developer!");
}

JNIEXPORT jstring JNICALL
Java_bjsasc_com_testndkbuild_NdkJniUtils_getTestString(JNIEnv *env, jobject instance) {

    // TODO


    return (*env)->NewStringUTF(env, "");
}

JNIEXPORT jstring JNICALL
Java_bjsasc_com_testndkbuild_NdkJniUtils_test(JNIEnv *env, jobject instance) {

    // TODO


    return (*env)->NewStringUTF(env, "");
}
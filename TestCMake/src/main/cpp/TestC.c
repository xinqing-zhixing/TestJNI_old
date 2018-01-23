//
// Created by pc on 2017/8/10.
//
#include <jni.h>
#include "LogUtils.h"
#include <android/log.h>

int globalVariable = 111;

JNIEXPORT jstring JNICALL Java_hu_mobile_testcmake_TestCMakeActivity_stringFromC(JNIEnv *env, jobject instance) {

//    LOGI("-----testC");
//    LOGE("-----testC： %s","测试");
//    __android_log_print(ANDROID_LOG_INFO,"JNI","-----testC：%s","测试");

    return (*env)->NewStringUTF(env, "Hello from C");
}

JNIEXPORT void JNICALL
Java_hu_mobile_testcmake_TestCMakeActivity_testPointer(JNIEnv *env, jobject instance) {
    int  var1 = 21;
    char var2[] = "test char[] 测试";

    int *pointer1 = &var1;
    char *pointer2[18] = {
            "Zara Ali",
            "Hina Ali",
            "Nuha Ali",
            "Sara Ali",
    };

    char *character = "我";

    sizeof(character);
    __android_log_print(ANDROID_LOG_INFO,"jni","var1 变量的地址： %p  变量的值：%d", &var1 ,var1 );
    __android_log_print(ANDROID_LOG_INFO,"jni","var2 变量的地址： %p  变量的值：%s", &var2 ,var2 );
    __android_log_print(ANDROID_LOG_INFO,"jni","pointer1 指针自己的内存地址： %p 指针指向的内存地址：%p  变量的值：%d", &pointer1 ,pointer1 ,*pointer1);
    __android_log_print(ANDROID_LOG_INFO,"jni","pointer2 指针自己的内存地址： %p 指针指向的内存地址：%p  变量的值：%s", &pointer2 ,pointer2 ,*pointer2);

    __android_log_print(ANDROID_LOG_INFO,"jni","character 变量的值：%s", character );
}

char * testExtern(){
    return "测试 extern 关键字 ";
}

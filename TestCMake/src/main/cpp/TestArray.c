//
// Created by pc on 2017/8/23.
//
#include <jni.h>
#include <android/log.h>

JNIEXPORT void JNICALL
Java_hu_mobile_testcmake_TestCMakeActivity_testArray(JNIEnv *env, jobject instance) {
    int i = 0;
    char *str = "Hello";
    char arrayStr[] = "Hello";

    __android_log_print(ANDROID_LOG_INFO,"jni","数组-----%p",&arrayStr);
    __android_log_print(ANDROID_LOG_INFO,"jni","数组-----%p",&arrayStr[0]);
    __android_log_print(ANDROID_LOG_INFO,"jni","数组-----%p",arrayStr);

    __android_log_print(ANDROID_LOG_INFO,"jni","字符串指针-----%x",&str);//c334c258
    __android_log_print(ANDROID_LOG_INFO,"jni","字符串指针-----%x",str);//7ce267fc 指针，指向字符串的首内存（H）
    __android_log_print(ANDROID_LOG_INFO,"jni","字符串指针-----%x",*str);//48
    __android_log_print(ANDROID_LOG_INFO,"jni","字符串指针-----%x",&*str);//7ce267fc 字符串首内存的指针值


    __android_log_print(ANDROID_LOG_INFO,"jni","字符串指针-----%s",str);//Hello
    __android_log_print(ANDROID_LOG_INFO,"jni","字符串指针-----%d", sizeof(&str));//8
    __android_log_print(ANDROID_LOG_INFO,"jni","字符串指针-----%s",&str);
    __android_log_print(ANDROID_LOG_INFO,"jni","字符串指针-----%s",&*str);//Hello
    __android_log_print(ANDROID_LOG_INFO,"jni","字符串指针-----%s",*&str);//Hello


    __android_log_print(ANDROID_LOG_INFO,"jni","字符串指针-----%c",str[0]);//Hello
    char a = 0xffffffff;
    __android_log_print(ANDROID_LOG_INFO,"jni","字符串指针-----:%u",a);//

}
//
// Created by pc on 2017/8/15.
//
#include <jni.h>
#include <android/log.h>

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * 指针函数必须在调用它的函数之前定义（写在调用它的函数前面），否则不能编译通过
 * @return
 */
char * testPointFunction(){
    return "这是一个指针函数";
}
extern char * testExtern();
extern int globalVariable;
JNIEXPORT void JNICALL Java_hu_mobile_testcmake_TestCMakeActivity_testVariable(JNIEnv *env, jobject instance) {
    char *p_c = "我";
    int *p_i = &globalVariable;
    __android_log_print(ANDROID_LOG_INFO,"jni","----- int a=%d",globalVariable);
    __android_log_print(ANDROID_LOG_INFO,"jni","-----int sizeof=%d", sizeof(globalVariable));
    __android_log_print(ANDROID_LOG_INFO,"jni","-----char * sizeof=%d", sizeof(p_c));
    __android_log_print(ANDROID_LOG_INFO,"jni","-----int * sizeof=%d", sizeof(p_i));
    __android_log_print(ANDROID_LOG_INFO,"jni","-----int * 指针指向内存地址=%d  指针指向的值=%d", p_i,*p_i);
    __android_log_print(ANDROID_LOG_INFO,"jni","-----char * 指针指向内存地址=%p  指针指向的值=%s", p_c,p_c);

    __android_log_print(ANDROID_LOG_INFO,"jni","-----函数=%d", testFunction());
    /* 一个指向char的指针 */
    __android_log_print(ANDROID_LOG_INFO,"jni","-----*testPointFunction函数指针=%p", testPointFunction());
    __android_log_print(ANDROID_LOG_INFO,"jni","-----*testPointFunction函数=%s", testPointFunction());
    __android_log_print(ANDROID_LOG_INFO,"jni","-----*testExtern函数=%s", testExtern());



    if (globalVariable == 111){
        __android_log_print(ANDROID_LOG_INFO,"jni","-----测试if");
    }

    int i=10;
    int *j = &i;
    __android_log_print(ANDROID_LOG_INFO,"jni","-----测试指针&i=%p", &i);
    __android_log_print(ANDROID_LOG_INFO,"jni","-----测试指针j=%p", j);
    __android_log_print(ANDROID_LOG_INFO,"jni","-----测试指针*j=%d", *j);

}


int testFunction(){
    return 1;
}



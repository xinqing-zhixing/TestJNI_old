//
// Created by pc on 2017/8/15.
//
#include <jni.h>
#include <android/log.h>

JNIEXPORT void JNICALL
Java_hu_mobile_testcmake_TestCMakeActivity_testDataType(JNIEnv *env, jobject instance) {

    //整数类型
    char _char = 'a';
    __android_log_print(ANDROID_LOG_INFO,"jni","_char sizeof=%d", sizeof(_char));
    unsigned char _unsignedChar = 'b';
    __android_log_print(ANDROID_LOG_INFO,"jni","_unsignedChar sizeof=%d", sizeof(_unsignedChar));
    signed char _signedChar = 'c';
    __android_log_print(ANDROID_LOG_INFO,"jni","_signedChar sizeof=%d", sizeof(_signedChar));
    int _int = 1;
    __android_log_print(ANDROID_LOG_INFO,"jni","_int sizeof=%d", sizeof(_int));
    unsigned int _unsignedInt = 2;
    __android_log_print(ANDROID_LOG_INFO,"jni","_unsignedInt sizeof=%d", sizeof(_unsignedInt));
    short _short = 3;
    __android_log_print(ANDROID_LOG_INFO,"jni","_short sizeof=%d", sizeof(_short));
    unsigned short _unsignedShort = 4;
    __android_log_print(ANDROID_LOG_INFO,"jni","_unsignedShort sizeof=%d", sizeof(_unsignedShort));
    long _long = 5; //32位系统与64位系统的存储大小有差别
    __android_log_print(ANDROID_LOG_INFO,"jni","_long sizeof=%d", sizeof(_long));
    unsigned long _unsignedLong = 6; //32位系统与64位系统的存储大小有差别
    __android_log_print(ANDROID_LOG_INFO,"jni","_unsignedLong sizeof=%d", sizeof(_unsignedLong));

    long int _longInt = 7; //32位系统与64位系统的存储大小有差别
    __android_log_print(ANDROID_LOG_INFO,"jni","_longInt sizeof=%d", sizeof(_longInt));
    long long _longLong = 8;
    __android_log_print(ANDROID_LOG_INFO,"jni","_longLong sizeof=%d", sizeof(_longLong));


    //浮点类型
    float _float = 9;
    __android_log_print(ANDROID_LOG_INFO,"jni","_float sizeof=%d", sizeof(_float));
    double _double = 10;
    __android_log_print(ANDROID_LOG_INFO,"jni","_double sizeof=%d", sizeof(_double));
    long double _longDouble= 11; //32位系统与64位系统的存储大小有差别
    __android_log_print(ANDROID_LOG_INFO,"jni","_longDouble sizeof=%d", sizeof(_longDouble));
}

#include <jni.h>
#include <string>
#include <android/log.h>
#include "LogUtils.h"

extern "C"
JNIEXPORT jstring JNICALL Java_hu_mobile_testcmake_TestCMakeActivity_stringFromCPP(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT void JNICALL Java_hu_mobile_testcmake_TestCMakeActivity_testCppLog(JNIEnv *env, jobject instance) {
    //打印一个简单Info级别的日志 对应Java的Log.i("JNI","This is log")
    __android_log_print(ANDROID_LOG_INFO,"-----JNI","This is C++ log");
    //打印格式化字符串 这里使用的是C语言中printf中的格式。关于C中的printf格式化输出可自行百度，文档非常多。
    int i=5;
    __android_log_print(ANDROID_LOG_INFO,"-----JNI","This is C++ log i=%d",i);

    printf("-----测试 printf");
    LOGW("This is C++ log");
    LOGE("This is C++ log i = %d",i);

}



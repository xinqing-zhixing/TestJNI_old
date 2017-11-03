#include <jni.h>
#include <string>
#include <stdio.h>

extern "C"
JNIEXPORT jstring JNICALL Java_bjsasc_com_testjni_TestCMakeActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    printf("-----var1 变量的地址： %p\n", &hello  );
    return env->NewStringUTF(hello.c_str());
}


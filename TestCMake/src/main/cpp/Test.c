//
// Created by pc on 2017/8/10.
//
#include <jni.h>
#include <stdio.h>

int main ()
{
    int  var1;
    char var2[10];

    printf("var1 变量的地址： %p\n", &var1  );
    printf("var2 变量的地址： %p\n", &var2  );

    return 0;
}

JNIEXPORT jstring JNICALL
                  Java_bjsasc_com_testjni_TestCMakeActivity_getTestString(JNIEnv *env, jobject instance) {

    // TODO


    return (*env)->NewStringUTF(env, "");
}
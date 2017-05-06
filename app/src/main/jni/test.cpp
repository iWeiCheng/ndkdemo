//
// Created by Administrator on 2017/5/5.
//
#include "jni.h"
#include "com_jiajun_dan_ndkdemo_MyJni.h"

JNIEXPORT jstring JNICALL Java_com_jiajun_dan_ndkdemo_MyJni_getString
        (JNIEnv *env, jclass jz){

    return env->NewStringUTF("this is jni , this is my new life!");
}
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_naver_mei_sdk_gif_NativeNeuQuant */

#ifndef _Included_com_naver_mei_sdk_core_gif_encoder_NativeNeuQuant
#define _Included_com_naver_mei_sdk_core_gif_encoder_NativeNeuQuant
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_naver_mei_sdk_gif_NativeNeuQuant
 * Method:    init
 * Signature: ([BII)V
 */
JNIEXPORT void JNICALL Java_com_naver_mei_sdk_core_gif_encoder_NativeNeuQuant_init
        (JNIEnv *, jobject, jbyteArray, jint, jint);

/*
 * Class:     com_naver_mei_sdk_gif_NativeNeuQuant
 * Method:    process
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_naver_mei_sdk_core_gif_encoder_NativeNeuQuant_process
        (JNIEnv *, jobject);

/*
 * Class:     com_naver_mei_sdk_gif_NativeNeuQuant
 * Method:    map
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_com_naver_mei_sdk_core_gif_encoder_NativeNeuQuant_map__III
        (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_naver_mei_sdk_gif_NativeNeuQuant
 * Method:    map
 * Signature: ([B)Lcom/naver/mei/sdk/gif/MapResult;
 */
JNIEXPORT jobject JNICALL Java_com_naver_mei_sdk_core_gif_encoder_NativeNeuQuant_map___3B
        (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_naver_mei_sdk_gif_NativeNeuQuant
 * Method:    mapByQuality
 * Signature: ([BI)Lcom/naver/mei/sdk/gif/MapResult;
 */
JNIEXPORT jobject JNICALL Java_com_naver_mei_sdk_core_gif_encoder_NativeNeuQuant_mapByQuality
        (JNIEnv *, jobject, jbyteArray, jint);

#ifdef __cplusplus
}
#endif
#endif

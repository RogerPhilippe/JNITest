#include <jni.h>        // JNI header provided by JDK
#include <stdio.h>      // C Standard IO Header
#include "HelloWorldJNI.h"   // Generated
#include "minha_biblioteca.hpp"

// Implementation of the native method sayHello()
JNIEXPORT jint JNICALL Java_HelloWorldJNI_add(JNIEnv *, jobject, jint a, jint b) {
   return add(a, b);
}

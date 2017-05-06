# ndkdemo
ndk编程实例入门
对于如何创建jni，其实很简单，在.Java文件中声明native方法 -> 编译.java文件得到.class文件 -> 用javah命令生成.h文件 -> 创建一个.c或者.cpp文件，include刚生成的.h文件,然后再实现里面的方法 -> 通过ndk-build(这个需要Android.mk文件和Application.mk文件)或者cmake(需要CMakeLists.txt)方式或者直接这篇文章讲的来生成.so文件，供java层调用。

不使用ndk-build命令，直接通过android studio编译的方式来创建jni

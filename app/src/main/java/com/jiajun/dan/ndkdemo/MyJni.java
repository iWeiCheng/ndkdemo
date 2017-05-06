package com.jiajun.dan.ndkdemo;

/**
 * Created by danjj on 2017/5/5.
 * 0-0
 */
public class MyJni {
    static {
        System.loadLibrary("myLib");
    }
    public native static String getString();
}

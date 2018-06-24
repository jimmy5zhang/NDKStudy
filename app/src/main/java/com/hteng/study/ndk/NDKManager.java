package com.hteng.study.ndk;


import com.hteng.study.utils.Constant;

import java.util.Date;
import java.util.Random;
import java.util.UUID;

/**
 * Created by jimmyzhang on 2018/6/18.
 */

public class NDKManager {

    /*
     * 加载so库文件
     */
    static {
        System.loadLibrary("NDKManager");
    }

    public String key = Constant.TAG;

    public static int count = 5;

    public static native String getString();

    public native String getStringFomc();

    public native String accessField();

    public native void accessStaticField();

    public native void accessMethod();

    public native void accessStaticMethod();

    public int getRandInt(int maxNum) {
        return new Random().nextInt(maxNum);
    }

    public static String getUuid() {
        return UUID.randomUUID().toString();
    }

    public native Date accessConstructor();

}

package com.hteng.study.activity;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;

import com.hteng.study.ndk.NDKManager;
import com.hteng.study.ndk.R;
import com.hteng.study.utils.Constant;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Log.i(Constant.TAG, "getString()：" + NDKManager.getString());
        NDKManager ndkManager = new NDKManager();
        Log.i(Constant.TAG, "getStringFomc()：" + ndkManager.getStringFomc());
        Log.i(Constant.TAG, "key修改前：" + ndkManager.key);
        ndkManager.accessField();
        Log.i(Constant.TAG, "key修改后：" + ndkManager.key);
        Log.i(Constant.TAG, "count修改前：" + NDKManager.count);
        ndkManager.accessStaticField();
        Log.i(Constant.TAG, "count修改后：" + NDKManager.count);
        ndkManager.accessMethod();
        ndkManager.accessStaticMethod();
        ndkManager.accessConstructor();
    }
}

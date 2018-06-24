# NDKStudy
NDK Study


1、构建ndk
- $  ndk-build

2、清空构建ndk
- $  ndk-build clean

3、生成class文件
- $  javac -encoding UTF-8 -d . com/hteng/study/ndk/NDKManager.java

4、生成.h头文件
- $  javah com.hteng.study.ndk.NDKManager

5、获取方法签名
- $ javap -s -p com.hteng.study.ndk.NDKManager
# README

```txt
root
│                 │.clang-format 代码格式化设置 可以按照自己风格改
│                 │.gitignore    Git忽略文件配置
│                 │CMakeLists.txt 顶层CMake构建文件 我写的几乎不用动
│                 │mspm0g350x_base.cmake  MSPM0基础配置文件,在里面需要修改路径
│                 │README.md     本文件
│                 │run_syscfg_main.bat  运行syscfg脚本
│                 |---
├─.vscode         |VSCode配置目录，有调试设置，task设置
├─build           |构建输出目录 里面有`compile_commands.json`（clangd）
├─Core            |核心源代码目录 但是这个好像分的没有啥必要
│  ├─Inc          |略
│  └─Src          |略
├─Flash           |烧录脚本及相关配置，需要阅读一下，现在写的一般不用改
├─FreeRTOS        |FreeRTOS实时操作系统源码
├─SysConfig       |TI系统配置文件，ti生成的文件保存到这里
└─User            |---
    ├─Alg         |算法 / DSP
    ├─Bsp         |板载支持包
    ├─Drv         |驱动层 /设备层
    ├─Mid         |中间层
    └─App         |应用层 / 混编接口层

```
> 对这几个层的理解是 板载支持包完全是按照芯片引脚等等信息来写一层封装，在BSP的基础上，一点点的封装出对应的驱动/设备Drv，然后多个驱动/设备Drv连接起来，这就是中间层Mid。应用层就是把Mid和Drv的东西都拎出来，变成具体的任务。算法Alg就是穿插在这里面的。
>
> 也就是说，移植工程只需重写BSP的接口，就可以完整的用上之前的工程。那就得做到尽可能的解耦，以及树状结构，还有良好的封装。
>
> 这里面的bat文件，只需要双击就可以运行；拖进命令行也可以运行；使用终端，运行任务，选择给定任务也可以运行

这个工程取自25年电赛国一的ti，里面存在freertos。我把它整理成了一种类似STM32的文件样式，写了一个具体的操作指南

## 拿到工程要干嘛

在配置好cmake整个开发环境的基础上

打开 `mspm0g350x_base.cmake`

```bash
# 这一行要看你用SDK的安装路径去更改，改成你用的SDK的路径
set(MSPM0_SDK_PATH  D:\\Users\\admin\\Desktop\\work\\Toolchain\\ti\\mspm0_sdk_2_07_00_05)
```

同时要修改`run_syscfg.bat`这个文件，改成自己的路径

拿到一个新工程，或者转移了文件路径，要删掉vscode中原有的build目录，重新配置生成cmake，工具链选择arm_gcc，配置和编译应该都会成功

## 编译烧录调试

编译：使用cmake

烧录：使用JLink或者OpenOCD都写好了烧录脚本，几乎可以移植了直接用还不需要修改对应的文件名

说实话就得用JLink 我用OpenOCD会锁芯片（JLink，需要提前配置环境变量+安装JLink）

调试：写好了调试器模板OpenOCD和JLink的都有 （OpenOCD没有测试过，但是烧录STM32时无问题）

## 如何开发

1. 修改成适合自己电脑的一些配置文件
2. 严格按照四层结构去写，然后写完整的doxygen注释 （每个人的代码都有自己的小习惯 在每个文件开头注明author等等）
3. 编译烧录调试都使用vscode中的内容
4. 看明白这俩cmake（生成的），以及这些东西都是干啥的
5. 规范书写，多用git
6. 学会c/cpp混合编程，会写类，能面向对象编程

### 因为底层驱动涉及cpp的class等东西，有两种解决方案

1. 让main.c以cpp格式编译，所有问题不需要管，但是你只能在官方生成的代码里面的，main.cpp中进行操作，如果使用freertos同理
2. 严格在每一个.c .cpp中写接口转接文档，每个不能调用的东西都进行接口转接。

我这边选择的第二个

写接口转接文档，发现在嵌入式中，只需要给`main.c`进行转接，使用`api_main`来当作提取出来的main即可。这样写的中断回调 初始化 while循环都没啥问题

HAL库也早就写好了cpp调用c的`extern "C"`内容

作为c调用cpp的转接cpp文件的就写`api_xxxx.cpp`和`api_xxx.h` 作为区分 用**`h`**

正常cpp文件为：`xxx_yyyy.cpp` 和 `xxx_yyyy.hpp` 作为区分 用**`hpp`**

正常c文件为：`xxx_yyyy.c` 和 `xxx_yyyy.h` 用且只能用**`h`**

`xxx为 app mid bsp drv alg`

多去试试新的写法

# 最终迭代成使用CMAKE，工程使用C++书写，开盒即用
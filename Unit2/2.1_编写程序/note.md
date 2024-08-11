## 2.1 编写程序

下面这个是一个简单的输出程序
```
#include <stdio.h>

int main(void)

{
    printf("to c, or not to c :that is the question.\n");
    return 0;
}
```
细分介绍：

#include<stdio.h>
作用：它 ‘包含’ 了C语言库的标准输入/输出库的相关信息。

int main(void)
说明：所有的可运行程序都被包含在main函数里面，这个代表主程序

printf
说明：这个函数来自于标准库的输入/输出库，它代表的意思是输出

\n
说明：告诉printf函数执行玩消息显示后要进行换行操作

return 0
说明：表示终止程序时会向操作系统返回值0


对于一个C程序来说，包含下列3个步骤：
1、预处理
2、编译
3、链接

编译C程序的指令：
```
% cc -o pun pun.c
```
启动程序
```
% ./pun
```
补充知识：GCC编译器（略）
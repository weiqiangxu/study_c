#include <stdio.h>
 
int main()
{
    // 程序的第一行 #include <stdio.h> 是预处理器指令，
    // 告诉 C 编译器在实际编译之前要包含 stdio.h 文件。

    // int main() 是主函数，程序从这里开始执行

    // stdio.h 是一个头文件 (标准输入输出头文件) , 
    // #include 是一个预处理命令，用来引入头文件
    /* 我的第一个 C 程序 */
    // printf() 函数在 "stdio.h" 头文件中声明
    printf("Hello, World! \n");
    // return 0; 语句用于表示退出程序。
    return 0;


    // 执行c语言 gcc hello.c
    // gcc hello.c -o hello.out

}
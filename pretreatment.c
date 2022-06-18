#include <stdio.h> // 告诉CPP从系统库中获取stdio.h
// #define MAX_ARRAY_LENGTH 20 // 定义宏(常量)
// 告诉CPP从本地目录之中获取myheader.h 并添加内容到当前的源文件之中
// #include "myheader.h" 



int main(){

    printf("File :%s\n", __FILE__ );
    printf("Date :%s\n", __DATE__ );
    printf("Time :%s\n", __TIME__ );
    printf("Line :%d\n", __LINE__ );
    printf("ANSI :%d\n", __STDC__ );

    return 0;
}
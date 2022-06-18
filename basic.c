#include <stdio.h>


struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book = {"C 语言", "RUNOOB", "编程语言", 123456};

int main()
{
    int age;
    int apples;
    int oranges;
    int fruit;
    apples = 1;
    oranges = 2;
    fruit = apples + oranges;
    printf("%d",fruit);
    


    // char - 一个字节大小,8位,8bit,255 - -128~127

    // float - 4字节
    // double - 8字节

    int var_runoob = 10;
    // 定义指针变量
    int *p;

    p = &var_runoob;

    printf("%p",p);

    printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title, book.author, book.subject, book.book_id);


    return 0;
}



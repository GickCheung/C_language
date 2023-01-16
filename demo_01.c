//Title:第一个C程序
#include<stdio.h>
//一个Project中可以有多个.c文件，但只能有一个main函数。
int main()
//C语言从主函数（main函数）的第一行开始执行
{
	//printf是库函数，要引用头文件stdio.h
	printf("Hello World!\n");

	return 0;
}
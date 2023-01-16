//Title: scanf在VS2022中的使用
#define _CRT_SECURE_NO_WARNINGS//在VS2022中使用scanf必须在程序的第一行有这句语句
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;

	scanf("%d", &a);
	b = a + 1;

	printf("%d\n", b);
	return 0;
}
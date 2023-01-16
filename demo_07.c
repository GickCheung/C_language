#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1 = 0;

	printf("学习C语言。\n");
	printf("是否要好好学习？是回答1，否回答0\n");
	scanf("%d", &num1);
	num1++;

	if (num1 > 1)//选择语句
	{
		printf("收获好offer");
	}
	else
	{
		printf("进厂打螺丝");
	}

	return 0;
}
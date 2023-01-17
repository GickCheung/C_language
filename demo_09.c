#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int add(int a, int b)//函数，定义函数add
{
	int z = 0;
	z = a + b;

	return z;
}
int main()
{
	//以下代码实现用函数将num1和num2相加
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d",&num1,&num2);

	int sum = add(num1, num2);//使用add函数将num1和num2为sum
	printf("%d\n", sum);

	return 0;
}

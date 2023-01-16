//Title: 数据的类型以及测试
#include<stdio.h>
int main()
{
	// char			字符数据类型
	// short		短整型
	// int			整型
	// long			长整型
	// long long	更长的整型
	// float		单精度浮点型
	// double		双精度浮点型

	//sizeof是一个操作符，计算类型或者变量所占空间的大小
	//以下是计算各种数据类型的大小代码
	printf("%d\n", sizeof(char)); 
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	//int和long结果都是4，在C语言标准中，sizeof(long)>=sizeof(int),调试显示的结果是=
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	return 0;
}
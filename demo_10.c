#include<stdio.h>
int main()
{
	//定义了一个整型的数组，并初始化赋值
	int num[10] = {1,2,3,4,5,6,7,8,9,10};
	//定义了一个字符型的数组，不完全初始化，剩余两个元素为0
	char num1[5] = {'a', 'b', 'c'};
	//数组是用下标来访问的，例如int num的下标是0~9，一一对应1~10每个元素
	
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", num[i]);
		i++;
	}

	return 0;
}
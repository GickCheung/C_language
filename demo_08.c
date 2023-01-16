#include<stdio.h>
int main()
{
	int time = 0;
	printf("坚持学习100天\n");
	
	while (time < 100)//循环语句
	{
		printf("已经坚持学习%d天\n", time);
		time++;
	}

	if (time == 100)
	{
		printf("收获好offer");
	}
	else
	{
		printf("进厂打螺丝");
	}


	return 0;
}
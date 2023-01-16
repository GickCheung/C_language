	//Title: 变量的作用域和生命周期
//局部变量在函数体{}内定义的
//全局变量在函数体{}外定义的
//当局部变量和全局变量名字冲突是，局部变量优先使用（不建议同名）
#include<stdio.h>
int num = 100;//全局变量的作用域是整个项目
int main()
{
	{
		int age = 20;//局部变量的作用域就是变量所在的局部范围
		printf("age = %d\n", age);
		printf("num = %d\n", num);
	}
	num++;

	printf("num = %d\n", num);

	return 0;
}
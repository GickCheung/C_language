//Title: 常量
#include<stdio.h>
int main()
{
	15;//字面常量，是常数，字符，字符串
	'a';
	'abc';

	const int num = 100;//const修饰的常变量，本质是变量，具有常属性
	printf("%d\n", num); 
	
	#define max 10000//#define定义的标识符常量，max=10000，不能更改
	printf("%d\n", max);

	//枚举常量，可以一一列举的常量
	enum  sex//这个枚举常量的变量的未来取值有man和woman两种
	{
		man,
		woman,	
	};

	printf("man = %d\n", man);
	printf("woman = %d\n", woman);//枚举常量默认从0开始，除非赋初值不一样，初值之后不能改变

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//转义字符

//int main()
//{
//	printf("%c\n", '\'');
//	for (;; )
//	{
//		printf("\a");
//	}
//	printf("\a");
//	
//	return 0;
//
//}
//int main()
//{
//	//printf("%c\n", 88);//ASCII码为88时，对应的字符为x
//	//printf("%c\n", '\130');//\130表八进制数字，\130=64+3*8=88，对应的字符为x
//	//printf("%c\n", '\x58');//\x58表16进制数，5*16+8=88，同样对应x
//	printf("%d\n", strlen("c:\test\628\test.c"));//转义字符算作一个字符，
//	//故  c  :  \t  e  s  t  \62  8（8进制数中不可能出现8，所有是一个独立字符）  \t  e  s  t  .  c  共14个字符\0作为结束标志不算在内

//选择语句

//int main()
//{
//	int input = 0;
//	printf("要好好学习吗（1/0）？");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("光明的未来\n");
//	else
//		printf("种地\n");
//	return 0;
//}

//while循环语句

//int main()
//{
//	int line = 0;
//	while (line <100)
//	{
//		printf("write code:%d\n",line);
//		line+=1;
//	}
//	//if (line ==100)
//	//printf("good offer\n");
//	return 0;
//}
// 
// 
//函数

//实现两数相加
//int main()
//{
//	int num1 = 0, num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	printf("%d\n", num1 + num2);
//
//	return 0;
//}

//用函数实现两数相加
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int main()
//{
//	int num1 = 0, num2 = 0,sum=0;
//	scanf("%d %d", &num1, &num2);
//	sum=Add(num1,num2),
//	printf("%d\n", sum);
//
//	return 0;
//}

//数组

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//完全初始化，数组下标从零开始
//	char ch[5] = { 'a','b','c' };//不完全初始化，从4开始都是\0（等价于0
//	//访问数组需要知道下标
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//		
//	return 0;
//
//}

//操作符

//算术操作符：+-*/（）%（
//移位操作符:>>  <<
int main()
{
	//float a = 9 / 4;//除法两边都是整数，则为整数除法，计算结果不会保留小数部分
	//若要使用浮点除法，把一个数变为浮点数即可
	//printf("%f", a);
	int a = 2;
	printf("%d", a << 1);//位移操作符移动的是内存空间中的二进制位，左移后在空位补0
	

	return 0;
}
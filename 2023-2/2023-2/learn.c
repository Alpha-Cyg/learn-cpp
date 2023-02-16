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
//int main()
//{
//	//float a = 9 / 4;//除法两边都是整数，则为整数除法，计算结果不会保留小数部分
//	//若要使用浮点除法，把一个数变为浮点数即可
//	//printf("%f", a);
//	int a = 2;
//	printf("%d", a << 1);//移位操作符移动的是内存空间中的二进制位，左移后在空位补0
//	
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	printf("%d", ~a);
	//~按位取反操作符a=0二进制表示为00000000000000000000000000000000
	//取反后应为11111111111111111111111111111111
	//但整数在内存中是以补码形式存储的
	// a为非负数，故补码即为原码，
	// 那么11111111111111111111111111111111对应的原码应为？
	//以-1为例：原码为10000000000000000000000000000001
	//第一位为符号位，后面的为数值位，表示范围-(2^n-1)~2^n-1
	//有正负两种零，加减计算复杂
	// 
	//反码：正数不变，负数符号位不变，数值位各位取反，在计算机中很少使用
	// 
	//补码，正数不变，负数符号位不变，数值位各位取反再加一，加减运算统一成加法
	//-1的补码为11111111111111111111111111111111
	//0在补码中是唯一的，表示范围-2^n~2^n-1
	//所以~a对应的补码为11111111111111111111111111111111，真值为-1
	//如果a=-1呢？
	//-1的补码为11111111111111111111111111111111
	// 各位取反后为00000000000000000000000000000000
	// 补码00000000000000000000000000000000对应的真值自然为零
	//
//	return 0;
//}


//操作符++
//int main()
//{
//	int a = 10, c = 10;
//	int b = ++a, d = c++;
//
//	printf("%d %d %d %d", a, b,c,d);
//	return 0;
//}
// ++分为前置++和后置++，例如a++和++a
// 两者的效果都是使变量加一，前置++加一发生在取值之前，取得是加一后的值
// 后置++是加一发生在取值之后，取得是加一前的值
// 例如a=0，b=a++结果为b=0，a=1,b取加一前的值
// a=0，b=++a结果为b=1，a=1，b取加一后的值
//

////操作符，强制类型转换（type）
//int main()
//{
//	int a = 3.14;//触发警报warning C4244: “初始化”: 从“double”转换到“int”，可能丢失数据
//	int a = (int)3.14;//将3.14强制转换成int类型，忽视可能引起的数据丢失
//	printf("%d", a);//尽量不要用
//	return 0;
//}

//逻辑操作符逻辑与&&（a&&b即为a并且b，ab都为1输出才为一）和逻辑或||
//int main()
//{
//	int a = 1, b = 2;
//	int c = (a == 1 && b == 2);
//	printf("%d", c);
//	return 0;
//}

//条件操作符（三目操作符）exp1？exp2：exp3
//若exp1成立/为真，则计算exp2的结果且输出
//若exp1不成立/为假，则计算exp3的结果且输出
//用条件操作符计算两数中的较大值
//int main()
//{
//	int a = 1, b = 2, max = 0;
//	max = a > b ? a : b;
//	printf("%d", max);
//	return 0;
//
//}

//逗号表达式：逗号隔开的一串表达式
//从左向右依次计算各个表达式；输出最后一个表达式的结果
//
//int main()
//{
//	int a = 1, b = 2, c = 3, d = 4;
//	d = (a++, b = ++c - a, d = d + b);
//	printf("%d", d);
//	return 0;
//}

//static-静态的
// 1.修饰局部变量
// 2.修饰全局变量
// 3.修饰函数
//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//static修饰的局部变量生命周期变为全局，但作用域和普通的局部变量一样,本质上是改变了变量的存储类型
//static修饰的局部变量主要影响全局变量的跨文件访问，即主要影响其作用域,其作用域从整个工程变为本源文件，只在本源文件内才可以被访问
//其他源文件需要跨文件调用它只能通过它所在源文件的函数间接访问，这也是保护数据的一种方式，但其生命周期不变，依然为从程序开始到程序结束
//static修饰的函数，使得函数只能在自己所在的源文件内部使用，本质上是将函数的外部连接属性变成了内部连接属性
// 


//define是一个预处理指令
//1.define定义符号（常量）
//
//#define A 1000//不需要；
//int main()
//{
//	printf("%d\n", A);
//	return 0;
//}

//define定义宏
// 
//#define add(x,y) x+y//应该用（(x)+(y)）
//int main()
//{
//	printf("%d\n", add(2, 3));
//	printf("%d\n", 4*add(2, 3));//define定义的宏是直接替换的，相当于4*2+3
//	return 0;
//}

//指针
//指针的本质是地址（存储地址的变量）
// 
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* pa = &a;//pa是用来存放地址的变量，即指针变量,*前的int表明了指针所指向的变量的数据类型
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* pa = &a;
//	*pa = 20;//等价于a=20,*为解引用操作，*pa即为通过pa存储的地址找到地址上的变量
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}//指针的大小都是相同的，与指针对应的变量类型无关，32位平台上固定为4byte，64位平台上固定为8byte


//结构体struct
//用来创建可以描述复杂对象的新类型

//例如创建一个学生档案

//struct stu
//{
//	char name[20];
//	int age;
//	int stu_number;
//	double gpa;
//};
//
////创建一本书的信息
//struct book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
////结构体创建、初始化、访问
//
//int main()
//{
//	struct stu s = { "张三",20,1919810,84.7 }; //结构体创建、初始化
//	printf("%s %d %d %lf", s.name, s.age, s.stu_number, s.gpa);//结构体元素的访问
//	struct stu* ps = &s;
//	printf("%s", (*ps).name);//第二种访问方式：通过指针
//	printf("%s", ps->name);//第三种方式：->左侧必须是结构体指针，右侧是成员变量
//	return 0;
//}
//
//const int  a = 10;
//

//int main()
//{
//	int a = 0;
//	if(2==a)
//		printf("%d\n", 5);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	//while (i <= 100)
//	//{
//	//	if (1 == i % 2)
//	//	{
//	//		printf("%d\n", i);
//	//	}
//	//	i++;
//	//}
//	for (i = 1; i <= 100; i += 2)
//		printf("%d\n", i);
//	return 0;
//}

//switch

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ת���ַ�

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
//	//printf("%c\n", 88);//ASCII��Ϊ88ʱ����Ӧ���ַ�Ϊx
//	//printf("%c\n", '\130');//\130��˽������֣�\130=64+3*8=88����Ӧ���ַ�Ϊx
//	//printf("%c\n", '\x58');//\x58��16��������5*16+8=88��ͬ����Ӧx
//	printf("%d\n", strlen("c:\test\628\test.c"));//ת���ַ�����һ���ַ���
//	//��  c  :  \t  e  s  t  \62  8��8�������в����ܳ���8��������һ�������ַ���  \t  e  s  t  .  c  ��14���ַ�\0��Ϊ������־��������

//ѡ�����

//int main()
//{
//	int input = 0;
//	printf("Ҫ�ú�ѧϰ��1/0����");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("������δ��\n");
//	else
//		printf("�ֵ�\n");
//	return 0;
//}

//whileѭ�����

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
//����

//ʵ���������
//int main()
//{
//	int num1 = 0, num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	printf("%d\n", num1 + num2);
//
//	return 0;
//}

//�ú���ʵ���������
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

//����

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//��ȫ��ʼ���������±���㿪ʼ
//	char ch[5] = { 'a','b','c' };//����ȫ��ʼ������4��ʼ����\0���ȼ���0
//	//����������Ҫ֪���±�
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

//������

//������������+-*/����%��
//��λ������:>>  <<
int main()
{
	//float a = 9 / 4;//�������߶�����������Ϊ�������������������ᱣ��С������
	//��Ҫʹ�ø����������һ������Ϊ����������
	//printf("%f", a);
	int a = 2;
	printf("%d", a << 1);//λ�Ʋ������ƶ������ڴ�ռ��еĶ�����λ�����ƺ��ڿ�λ��0
	

	return 0;
}
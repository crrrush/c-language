#define _CRT_SECURE_NO_WARNINGS

//ע��


#include<stdio.h>


#include<string.h>


//int arr[10]--����һ�����10���������ֵ����� ����char ����float
 //&��λ��
//|��λ��
//��λ���



int Add(int x, int y)
{
	int z = x + y;
	return z;

}



//int main()
//{
//	int num1 = 10;
//	int num2 = 23;
//	int sum = 0;
//	
//	sum = Add(num1, num2);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}


int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d%d", &b, &a);
	sum = Add(a,b);
	printf("sum=%d", sum);





	return 0;
}




//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line<20000)
//	{
//
//
//
//		printf("һ�д���\n");
//		line++;
//
//	}
//	if (line>=20000)
//	{
//		printf("��offer\n");
//	}
//
//	
//
//
//
//	return 0;
//}



//int main()
//{
//	int input = 0;
//	printf("��ѧ����\n");
//	printf("�ú�ѧϰ��(1/0)\n");
//		scanf("%d", &input);
//		if(input ==1)
//	printf("greatoffer\n");
//	else
//		printf("farming\n");
//	return 0;
//}


//int main()
//{
//	printf("(alright\?\?)\n");
//	printf("(alright??)\n");
//	printf("%d\n", strlen("alright\?\?)"));
//	printf("%d\n", strlen("alright??)"));
//	printf("%c\n", '\132');
//	printf("%c\n", '\x61');
//	printf("%c\n", '\41');
//
//	return 0;
//}   //ת���ַ�



//int main()
//{
//	char arrp[] = "\0";
//	char arrq[] = "abc";
//	char arrs[] = { 'a','b','c' ,'\0'};
//	printf("%s\n", arrp);
//	printf("%d\n", strlen(arrp));
//	printf("%d\n", strlen(arrq));
//	printf("%d\n", strlen(arrs));
//
//
//	return 0;
//	
//}


//�ַ�������
//˫��������  "abc";   "123":   "";

//�����ڼ�����ϴ洢��ʱ�򣬴洢���Ƕ�����
	//ASCII ����    a-97 A-65
	//ASCII ��ֵ


//int main()
//{
//	
//	char arrp[]= "abc";//��β����\0---�ַ����Ľ�����־
//	char arrq[] = { 'a','b','c','\0'};
//	printf("%s\n", arrq);
//	printf("%s\n", arrp);
//
//
//
//
//
//	return 0;
//}


//enum-ö�ٹؼ�
//
//
//enum Score
//{
//	zero,
//	one,
//	two
//	//����Ϊö�ٳ���
//};
//
//int main()
//{
//	enum score a = two;//ע�������scoreСд��ͷ
//	printf("%d\n", a);
//	printf("%d\n", one);
//	printf("%d\n", two);
//	printf("%d\n", zero);
//
//
//
//
//	return 1;
//}



//#define gal 123
//
//
//int main()
//{
//	int n = 10;
//	int arr[2] = {0 };
//	printf("%d\n", arr);
//	printf("%d\n", n);
//	printf("%d\n", gal);
//
//
//	return 0;
//}


//int main()
//{
//    const int num = 4;
//	printf("%d\n", num);
//
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include<time.h>

#include<stdlib.h>


//
//int main()
//{
//	int i = 0, j = 0;
//
//	for (i = 1; i <= 9; i++,printf("\n"))
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d �� %d = %d  ", j, i, i * j);
//		}
//	}
//
//
//	
//	return 0;
//}
//

//void menu()
//{
//	printf("��������Ϸ\n");
//	printf("��Ϸ���򣺵��Ի��������1��100֮�е�һ�����֣�\n�ڼ�����������µ����֣��´��˻�����´���С�˵���ʾ\n");
//
//	printf("���ڣ�����1������Ϸ��0�˳���Ϸ\n");
//	printf("�����룺");
//}
//
//
//void game()
//{
//	//���������
//	int rad = rand() % 100 + 1;
//	//printf("%d\n", rad);//���
//
//	int guess = 0;
//	
//	while (1)
//	{
//		scanf("%d", &guess);
//
//		if (guess < rad)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > rad)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶�����\n");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int n = 1;
//
//	srand((unsigned int)time(NULL));//��ʱ���������������
//
//	menu();
//
//	while (n)
//	{
//		scanf("%d", &n);
//
//		switch (n)
//		{
//		default:
//			printf("�����������������\n");
//			break;
//		case 1:
//			game();//������Ϸ
//			break;
//		case 0:
//			printf("�Ƴ���Ϸ��");
//			break;
//		}
//		printf("�����룺");
//	}
//
//
//
//
//	return 0;
//}

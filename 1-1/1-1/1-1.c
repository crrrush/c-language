#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include<string.h>

#include<stdlib.h>

//#define N 101
//
//void save(FILE* p)
//{
//	char str[N] = { 0 };
//
//	if ((p = fopen("ѧ����Ϣ.txt","w+")) == NULL)
//	{
//		printf("�ļ�δ�������Ҳ����ļ�\n");
//		exit(0);
//	}
//
//	printf("������ѧ����Ϣ������ѧ����Ϣ����ѧ�š����������䡢��ַ\n������Ϻ���Ctrl+Z��ֹ����\n");
//	while ((gets(str)) != NULL)
//	{
//		fputs(str, p);
//		fputs("\n", p);
//	}
//	fclose(p);
//}
//
//void read(FILE* p)
//{
//	char str[N + 1] = { 0 };
//	if ((p = fopen("ѧ����Ϣ.txt", "r")) == NULL)
//	{
//		printf("�ļ�δ�������Ҳ����ļ�\n");
//		exit(0);
//	}
//	while (fgets(str, N + 1, p) != NULL)
//	{
//		printf("%s", str);
//	}
//	printf("\n");
//	fclose(p);
//}
//
//int main()
//{
//	FILE* fp = NULL;
//
//	unsigned int n = 0;
//	do
//	{
//		printf("�Ǽ�ѧ����Ϣ\n");
//		printf("�洢ѧ����Ϣ������1\n");
//		printf("��ȡѧ����Ϣ������2\n");
//		printf("�˳�ϵͳ������0\n");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			save(fp);//��txt�ı��д洢ѧ����Ϣ
//			break;
//		case 2:
//			read(fp);//��ȡtxt�ı��д洢��ѧ����Ϣ
//			break;
//		case 0:
//			break;
//		default:
//			printf("����������������룺\n");
//			break;
//		}
//	} while (n);
//
//
//
//	return 0;
//}






















//#define N 10
//struct stu
//{
//	unsigned int num;
//	char name[20];
//	unsigned short age;
//	char address[30];
//};
//
//void Init_stu(struct stu* p,int n)
//{
//	while (n--)
//	{
//		printf("������ѧ�ţ�\n");
//		scanf("%d", &(p->num));
//		printf("������������\n");
//		scanf("%s", &(p->name));
//		printf("���������䣺\n");
//		scanf("%hd", &(p->age));
//		printf("�������ַ��\n");
//		scanf("%s",&(p->address));
//		p++;
//		printf("\n");
//	}
//}
//
////void Init_stu(struct stu* p, int n)
////{
////	while (n--)
////	{
////		printf("������ѧ�ţ�\n");
////		scanf("%d", p->num);
////		printf("������������\n");
////		scanf("%s", p->name);
////		printf("���������䣺\n");
////		scanf("%hd", p->age);
////		printf("�������ַ��\n");
////		scanf("%s", p->address);
////		p++;
////		printf("\n");
////	}
////}
//
//void Print(struct stu* p, int n)
//{
//	while (n--)
//	{
//		printf("ѧ�ţ�%d\n", p->num);
//		printf("������%s\n", p->name);
//		printf("���䣺%d\n", p->age);
//		printf("��ַ��%s\n", p->address);
//		printf("\n");
//	}
//}
//
//
//
//int main()
//{
//	struct stu S[N] = { 0 };
//	Init_stu(S, N);
//
//	Print(S, N);
//
//
//	return 0;
//}

//#define N 100
//
//
//int main()
//{
//	char str[N + 1] = { 0 };
//	//char strtemp[N] = { 0 };
//	//char ch = 0;
//
//	FILE* fp = NULL;
//
//
//	if ((fp = fopen("ѧ����Ϣ.txt", "w+")) == NULL)
//	{
//		printf("�Ҳ����ļ���δ����\n");
//		exit(0);
//	}
//
//
//	while ((gets(str)) != NULL)
//	{
//		fputs(str, fp);
//		fputs("\n", fp);
//	}
//
//	
//
//	//fputs("abc123\nabc123", fp);
//
//	//gets(strtemp);
//
//	//strcat(str, '\n');
//
//	//strcat(str, strtemp);
//
//	//fputs(str, fp);
//	
//	//while ((ch = getchar()) != '\n')
//	//{
//	//	fputc(ch, fp);
//	//}
//	
//
//
//	fclose(fp);
//
//	return 0;
//}
//


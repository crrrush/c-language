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
//	if ((p = fopen("学生信息.txt","w+")) == NULL)
//	{
//		printf("文件未创建或找不到文件\n");
//		exit(0);
//	}
//
//	printf("请输入学生信息，其中学生信息包括学号、姓名、年龄、地址\n输入完毕后按下Ctrl+Z终止输入\n");
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
//	if ((p = fopen("学生信息.txt", "r")) == NULL)
//	{
//		printf("文件未创建或找不到文件\n");
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
//		printf("登记学生信息\n");
//		printf("存储学生信息请输入1\n");
//		printf("读取学生信息请输入2\n");
//		printf("退出系统请输入0\n");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			save(fp);//在txt文本中存储学生信息
//			break;
//		case 2:
//			read(fp);//读取txt文本中存储的学生信息
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误，请重新输入：\n");
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
//		printf("请输入学号：\n");
//		scanf("%d", &(p->num));
//		printf("请输入姓名：\n");
//		scanf("%s", &(p->name));
//		printf("请输入年龄：\n");
//		scanf("%hd", &(p->age));
//		printf("请输入地址：\n");
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
////		printf("请输入学号：\n");
////		scanf("%d", p->num);
////		printf("请输入姓名：\n");
////		scanf("%s", p->name);
////		printf("请输入年龄：\n");
////		scanf("%hd", p->age);
////		printf("请输入地址：\n");
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
//		printf("学号：%d\n", p->num);
//		printf("姓名：%s\n", p->name);
//		printf("年龄：%d\n", p->age);
//		printf("地址：%s\n", p->address);
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
//	if ((fp = fopen("学生信息.txt", "w+")) == NULL)
//	{
//		printf("找不到文件或未创建\n");
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


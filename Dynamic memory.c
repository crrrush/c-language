#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>

#include<stdio.h>

//
//int val = 3;//Ϊ����val��ջ��������һ��ռ�洢����
//char str[] = "abc";//Ϊ����str��ջ��������һ��ռ�洢����


//int main()
//{
//	int n = 10;
//	int* array = (int*)malloc(sizeof(int) * n);//����n���������ݴ�С�������ռ�
//	if (array == NULL)//����Ƿ�����ʧ��
//	{
//		perror("malloc failed");//����ʧ����ʾ
//		exit(-1);//����ʧ�ܣ���������
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		array[i] = i;//��ʱ��������ʹ��
//	}
//
//	free(array);//�ͷŶ�̬�ڴ�
//	array = NULL;//�Ը�ָ���ÿգ���ֹ�Ƿ������ڴ�ռ䣨Ұָ�룩
//
//	return 0;
//}


//int main()
//{
//	int n = 10;
//	int* array = (int*)calloc(n, sizeof(int));//����n�����ʹ�С���ڴ�ռ�
//	if (array == NULL)//����Ƿ�����ʧ��
//	{
//		perror("calloc failed");//����ʧ����ʾ
//		exit(-1);//����ʧ�ܣ���������
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", array[i]);//��ʱ��ӡ�����ѳ�ʼ�������ݣ�ȫ��
//	}
//	printf("\n");
//
//	free(array);
//	array = NULL;
//
//	return 0;
//}



//int main()
//{
//	int n = 10;
//	int* array = (int*)calloc(n, sizeof(int));//����n�����ʹ�С���ڴ�ռ�
//	if (array == NULL)//����Ƿ�����ʧ��
//	{
//		perror("calloc failed");//����ʧ����ʾ
//		exit(-1);//����ʧ�ܣ���������
//	}
//
//	//Σ�յĲ���
//	//array = (int*)realloc(array, 12);//��������ʧ��ʱ���������ͷ�ԭ�ռ䣬���˴��뽫ԭ��ָ��ԭ�ռ��ָ���ÿգ��޷����һ�ԭ�ռ䲢�ͷţ��ڴ�й¶��
//
//	//��ȫ�Ĳ���
//	int* ptr = NULL;
//	ptr = (int*)realloc(array, 12);
//	if (ptr != NULL)//����Ƿ�����ʧ��
//	{
//		array = ptr;//���ݳɹ��ٸ�ֵ����
//	}
//	
//	//...
//
//	free(array);
//	array = NULL;
//
//	return 0;
//}


void test1()
{
	int* ptr = (int*)malloc(sizeof(int));
	//���malloc����ռ�ʧ����ô��ʱptr����NULL
	*ptr = 9;//��ʱ�ͻᷢ��
}

void test2()
{
	int* ptr = (int*)malloc(10 * sizeof(int));
	if (ptr == NULL)
		exit(-1);

	for (int i = 0; i <= 10; i++)
		ptr[i] = i;//��i==10��3ʱ����Խ��

	free(ptr);//ֵ��ע����ǣ���̬�ڴ�ռ��Խ�粢����ֱ�Ӽ����������ǻ���free��ʱ�������������
	//��ʱ�ᱨ�����ƶ����쳣���ʣ������ڷ����������ݺ�Ŀռ�֮��Ĵ���
}

void test3()
{
	int a[10] = { 0 };
	int* p = &a;
	//...
	free(p);//����
}

void test4()
{
	int* ptr = (int*)malloc(sizeof(int));
	if (ptr == NULL)
		exit(-1);
	//...
	free(p);
	free(p);//�ظ��ͷ�
}

void test5()
{
	int* ptr = (int*)malloc(10 * sizeof(int));
	if (ptr == NULL)
		exit(-1);
	//...
	p++;
	//...
	free(p);//ֻ�ͷ���һ�����ڴ�
}

void test6()
{
	int* ptr = (int*)malloc(10 * sizeof(int));
	if (ptr == NULL)
		exit(-1);
	//...
	//�ڴ�й¶
}

int main()
{
	//test2();

	return 0;
}


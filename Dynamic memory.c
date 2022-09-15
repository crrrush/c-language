#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>

#include<stdio.h>

//
//int val = 3;//为变量val在栈区上申请一块空间存储数据
//char str[] = "abc";//为数组str在栈区上申请一块空间存储数据


//int main()
//{
//	int n = 10;
//	int* array = (int*)malloc(sizeof(int) * n);//开辟n个整型数据大小的连续空间
//	if (array == NULL)//检测是否申请失败
//	{
//		perror("malloc failed");//发出失败提示
//		exit(-1);//运行失败，结束程序
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		array[i] = i;//此时当作数组使用
//	}
//
//	free(array);//释放动态内存
//	array = NULL;//对该指针置空，防止非法访问内存空间（野指针）
//
//	return 0;
//}


//int main()
//{
//	int n = 10;
//	int* array = (int*)calloc(n, sizeof(int));//申请n个整型大小的内存空间
//	if (array == NULL)//检测是否申请失败
//	{
//		perror("calloc failed");//发出失败提示
//		exit(-1);//运行失败，结束程序
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", array[i]);//此时打印，是已初始化的数据，全零
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
//	int* array = (int*)calloc(n, sizeof(int));//申请n个整型大小的内存空间
//	if (array == NULL)//检测是否申请失败
//	{
//		perror("calloc failed");//发出失败提示
//		exit(-1);//运行失败，结束程序
//	}
//
//	//危险的操作
//	//array = (int*)realloc(array, 12);//由于申请失败时不会自行释放原空间，而此代码将原先指向原空间的指针置空，无法再找回原空间并释放（内存泄露）
//
//	//安全的操作
//	int* ptr = NULL;
//	ptr = (int*)realloc(array, 12);
//	if (ptr != NULL)//检测是否扩容失败
//	{
//		array = ptr;//扩容成功再赋值回来
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
	//如果malloc申请空间失败那么此时ptr就是NULL
	*ptr = 9;//此时就会发生
}

void test2()
{
	int* ptr = (int*)malloc(10 * sizeof(int));
	if (ptr == NULL)
		exit(-1);

	for (int i = 0; i <= 10; i++)
		ptr[i] = i;//当i==10的3时候发生越界

	free(ptr);//值得注意的是，动态内存空间的越界并不会直接检测出来，而是会在free的时候检测出来并报错
	//此时会报出类似堆区异常访问，或者在访问正常数据后的空间之类的错误
}

void test3()
{
	int a[10] = { 0 };
	int* p = &a;
	//...
	free(p);//报错
}

void test4()
{
	int* ptr = (int*)malloc(sizeof(int));
	if (ptr == NULL)
		exit(-1);
	//...
	free(p);
	free(p);//重复释放
}

void test5()
{
	int* ptr = (int*)malloc(10 * sizeof(int));
	if (ptr == NULL)
		exit(-1);
	//...
	p++;
	//...
	free(p);//只释放了一部分内存
}

void test6()
{
	int* ptr = (int*)malloc(10 * sizeof(int));
	if (ptr == NULL)
		exit(-1);
	//...
	//内存泄露
}

int main()
{
	//test2();

	return 0;
}


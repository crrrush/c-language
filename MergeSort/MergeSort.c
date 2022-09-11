#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

#include<stdlib.h>

#include<time.h>

#include<assert.h>



void Merge(int* a, int* disposal, int left, int right)
{
	if (left >= right)
		return;

	int mid = (left + right) / 2;
	Merge(a, disposal, left, mid);
	Merge(a, disposal, mid + 1, right);

	//选取数据合并
	int Ri = mid + 1;
	int Li = left;
	int i = 0;
	while (Li <= mid && Ri <= right)
	{
		if (a[Li] < a[Ri])//调整升降序
		{
			disposal[left + i] = a[Li];
			Li++;
		}
		else
		{
			disposal[left + i] = a[Ri];
			Ri++;
		}
		i++;
	}
	//将剩下的另一个未拷贝的数组继续拷贝
	while (Li <= mid)
	{
		disposal[left + i] = a[Li];
		Li++;
		i++;
	}
	while (Ri <= right)
	{
		disposal[left + i] = a[Ri];
		Ri++;
		i++;
	}

	//拷贝回原位置
	while (left <= right)
	{
		a[left] = disposal[left];
		left++;
	}
}


// 归并排序递归实现
void MergeSort(int* a, int n)
{
	//申请一块空间用于处理排序数据
	int* disposal = (int*)malloc(sizeof(int) * n);
	if (disposal == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}

	//将处理的过程交给函数模块去递归进行
	Merge(a, disposal, 0, n - 1);


	free(disposal);
	disposal = NULL;
}


// 归并排序非递归实现
void MergeSortNonR(int* a, int n)
{
	//申请一块空间用于处理排序数据
	int* disposal = (int*)malloc(sizeof(int) * n);
	if (disposal == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}

	int gap = 1;//迭代器
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2 * gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;

			//end1越界
			if (end1 >= n)
			{
				break;
			}
			//begin2越界
			if (begin2 >= n)
			{
				break;
			}
			//end2越界
			if (end2 >= n)
			{
				end2 = n - 1;
			}
			//选取数据合并
			int j = i;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])//调升降序
				{
					disposal[j] = a[begin1];
					begin1++;
				}
				else
				{
					disposal[j] = a[begin2];
					begin2++;
				}
				j++;
			}
			while (begin1 <= end1)
			{
				disposal[j] = a[begin1];
				begin1++;
				j++;
			}
			while (begin2 <= end2)
			{
				disposal[j] = a[begin2];
				begin2++;
				j++;
			}

			//拷贝回去
			j = i;
			while (j <= end2)
			{
				a[j] = disposal[j];
				j++;
			}
		}
		gap *= 2;
	}


	free(disposal);
	disposal = NULL;
}

//int main()
//{
//
//	return 0;
//}
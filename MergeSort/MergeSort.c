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

	//ѡȡ���ݺϲ�
	int Ri = mid + 1;
	int Li = left;
	int i = 0;
	while (Li <= mid && Ri <= right)
	{
		if (a[Li] < a[Ri])//����������
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
	//��ʣ�µ���һ��δ�����������������
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

	//������ԭλ��
	while (left <= right)
	{
		a[left] = disposal[left];
		left++;
	}
}


// �鲢����ݹ�ʵ��
void MergeSort(int* a, int n)
{
	//����һ��ռ����ڴ�����������
	int* disposal = (int*)malloc(sizeof(int) * n);
	if (disposal == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}

	//������Ĺ��̽�������ģ��ȥ�ݹ����
	Merge(a, disposal, 0, n - 1);


	free(disposal);
	disposal = NULL;
}


// �鲢����ǵݹ�ʵ��
void MergeSortNonR(int* a, int n)
{
	//����һ��ռ����ڴ�����������
	int* disposal = (int*)malloc(sizeof(int) * n);
	if (disposal == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}

	int gap = 1;//������
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2 * gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;

			//end1Խ��
			if (end1 >= n)
			{
				break;
			}
			//begin2Խ��
			if (begin2 >= n)
			{
				break;
			}
			//end2Խ��
			if (end2 >= n)
			{
				end2 = n - 1;
			}
			//ѡȡ���ݺϲ�
			int j = i;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])//��������
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

			//������ȥ
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
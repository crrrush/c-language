#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//#define N1 10
//
//#define N2 6
//
//struct P
//{
//	float score;
//	int number;
//};
//
//int main()
//{
//	struct P player[N1] = { 0 };
//	struct P* p = player;
//	int i = 0, j = 0;
//
//	for (i = 0; i < N1; i++)
//	{
//		(p + i)->number = i + 1;
//	}
//	
//	printf("Please input singer's score:\n");
//
//	for (j = 0; j < N1; j++)
//	{
//		int score[N2] = { 0 };
//
//		float max = 0, min = 100, count = 0;
//
//		for (i = 0; i < N2; i++)
//		{
//			scanf("%d", &score[i]);
//		}
//
//		for (i = 0; i < N2; i++)
//		{
//			count += score[i];
//			if (max < score[i])
//				max = score[i];
//
//			if (min > score[i])
//				min = score[i];
//		}
//		(p + j)->score = (count - max - min) / 6.0;
//	}
//
//	
//	for (i = 0; i < N1; i++)
//	{
//		for (j = i + 1; j < N1; j++)
//		{
//			if ((p + i)->score < (p + j)->score)
//			{
//				float mid1 = (p + i)->score;
//				(p + i)->score = (p + j)->score;
//				(p + j)->score = mid1;
//
//				int mid2 = (p + i)->number;
//				(p + i)->number = (p + j)->number;
//				(p + j)->number = mid2;
//			}
//		}
//	}
//	
//	printf("output:\n");
//
//	for (i = 0; i < N1; i++)
//	{
//		printf("NO.%d:%.2f\n", (p + i)->number, (p + i)->score);
//	}
//
//
//	return 0;
//}

//1 4 7 3 6 3
//4 6 8 3 5 8
//7 3 6 8 4 2
//7 4 7 4 6 4
//4 5 6 7 2 5
//3 5 7 8 9 3
//7 4 4 7 3 8
//9 4 3 7 3 8
//4 8 3 7 2 8
//5 1 6 7 8 7


//float Mark()
//{
//	int score[N2] = { 0 };
//	int i = 0;
//	float max = 0, min = 100, count = 0;
//	
//	for (i = 0; i < N2; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//	for (i = 0; i < N2; i++)
//	{
//		count += score[i];
//		if (max < score[i])
//			max = score[i];
//
//		if (min > score[i])
//			min = score[i];
//	}
//	count = (count - max - min) / 6.0;
//
//	return count;
//}




//void Mark(int* p)
//{
//	int score[N2] = { 0 };
//	int i = 0;
//	int max = 0, min = 100, count = 0;
//	
//	for (i = 0; i < N2; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//	for (i = 0; i < N2; i++)
//	{
//		count += score[i];
//		if (max < score[i])
//			max = score[i];
//
//		if (min > score[i])
//			min = score[i];
//	}
//	*p = count - max - min;
//}
//
//
//int main()
//{
//	int player[N1] = { 0 };
//	int n = 0;
//	
//
//	for (n = 0; n < N1; n++)
//	{
//		Mark(&player[n]);
//	}
//
//	
//
//
//	return 0;
//}

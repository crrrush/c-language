#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include<time.h>

#include<stdlib.h>

void Random_Array_Function(int* p, int num)
{
	srand((unsigned int)time(NULL));

	while (num-- > 0)
	{
		*p++ = rand() % 10 + 1;
	}


}


int main()
{
	int arr[50] = { 0 };

	Random_Array_Function(arr, 50);

	for (int i = 0; i < 50; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

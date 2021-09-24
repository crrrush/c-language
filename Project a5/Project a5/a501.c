#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

int main()
{
	float high = 0;
	int weigh = 0;
	float BMI;
	printf("high=");
	scanf("%f", &high);
	printf("weigh=");
	scanf("%d", &weigh);
	BMI = weigh / (high*high);
	printf("BMI=%f\n", BMI);



	return 0;
}
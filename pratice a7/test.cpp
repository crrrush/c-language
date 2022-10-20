#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//    double a = 0.0;
//
//    scanf("%lf", &a);
//
//    a = fabs(a);
//
//    printf("%lf\n", a);
//
//    return 0;
//}

#include<iostream>

using namespace std;

//int main()
//{
//    int n = 0;
//    cin >> n;
//
//    int count = 0;
//    while (n > 1)
//    {
//        n /= 10;
//        count++;
//    }
//
//    cout << count << endl;
//
//    return 0;
//}



//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int r = 0;
//	if (m >= n)
//	{
//		r = m % n;
//		while (r > 0)
//		{
//			m = n;
//			n = r;
//			r = m % n;
//		}
//	}
//	else
//	{
//		r = n % m;
//		while (r > 0)
//		{
//			n = m;
//			m = r;
//			r = n % m;
//		}
//
//	}
//
//	printf("%d\n",  r);
//	printf("%d\n", m * n / r);
//
//	return 0;
//}



//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int r;
//	r = m % n;
//	while (r > 0)
//	{
//		m = n;
//		n = r;
//		r = m % n;
//	}
//	if (r <= 0)
//	{
//		printf("%d\n", n);
//	}
//
//	return 0;
//}


//
//int main()
//{
//	int m, n;
//	scanf("%d/%d", &m, &n);
//	int a = m, b = n;
//	int r;
//	r = m % n;
//	while (r > 0)
//	{
//		m = n;
//		n = r;
//		r = m % n;
//	}
//	//n是最大公因数
//
//	printf("%d/%d\n", a / n, b / n);
//
//
//
//	return 0;
//}




//int my_pow(int a, int n)
//{
//    int tmp = a;
//    while (--n)
//        a *= tmp;
//
//    return a;
//}
//
//int main()
//{
//    int x = 0;
//
//    cin >> x;
//
//    int res = my_pow(x, 6)
//        - 2 * my_pow(x, 5)
//        + 3 * my_pow(x, 4)
//        - 5 * my_pow(x, 2)
//        + 6 * x + 7;
//
//    cout << res << endl;
//
//    return 0;
//}



//#define PRINT(FORMAT, VALUE) printf("the value of " #VALUE " is "FORMAT "\n",VALUE)
//
//
//int main()
//{
//	//int i = 0;
//	//PRINT("%d", i);
//
//
//	//printf("the value of %""%d", 6 "d is "" %d ""\n", 3, 3);
//	//printf("%""%d", -4, "d", -4);
//	//printf("%%%dd", -4, 4);
//	//printf("%%%cd", '-4');
//	//char a = '5';
//	//int a = 5;
//	//printf("%""#a""d", 123);
//
//	return 0;
//}





int main()
{
    char str[10];

    //scanf("%s", str);

    gets_s(str);

    str[3] = '\0';


    printf("   %s", str);

    return 0;
}


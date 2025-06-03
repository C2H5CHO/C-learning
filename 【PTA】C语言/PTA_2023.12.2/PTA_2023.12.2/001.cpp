//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 1, a = 1, j = 1;
//	double sum = 0;
//	for (i = 1; i < n + 1; i++)
//	{
//		a = 1;
//		for (j = 1; j < i; j++)
//		{
//			a = a * j;
//		}
//		sum = sum + 1.0 / a;
//	}
//	printf("%.8f", sum + 1);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int n, i; double b = 1, sum = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        b *= i;
//        sum += 1.0 / b;
//    }
//    printf("%.8lf", sum + 1);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int arr[100] = { 0 }, i = 0, min;
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	min = arr[0];
//	for (i = 1; i < a; i++)
//	{
//		if (min >= arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	printf("min = %d", min);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int M, N;
//	scanf("%d %d", &M, &N);
//	int count = 0, i, j = 2, a = 0, sum = 0;
//	for (i = M; i <= N; i++)
//	{
//		a = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				a = 1;
//				break;
//			}
//		}
//		if (a == 0)
//		{
//			count++;
//			sum = sum + i;
//		}
//	}
//	printf("%d %d", count, sum);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sum = 0, n;
//	scanf("%d", &n);
//	while (n > 0)
//	{
//		if (n % 2 != 0)
//		{
//			sum += n;
//		}
//		scanf("%d", &n);
//	}
//	printf("%d", sum);
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double x, sum = 1.0, a = 1.0, b = 1;
//	int i = 1;
//	scanf("%lf", &x);
//	for (i = 1; a > 0.00001; i++)
//	{
//		b *= i;
//		a = pow(x, i) * 1.0 / b;
//		sum += a;
//	}
//	printf("%.4f", sum);
//
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int i = 1;
//    long double k = 1;
//    double x, sum = 1;
//    scanf("%lf", &x);
//    do {
//        k *= i;                       //累乘
//        sum += pow(x, i) * 1.0 / k;       //累加
//        i++;
//    } while (pow(x, i) * 1.0 / k > 0.00001);   //跳出循环的条件
//    printf("%.4f", sum);
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double n, a = 2.0, b = 1.0, i = 1.0, sum = 0;
//	scanf("%lf", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += a * 1.0 / b;
//		a = a + b;
//		b = a - b;
//	}
//	printf("%.2f", sum);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, n, i = 1, b = 0, sum = 0;
//	scanf("%d %d", &a, &n);
//	for (i = 1; i <= n; i++)
//	{
//		b = b * 10 + a;
//		sum += b;
//	}
//	printf("s = %d", sum);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x, a, b, c, count = 0;
//	scanf("%d", &x);
//	for (a = x / 5; a >= 1; a--)
//	{
//		for (b = x / 2; b >= 1; b--)
//		{
//			for (c = x / 1; c >= 1; c--)
//			{
//				if (a * 5 + b * 2 + c == x)
//				{
//					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", a, b, c, a + b + c);
//					count++;
//				}
//			}
//		}
//	}
//	printf("count = %d", count);
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n, i, b, c = 0;
//	scanf("%d", &n);
//	for (i = pow(10, n - 1); i < pow(10, n); i++)
//	{
//		b = i;
//		c = 0;
//		while (b)
//		{
//			c += pow(b % 10, n);
//			b /= 10;
//		}
//		if (i == c)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#include <math.h>
//int main()
//{
//	int n, x, sum = 0, b;
//	scanf("%d", &n);	
//	for (x = pow(10, n - 1); x < pow(10, n); x++)
//	{
//		b = x;
//		sum = 0;
//		while(b)
//		{
//			sum += pow(b % 10, n); //a是x的最后一位 
//			b /= 10;  //b不段除10去掉后一位 
//		}
//		if (sum == x)
//		{
//			printf("%d\n", x);
//		}
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n, x, sum = 0, b, i = 1, a;
//	scanf("%d", &n);
//	for (x = pow(10, n - 1); x < (pow(10, n)); x++)
//	{
//		b = x;
//		sum = 0;
//		for (i = 1; i <= n; i++)
//		{
//			a = b % 10;
//			b /= 10;
//			sum += pow(a, n);
//		}
//		if (sum == x)
//		{
//			printf("%d\n", x);
//		}
//	}
//
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m, n, max, min, i, a, b;
//	scanf("%d %d", &m, &n);
//	if (m > n)
//	{
//		max = m;
//		min = n;
//	}
//	else if (m < n)
//	{
//		max = n;
//		min = m;
//	}
//	else
//	{
//		printf("%d %d", m, n);
//		return 0;
//	}
//
//	for (i = min; i > 0; i--)
//	{
//		if (min % i == 0 && max % i == 0)
//		{
//			printf("%d ", i);
//			break;
//		}
//	}
//	for (i = max; ; i++)
//	{
//		if (i % min == 0 && i % max == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int h, n, i = 1;
//	double a = 0, b = 0, c = 2.0;
//	scanf("%d %d", &h, &n);
//	if (n > 0)
//	{
//		a = 1.0 * h;
//		for (i = 1; i <= n; i++)
//		{
//			a += b * 2.0;
//			b = h / c;
//			c = c * 2.0;
//		}
//	}
//	printf("%0.1f %0.1f", a, b);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, a, b, i = 1, j = 1, c, d;
//	scanf("%d", &n);
//	a = n / 2 + 1;
//	for (i = 1; i <= a; i++)
//	{
//		c = (a - i) * 2;
//		for (j = 1; j <= c; j++)
//		{
//			printf(" ");
//		}
//		d = n - c;
//		for (j = 1; j <= d; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= n / 2; i++)
//	{
//		c = 2 * i;
//		for (j = 1; j <= c; j++)
//		{
//			printf(" ");
//		}
//		d = n - c;
//		for (j = 1; j <= d; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, i = 1, a = 1;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		a += 1;
//		a *= 2;
//	}
//	printf("%d", a);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, b = 1, i = 1, c = 1, d = 1;
//	scanf("%d", &n);
//	if (n == 1)
//	{
//		printf("1");
//	}
//	else
//	{
//		for (i = 2; b < n; i++)
//		{
//			b = c + d;
//			c = d;
//			d = b;
//		}
//		printf("%d", i);
//	}
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	char a[1001];
	

	return 0;
}
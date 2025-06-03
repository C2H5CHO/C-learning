//#include <stdio.h>
//#include <math.h>
//int huiwen(int n)
//{
//	int a = 0;
//	int b = n;
//	while (n)
//	{
//		a = a * 10 + n % 10;
//		n = n / 10;
//	}
//	if (b == a)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int pingfang(int n)
//{
//	int i = 1;
//	int a, b;
//	a = sqrt(n);
//	b = a * a;
//	if (b == n)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		if (n == 0) return 0;
//		int a = huiwen(n);
//		int b = pingfang(n);
//		if (a == 1 && b == 1)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//
//	return 0;
//}
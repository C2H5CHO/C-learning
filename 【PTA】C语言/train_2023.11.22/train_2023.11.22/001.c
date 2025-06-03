//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int a;
//	a = (7 + n) % 12;
//	if (a == 0)
//	{
//		printf("12");
//	}
//	else
//	{
//		printf("%d", a);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int arr1[1001] = { 0 };
//	int arr2[1001] = { 0 };
//	int a, b, c;
//	int i = 1;
//	for (i = 1;i <= n;i++)
//	{
//		scanf_s("%d %d %d", &a, &b, &c);
//		if (a > b)
//		{
//			arr1[1] = arr1[1] + c;
//		}
//		else
//		{
//			arr2[1] = arr2[1] + c;
//		}
//	}
//	if (arr1[1] > arr2[1])
//		printf("chuanpu");
//	else
//		printf("baideng");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	char m;
//	char arr1[1001] = { 0 };
//	int i = 0;
//	for (i = 0;i < 32;i++)
//	{
//		scanf_s("%c", &m);
//		arr1[i] = m;
//	}
//	scanf_s("%d", &n);
//	switch(n)
//	{
//		case 1:
//		{
//			for (i = 0; i < 1; i++)
//			{
//				printf("%c", arr1[i]);
//			}
//			break;
//		}
//		case 2:
//		{
//			for (i = 1; i < 9; i++)
//			{
//				printf("%c", arr1[i]);
//			}
//			break;
//		}
//		case 3:
//		{
//			for (i = 9; i < 32; i++)
//			{
//				printf("%c", arr1[i]);
//			}
//			break;
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int mc;
//	scanf_s("%d", &mc);
//	int a;
//	a = 30 + n * 20 / 100.0 + 0.5;
//	if (mc > n || mc < 1)
//	{
//		printf("Input Error");
//	}
//	else
//	{
//		if (mc >= 1 && mc <= 10)
//		{
//			printf("First Prize");
//		}
//		else if (mc >= 11 && mc <= 30)
//		{
//			printf("Second Prize");
//		}
//		else if (mc >= 31 && mc <= a)
//		{
//			printf("Third Prize");
//		}
//		else
//		{
//			printf("No Prize");
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y;
//	scanf_s("%d", &y);
//	if (y == 2020)
//		printf("Farewell 2020");
//	else if (y == 2021)
//		printf("Hello 2021");
//	else
//		printf("Forget it");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m, n, r;
//	scanf_s("%d %d %d", &m, &n, &r);
//	int sum;
//	int a, b;
//	a = m % n;
//	b = m / n;
//	if (a == 0)
//	{
//		sum = b * r;
//	}
//	else
//	{
//		sum = (b + 1) * r;
//	}
//	printf("%d", sum);
//
//	return 0;
//}

//#include <stdio.h>
//
///**************/
////你的函数实现将被插入此处
//int is_root(int a, int b, int c, int d, int v)
//{
//    int sum;
//    sum = a * v * v * v + b * v * v + c * v + d;
//    if (sum == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//
///**************/
//
//int main()
//{
//    int a, b, c, d, v;
//
//    scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &v);
//    if (is_root(a, b, c, d, v))
//        printf("Yes\n");
//    else
//        printf("No\n");
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	int i;
//	int count = 0;
//	for (i = a; i <= b; i++)
//	{
//		if (i / 100 == i % 100)
//			count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}
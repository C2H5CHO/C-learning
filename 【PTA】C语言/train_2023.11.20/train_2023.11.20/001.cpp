//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 3; i++)
//	{
//		printf("I want to get high scores in C language programming!\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int max(int jia, int jian, int cheng, int chu)
//{
//	int a;
//	if (jia >= jian)
//	{
//		a = jia;
//	}
//	else
//	{
//		a = jian;
//	}
//	if (a >= cheng)
//	{
//		if (a >= chu)
//		{
//			return a;
//		}
//		else
//		{
//			return chu;
//		}
//	}
//	else
//	{
//		if (cheng >= chu)
//		{
//			return cheng;
//		}
//		else
//		{
//			return chu;
//		}
//	}
//}
//
//int main()
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	int jia, jian, cheng, chu;
//	jia = a + b;
//	jian = a - b;
//	cheng = a * b;
//	chu = a / b;
//	int n;
//	n = max(jia, jian, cheng, chu);
//	if (n == jia)
//	{
//		printf("%d+%d=%d\n", a, b, n);
//	}
//	if (n == jian)
//	{
//		printf("%d-%d=%d\n", a, b, n);
//	}
//	if (n == cheng)
//	{
//		printf("%d*%d=%d\n", a, b, n);
//	}
//	if (n == chu)
//	{
//		printf("%d/%d=%d\n", a, b, n);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int i = 1;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			int a;
//			a = j % 9;
//			if (a == 0)
//			{
//				printf("9");
//			}
//			else
//			{
//				printf("%d", a);
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c, d;
//	scanf_s("%d %d %d %d", &a, &b, &c, &d);
//	float n;
//	n = a * 0.5 + b * 1 + c * 1.5 + d * 4;
//	printf("%.1f", n);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	unsigned int x;
//	scanf_s("%u", &x);
//	int a, b, c, d;
//	a = x / 256 / 256 / 256;
//	b = (x - a * 256 * 256 * 256) / 256 / 256;
//	c = (x - a * 256 * 256 * 256 - b * 256 * 256) / 256;
//	d = x - a * 256 * 256 * 256 - b * 256 * 256 - c * 256;
//	printf("%d.%d.%d.%d", a, b, c, d);
//
//	return 0;
//}

//#include<stdio.h>
//
//int sum(int n)
//{
//	//请于此处完成sum功能
//	int i = 1;
//	int s = 0;
//	for (i = 1; i <= n; i++)
//	{
//		s = s + i * i;
//	}
//	return s;
//}
//
//int main(void)
//{
//	int n;
//	scanf_s("%d", &n);
//	printf("%d\n", sum(n));
//	return 0;
//}

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
//	int a,b;
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
//	while (~scanf_s("%d", &n))
//	{
//		if (n == 0) return 0;
//		int a = huiwen(n);
//		int b = pingfang(n);
//		if (a == 1 && b == 1)
//		{
//			printf ("YES\n");
//		}
//		else
//		{
//			printf ("NO\n");
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a < 0 || a > 100 || b < 0 || b > 100 || c < 0 || c > 100)
//	{
//		printf("Input Error!");
//	}
//	else
//	{
//		int n;
//		n = a / 10 + b / 5 + c * 7 / 10;
//		if (n >= 60 && n <= 100)
//		{
//			printf("Congratulations! You passed the exam!");
//		}
//		else
//		{
//			printf("Sorry! You failed the exam!");
//		}
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int a;
//	a = pow(2, n);
//	printf("%d", a);
//
//	return 0;
//}

//#include <stdio.h>
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int a = fib(n + 1);
//	int b = fib(n + 2);
//	printf("%d/%d", b, a);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	if (n == 10000)
//	{
//		printf("You win a house.\nYou win a car.\n");
//	}
//	else if (n >= 9000 && n < 10000)
//	{
//		printf("You win a computer.\nYou win a bicycle.\n");
//	}
//	else
//	{
//		printf("Sorry,you get nothing.\n");
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a;
//	scanf_s("%d", &a);
//	if (a >= 0 && a <= 50)
//		printf("1");
//	if (a >= 51 && a <= 100)
//		printf("2");
//	if (a >= 101 && a <= 150)
//		printf("3");
//	if (a >= 151 && a <= 200)
//		printf("4");
//	if (a >= 201 && a <= 300)
//		printf("5");
//	if (a > 300)
//		printf("6");
//
//	return 0;
//}


//#include <stdio.h>
//
//void outResult(int n);  //函数声明
//
//int main(void)
//{
//    int n;
//    scanf_s("%d", &n);
//    outResult(n);       //函数调用
//    return 0;
//}
//
////温馨提示：提交时，请仅将outResult()函数的定义代码提交
///*********** outResult() definition begin ***********/
//void outResult(int n)
//{
//    printf("%d/%d", n, n + 1);
//}
//
///*********** outResult() definition end ************/


//#include <stdio.h>
//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	int c, d;
//	c = a / b;
//	d = a % b;
//	printf("%d %d", c, d);
//
//	return 0;
//}
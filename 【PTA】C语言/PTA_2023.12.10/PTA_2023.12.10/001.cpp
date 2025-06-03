//#include <stdio.h>
//
//int narcissistic(int number);
//void PrintN(int m, int n);
//
//int main()
//{
//    int m, n;
//
//    scanf("%d %d", &m, &n);
//    if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
//    PrintN(m, n);
//    if (narcissistic(n)) printf("%d is a narcissistic number\n", n);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int narcissistic(int number)
//{
//    int a, i = 0, b, d = 0;
//    a = number;
//    while (a)
//    {
//        i++;
//        a /= 10;
//    }
//    b = number;
//    while (b)
//    {
//        int j = 1, e = b % 10, c = 1;
//        for (j = 1; j <= i; j++)
//        {
//            c *= e;
//        }
//        d += c;
//        b /= 10;
//    }
//    if (d == number)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//void PrintN(int m, int n)
//{
//    int a;
//    for (a = m + 1; a < n; a++)
//    {
//        if (narcissistic(a) == 1)
//            printf("%d\n", a);
//    }
//}

//#include <stdio.h>
//#include <math.h>
//
//double funcos(double e, double x);
//
//int main()
//{
//    double e, x;
//
//    scanf("%lf %lf", &e, &x);
//    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
//
//    return 0;
//}

/* 你的代码将被嵌在这里 */
//double funcos(double e, double x)
//{
//    double i = 2.0, j = 2.0, a = 1.0, b = 1.0;
//    while (a >= e)
//    {
//        double k = 1, c = 1;
//        for (k = 1; k <= j; k++)
//        {
//            c *= k;
//        }
//        a = pow(x, j) * 1.0 / c;
//        b += pow(-1.0, i + 1) * 1.0 * a;
//        j += 2;
//        i++;
//    }
//    return b;
//}

//double funcos(double e, double x) {
//	int flag = -1;
//	double item = 1, m = 2, sum = 1;
//	double fenmu = 1, fenzi;
//
//	while (item > e) {
//		for (int i = 1; i <= m; i++) {
//			fenmu = fenmu * i;
//		}
//		fenzi = pow(x, m);
//		item = fenzi / fenmu;
//		sum = sum + flag * item;
//		m = m + 2;
//		fenmu = 1;
//		flag = -flag;
//	}
//	return sum;
//}

//#include <stdio.h>
//
//void hollowPyramid(int n);
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//    hollowPyramid(n);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//void hollowPyramid(int n)
//{
//    int i = 1, j = 1;
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= n - i; j++)
//        {
//            printf(" ");
//        }
//        if (i == 1)
//        {
//            printf("1\n");
//        }
//        else if (i == n)
//        {
//            for (j = 1; j <= (2 * n - 1); j++)
//            {
//                printf("%d", n);
//            }
//            printf("\n");
//        }
//        else
//        {
//            printf("%d", i);
//            for (j = 1; j <= (2 * i - 3); j++)
//            {
//                printf(" ");
//            }
//            printf("%d\n", i);
//        }
//    }
//}

#include <stdio.h>
#define MAXS 15

void StringCount(char s[]);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
//void StringCount(char s[])
//{
//    int i = 0, a = 0, b = 0, c = 0, d = 0;
//    for (i = 0; s[i] != '\0'; i++)
//    {
//        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
//        {
//            a++;
//        }
//        else if (s[i] == ' ' || s[i] == '\n')
//        {
//            b++;
//        }
//        else if (s[i] >= '0' && s[i] <= '9')
//        {
//            c++;
//        }
//        else
//        {
//            d++;
//        }
//    }
//    printf("letter = %d, blank = %d, digit = %d, other = %d", a, b, c, d);
//}
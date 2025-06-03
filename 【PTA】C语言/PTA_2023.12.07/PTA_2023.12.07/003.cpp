//#include <stdio.h>
//
//int sum(int m, int n);
//
//int main()
//{
//    int m, n;
//
//    scanf("%d %d", &m, &n);
//    printf("sum = %d\n", sum(m, n));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int sum(int m, int n)
//{
//    int he = 0, i;
//    for (i = m; i <= n; i++)
//    {
//        he += i;
//    }
//    return he;
//}

//#include <stdio.h>
//
//int max(int a, int b);
//
//int main()
//{
//    int a, b;
//
//    scanf("%d %d", &a, &b);
//    printf("max = %d\n", max(a, b));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int max(int a, int b)
//{
//    if (a >= b)
//    {
//        return a;
//    }
//    else
//    {
//        return b;
//    }
//}

//#include <stdio.h>
//
//void CharPyramid(int n, char ch);
//
//int main()
//{
//    int n;
//    char ch;
//
//    scanf("%d %c", &n, &ch);
//    CharPyramid(n, ch);
//
//    return 0;
//}
//
///* 请在这里填写答案 */
//void CharPyramid(int n, char ch)
//{
//    int i = 1, j = 1;
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= n - i; j++)
//        {
//            printf(" ");
//        }
//        for (j = 1; j <= i; j++)
//        {
//            printf("%c ", ch);
//        }
//        printf("\n");
//    }
//}

//#include <stdio.h>
//
//int sign(int x);
//
//int main()
//{
//    int x;
//
//    scanf("%d", &x);
//    printf("sign(%d) = %d\n", x, sign(x));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int sign(int x)
//{
//    if (x > 0)
//    {
//        return 1;
//    }
//    else if (x == 0)
//    {
//        return 0;
//    }
//    else
//    {
//        return -1;
//    }
//}

//#include <stdio.h>
//
//#define MAXN 10
//
//int even(int n);
//int OddSum(int List[], int N);
//
//int main()
//{
//    int List[MAXN], N, i;
//
//    scanf("%d", &N);
//    printf("Sum of ( ");
//    for (i = 0; i < N; i++) {
//        scanf("%d", &List[i]);
//        if (even(List[i]) == 0)
//            printf("%d ", List[i]);
//    }
//    printf(") = %d\n", OddSum(List, N));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int even(int n)
//{
//    if (n % 2 == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//int OddSum(int List[], int N)
//{
//    int i = 0, sum = 0;
//    for (i = 0; i < N; i++)
//    {
//        if (List[i] % 2 != 0)
//        {
//            sum += List[i];
//        }
//    }
//    return sum;
//}

//#include <stdio.h>
//#include <math.h>
//
//double dist(double x1, double y1, double x2, double y2);
//
//int main()
//{
//    double x1, y1, x2, y2;
//
//    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
//    printf("dist = %.2f\n", dist(x1, y1, x2, y2));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//double dist(double x1, double y1, double x2, double y2)
//{
//    double a, b, c;
//    a = (x1 - x2) * (x1 - x2);
//    b = (y1 - y2) * (y1 - y2);
//    c = sqrt(a + b);
//    return c;
//}


//#include <stdio.h>
//#include <math.h>
//
//int prime(int p);
//int PrimeSum(int m, int n);
//
//int main()
//{
//    int m, n, p;
//
//    scanf("%d %d", &m, &n);
//    printf("Sum of ( ");
//    for (p = m; p <= n; p++) {
//        if (prime(p) != 0)
//            printf("%d ", p);
//    }
//    printf(") = %d\n", PrimeSum(m, n));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int prime(int p)
//{
//    if (p <= 1)
//    {
//        return 0;
//    }
//    int i = 2, flag = 1;
//    for (i = 2; i < p; i++)
//    {
//        if (p % i == 0)
//        {
//            flag = 0;
//            break;
//        }
//    }
//    if (flag == 1)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//int PrimeSum(int m, int n)
//{
//    int sum = 0, i;
//    for (i = m; i <= n; i++)
//    {
//        if (prime(i) == 1)
//        {
//            sum += i;
//        }
//    }
//    return sum;
//}

//#include <stdio.h>
//
//int CountDigit(int number, int digit);
//
//int main()
//{
//    int number, digit;
//
//    scanf("%d %d", &number, &digit);
//    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int CountDigit(int number, int digit)
//{
//    int count = 0;
//    if (number < 0)
//    {
//        number = -number;
//    }
//    else if (number == 0 && digit == 0)
//    {
//        return 1;
//    }
//    while (number)
//    {
//        int a = number % 10;
//        if (a == digit)
//        {
//            count++;
//        }
//        number /= 10;
//    }
//    return count;
//}

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
//
//}
//#include <stdio.h>
//#define MAXN 10
//
//struct student {
//    int num;
//    char name[20];
//    int score;
//    char grade;
//};
//
//int set_grade(struct student* p, int n);
//
//int main()
//{
//    struct student stu[MAXN], * ptr;
//    int n, i, count;
//
//    ptr = stu;
//    scanf("%d\n", &n);
//    for (i = 0; i < n; i++) {
//        scanf("%d%s%d", &stu[i].num, stu[i].name, &stu[i].score);
//    }
//    count = set_grade(ptr, n);
//    printf("The count for failed (<60): %d\n", count);
//    printf("The grades:\n");
//    for (i = 0; i < n; i++)
//        printf("%d %s %c\n", stu[i].num, stu[i].name, stu[i].grade);
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int set_grade(struct student* p, int n)
//{
//    int i = 0, count = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (p[i].score >= 85 && p[i].score <= 100)
//        {
//            p[i].grade = 'A';
//        }
//        else if (p[i].score >= 70 && p[i].score <= 84)
//        {
//            p[i].grade = 'B';
//        }
//        else if (p[i].score >= 60 && p[i].score <= 69)
//        {
//            p[i].grade = 'C';
//        }
//        else
//        {
//            p[i].grade = 'D';
//            count++;
//        }
//    }
//    return count;
//}

//#include <stdio.h>
//struct student
//{
//	char a[10];
//	char b[10];
//	int c;
//}stu[20];
//
//int main()
//{
//	int n, i = 0, e[20] = { 0 }, j = 0, k = 0;
//	double d, sum = 0;
//	scanf("%d", &n);
//	getchar();
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %s %d", &stu[i].a, &stu[i].b, &stu[i].c);
//		sum += stu[i].c;
//	}
//	d = sum / n;
//	printf("%.2f\n", d);
//	for (i = 0; i < n; i++)
//	{
//		if (stu[i].c < d)
//		{
//			e[j] = i;
//			j++;
//		}
//	}
//	for (k = 0; k < j; k++)
//	{
//		printf("%s %s\n", stu[e[k]].b, stu[e[k]].a);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double x1, y1, x2, y2, x, y;
//	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
//	x = x1 + x2;
//	y = y1 + y2;
//	if (x > -0.05 && x <= -0.0)
//	{
//		x = -x;
//	}
//	if (y > -0.05 && y <= -0.0)
//	{
//		y = -y;
//	}
//	printf("(%.1f, %.1f)", x, y);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c, d;
//	double e, f;
//	scanf("%d/%d %d/%d", &a, &b, &c, &d);
//	e = a * 1.0 / b;
//	f = c * 1.0 / d;
//	if (e > f)
//	{
//		printf("%d/%d > %d/%d", a, b, c, d);
//	}
//	else if (e == f)
//	{
//		printf("%d/%d = %d/%d", a, b, c, d);
//	}
//	else
//	{
//		printf("%d/%d < %d/%d", a, b, c, d);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//struct students
//{
//	int  number;
//	char name[20];
//	int score[4];
//	int sum;
//};
//struct students student[10];
//
//int main()
//{
//	int n, i = 0, j = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &student[i].number);
//		scanf("%s", &student[i].name);
//		scanf("%d %d %d", &student[i].score[0], &student[i].score[1], &student[i].score[2]);
//		student[i].sum = student[i].score[0] + student[i].score[1] + student[i].score[2];
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (student[j].sum < student[i].sum)
//		{
//			j = i;
//		}
//	}
//	printf("%s %d", student[j].name, student[j].sum);
//
//	return 0;
//}

//#include <stdio.h>
//struct student
//{
//	char a[10];
//	char b[20];
//	int c[5];
//	int sum;
//}stu[20], max;
//
//int main()
//{
//	int n, i = 0, j = 0;
//	scanf("%d", &n);
//	getchar();
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %s %d %d %d", &stu[i].a, &stu[i].b, &stu[i].c[0], &stu[i].c[1], &stu[i].c[2]);
//		stu[i].sum = stu[i].c[0] + stu[i].c[1] + stu[i].c[2];
//	}
//	max.sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (max.sum < stu[i].sum)
//		{
//			max = stu[i];
//			j = i;
//		}
//	}
//	printf("%s %s %d", stu[j].b, stu[j].a, stu[j].sum);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int n, i = 0, min, j = 0;
//	char a[200][100];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", &a[i]);
//	}
//	for (i = 1; i < n; i++)
//	{
//		if (strcmp(a[i], a[j]) < 0)
//		{
//			j = i;
//		}
//	}
//	printf("Min is: %s", a[j]);
//
//	return 0;
//}

//#include <stdio.h>
//void print(char* C)
//{
//    while (*C != '\0')
//    {
//        printf("%c", *C);
//        C++;
//    }
//    printf("\n");
//}
//int main()
//{
//    char C[20] = "hello";
//
//
//    print(C);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int n, i = 0, j = 0;
//	char a[200][200];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", &a[i]);
//	}
//	for (i = 1; i < n; i++)
//	{
//		if (strcmp(a[i], a[j]) < 0)
//		{
//			j = i;
//		}
//	}
//	printf("Min is: %s", a[j]);
//
//	return 0;
//}

#include <stdio.h>
#define MAX 10
struct book
{
	char n[100];
	int m;
};
int main()
{
	int n, i = 0, max = 0, min = 0, maxi = 0, mini;
	struct book bo[MAX];
	scanf("%d", &n);
	while ((bo[i].n = gets()) != '\n') {
		i++;
	}
	min = bo[0].m;
	for (i = 0; i < n; i++)
	{
		if (bo[i].m > max) {
			max = bo[i].m;
			maxi = i;
		}
		if (bo[i].m < min) {
			min = bo[i].m;
			mini = i;
		}
	}
	printf("%d,%s", bo[maxi].m, bo[maxi].n);
	printf("%d,%s", bo[mini].m, bo[mini].n);
	return 0;
}

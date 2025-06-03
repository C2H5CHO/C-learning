//#include <stdio.h>
//
//int fn(int a, int n);
//int SumA(int a, int n);
//
//int main()
//{
//    int a, n;
//
//    scanf("%d %d", &a, &n);
//    printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
//    printf("s = %d\n", SumA(a, n));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int fn(int a, int n)
//{
//    int i = 0, b = 0;
//    for (i = 0; i < n; i++)
//    {
//        b = b * 10 + a;
//    }
//    return b;
//}
//int SumA(int a, int n)
//{
//    int i = 0, j = 0, b = 0, sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        b = 0;
//        for (j = 0; j < i + 1; j++)
//        {
//            b = b * 10 + a;
//        }
//        sum += b;
//    }
//    return sum;
//}

//#include <stdio.h>
//
//int factorsum(int number);
//void PrintPN(int m, int n);
//
//int main()
//{
//    int m, n;
//
//    scanf("%d %d", &m, &n);
//    if (factorsum(m) == m) printf("%d is a perfect number\n", m);
//    if (factorsum(n) == n) printf("%d is a perfect number\n", n);
//    PrintPN(m, n);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int factorsum(int number)
//{
//    int i = 1, a = 0;
//    for (i = 1; i < number; i++)
//    {
//        if (number % i == 0)
//        {
//            a += i;
//        }
//    }
//    return a;
//}
//void PrintPN(int m, int n)
//{
//    int i, flag = 0, j = 2;
//    for (i = m; i <= n; i++)
//    {
//        if (factorsum(i) == i)
//        {
//            printf("%d = 1", i);
//            for (j = 2; j < i; j++)
//            {
//                if (i % j == 0)
//                {
//                    printf(" + %d", j);
//                }
//            }
//            flag = 1;
//            printf("\n");
//        }
//    }
//    if (flag == 0)
//    {
//        printf("No perfect number");
//    }
//}

//#include <stdio.h>
//
//int fib(int n);
//void PrintFN(int m, int n);
//
//int main()
//{
//    int m, n, t;
//
//    scanf("%d %d %d", &m, &n, &t);
//    printf("fib(%d) = %d\n", t, fib(t));
//    PrintFN(m, n);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int fib(int n)
//{
//    if (n == 1 || n == 2)
//    {
//        return 1;
//    }
//    else
//    {
//        return fib(n - 1) + fib(n - 2);
//    }
//}
//void PrintFN(int m, int n)
//{
//    int i = 1, flag = 0, a = 0;
//    for (i = 1; i <= 21; i++)
//    {
//        if (fib(i) >= m && fib(i) <= n)
//        {
//            if (flag == 1)
//            {
//                printf(" ");
//            }
//            printf("%d", fib(i));
//            flag = 1;
//            a = 1;
//        }
//    }
//    if (a == 0)
//    {
//        printf("No Fibonacci number");
//    }
//}

//#include <stdio.h>
//#include <math.h>
//
//int prime(int p);
//void Goldbach(int n);
//
//int main()
//{
//    int m, n, i, cnt;
//
//    scanf("%d %d", &m, &n);
//    if (prime(m) != 0) printf("%d is a prime number\n", m);
//    if (m < 6) m = 6;
//    if (m % 2) m++;
//    cnt = 0;
//    for (i = m; i <= n; i += 2) {
//        Goldbach(i);
//        cnt++;
//        if (cnt % 5) printf(", ");
//        else printf("\n");
//    }
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int prime(int p)
//{
//    if (p == 1)
//    {
//        return 0;
//    }
//    int i = 2, flag = 0;
//    for (i = 2; i < p; i++)
//    {
//        if (p % i == 0)
//        {
//            flag = 1;
//            break;
//        }
//    }
//    if (flag == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//void Goldbach(int n)
//{
//    int a = 1;
//    for (a = 2; a < n; a++)
//    {
//        if (prime(a) == 1 && prime(n - a) == 1)
//        {
//            printf("%d=%d+%d", n, a, n - a);
//            break;
//        }
//    }
//}

//#include <stdio.h>
//
//int reverse(int number);
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//    printf("%d\n", reverse(n));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int reverse(int number)
//{
//    int a, b = 0;
//    a = number;
//    while (a)
//    {
//        b = b * 10 + a % 10;
//        a /= 10;
//    }
//    return b;
//}

//#include <stdio.h>
//
//void sum_diff(float op1, float op2, float* psum, float* pdiff);
//
//int main()
//{
//    float a, b, sum, diff;
//
//    scanf("%f %f", &a, &b);
//    sum_diff(a, b, &sum, &diff);
//    printf("The sum is %.2f\nThe diff is %.2f\n", sum, diff);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//void sum_diff(float op1, float op2, float* psum, float* pdiff)
//{
//    *psum = op1 + op2;
//    *pdiff = op1 - op2;
//}

//#include <stdio.h>
//#include <string.h>
//
//#define MAXS 10
//
//void Shift(char s[]);
//
//void GetString(char s[]); /* 实现细节在此不表 */
//
//int main()
//{
//    char s[MAXS];
//
//    GetString(s);
//    Shift(s);
//    printf("%s\n", s);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//void Shift(char s[])
//{
//    char* a;
//    a = s;
//    int i = 0, b;
//    b = strlen(s);
//    for (i = 0; i+3 < b; i++)
//    {
//        s[i] = *(a + i + 3);
//    }
//    s[b - 3] = *(a + 0);
//    s[b - 2] = *(a + 1);
//    s[b - 1] = *(a + 2);
//}

//#include <stdio.h>
//
//void splitfloat(float x, int* intpart, float* fracpart);
//
//int main()
//{
//    float x, fracpart;
//    int intpart;
//
//    scanf("%f", &x);
//    splitfloat(x, &intpart, &fracpart);
//    printf("The integer part is %d\n", intpart);
//    printf("The fractional part is %g\n", fracpart);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//void splitfloat(float x, int* intpart, float* fracpart)
//{
//    *intpart = (int)x;
//    *fracpart = x - *intpart;
//}

//#include <stdio.h>
//#define MAXN 10
//
//int search(int list[], int n, int x);
//
//int main()
//{
//    int i, index, n, x;
//    int a[MAXN];
//
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//    scanf("%d", &x);
//    index = search(a, n, x);
//    if (index != -1)
//        printf("index = %d\n", index);
//    else
//        printf("Not found\n");
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int search(int list[], int n, int x)
//{
//    int i = 0, flag = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (list[i] == x)
//        {
//            return i;
//        }
//    }
//    if (flag == 0)
//    {
//        return -1;
//    }
//}

//#include <stdio.h>
//#define MAXN 10
//
//void ArrayShift(int a[], int n, int m);
//
//int main()
//{
//    int a[MAXN], n, m;
//    int i;
//
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++) scanf("%d", &a[i]);
//
//    ArrayShift(a, n, m);
//
//    for (i = 0; i < n; i++) {
//        if (i != 0) printf(" ");
//        printf("%d", a[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//void ArrayShift(int a[], int n, int m)
//{
//    int i = 0, b[MAXN], j = 0;
//    m = m % n;
//    for (i = 0; i < n; i++)
//    {
//        b[i] = a[i];
//    }
//    for (i = 0; i + m < n; i++)
//    {
//        a[i + m] = b[i];
//    }
//    for (i = n - m; i < n; i++)
//    {
//        a[j] = b[i];
//        j++;
//    }
//}

//#include <stdio.h>
//#define MAXN 20
//
//void CountOff(int n, int m, int out[]);
//
//int main()
//{
//    int out[MAXN], n, m;
//    int i;
//
//    scanf("%d %d", &n, &m);
//    CountOff(n, m, out);
//    for (i = 0; i < n; i++)
//        printf("%d ", out[i]);
//    printf("\n");
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//void CountOff(int n, int m, int out[])
//{
//    int i = 0, b[MAXN], a = 1, c = 0;
//    for (i = 0; i < n; i++)
//    {
//        b[i] = i + 1;
//    }
//    while (a <= n)
//    {
//        for (i = 0; i < n; i++)
//        {
//            if (b[i] != 0)
//            {
//                c++;
//                if (c == m)
//                {
//                    out[i] = a++;
//                    b[i] = 0;
//                    c = 0;
//                }
//            }
//        }
//    }
//
//}

//#include <stdio.h>
//#define MAXN 20
//
//void strmcpy(char* t, int m, char* s);
//void ReadString(char s[]); /* 由裁判实现，略去不表 */
//
//int main()
//{
//    char t[MAXN], s[MAXN];
//    int m;
//
//    scanf("%d\n", &m);
//    ReadString(t);
//    strmcpy(t, m, s);
//    printf("%s\n", s);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//void strmcpy(char* t, int m, char* s)
//{
//    int i = 0, j = 0, k = 0;
//    while (t[i] != '\0')
//    {
//        i++;
//    }
//    if (m >= i)
//    {
//        s[MAXN] = { 0 };
//    }
//    else
//    {
//        for (j = m; j <= i; j++)
//        {
//            s[k] = t[j];
//            k++;
//        }
//    }
//}
//void ReadString(char s[])
//{
//    ;
//}

//#include <stdio.h>
//#define MAXN 20
//
//void delchar(char* str, char c);
//void ReadString(char s[]); /* 由裁判实现，略去不表 */
//
//int main()
//{
//    char str[MAXN], c;
//
//    scanf("%c\n", &c);
//    ReadString(str);
//    delchar(str, c);
//    printf("%s\n", str);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//void ReadString(char s[])
//{
//    ;
//}
//void delchar(char* str, char c)
//{
//    int i = 0;
//    while (str[i] != '\0')
//    {
//        if(str[i]==c)
//    }
//}

//#include <stdio.h>
//
//char* getmonth(int n);
//
//int main()
//{
//    int n;
//    char* s;
//
//    scanf("%d", &n);
//    s = getmonth(n);
//    if (s == NULL) printf("wrong input!\n");
//    else printf("%s\n", s);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//char* getmonth(int n)
//{
//    switch (n) {
//    case 1: return "January";
//    case 2: return "February";
//    case 3: return "March";
//    case 4: return "April";
//    case 5: return "May";
//    case 6: return "June";
//    case 7: return "July";
//    case 8: return "August";
//    case 9: return "September";
//    case 10: return "October";
//    case 11: return "November";
//    case 12: return "December";
//    default: return NULL;
//    }
//}



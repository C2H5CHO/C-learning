//#include <stdio.h>
//int main()
//{
//	char a;
//	a = getchar();
//	while (a != '\n')
//	{
//		if (a >= 'a' && a <= 'z')
//		{
//			if (a == 'z')
//			{
//				a = 'A';
//			}
//			else
//			{
//				a = a - 'a' + 'B';
//			}
//		}
//		else if (a >= 'A' && a <= 'Z')
//		{
//			if (a == 'Z')
//			{
//				a = 'a';
//			}
//			else
//			{
//				a = a - 'A' + 'b';
//			}
//		}
//		putchar(a);
//		a = getchar();
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char a;
//    int b, c;
//    scanf("%d", &b);
//    a = getchar();
//    while (a != '=')
//    {
//        scanf("%d", &c);
//        switch(a)
//        {
//        case '+':
//            b = b + c;
//            break;
//        case '-':
//            b = b - c;
//            break;
//        case '*':
//            b = b * c;
//            break;
//        case '/':
//            if (c == 0)
//            {
//                printf("ERROR");
//                return 0;
//            }
//            else
//            {
//                b = b / c;
//                break;
//            }
//        default:
//            printf("ERROR");
//            return 0;
//        }
//        a = getchar();
//    }
//    printf("%d", b);
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a, b;
//	a = getchar();
//	if (a >= 'a' && a <= 'z')
//	{
//		b = a - 'a' + 'A';
//		putchar(b);
//	}	
//	while (a != '\n')
//	{
//		if (a == ' ')
//		{
//			putchar(a);
//			a = getchar();
//			if (a >= 'a' && a <= 'z')
//			{
//				b = a - 'a' + 'A';
//				putchar(b);
//				a = getchar();
//			}
//		}
//		else
//		{
//			putchar(a);
//			a = getchar();
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a;
//	int i = 1;
//	a = getchar();
//	while (a != '\n')
//	{
//		if (a == ' ')
//		{
//			i = 1;
//		}
//		else if (i == 1)
//		{
//			i = 0;
//			if (a >= 'a' && a <= 'z')
//			{
//				a = a - 'a' + 'A';
//			}
//		}
//		putchar(a);
//		a = getchar();
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, a[20] = { 0 }, i = 0, max, j = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	max = a[0];
//	for (i = 1; i < n; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//			j = i;
//		}
//	}
//	printf("%d %d", max, j);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, a[20] = { 0 }, i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	printf("%d", a[n - 1]);
//	for (i = n - 2; i >= 0; i--)
//	{
//		printf(" %d", a[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, a[30] = { 0 }, i = 0, N, A[30] = { 0 }, b[100] = { 0 }, j = 0, c, flag = 0, k = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	//输入第一组数据
//	scanf("%d", &N);
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &A[i]);
//	}
//	//输入第二组数据
//	for (i = 0; i < n; i++)
//	{
//		c = a[i];
//		flag = 0;
//		for (j = 0; j < N; j++)
//		{
//			if (c == A[j])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			b[k] = c;
//			k++;
//		}
//		//将不共有数据存入b[]中
//	}
//	//第一次比较，筛选出a[]中不是共有的元素
//	for (j = 0; j < N; j++)
//	{
//		c = A[j];
//		flag = 0;
//		for (i = 0; i < n; i++)
//		{
//			if (c == a[i])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			b[k] = c;
//			k++;
//		}
//		//将不共有数据存入b[]中
//	}
//	//第二次比较，筛选A[]中不是共有的元素
//	printf("%d", b[0]);
//	//取出第一个数据，方便后续b[]中的数据自比较
//	for (i = 1; i < k; i++)
//	{
//		flag = 0;
//		for (j = 0; j < i; j++)
//		{
//			if (b[i] == b[j])
//			{
//				flag = 1;
//			}
//		}
//		//自比较，去除重复数据
//		if (flag == 0)
//		{
//			printf(" %d", b[i]);
//		}
//		//比较一个，输出一个
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, a[20][20] = { 0 }, i = 0, j = 0, sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (j = 0; j < n; j++)
//	{
//		a[n - 1][j] = 0;
//	}
//	//另最后一行所有元素为0
//	for (i = 0; i < n; i++)
//	{
//		a[i][n - 1] = 0;
//	}
//	//另最后一列所有元素为0
//	for (i = 0, j = n - 1; i < n, j >= 0; i++, j--)
//	{
//		a[i][j] = 0;
//	}
//	//另副对角线的所有元素为0
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			sum += a[i][j];
//		}
//	}
//	printf("%d", sum);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m, n, a[10][10] = { 0 }, i = 0, j = 0, c;
//	scanf("%d %d", &m, &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	m = m % n;
//	for (i = 0; i < n; i++)
//	{
//		for (j = n - m; j < n; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		for (j = 0; j < n - m; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <algorithm>
//#include <iostream>
//#include <sstream>
//using namespace std;
//char s[500];
//int cnt = 0;
//
//int gcd(int a, int b)
//{
//    if (b == 0)return a;
//    return gcd(b, a % b);
//}
//
//int main()
//{
//    char ch;
//    while ((ch = getchar()) != '\n') {
//        if (ch == ' ')continue;
//        s[cnt++] = ch;
//    }
//    int a = 0, b = 0, c = 0, d = 0;
//    //ax+b=cx+d
//    int res = 0;
//    int f = 0, f1 = 1;
//    for (int i = 0; i < cnt; i++) {
//        if (s[i] == '=') {
//            f = 1;
//            if (res != 0) {
//                b = res * f1;
//                res = 0;
//            }
//            f1 = 1;
//        }
//        else if (s[i] == '+' || s[i] == '-') {
//            if (res != 0) {
//                if (f == 1) {
//                    d = res * f1;
//                }
//                else b = res * f1;
//                res = 0;
//            }
//            if (s[i] == '-')f1 = -1;
//            else f1 = 1;
//        }
//        else if (s[i] == 'x') {
//            if (f == 0) {
//                a = res * f1;
//            }
//            else {
//                c = res * f1;
//            }
//            res = 0;
//        }
//        else {
//            res = res * 10 + (s[i] - '0');
//        }
//    }
//    //cout<<a<<' '<<b<<' '<<c<<' '<<d<<endl;
//    if (res != 0)d = res * f1;
//    int tx = a - c;
//    int tt = d - b;
//    //tx*x=tt;
//    //x=tt/tx;
//    int gd = gcd(tx, tt);
//    tx /= gd, tt /= gd;
//    if (tt % tx == 0) {
//        cout << "x=" << tt / tx << endl;
//    }
//    else if (tx * tt < 0) {
//        cout << "x=-" << abs(tt) << '/' << abs(tx) << endl;
//    }
//    else {
//        cout << "x=" << abs(tt) << '/' << abs(tx) << endl;
//    }
//    return 0;
//}


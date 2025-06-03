//#include <stdio.h>
//int main()
//{
//	int yyyy, mm, dd, i = 0, b = 0;
//	scanf("%d/%d/%d", &yyyy, &mm, &dd);
//	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	if ((yyyy % 4 == 0 && yyyy % 100 != 0) || yyyy % 400 == 0)
//	{
//		a[1] = 29;
//	}
//	for (i = 0; i < mm - 1; i++)
//	{
//		b += a[i];
//	}
//	b = b + dd;
//	printf("%d", b);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a, b[100];
//	int c, i = 0, d = -1;
//	a = getchar();
//	//输入待查找的字符
//	getchar();
//	//吃掉字符'\n'，否则会使系统错误识别，无法输出预期结果
//	gets_s(b);
//	c = strlen(b);
//	//小建议：字符数组的大小尽量以这种方法计算
//	for (i = 0; i < c; i++)
//	{
//		if (b[i] == a)
//		{
//			d = i;
//		}
//	}
//	//将数组中的字符与待查找的字符进行比较
//	if (d == -1)
//	//此处的d用于判断是否找到对应字符
//	{
//		printf("Not Found");
//	}
//	else
//	{
//		printf("index = %d", d);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[100];
//	int b, i = 0;
//	gets_s(a);
//	b = strlen(a);
//	for (i = b - 1; i >= 0; i--)
//	{
//		printf("%c", a[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, a[20] = { 0 }, i = 0, j = 0, b;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				b = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = b;
//			}
//		}
//	}
//	printf("%d", a[0]);
//	for (i = 1; i < n; i++)
//	{
//		printf(" %d", a[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, a[1001] = { 0 }, b[10] = { 0 }, i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int c = a[i];
//		if (c == 0)
//		{
//			b[0]++;
//		}
//		else
//		{
//			while (c)
//			{
//				int d = c % 10;
//				b[d]++;
//				c /= 10;
//			}
//		}	
//	}
//	int e = b[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (e < b[i])
//		{
//			e = b[i];
//		}
//	}
//	printf("%d:", e);
//	for (i = 0; i < 10; i++)
//	{
//		if (b[i] == e)
//		{
//			printf(" %d", i);
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int b, j = 0, k = 0, flag = 0, a[20][20] = { 0 };
//		scanf("%d", &b);
//		for (j = 0; j < b; j++)
//		{
//			for (k = 0; k < b; k++)
//			{
//				scanf("%d", &a[j][k]);
//			}
//		}
//		
//		for (j = 1; j < b; j++)
//		{
//			for (k = 0; k < j; k++)
//			{
//				if (a[j][k] != 0)
//				{
//					flag = 1;
//					break;
//				}
//			}
//			if (flag == 1)
//			{
//				break;
//			}
//		}
//		
//		if (flag == 0)
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

//#include <stdio.h>
//int main()
//{
//	int m, n, a[10][10] = { 0 }, i = 0, j = 0, sum = 0;
//	scanf("%d %d", &m, &n);
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		sum = 0;
//		for (j = 0; j < n; j++)
//		{
//			sum += a[i][j];
//		}
//		printf("%d\n", sum);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, a[10][10] = { 0 }, i = 0, j = 0, k = 0, c = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			int b = a[i][j], f1 = 0, f2 = 0;
//			for (k = 0; k < n; k++)
//			{
//				if (b < a[i][k])
//				{
//					f1 = 1;
//					break;
//				}
//			}
//			if (f1 == 0)
//			{
//				for (k = 0; k < n; k++)
//				{
//					if (b > a[k][j])
//					{
//						f2 = 1;
//						break;
//					}
//				}
//				if (f2 == 0)
//				{
//					printf("%d %d\n", i, j);
//					c = 1;
//				}
//			}
//		}
//	}
//	if (c == 0)
//	{
//		printf("NONE");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[100];
//	int count = 0, b, i = 0;
//	gets_s(a);
//	b = strlen(a);
//	for (i = 0; i < b; i++)
//	{
//		if (a[i] >= 'A' && a[i] <= 'Z')
//		{
//			if (a[i] != 'A' && a[i] != 'E' && a[i] != 'I' && a[i] != 'O' && a[i] != 'U')
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d", count);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[100];
//	int b, i = 0;
//	gets_s(a);
//	b = strlen(a);
//	for (i = 0; i < b; i++)
//	{
//		if (a[i] >= 'A' && a[i] <= 'Z')
//		{
//			a[i] = 'A' + 'Z' - a[i];
//		}
//	}
//	puts(a);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a[100], b[100];
//	long i = 0, j = 0, number = 0, flag = 0, mark = 0;
//	while ((a[i] = getchar()) != '#')
//	{
//		i++;
//	}
//	a[i] = '\0';
//	i = 0;
//	while (a[i] != '\0')
//	{
//		if ((a[i] >= '0' && a[i] <= '9') || (a[i] >= 'A' && a[i] <= 'F') || (a[i] >= 'a' && a[i] <= 'f'))
//		{
//			b[j] = a[i];
//			j++;
//			flag = 1;
//		}
//		else if (a[i] == '-' && flag == 0)
//		{
//			mark = 1;
//		}
//		i++;
//	}
//	b[j] = '\0';
//	for (j = 0; b[j] != '\0'; j++)
//	{
//		if (b[j] >= '0' && b[j] <= '9')
//		{
//			number = number * 16 + b[j] - '0';
//		}
//		else if (b[j] >= 'A' && b[j] <= 'F')
//		{
//			number = number * 16 + b[j] - 'A' + 10;
//		}
//		else if (b[j] >= 'a' && b[j] <= 'f')
//		{
//			number = number * 16 + b[j] - 'a' + 10;
//		}
//	}
//	if (number == 0)
//	{
//		printf("0");
//	}
//	else
//	{
//		if (mark == 1)
//			printf("-");
//		printf("%d", number);
//	}
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int 

	return 0;
}
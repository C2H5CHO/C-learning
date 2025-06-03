//#include <stdio.h>
//int main()
//{
//	char c1[100];
//	int i = 0, count = 0;
//	while(~scanf("%c", &c1[i]))
//	{
//		if (c1[i] == '\n')
//			break;
//		i++;
//		count++;
//	}
//	for (i = count - 1; i >= 0; i--)
//	{
//		printf("%c", c1[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char c1[100];
//	int i = 0, count = 0, a, number = 0;
//	while (~scanf("%c", &c1[i]))
//	{
//		if (c1[i] == '\n')
//			break;
//		i++;
//		count++;
//	}
//	
//	for (i = 0; i < count; i++)
//	{
//		if (c1[i] >= '0' && c1[i] <= '9')
//		{
//			a = i;
//			break;
//		}
//	}
//	
//	for (i = a; i < count; i++)
//	{
//		if (c1[i] >= '0' && c1[i] <= '9')
//		{
//			number = number * 10 + c1[i] - '0';
//		}
//		else
//		{
//			break;
//		}
//	}
//	printf("%d", number);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char c1[201];
//	int i = 0, count = 0, a = 0;
//	while (~scanf("%c", &c1[i]))
//	{
//		if (c1[i] == '\n') break;
//		i++;
//		count++;
//	}
//	for (i = 0; i < count; i++)
//	{
//		if (c1[i] > 'A' && c1[i] <= 'Z' && c1[i] != 'E' && c1[i] != 'I' && c1[i] != 'O' && c1[i] != 'U')
//		{
//			a++;
//		}
//	}
//	printf("%d", a);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char c1[100], a, ch;
//	int i = 0, count = 0, b = 0;
//	ch = getchar();
//	for (i = 0; ch != '\n'; i++)
//	{
//		c1[i] = ch;
//		count++;
//		ch = getchar();
//	}
//	if (scanf("%c", &a))
//	{
//		for (i = 0; i < count; i++)
//		{
//			if (c1[i] == a)
//			{
//				b++;
//			}
//		}
//	}
//	printf("%d", b);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	char a[80] = { 0 };
//	int i, len = 0, count = 0;//变量，长度，次数 
//	char ch, c;
//	ch = getchar();//注意getchar()函数的使用
//	for (i = 0; ch != '\n'; i++)
//	{
//		a[i] = ch;
//		len++;
//		ch = getchar();
//	}
//	if (scanf("%c", &c))
//		for (i = 0; i < len; i++)
//		{
//			if (c == a[i])
//			{
//				count++;
//			}
//		}
//	printf("%d\n", count);
//	return 0;
//}

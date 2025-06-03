//#include <stdio.h>
//int same(char* arr)
//{
//	int i = 0, a[101] = { 0 };
//	for (i = 0; arr[i] != ' ' || arr[i] != '\n'; i++)
//	{
//		if (arr[i] >= '0' && arr[i] <= '9')
//		{
//			a[i] = arr[i] - '0' + '0';
//		}
//		else if (arr[i] >= 'a' && arr[i] <= 'z')
//		{
//			a[i] = arr[i] - 'a';
//		}
//		else if (arr[i] >= 'A' && arr[i] <= 'Z')
//		{
//			a[i] = arr[i] - 'A';
//		}
//	}
//	return a[101];
//}
//
//int main()
//{
//	char a[101], ch1, b[101], ch2;
//	int i = 0, c[101] = { 0 }, d[101] = { 0 }, e = 0;
//	ch1 = getchar();
//	for (i = 0; ch1 != ' '; i++)
//	{
//		a[i] = ch1;
//		ch1 = getchar();
//	}
//	c[101] = same(a);
//	ch2 = getchar();
//	for (i = 0; ch2 != '\n'; i++)
//	{
//		b[i] = ch2;
//		ch2 = getchar();
//	}
//	d[101] = same(b);
//	for (i = 0; i <= 100; i++)
//	{
//		if (c[i] != d[i])
//		{
//			e = 1;
//		}
//	}
//	if (e == 0)
//	{
//		printf("EQUAL");
//	}
//	else
//	{
//		printf("NOT EQUAL");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[100], b[100]; int i, j;
//	scanf("%s%s", &a, &b);
//	i = strlen(a);
//	j = strlen(b);
//	if (i != j)
//		printf("NOT EQUAL\n");
//	else
//	{
//		for (i = 0; i < j; i++)
//		{
//			if (a[i] >= 97 && a[i] <= 122)
//				a[i] -= 32;
//			if (b[i] >= 97 && b[i] <= 122)
//				b[i] -= 32;
//		}
//		if (strcmp(a, b) == 0)
//			printf("EQUAL\n");
//		else
//			printf("NOT EQUAL\n");
//	}
//	return 0;
//}





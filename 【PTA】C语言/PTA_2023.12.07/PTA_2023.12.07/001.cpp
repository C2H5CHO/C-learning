//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[5][100], b[100];
//	int i = 0, j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%s", &a[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 4 - i; j++)
//		{
//			int c = strcmp(a[j], a[j + 1]);
//			if (c > 0)
//			{
//				strcpy(b, a[j]);
//				strcpy(a[j], a[j + 1]);
//				strcpy(a[j + 1], b);
//			}
//		}
//	}
//	printf("After sorted:\n");
//	for (i = 0; i < 5; i++)
//	{
//		puts(a[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n, i = 0;
//	scanf("%d", &n);
//	double* p = (double*)malloc(n * sizeof(double)), sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lf", p + i);
//		sum += *(p + i);
//	}
//	double max = *p, min = *p, b;
//	for (i = 1; i < n; i++)
//	{
//		if (*(p + i) > max)
//		{
//			max = *(p + i);
//		}
//		if (*(p + i) < min)
//		{
//			min = *(p + i);
//		}
//	}
//	b = sum * 1.0 / n;
//	printf("average = %.2f\n", b);
//	printf("max = %.2f\n", max);
//	printf("min = %.2f\n", min);
//	free(p);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int hh, mm, ss, n, a = 0, b = 0, c = 0;
//	scanf("%d:%d:%d", &hh, &mm, &ss);
//	scanf("%d", &n);
//	a = ss + n;
//	if (a >= 60)
//	{
//		ss = a - 60;
//		b = a / 60;
//	}
//	else
//	{
//		ss = a;
//	}
//	b = b + mm;
//	if (b >= 60)
//	{
//		mm = b - 60;
//		c = b / 60;
//	}
//	else
//	{
//		mm = b;
//	}
//	c = c + hh;
//	if (c >= 24)
//	{
//		hh = c - 24;
//	}
//	else
//	{
//		hh = c;
//	}
//	printf("%02d:%02d:%02d", hh, mm, ss);
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
//	if (x >= -0.05 && x <= -0.0)
//	{
//		x = -x;
//	}
//	if (y >= -0.05 && y <= -0.0)
//	{
//		y = -y;
//	}
//	printf("(%.1f, %.1f)", x, y);
//
//	return 0;
//}

//#include <stdio.h>
//struct book
//{
//	char name[100];
//	double price;
//};
//
//int main()
//{
//	int n, i = 0, j = 0, b;
//	scanf("%d", &n);
//	getchar();
//	struct book books[100], a;
//	for (i = 0; i < n; i++)
//	{
//		scanf("Programming in %s", &books[i].name);
//		scanf("%lf", &books[i].price);
//		getchar();
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		b = i;
//		for (j = i+1; j < n; j++)
//		{
//			if (books[j].price > books[b].price)
//			{
//				b = j;
//			}
//		}
//		a = books[b];
//		books[b] = books[i];
//		books[i] = a;
//	}
//	printf("%.2f, Programming in %s\n", books[0].price, books[0].name);
//	printf("%.2f, Programming in %s\n", books[n - 1].price, books[n - 1].name);
//
//	return 0;
//}


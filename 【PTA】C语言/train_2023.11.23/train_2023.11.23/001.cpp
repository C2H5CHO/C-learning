//#include <stdio.h>
//int main()
//{
//	int n, m;
//	while (~scanf_s("%d %d", &n, &m))
//	{
//		if (n == 0 || m == 0)
//		{
//			return 0;
//		}
//		int a[101][101] = { 0 }, b[101][101] = { 0 }, i = 0, j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//			{
//				scanf_s("%d", &a[i][j]);
//			}
//		}
//
//		for (j = 0; j < m; j++)
//		{
//			for (i = 0; i < n; i++)
//			{
//				b[j][i] = a[i][j];
//			}
//		}
//
//		for (j = 0; j < m; j++)
//		{
//			for (i = 0; i < n; i++)
//			{
//				printf("%d ", b[j][i]);
//			}
//			printf("\n");
//		}
//
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//			{
//				printf("%d ", a[i][j]);
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m, n;
//	while (~scanf_s("%d,%d", &m, &n))
//	{
//		if (m == 0 || n == 0)
//		{
//			return 0;
//		}
//		int arr1[101][101] = { 0 }, i = 0, j = 0, a = 0;
//		for (i = 0; i < m; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				scanf_s("%d", &arr1[i][j]);
//			}
//		}
//		for (i = 0; i < m; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (a < arr1[i][j])
//				{
//					a = arr1[i][j];
//				}
//			}
//		}
//		printf("%d\n", a);
//
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m, n;
//	scanf_s("%d %d", &m, &n);
//	int arr1[21][21] = { 0 }, i = 0, j = 0, a, b = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf_s("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 1; i < m - 1; i++)
//	{
//		for (j = 1; j < n - 1; j++)
//		{
//			a = arr1[i][j];
//			if (a > arr1[i][j-1] && a > arr1[i][j+1] && a > arr1[i-1][j] && a > arr1[i+1][j])
//			{
//				printf("%d %d %d\n", arr1[i][j], i + 1, j + 1);
//				b = 1;
//			}
//		}
//	}
//	if (b == 0)
//	{
//		printf("None %d %d", m, n);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y, m, d;
//	scanf_s("%d/%d/%d", &y, &m, &d);
//	int arr1[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }, i = 0, sum = 0;
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//	{
//		arr1[1] = 29;
//	}
//	for (i = 0; i < m-1; i++)
//	{
//		sum = sum + arr1[i];
//	}
//	sum = sum + d;
//	printf("%d", sum);
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int i = 1, a, arr1[11][11] = { 0 }, j = 0, k = 0, l = 1;
//	while (i <= n)
//	{
//		int b = 0;
//		scanf_s("%d", &a);
//		for (j = 0; j < a; j++)
//		{
//			for (k = 0; k < a; k++)
//			{
//				scanf_s("%d", &arr1[j][k]);
//			}
//		}
//		for (l = 1; l < a; l++)
//		{
//			for (k = 0; k < l; k++)
//			{
//				if (arr1[l][k] != 0)
//				{
//					b = 1;
//				}
//			}
//		}
//		if (b == 1)
//		{
//			printf("NO\n");
//		}
//		else
//		{
//			printf("YES\n");
//		}
//		i++;
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int i = 1, arr1[11][11] = { 0 }, j = 0, k = 0, a = 1;
//		for (j = 0; j < n; j++)
//		{
//			for (a = 1; a <= n - i; a++)
//			{
//				printf(" ");
//			}
//			arr1[j][0] = arr1[j][j] = 1;
//			for (k = 0; k < j + 1; k++)
//			{
//				if (k > 0 && k < j)
//				{
//					arr1[j][k] = arr1[j - 1][k - 1] + arr1[j - 1][k];
//				}
//				printf("% 4d", arr1[j][k]);
//			}
//			printf("\n");
//			i++;
//		}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int i = 0, j = 0, arr1[10][10] = { 0 }, a, h = 0, k = 0, b = 0, c = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf_s("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			a = arr1[i][j];
//			b = 0;
//			for (h = 0; h < n; h++)
//			{
//				if (a >= arr1[i][h] && a <= arr1[h][j])
//				{
//					b++;
//				}
//			}
//			if (b == n)
//			{
//				printf("%d %d\n", i, j);
//				c = 1;
//			}
//		}
//	}
//	if (c == 0)
//	{
//		printf("NONE");
//	}
//	
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int arr1[11][11] = { 0 }, i = 0, j = 0, sum = 0, k = n - 1;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf_s("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		arr1[n - 1][i] = 0;
//		arr1[i][n - 1] = 0;
//		arr1[k][i] = 0;
//		k--;
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			sum = sum + arr1[i][j];
//		}
//	}
//	printf("%d", sum);
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int i, j, k, base = 1, n, arr1[11][11] = { 0 };
	scanf_s("%d", &n);
	for (k = 0; k < n / 2; k++)
	{
		for (i = k; i <= n - 1 - k; i++)
		{
			arr1[k][i] = base++;
		}
		for (j = k + 1; j < n - 1 - k; j++)
		{
			arr1[j][n - 1 - k] = base++;
		}
		for (i = n - 1 - k; i > k; i--)
		{
			arr1[n - 1 - k][i] = base++;
		}
		for (j = n - 1 - k; j > k; j++)
		{
			arr1[j][k] = base++;
		}
		if (n % 2 == 1)
		{
			arr1[(n - 1) / 2][(n - 1) / 2] = base;
		}
	}
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("% 3d", arr1[i][j]);
		}
		printf("\n");
	}

	return 0;
}
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int arr1[11][11] = { 0 }, i = 0, j = 0, b = 1, c = 0, d;
//	d = n;
//	for (c = 0; c < n / 2; c++)
//	{
//		i = j = c;
//		for (j; j < d - 1; j++)
//		{
//			arr1[i][j] = b++;
//		}
//		for (i; i < d - 1; i++)
//		{
//			arr1[i][j] = b++;
//		}
//		for (j; j > c; j--)
//		{
//			arr1[i][j] = b++;
//		}
//		for (i; i > c; i--)
//		{
//			arr1[i][j] = b++;
//		}
//		d--;
//	}
//	
//	if (n % 2 != 0)
//	{
//		arr1[n / 2][n / 2] = n * n;
//	}
//	
//	for (i = 0; i < n; i++)//´òÓ¡Êý×é
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%3d", arr1[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


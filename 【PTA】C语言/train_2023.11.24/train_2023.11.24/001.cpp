//#include <stdio.h>
//int main()
//{
//	int arr1[10] = { 0 }, i = 0, k = 0, a, b = 0, c = 1, d, e = 0, sum;
//	for (i = 0; i < 5; i++)
//	{
//		scanf_s("%d", &a);
//		arr1[a]++;
//	}
//	for (i = 9; i >= 0; i--)
//	{
//		if (arr1[i] != 0)
//		{
//			for (k = 0; k < arr1[i]; arr1[i]--)
//			{
//				if (c == 3) break;
//				b = b * 10 + i;
//				c++;
//			}
//			d = i;
//		}
//		if (c == 3) break;
//	}
//	for (i = d; i >= 0; i--)
//	{
//		if (arr1[i] != 0)
//		{
//			for (k = 0; k < arr1[i]; arr1[i]--)
//			{
//				e = e * 10 + i;
//			}
//		}
//	}
//	sum = b * e;
//	printf("%d", sum);
//
//	return 0;
//}



//#include <stdio.h>
//int max(int* arr1)
//{
//	int a = 0, i = 0;
//	
//	for (i = 0; i < 5; i++)
//	{
//		a = a >= arr1[i] ? a : arr1[i];
//	}
//	return a;
//}
//
//int main ()
//{
//	int arr1[10] = { 0 }, arr2[10] = { 0 }, i = 0, j = 0, sum = 0, b, c;
//	for (i = 0; i < 5; i++)
//	{
//		scanf_s("%d", &arr1[i]);
//	}
//	
//	for (j = 0; j < 5; j++)
//	{
//		arr2[j] = max(arr1);
//		for (i = 0; i < 5; i++)
//		{
//			if (arr2[j] == arr1[i])
//			{
//				arr1[i] = -1;
//				break;
//			}
//		}
//	}
//	b = arr2[0] * 100 + arr2[3] * 10 + arr2[4];
//	c = arr2[1] * 10 + arr2[2];
//	sum = b * c;
//	printf("%d", sum);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n, i, j, k, x, y;
//	int max = 0;
//	int flag = 0, cnt = 0;
//	int a[6][6] = { 0 };
//	scanf("%d", &n);
//	
//	for (i = 0; i < n; i++) 
//	{
//		for (j = 0; j < n; j++) 
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	
//	for (i = 0; i < n; i++) 
//	{
//		max = a[i][0];
//		flag = 0;
//		for (j = 0; j < n; j++) 
//		{
//			if (max < a[i][j]) 
//			{
//				max = a[i][j];
//				k = j;
//				y = i;
//			}
//		}
//		
//		int min = a[y][k];
//		
//		for (x = 0; x < n; x++) 
//		{
//			if (min > a[x][k]) 
//			{
//				flag = 1;
//				cnt++;
//				break;
//			}
//		}
//
//		if (flag == 0) 
//		{
//			printf("%d %d\n", y, k);
//		}
//	}
//
//	if (cnt == n) 
//	{
//		printf("NONE");
//	}
//	
//	return 0;
//}

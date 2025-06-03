//#include <stdio.h>
//int main()
//{
//	char b[100] = { 'h','n','k','d','2','0','1','2' };
//	char a[100], ch;
//	int i = 0, count = 0, c = 0, j = 0;
//	printf("Input password:");
//	for (j = 1; j <= 3; j++)
//	{
//		c = 0;
//		ch = getchar();
//		for (i = 0; ch != '\n';i++)
//		{
//			a[i] = ch;
//			count++;
//			ch = getchar();
//		}
//		for (i = 0; i < 8; i++)
//		{
//			if (a[i] != b[i])
//			{
//				c = 1;
//			}
//		}
//		
//		if (c == 0)
//		{
//			printf("Congratulation!");
//			break;
//		}
//		else if (c == 1)
//		{
//			if (j == 3)
//			{
//				break;
//			}
//			printf("Error,please input again:");
//		}
//	}
//	if (j >= 3)
//	{
//		printf("The program is terminated!");
//	}
//	
//	return 0;
//}
//

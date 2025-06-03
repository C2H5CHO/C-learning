//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	char a[100], ch;
//	int i = 0, count = 0, b = 0, c = 0, d = 0;
//	scanf("%s", &a);
//	if (strlen(a) < 8)
//	{
//		printf("The password is unsecure");
//	}
//	else
//	{	
//		for (i = 0; i < strlen(a); i++)
//		{
//			if (a[i] >= '0' && a[i] <= '9')
//			{
//				b = 1;
//			}
//			if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
//			{
//				c = 1;
//			}
//			if ((a[i] >= 32 && a[i] <= 47) || (a[i] >= 58 && a[i] <= 64) || (a[i] >= 91 && a[i] <= 96) || (a[i] >= 123 && a[i] <= 126))
//			{
//				d = 1;
//			}
//		}
//		if (b == 1 && c == 1 && d == 1)
//		{
//			printf("The password is secure");
//		}
//		else
//		{
//			printf("The password is unsecure");
//		}
//	}
//
//	return 0;
//}
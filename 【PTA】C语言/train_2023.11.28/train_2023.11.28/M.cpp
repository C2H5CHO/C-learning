//#include <stdio.h>
//int main()
//{
//	char b[5] = { '.','j','a','v','a' };
//	char a[1001], ch;
//	int i = 0, count = 0, j = 4, c = 0;
//	ch = getchar();
//	for (i = 0; ch != '\n'; i++)
//	{
//		a[i] = ch;
//		count++;
//		ch = getchar();
//	}
//	if (count <= 5)
//	{
//		printf("不合法");
//	}
//	else
//	{
//		for (i = count - 1; i >= count - 5; i--)
//		{
//			if (a[i] != b[j])
//			{
//				c = 1;
//			}
//			j--;
//		}
//		if (c == 0)
//		{
//			printf("合法");
//		}
//		else
//		{
//			printf("不合法");
//		}
//	}
//
//	return 0;
//}
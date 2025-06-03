//#include <stdio.h>
//int main()
//{
//	char a[100], ch;
//	long i = 0, count = 0, b, c[10] = { 0 }, sum = 0;
//	ch = getchar();
//	for (i = 0; ch != '\n'; i++)
//	{
//		a[i] = ch;
//		count++;
//		ch = getchar();
//	}
//	for (i = 0; i < count; i++)
//	{
//		if (a[i] >= '0' && a[i] <= '9')
//		{
//			b = a[i] - '0';
//			c[b]++;
//		}
//	}
//	for (i = 9; i >= 0; i--)
//	{
//		while(c[i] != 0)
//		{
//			sum = sum * 10 + i;
//			c[i]--;
//		}
//	}
//	printf("%d", sum);
//
//	return 0;
//}
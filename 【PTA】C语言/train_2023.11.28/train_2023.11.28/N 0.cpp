//#include <stdio.h>
//int main()
//{
//	char a[101], b[101][101], ch;
//	int i = 0, count = 0, c, j = 0, k = 0, d;
//	ch = getchar();
//	for (i = 0; ch != ' '; i++)
//	{
//		a[i] = ch;
//		count++;
//		ch = getchar();
//	}
//	scanf("%d", &c);
//	if (count % c == 0)
//	{
//		d = count / c;
//	}
//	else
//	{
//		d = count / c + 1;
//	}
//	i = 0;
//	for (k = 0; k < d; k++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			b[j][k] = a[i];
//			i++;
//		}
//	}
//	for (j = 0; j < c; j++)
//	{
//		for (k = 0; k < d; k++)
//		{
//			printf("%c", b[j][k]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#define maxx 100 
//#include<string.h>
//int main() {
//	char s[maxx]; int k, i, zheng;
//	scanf("%s", &s);
//	scanf("%d", &k);
//	for (zheng = 0; zheng < k; zheng++) {
//
//		for (i = 0; i < strlen(s); i++) {
//
//			if (i % k == zheng)printf("%c", s[i]);
//
//
//		}
//		printf("\n");
//	}
//	return 0;
//}
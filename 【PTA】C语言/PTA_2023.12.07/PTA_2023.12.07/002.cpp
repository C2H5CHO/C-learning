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
//		gets_s(books[i].name);
//		scanf("%lf", &books[i].price);
//		getchar();
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		b = i;
//		for (j = i + 1; j < n; j++)
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
//	printf("%.2f, %s\n", books[0].price, books[0].name);
//	printf("%.2f, %s\n", books[n - 1].price, books[n - 1].name);
//
//	return 0;
//}
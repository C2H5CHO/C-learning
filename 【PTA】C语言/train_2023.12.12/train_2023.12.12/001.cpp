//#include<stdio.h>
//double getpower(int x, int y);
//int main()
//{
//	int x, y;
//	while (scanf("%d,%d", &x, &y) != EOF) {
//		if (x == 0)
//			break;
//		printf("%.6lf\n", getpower(x, y));
//	}
//	return 0;
//}
//double getpower(int x, int y)
//{
//	if (y == 0 || x == 1)
//		return 1;
//	else if (y > 0) {
//		return x * getpower(x, (y - 1));
//	}
//	else {
//		return 1.0 / (x * getpower(x, (-y - 1)));
//	}
//}


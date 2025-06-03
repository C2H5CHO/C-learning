//#include <stdio.h>
//int main()
//{
//	char c1[100], c2[100];
//	int i = 0, count1 = 0, j = 0, count2 = 0, k = 0, a = 0;
//	while (~scanf("%c", &c1[i]))
//	{
//		if (c1[i] == '\n') break;
//		i++;
//		count1++;
//	}
//	for (i = 0; i < count1; i++)
//	{
//		if (c1[i] >= 'A' && c1[i] <= 'Z')
//		{
//			c2[j] = c1[i];
//			j++;
//			count2++;
//		}
//	}
//	if (count2 == 0)
//	{
//		printf("Not Found\n");
//	}
//	else
//	{
//		printf("%c", c2[0]);
//		for (j = 1; j < count2; j++)
//		{
//			a = 0;
//			for (k = 0; k < j; k++)
//			{
//				if (c2[j] == c2[k])
//				{
//					a = 1;
//				}
//			}
//			if (a == 0)
//			{
//				printf("%c", c2[j]);
//			}
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char c1[100], c2[100], c3[100];
//	int i = 0, count1 = 0, j = 0, a = 0, k = 0, count2 = 0, b;
//	while (~scanf("%c", &c1[i]))
//	{
//		if (c1[i] == '\n') break;
//		i++;
//		count1++;
//	}
//	c2[0] = c1[0];
//	for (i = 1; i < count1; i++)
//	{
//		a = 0;
//		for (j = 0; j < i; j++)
//		{
//			if (c1[i] == c1[j])
//			{
//				a = 1;
//			}
//		}
//		if (a == 0)
//		{
//			k++;
//			c2[k] = c1[i];
//			count2++;
//		}
//	}
//	for (k = 0; k < count2; k++)
//	{
//		b = c2[k] - '!';
//		c3[b] = c2[k];
//	}
//	for (i = 0; i < 100; i++)
//	{
//		if (c3[i])
//		{
//			printf("%c", c3[i]);
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int temp, i = 0, j = 0, count = 0;
//	char a[100];
//	while ((a[i] = getchar()) != '\n')
//	{
//		i++;
//		count++;
//	}
//	a[i] = '\0';
//	for (i = 0; a[i] < count - 1; i++)
//	{
//		for (j = 0; a[i] < count - 1; j++);
//		{
//			if (a[j + 1] <= a[j])
//			{
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; a[i] != '\0'; i++)
//	{
//		printf("%c", a[i]);
//	}
//
//	return 0;
//}



//#include <stdio.h>
//#define N 80
//int main() {
//    char a[N], b[N];
//    int i = 0, j = 0, len = 0, lenb = 0, flag = 0, t = 0;
//    char ch, temp;
//    ch = getchar();
//    for (i = 0; ch != '\n'; i++) {
//        a[i] = ch;
//        len++;
//        ch = getchar();
//    }
//
//    /*printf("输入测试\n");
//    for(i = 0; i < len; i++){
//        printf("%c",a[i]);
//    }
//    printf("\n");
//    printf("输入测试结束\n");**/
//
//    //去重
//    for (i = 0; i < len; i++) {
//        flag = 0;
//        for (j = 0; j < i; j++) {
//            if (a[j] == a[i]) {
//                flag = 1;
//            }
//        }
//        if (flag == 0) {
//            b[lenb] = a[i];
//            lenb++;
//        }
//    }
//
//    /*printf("去重测试\n");
//    for(i = 0; i < lenb; i++){
//        printf("%c",b[i]);
//    }
//    printf("%d\n");
//    printf("去重测试结束\n");**/
//
//    //排序，选择排序法
//    for (i = 0; i < lenb - 1; i++) {
//        t = i;
//        for (j = i + 1; j < lenb; j++) {
//            if (b[t] > b[j]) {
//                temp = b[t];
//                b[t] = b[j];
//                b[j] = temp;
//            }
//        }
//    }
//    //输出
//    for (i = 0; i < lenb; i++) {
//        printf("%c", b[i]);
//    }
//    return 0;
//}
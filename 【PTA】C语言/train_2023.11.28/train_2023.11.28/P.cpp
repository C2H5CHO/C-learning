//#include <stdio.h>
//int huiwen(long long n)
//{
//	long long a = 0;
//	long long b = n;
//	while (n)
//	{
//		a = a * 10 + n % 10;
//		n = n / 10;
//	}
//	if (b == a)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	long long a, i, b = 0;
//	while (~scanf("%lld", &a))
//	{
//		for (i = a + 1; ; i++)
//		{
//			b = huiwen(i);
//			if (b == 1)
//			{
//				printf("%d\n", i);
//				break;
//			}
//		}
//		
//	}
//
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10001
char s[N];

int main()
{
    while (~scanf("%s", s)) {
        int len = strlen(s);
        int flag = 0, i;
        for (i = len / 2 - 1; i >= 0; --i) {//判断只需要判断出一位即可 就可以判别前半部分大还是后半部分大 因为后半部分最后要前半部分逆着输出所以前半部分逆着和后半部分比 即最后一位即后半部分的最高位所以从最高位一直比下来 
            if (s[i] > s[len - 1 - i]) { flag = 1; break; } //前半部分大于后半部分  如果len是奇数，那么中间那位不需要比较  可以直接赋值为零在第29行，因为要求最小的回文数 
            else if (s[i] < s[len - 1 - i]) { flag = -1; break; } //后半部分大于前半部分 //len - i - 1 + i == len - 1即可 
        }
        if (flag != 1) {
            //前半串要加1  就大了来打了 
            //s[(len-1)/2]++; 中间前一位开始++ 
            for (i = (len - 1) / 2; i >= 0; --i) {//199 191 999
                s[i]++; 			//只要加一位 回文数回回去就一定比原来的数字大 因为高位加1不管后面位数多大 都大·不过高位 
                if (s[i] > '9') {
                    s[i] = '0';
                }
                else break;
            }
            if (s[0] == '0') {//999 9999
                s[0] = '1';
                len++;
                s[len / 2] = '0';
            }
        }
        for (i = 0; i < len / 2; ++i)  //将前半段输出     //若len为偶数 各输出一半，   奇数则输出前半部分不算中间 
            printf("%c", s[i]);
        for (i = (len + 1) / 2 - 1; i >= 0; --i) 	//再将前半段逆着输出  奇数带中间数字 比前面多输出一个  //下标设计很巧妙 
            printf("%c", s[i]);
        printf("\n");
    }
    return 0;
}
//#include <stdio.h>
//int main()
//{
//	char c1[101], ch;
//	int i = 0, count = 0;
//	
//	ch = getchar();
//	for (i = 0; ch != '#'; i++)
//	{
//		c1[i] = ch;
//		count++;
//		ch = getchar();
//	}
//	
//	for (i = 0; i < count; i++)
//	{
//		if (c1[i] >= 'a' && c1[i] <= 'z')
//		{
//			c1[i] = c1[i] - 32;
//		}
//		
//		if (c1[i] >= 'A' && c1[i] <= 'Z')
//		{
//			c1[i] = c1[i] + 32;
//		}
//	}
//	for (i = 0; i < count; i++)
//	{
//		printf ("%c",c1[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char s[100];//这里不设置为[31]的原因是题目说他有30个字符，再加上空格就超出范围了
//	int i;
//	gets_s(s);//在VS2017中不能通过编译时，这里可以更改为gets_s(s);
//	for (i = 0; s[i] != '#'; i++)
//	{
//		if (s[i] >= 'A' && s[i] <= 'Z')
//		{
//			s[i] += 32;//大写变成小写
//		}
//		else if (s[i] >= 'a' && s[i] <= 'z')
//		{
//			s[i] -= 32;//小写变成大写
//		}
//	}
//	for (i = 0; s[i] != '#'; i++)
//	{
//		printf("%c", s[i]);
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contact.h"
#include <windows.h>

void menu()
{
	printf("***************************************\n");
	printf("********   1.add     2.del    *********\n");
	printf("********   3.search  4.modify *********\n");
	printf("********   5.sort    6.print  *********\n");
	printf("********   0.exit             *********\n");
	printf("***************************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT,
};

int main()
{
	int input = 0;
	//创建通讯录
	Contact con;
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//增加人的信息
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			//保存信息到文件
			SaveContact(&con);
			//销毁通讯录
			DestoryContact(&con);
			printf("退出成功\n");
			return 0;
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
		getchar();
		getchar();
		system("cls");
	} while (input);
	return 0;
}
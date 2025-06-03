#include <stdio.h>
int main()
{
	int m, n;
	scanf_s("%d %d", &m, &n);
	int i = 1, a;
	while (~scanf_s("%d", &a))
	{
		if (i > n)
		{
			break;
		}
		
		if (a < 0)
		{
			printf("Game Over");
			return 0;
		}
		
		if (a == m)
		{
			break;
		}
		else if (a > m)
		{
			printf("Too big\n");
		}
		else
		{
			printf("Too small\n");
		}
		i++;
	}
	
	if (i == 1)
	{
		printf("Bingo!");
	}
	else if (i > 1 && i <= 3)
	{
		printf("Lucky You!");
	}
	else if (i > 3 && i <= n)
	{
		printf("Good Guess!");
	}
	else
	{
		printf("Game over");
	}

	return 0;
}
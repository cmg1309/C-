// 5-7
#include<stdio.h>
#include<math.h>

#define max 7

int main(void)
{
	int i = 0, j = 0;

	for (i = 0; i <= max; i++)
	{
		for (j = max; j >= -max; j--)
		{
			if (abs(j) > i)
				putchar(' ');
			else
				printf("%d", abs(j));
		}
		putchar('\n');
	}
}
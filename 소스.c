// 3-1��
//#include<stdio.h>
//
//int main(void)
//{
//	int i = 0, j = 0;
//
//	for (i = 0; i <= 5; i++)
//	{
//		for (j = 0; j <= 5; j++)
//		{
//		if (j <= i) printf("%d", j);
//		else putchar(' ');
//		}
//		puts("");
//	}
//}

// 3-2��
#include<stdio.h>

int main(void)
{
	int i = 0, j = 0;

	for (i = 6; i >= 0; i--)
	{
		for (j = 0; j <= 6; j++)
		{
			if (j < i) printf("%d", j);
			else putchar(' ');
		}
		puts("");
	}
}

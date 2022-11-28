// 7-7
#include<stdio.h>

int point[5][4] = { {97, 90, 88, 95}, {76, 89, 75, 83}, {60, 70, 88, 82}, {83, 89, 92, 85}, {75, 73, 72, 78} };

int main(void)
{
	int i, j, sum = 0;

	for (i = 0; i < 5; i++)
	{
		sum = 0;
		for (j = 0; j < 4; j++) {
			sum += point[i][j];
			printf("%6d", point[i][j]);
		}
		printf("\tÃÑÇÕ : %4d", sum);
		printf("\tÆò±Õ : %4.2f\n", sum / 4.0);
	}
}

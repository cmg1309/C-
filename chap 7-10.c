// 7-10
#include<stdio.h>

void result(int arr1[3][2], int arr2[2][3], int arr0[3][3]);
void show(int arr0[3][3]);

int main(void)
{
	int arr0[3][3] = { 0 };
	int arr1[3][2] = { {3,5}, {4,2}, {5,7} };
	int arr2[2][3] = { {3,8,2 }, {2, 4, 6} };

	result(arr1, arr2, arr0);
	show(arr0);
}

void result(int arr1[3][2], int arr2[2][3], int arr0[3][3])
{
	int i, j, k;
	for (i = 0; i < 3;i++)
	{
		for (j = 0; j < 3; j++)
		{
			arr0[i][j] = 0;
			for (k = 0; k < 2; k++)
			{
				arr0[i][j] = arr1[i][k] * arr2[k][j];
			}
		}
		puts("");
	}
}

void show(int arr0[3][3])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d", arr0[i][j]);
		}
		printf("");
	}
}
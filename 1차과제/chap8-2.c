//8-2
//#include<stdio.h>
//
//#define row 3
//#define col 4
//
//void oper(int A[][col]);
//
//int main(void)
//{
//	int A[row][col] = { 12,30,82,54,43,51,32,47,30,42,41,69 };
//	int i, j;
//
//	printf("=== ���� �迭 ===\n");
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf(" %d", A[i][j]);
//		}
//		printf("\n");
//	}
//	oper(A);
//}
//void oper(int A[][col])				// �迭 �� �Լ�
//{
//	int i, j;
//
//	printf("=== �ٲ� �迭 ===\n");
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			A[i][j] *= 10 + 2;
//			printf(" %d", A[i][j]);
//		}
//		printf("\n");
//	}
//}
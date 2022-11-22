//7-8
//#include<stdio.h>
//
//#define row 4
//#define col 4
//
//int add(int data[][col]);
//void rowsum(int data[][col]);
//void colsum(int data[][col]);
//
//int main(void)
//{
//	int data[row][col] = { 78,48,78,98,99,92,83,29,29,64,83,89,34,78,92,56 };
//	int sum = 0;
//
//	sum = add(data);
//	printf("모든 수의 합은 : %d\n", sum);
//	printf("======================\n");
//	rowsum(data);
//	printf("======================\n");
//	colsum(data);
//}
//int add(int data[][col])			// 배열내 전체 원소들의 합
//{
//	int i, j, sum = 0;
//
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//			sum += data[i][j];
//	}
//	return sum;
//}
//void rowsum(int data[][col])			// 행의 합
//{
//	int i, j, sumn = 0, summ = 0, sumz = 0, sum = 0;	// 1~4행 까지의 합을 저장할 변수 선언
//
//	for (i = 0; i < 1; i++)					// 1행의 합
//	{
//		for (j = 0; j < col; j++)
//			sum += data[i][j];
//		printf("1행의 합 : %d\n", sum);
//	}
//	for (i = 1; i < 2; i++)					// 2행의 합
//	{
//		for (j = 0; j < col; j++)
//			sumn += data[i][j];
//		printf("2행의 합 : %d\n", sumn);
//	}
//	for (i = 2; i < 3; i++)					// 3행의 합
//	{
//		for (j = 0; j < col; j++)
//			summ += data[i][j];
//		printf("3행의 합 : %d\n", summ);
//	}
//	for (i = 3; i < 4; i++)					// 4행의 합
//	{
//		for (j = 0; j < col; j++)
//			sumz += data[i][j];
//		printf("4행의 합 : %d\n", sumz);
//	}
//}
//void colsum(int data[][col])			// 열의 합
//{
//	int i, j, sumn = 0, summ = 0, sumz = 0, sum = 0;
//
//	for (i = 0; i < row; i++)			// 1열의 합
//	{
//		for (j = 0; j < 1; j++)
//		{
//			sum += data[i][j];
//		}
//	}
//	printf("1열의 합 : %d\n", sum);
//
//	for (i = 0; i < row; i++)			// 2열의 합
//	{
//		for (j = 1; j < 2; j++)
//		{
//			sumn += data[i][j];
//		}
//	}
//	printf("2열의 합 : %d\n", sumn);
//
//	for (i = 0; i < row; i++)			// 3열의 합
//	{
//		for (j = 2; j < 3; j++)
//		{
//			summ += data[i][j];
//		}
//	}
//	printf("3열의 합 : %d\n", summ);
//
//	for (i = 0; i < row; i++)			// 4열의 합
//	{
//		for (j = 3; j < 4; j++)
//		{
//			sumz += data[i][j];
//		}
//	}
//	printf("4열의 합 : %d\n", sumz);
//}
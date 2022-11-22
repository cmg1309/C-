//8-4
//#include<stdio.h>
//
//int main(void)
//{
//	double A[2][3] = { 4.2,4.3,3.8,3.7,1.5,0.7 };
//	double B[3][2] = { 5.2,2.1,3.2,1.4,1.5,3.6 };
//	double mul = 0;
//	int i, j, k;
//
//	for (i = 0; i < 2; i++)				//행반복
//	{
//		for (j = 0; j < 3; j++)			//열반복
//		{
//			for (k = 0; k < 2; k++)		//인덱스 값 반복
//			{
//				mul += A[i][k] * B[k][j];	//배열 a*b, 와 배열 b*c의 곱은 a,b,c의 중간 값인 b를 인덱스 값으로 지정함
//			}
//				printf(" %.2lf", mul);
//		}
//		printf("\n");
//	}
//}
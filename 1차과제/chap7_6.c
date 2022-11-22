//7-6
//#include<stdio.h>
//
//int main(void)
//{
//	int i;
//	double data[10] = { 0.0 };			// 계산된 값을 저장할 배열
//
//	for (i = 2; i < 12; i++)				// 1/(2*3)이 배열의 첫번째 원소라서 i는 2부터
//	{
//		data[i-2] = 1.0 / (i * (i + 1));	// i는 2부터 진행(2*(2+1), data[2-2]
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("data[%d] = %.3lf\n", i, data[i]);
//	}
//}
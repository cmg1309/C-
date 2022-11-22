//8-7
//#include<stdio.h>
//
//int main(void)
//{
//	int i;
//	double data[10] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0 };
//	double max = data[0];		// 가장 큰 값과 작은 값을 배열의 첫번째 요소로 잡음
//	double min = data[0];
//	double result = 0;
//
//	for (i = 0; i < 10; i++)	
//	{
//		if (data[i] > max)		 // data[0]이 max로 지정후 배열을 반복하면서 비교
//			max = data[i];
//		else if (data[i] < min)  // data[0]이 min로 지정후 배열을 반복하면서 비교
//			min = data[i];
//	}
//	printf("최대값 : %.2lf, ", max);
//	printf("최소값 : %.2lf\n", min);
//	result = max - min;
//	printf("최대값 - 최소값 = %.2lf", result);
//}
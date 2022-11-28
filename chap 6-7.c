// 6-7
#include<stdio.h>
#include<math.h>								// sqrt(제곱급) 구하는 함수 포함 헤드

double nums(double a, double b);				// c값을 구하는 함수원형

int main(void)
{
	double a = 0, b = 0, c = 0;

	printf("두 변의 길이 a, b를 입력: ");
	scanf_s("%lf %lf", &a, &b);
	c = nums(a, b);								// c값을 구하는 함수호출
	printf("c의 길이는 : %.2lf\n", c);
}

double nums(double a, double b)					// c값을 구하는 함수정의
{
	return sqrt(a * a + b * b);					// 제곱급을 이용해 리턴값 받음 
}
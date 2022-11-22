#include<stdio.h>

int main(void)
{
	int point1 = 95, point2 = 84;
	int total = point1 + point2;
	int D = total / 2;                   // D라는 변수에 정수 값 연산식을 넣음
	double F = total / 2.0;              // F라는 변수에 실수 값 연산식을 넣음
	
	printf("중간고사 점수:%d\n", point1);
	printf("기말고사 점수:%d\n", point2);
	printf("점수 합:%d\n", total);

	printf("평균값:%d\n", D);      // 정수 평균값이라서 d를 사용
	printf("평균값:%f\n", F);      // 실수 평균값이라서 f를 사용

	return 0;
}
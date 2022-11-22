#include<stdio.h>

int main(void)
{
	int point1 = 95, point2 = 84;
	int total = point1 + point2;

	printf("중간고사 점수:%d\n", point1);    // 변수 point1은 정수 이기때문에 d를 사용
	printf("기말고사 점수:%d\n", point2);    // 변수 point2은 정수 이기때문에 d를 사용
	printf("점수 합:%d\n", total);           // 변수 total은 point1과 point2를 합하는 변수로 저장

	return 0;
}
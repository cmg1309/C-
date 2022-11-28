#include<stdio.h>

int main(void)
{
	int money = 1000000, year = 0;               // 년도와 원금은 int
	double rate = 0.045, total = 0;              // 이자율과 총 금액은 결과값이 실수 형태로 나와서 double

	printf("예치 기간 입력 :");           
	scanf_s("%d", &year);

	total = money * (1 + rate * year);              
	printf("만기시 총 수령액: %lf\n", total);    // double 사용해서 lf 사용

	return 0;
}
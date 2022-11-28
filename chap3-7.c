#include<stdio.h>

int main(void)
{
	double C = 0;

	printf("섭씨온도 입력:");
	scanf_s("%lf", &C);
	printf("섭씨온도는 : %.4lf\n", (9.0 / 5.0) * C + 32.0);        // %.4f 는 .4는 소수점 4자리

	return 0;
}
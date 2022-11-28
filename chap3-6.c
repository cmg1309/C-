#include<stdio.h>

int main(void)
{
	double F = 0;                                          

	printf("화씨온도 입력:");
	scanf_s("%lf", &F); 
	printf("섭씨온도는 : %.4lf\n", 5.0 / 9.0 * (F - 32.0));       // %.4f 는 .4는 소수점 4자리

	return 0;
}
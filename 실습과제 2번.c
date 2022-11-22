#include<stdio.h>

int main(void)
{
	const double PHI = 3.14;
	double r = 4.38;

	printf("반지름이 %f인 구의 체적은 %7.2f입니다.\n\a\a\a", r, 4 * PHI * r * r * r / 3);
 
	return 0;
}

#include<stdio.h>

int main(void)
{
	double n1 = 0, n2 = 0;

	printf("실수1 입력?:");
	scanf_s("%lf", &n1);
	printf("실수2 입력?:");
	scanf_s("%lf", &n2);
	printf("%7.2lf / %7.2lf = %15.2lf", n1, n2, n1 / n2);

	return 0;
}
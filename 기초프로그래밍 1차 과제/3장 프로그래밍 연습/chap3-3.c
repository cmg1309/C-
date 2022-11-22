#include<stdio.h>

#define PI 3.14                                // 매크로 상수 사용, 원주율을 대체함

int main(void)
{
	double r = 7.58;

	printf("원의 면적: %f\n", r * r * PI);
	printf("원의 둘레: %f\n", 2 * r * PI);

	return 0;
}
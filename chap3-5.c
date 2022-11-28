#include<stdio.h>

#define PI 3.141592                                // 매크로 상수 사용, 원주율을 대체함

int main(void)
{
	double r = 0;                                  // 입력 받을 거기 때문에 0

	printf("원의 반지름 입력:");
	scanf_s("%lf", &r);                            // double 을 사용해서 lf 사용
	printf("원의 면적: %f\n", r * r * PI);
	printf("원의 둘레: %f\n", 2 * r * PI);

	return 0;
}

#include<stdio.h>

int main(void)
{
	double r = 7.58, PHI = 3.14;                 // 반지름, 원주율
	double V = (4.0 * 3.0) * PHI * r * r * r;    // 구의 체적
	double S = 4.0 * PHI * r * r;                // 구의 표면적
	    
	printf("구 체적 : %lf\n", V);                // doulbe 사용해서 lf사용
	printf("구 표면적 : %lf\n", S);              // doulbe 사용해서 lf사용

	return 0;
}
#include<stdio.h>

int main(void)
{
	double nums[5];                                 // 배열함수 원소 5개 0~4까지
	double max = 0;                                 // 최대값 변수
	int i = 0;

	printf("다섯 개의 숫자를 입력하세요: ");
	
	for (i = 0; i < 5; i++)							// 초기값(i) 0, 총 5번 반복하고 반복시 초기값(i) 1씩 증가
		scanf_s("%lf", &nums[i]);                   
	
	for (i = 0; i < 5; i++)							
		if (max < nums[i])							// 처음 입력받은 값을 최대값이라 가정하고, 2번째부터 5번째까지 입력되는 값이랑 비교
			max = nums[i];							// 처음 입력받은 값과 이후에 입력 받은 값을 비교해서 최대값을 구함

	printf("가장 큰 값은 %.2lf", max);

	return 0;
}

// 7-5
#include<stdio.h>

int main(void)
{
	int maxday, m, y;
	int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};			

	printf("년도와 달을 입력 : ");
	scanf_s("%d %d", &y, &m);

	maxday = month[m-1];						// 0열부터 시작이라서 입력값에 -1을 해줘야 12월의 값이 정상 출력됨			
	if (m == 2)													// 2월달이면
	{
		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))	// 윤년과 평년을 계산함
			maxday = 29;
	}

	printf("\n%d년의 %d달의 말일은 %d일 입니다.\n", y, m, maxday);
}

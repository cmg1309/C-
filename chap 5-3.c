// 5-3
#include<stdio.h>

int main(void)
{
	int n = 0;

	printf("년도를 입력하세요. ");
	scanf_s("%d", &n);

	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))	 // n(입력값)이 4로 나누어 나머지가 0이 되고, 100으로 나누었을때 나머지가 0이 아니면 윤년, 이 외에는 평년
	{
		printf("%d년은 윤년입니다.\n", n);
	}
	else
		printf("%d년은 평년입니다.\n", n);
}
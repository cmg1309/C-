// file: season.c

#include<stdio.h>

int main(void)
{
	int month = 0;
	printf("년도의 월(month)을 입력:");
	scanf_s("%d", &month);

	switch (month)                                        // switch 는 변수만 적고 변수는 정수, 문자형만 사용 가능(실수, 문자열 사용안됨)
	{
	case 4: case 5:                                       // case 를 연달아 사용할 경우 사이에 ,(콤마)는 사용하지 않고 띄워쓰기를 해야한다.
		printf("%d월은 봄입니다.\n", month);
		break;                                            // break 는 종료를 의미함

	case 6: case 7: case 8:
		printf("%d월은 여름입니다.\n", month);
		break;

	case 9: case 10: case 11:
		printf("%d월은 가을입니다.\n", month);
		break;

	case 12: case 1: case 2: case 3:
		printf("%d월은 겨울입니다.\n", month);
		break;

	default:                                               // case 에 포함되지 않는 나머지 것들을 처리함
		printf("월(month)을 잘못 입력하셨습니다.\n");
	}                                                      // default 는 마지막이라서 break 를 사용하지 않음
	return 0;
}
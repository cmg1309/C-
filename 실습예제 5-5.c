// file: switch.c

#include<stdio.h>

int main(void)
{
	double x = 0, y = 0, result = 0;
	int op = 0;

	printf("두 실수를 입력:");
	scanf_s("%lf %lf", &x, &y);                                     // double 사용해서 lf를 사용
	printf("연산 종류 번호 선택 1(+), 2(-), 3(*), 4(/): ");
	scanf_s("%d", &op);                                             // 정수 사용해서 d를 사용

	switch (op)                                                     // switch 는 if 와 다르게 변수만 적음
	{
	case 1:                                                         // case 뒤에는 변수 값을 적음, 변수는 정수 또는 문자형만 사용가능(실수, 문자열 사용안됨)
		printf("%.2f - %.2f = %.2f\n", x, y, x + y);                // case 1에 해당되지 않으면 case 2로 넘어감 그렇게 계속 2 3 4 넘어가다가 없으면 defauit 에서 끝남
		break;                                                      // break 는 종료를 의미함

	case 2:
		printf("%.2f - %.2f = %.2f\n", x, y, x - y);                 
		break;
		
	case 3:
		printf("%.2f * %.2f = %.2f\n", x, y, x * y);
		break;

	case 4:
		printf("%.2f / %.2f = %.2f\n", x, y, x / y);
		break;

	default:                                                         // 위 case 들을 실행하고 어디에도 해당되지 않으면 default 값으로 넘어옴
		printf("번호를 잘못 선택했습니다.\n");
	}                                                                // default 는 마지막이라서 break 를 사용하지 않음

	return 0;
}
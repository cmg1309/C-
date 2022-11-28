//두 정수를 입력받아 큰 수에서 작은 수를 나누고 몫과 나머지 출력하기

//#include<stdio.h>
//
//int main(void)
//{
//	int a = 0, b = 0;
//	int max = 0, min = 0;
//
//	printf("임의의 정수 입력1:");
//	scanf_s("%d", &a);
//	printf("임의의 정수 입력2:");
//	scanf_s("%d", &b);
//
//	((a > b) ? (max = a, min = b) : (max = b, min = a));
//
//	printf("몫은 %d이고 나미지는 %d입니다.\n", a / b, a % b);
//
//	return 0;
//}

#include<stdio.h>

int main(void)
{
	int a = 0, b = 0;

	printf("임의의 정수 입력1:");
	scanf_s("%d", &a);
	printf("임의의 정수 입력2: ");
	scanf_s("%d", &b);

	(a > b) ? printf("몫은 %d이고 나머지는 %d입니다.\n", a / b, a % b) : printf("몫은 %d이고 나머지는 %d입니다.\n", b / a, b % a);

	return 0;
}
// 실습예제 6-3
//#include<stdio.h>
//
//int factorial(int number);                         // 함수 원형
//
//int main(void)
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//
//		printf("%d! = %d\n", i, factorial(i));       // 함수 호출
//
//	return 0;
//}
//
//int factorial(int number)                          // 함수 정의
//{
//	if (number <= 1)                                 // number가 1과 같거나 작으면 1 을 출력
//		return 1;
//	else                                             
//		return (number * factorial(number - 1));     // 아니면 다음을 출력
//}

// 실습예제 6-6
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//#define max 100                                                    // 최대값 100
//
//int main(void)
//{
//	int n = 0, m = 0;
//
//	srand((long)time(NULL));                                         // 초 단위마다 랜덤으로 난수생성
//	n = rand() % max + 1;                                           
//
//	printf("1에서 %d 사이에서 한 수가 결정되었습니다.\n", max);
//	printf("이 정수는 무엇일까요? 입력해 보세요. : ");
//
//	while (scanf_s("%d", &m))                                        // 난수 입력
//	{
//		if (m > n)                                                   // 입력한 값이 입력된 난수보다 작으면 출력
//			printf("입력한 수보다 작습니다. 다시 입력하세요. : ");
//		else if (m < n)                                              // 입력한 값이 입력된 난수보다 크면 출력
//			printf("입력한 수보다 큽니다. 다시 입력하세요. : ");
//		else                                                         // 입력한 값이 입력된 난수와 같으면 puts() 출력하고 반복 종료
//		{
//			puts("정답입니다.");
//			break;
//		}
//	}
//	return 0;
//}

// 실습예제 6-7

//#include<stdio.h>
//#include<math.h>
//
//int main(void)
//{
//	int i = 0;
//
//	printf("  i   i제곱   i세제곱   제곱근(sqrt)\n");
//	printf("------------------------------------\n");
//	for (i = 3; i < 7; i++)
//		printf("%3d %7.1f %9.1f %9.1f\n", i, pow(i, 2), pow(i, 3), sqrt(i));   // pow(,2)는 제곱, pow(,3)은 세제곱, sqrt()는 제곱근
//	printf("\n");
//
//	printf("exp(1,0) == %5.2f, ", exp(1, 0));                                  
//	printf("pow(2.72, 1.0) == %5.2f, ", pow(2.72, 1.0));                       // 제곱표시 2.72의 1제곱 = 2.72
//	printf("sqrt(49) == %5.2f\n", sqrt(49));                                   // 제곱근 표시 49 -> 7*7 -> 7
//	printf("abs(-10) == %3d, ", abs(-10));                                     // 절대값을 표시 -10 -> 10
//	printf("ceil(7.1) == %5.2f, ", ceil(7.1));                                 // 소수점 이하 모두 올림 7.1 -> 8.0
//	printf("floor(6.9) == %5.2f\n", floor(6.9));                               // 소수점 이하 모두 버림 6.9 -> 6.0
//
//	return 0;
//}

// 실습예제 6-8

//#include<stdio.h>
//#include<ctype.h>
//
//void print2char(char);                                         // 함수 원형
//
//int main(void)
//{
//	char ch = 0;
//
//	printf("알파벳(종료x) 또는 다른 문자를 입력하세요. \n");
//	
//	do
//	{
//		printf("문자 입력 후 Enter: ");
//		scanf_s("%c", &ch);
//		getchar();                                              // enter키를 받기 위해 사용
//		if (isalpha(ch))
//			print2char(ch);                                     // 함수 호출
//		else
//			printf("입력: %c\n", ch);
//	} while (ch != 'x');
//
//	return 0;
//}
//
//void print2char(char ch)                                         // 함수 정의
//{
//	if (isupper(ch))                                             // 입력받은 값이 대문자이면 참
//		printf("입력: %c, 변환: %c\n", ch, tolower(ch));         // tolower 입력받은 대문자를 소문자로
//	else
//		printf("입력: %c, 변환: %c\n", ch, toupper(ch));         // toupper 입력받은 소문자를 대문자로
//
//	return 0;
//}

// 주차요금 계산 프로그램

#include<stdio.h>

int time_pass(int n1, int n2, int m1, int m2);                     // 함수 원형
int charge(int time);

int main(void)
{
	int starth = 0, startm = 0, endh = 0, endm = 0;
	int th = 0, tm = 0, minutes = 0;

	printf("주차 요금 계산 program\n");
	printf("\n입차시간 입력(시간 분) : ");
	scanf_s("%d %d", &starth, &startm);
	printf("출차시간 입력(시간 분) : ");
	scanf_s("%d %d", &endh, &endm);

	minutes = time_pass(starth, startm, endh, endm);
	th = minutes / 60;                                              // 주차한 시간 / 60 = 주차된 시간(h)
	tm = minutes % 60;                                              // 주차한 시간 % 60 = 주차한 분(m)

	printf("\n");
	printf("주차시간 : %d시간 %d분(총 %d분)\n", th, tm, minutes);
	printf("주차요금 : %d원\n", charge(minutes));                   // 함수 호출

	return 0;
}

int time_pass(int n1, int n2, int m1, int m2)                       // m1은 출차시간 n1은 입차시간, m2는 출차분 n2는 입차분
{
	return (int)(m1 - n1) * 60 + (m2 - n2);
}

int charge(int time)                                                // 출차시간에서 입차시간을 뺀 값이 들어감
{
	int fare;
	if (time % 10 > 0)                                              // 들어간 값이 10보다 작으면 else로 넘어감 ex) 입차하고 출차한 사이 시간이 1~9분일 경우
		fare = (time / 10 + 1) * 1000;                              
	else
		fare = (time / 10) * 1000;
	return fare;
}
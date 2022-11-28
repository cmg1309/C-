// file: nestedif.c

#include<stdio.h>

int main(void)
{
	int type = 1, point = 0;

	printf("번호를 선택 : 1(1종면허), 2(2종면허):");
	scanf_s("%d", &type);                               // 정수타입이라서 d사용
	printf("필기시험점수 입력:");
	scanf_s("%d", &point);                              // 정수타입이라서 d사용

	if (type == 1)                                      // type 이 1일 경우 아래 실행
	{
		if (point >= 70)                                // 점수가 70 이상일시 17행 실행
			printf("1종 면허 합격\n");
		else                                            // 점수가 70 미만일시 19행 실행, 실습예제 5-3과 다르게 else 뒤에 if가 없기 때문에 추가적인 조건을 적지 않음
			printf("1종 면허 불합격\n");
	}
	else if (type == 2)                                 // type 2일 경우 아래 실행
	{                     
		if (point >= 60)                                // 점수가 60 이상일시 24행 실행
			printf("2종 면허 합격\n");
		else                                            // 점수가 60 미만일시 26행 실행, 실습예제 5-3과 다르게 else 뒤에 if가 없기 때문에 추가적인 조건을 적지 않음
			printf("2종 면허 불합격\n");                
	}
	return 0;
}
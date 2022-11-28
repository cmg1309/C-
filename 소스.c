//#include<stdio.h>
//
//int ctof(int c); //함수원형
//
//int main(void)
//{
//	int c = 0;
//	
//	for (c = 0; c <= 200; c++)
//		printf("삽씨온도 : %3d = 화씨온도 : %3d\n", c, ctof(c)); //함수호출
//
//	return 0;
//}
//
//int ctof(int c)
//{
//	return (int)(9.0 / 5.0)* c + 32;
//}

//#include<stdio.h>
//#define PI 3.14
//
//double area(double r);
//double cir(double r);
//
//int main(void)
//{
//	double r = 0;
//
//	printf("원의 반지름 입력:");
//	scanf_s("%lf", &r);
//	printf("반지름이 %f인 원의 면적: %.3f", r, area(r));
//	printf("\n반지름이 %f인 원의 둘레: %.3f", r, cir(r));
//
//	return 0;
//}
//
//double area(double r)
//{
//	return (double)(PI * r * r);
//}
//
//double cir(double r)
//{
//	return (double)(2 * PI * r);
//}

// 실습예제 6-2 확장
//#include<stdio.h>
//
//int add2(int a, int b);
//int findmax2(int a, int b);
//int findmin(int n, int m);
//void printmin(int a, int b);
//
//int main(void)
//{
//	int a = 0, b = 0, max = 0, sum = 0;
//
//	printf("두 정수 입력:");
//	scanf_s("%d%d", &a, &b);
//
//	sum = add2(a, b);
//	max = findmax2(a, b);
//
//	printf("최대 : %d\n", max);
//	printf("합 : %d\n", sum);
//	printmin(a, b);
//	puts("");
//
//	return 0;
//}
//
//int add2(int a, int b)
//{
//	int sum = a + b;
//
//	return sum;
//}
//
//int findmax2(int a, int b)
//{
//	int max = a > b ? a : b;
//	
//	return max;
//}
//
//int findmin(int n, int m)
//{
//	int min = n > m ? m : n;
//
//	return min;
//}
//
//void printmin(int a, int b)
//{
//	int min = findmin(a, b);
//	printf("최소 : %d\n", min);
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//#define MAX 100
//
//int main(void)
//{
//	int i = 0, number = 0;
//
//	srand((int)time(NULL));
//	printf("0 ~ %5d 사이의 난수 5개 : rand()\n", MAX);
//	for (i = 0; i < 5; i++)
//	{
//		number = rand() % MAX + 1;
//		printf("%5d ", number);
//	}
//	puts("");
//
//	return 0;
//}

// /*프로그래밍 연습 1번*/
//#include<stdio.h>
//
//double inchtocenti(double x);                                // 함수원형 double 생략가능
//
//int main(void)
//{
//	double x = 0, n = 0;
//
//	printf("거리를 인치로 입력하세요. -> ");
//	scanf_s("%lf", &x);
//	
//	n = inchtocenti(x);                                      // n 대신 inchtocenti(x) 를 넣으면 생략
//	printf("\n입력한 %lf인치는 %lf센치미터이다.\n", x, n);   // n 대신 inchtocenti(x) 를 넣어도 가능
//
//	return 0;
//}
//
//double inchtocenti(double x)                                 // 함수정의, 타입은 double
//{
//	return (double) x * 2.54;                                // 리턴값은 x * 2.54, 타입은 double
//}

// 프로그래밍 연습 2번
#include<stdio.h>

int intpow(int m, int n);                                           // 함수원형, intpow(m, n) -> int는 생략가능

int main(void)
{
	int n = 0, m = 0;

	printf("정수 m을 n번 제곱합니다.\n");
	printf("\n정수 m입력 -> ");
	scanf_s("%d", &m);
	printf("정수 n입력 -> ");
	scanf_s("%d", &n);

	printf("\n%d의 %d 제곱은 %d 입니다.", m, n, intpow(m, n));      // intpow() 함수호출

	return 0;
}

int intpow(int m, int n)                                            // 함수 정의, 타입은 int
{
	int i = 1, result = 1;

	for (i = 1; i <= n; i++)
	{
		result = result * m;
	}
	return result;                                                  // 리턴값으로 result를 받음
}
////5-12
//
//#include<stdio.h>
//
//int main(void)
//{
//	int n = 0, m = 0, i = 0;
//
//	for (; ;)
//	{
//		printf("1에서 20사이의 정수 또는 종료(0) 입력:");
//		scanf_s("%d", &n);
//		if (n <= 0)                                        // n이 0이거나 작으면 바로 종료
//			break;
//		for (i = 1, m = 1; i <= n; i++)                    // 초기값 i=1, m=1, i를 n번 반복, 반복시 i는 1씩 증가
//			m = m * i;
//		printf("1에서 %d까지 곱: %d\n", n, m);
//	}
//	puts("종료합니다.");
//
//	return 0;
//}

//5-13(기본)

//#include<stdio.h>
//
//int main(void)
//{
//	const int max = 15;                                                        // 변하지않는 수로 max를 15
//	int i = 0;
//
//	printf("1에서 %d까지 정수중에서 3으로 나누어 떨어지지 않는 수\n", max);
//	for (i = 1; i <= max; i++)                                                 // 초기값 1, i가 max까지 반복, 반복시 i는 1씩 증가
//	{
//		if (i % 3 == 0)                                                        // i % 3 이 0과 같으면 continue(max반복) 아니면 printf로 출력
//			continue;
//		printf("%3d", i);
//	}
//	puts("");
//
//	return 0;
//}

//5-13(if문)

//#include<stdio.h>
//
//int main(void)
//{
//	const int max = 15;
//	int i = 0;
//
//	printf("1에서 %d까지 정수중에서 3으로 나누어 떨어지지 않는 수\n", max);
//	for (i = 0; i <= max; i++)
//	{
//		if (i % 3 != 0)                                                          // i % 3 이 0과 같지 않다면 printf 로 출력
//		{
//			printf("%3d", i);
//		}
//	}
//	puts("");
//
//	return 0;
//}

//5-14

//#include<stdio.h>
//
//int main(void)
//{
//	int c = 0;
//
//loop:
//	printf("%3d", c);
//	if (++c <= 10) goto loop;                  // c가 10이 될때까지 반복 loop로 돌아감
//
//	printf("\n프로그램을 종료합니다.\n");
//
//	return 0;
//}

//5-15
//
//#include<stdio.h>
//
//int main(void)
//{
//	int m = 0, n = 0;
//
//	for (m = 1; m <= 5; m++)                // 초기값 1, 5번 반복, 반복시 1씩 증가
//	{
//		printf("m = %-2d\n", m);            // - 로 좌측 정렬
//		for (n = 1; n <= 7; n++)            // 초기값 1, 7번 반복, 반복시 1씩 증가
//			printf("n = %-2d", n);          // 좌측정렬
//		puts("");
//	}
//
//	return 0;
//}

//5-16

//#include<stdio.h>
//
//int main(void)
//{
//	const int max = 6;
//	int i = 0, j = 0;
//
//	for (i = 1; i <= max; i++)          // 초기값 1, max까지 반복, 반복시 1씩 증가
//	{
//		for (j = 1; j <= i; j++)        // 초기값 1, i까지 반복, 반복시 1씩증가
//			printf("*");
//		puts("");                       // 칸띄움
//	}
//	return 0;
//}

//5-17

//#include<stdio.h>
//
//int main(void)
//{
//	int n = 0, i = 0, j = 0, sum = 0;
//
//	while (1)
//	{
//		printf("양의 정수 또는 0(종료)을 입력:");
//		scanf_s("%d", &n);
//		if (n <= 0)                                         // n이 0과 같거나 작으면 종료
//			break;
//
//		for (i = 1; i <= n; i++)                            // 초기값 1, n까지 반복, 반복시 1증가
//		{
//			for (j = 1, sum = 0; j <= i; j++)               // 초기값 1, sum = 0(반복될때마다 값이 바뀜), i까지 반복, 반복시 1증가
//			{
//				printf("%2d", j);
//				j == i ? printf(" =") : printf(" +");       // j가 i와 같다면 = 을 출력 다르면 + 를 출력
//				sum = sum + j;                              // sum 은 sum + j 반복 될때마다
//			}
//			printf("%3d\n", sum);
//		}
//	}
//	puts("종료합니다.");
//
//	return 0;
//}

//중첩 for문

#include<stdio.h>

int main(void)
{
	int i = 0, j = 0;

	for (i = 1; i <= 9; i++)
	{
		for (j = 9; j >= 0; j--)
		{
			if (j >= i)
				printf("%d", j);
			else
				putchar(' ');
		}
		printf("\n");
	}
	return 0;
}
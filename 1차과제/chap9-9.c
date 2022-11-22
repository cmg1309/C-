//9-9
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int i, j, print = 0, max = 0, num = 0;
	int arr[100];			// 100번 반복한 수 저장 배열
	int count[20] = { 0 };	// 1부터 20까지 빈도수 저장 배열

	printf("1에서 20 사이의 난수 100개\n");
	for (i = 0; i < 100; i++)	// 100번 반복
	{
		arr[i] = rand() % 20;	// 랜덤으로 % 20으로 0~20까지 숫자
		if (i % 20 == 0)		// 출력하다가 20번째 출력시 줄넘김
			printf("\n");
		printf("%2d ", arr[i]);
	}
	for (i = 0; i < 100; i++)	// 100번 반복
	{
		for (j = 0; j < 20; j++)	// 20번 반복
		{
			if (arr[i] == j)	// 100번의 난수 반복중에 저장된 값 i가 j와 같다면 count 배열에 증가를 시킴
				count[j]++;
		}
	}
	printf("\n------------------------------------------------------------\n");
	printf("번호");
	for (i = 0; i < 20; i++)		// 번호 표시
	{
		print += 1;
		printf("%2d ", print);
	}
	printf("\n------------------------------------------------------------\n");
	printf("횟수");
	for (i = 0; i < 20; i++)		// 최대 빈도수
	{
		printf("%2d ", count[i]);
		if (max < count[i])			// 최대값이 count 배열의 0~19보다 작으면
		{
			max = count[i];			// 최대값은 count[i]
			num = i + 1;			// 0부터 시작이기에 출력시 +1 을 해줌
		}
	}
	printf("\n------------------------------------------------------------\n");
	printf("\n");
	printf("총 출현 빈도수는 100입니다.\n");
	printf("\n");
	printf("1 ~ 20 중 가장 많이 나온 수는 %d이고, %d번 나왔습니다.\n", num, max);
}
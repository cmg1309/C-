#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct selfref
{
	int n;
	struct selfref* next;
};
typedef struct selfref list;

int main(void)
{
	// 실습예제 1번
	//char temp[80];
	//char* str[3];
	//int i;

	//for (i = 0; i < 3; i++)
	//{
	//	printf("문자열을 입력하세요 : ");
	//	gets(temp);
	//	str[i] = (char*)malloc(strlen(temp) + 1);		// temp 길이에 + 1(\0)
	//	strcpy(str[i], temp);							// temp값을 str에 복사저장
	//}

	//for (i = 0; i < 3; i++)
	//{
	//	printf("%s\n", str[i]);
	//}

	//for (i = 0; i < 3; i++)
	//{
	//	free(str[i]);
	//}


	// 실습예제 2번
	//char* data = 0;
	//int input = 0;

	//printf("입력할 영문자의 갯수를 입력세요 : ");
	//scanf_s("%d", &input);

	//if ((data = (char*)calloc(input + 1, sizeof(char))) == NULL)
	//{
	//	printf("메모리할당에 문제발생");
	//	exit(1);
	//}

	//printf("%d개의 영문자 입력 : ", input);
	//scanf_s("%s", data, input + 1);					// 입력한 개수에 \0값을 넣어야되서 +1

	//printf("입력한 문자열 : %s\n", data);
	//free(data);


	// 실습예제 3번
	//int* ip;
	//int size = 5, cnt = 0, num, i;

	//ip = (int*)calloc(size, sizeof(int));
	//while (1)
	//{
	//	printf("양수를 입력하세요 : ");
	//	scanf_s("%d", &num);
	//	if (num <= 0)	// 0보다 작으면 반복 중지
	//		break;

	//	if (cnt < size)
	//	{
	//		ip[cnt++] = num;	// size 5보다 작으면 ip에 계속 저장
	//	}

	//	else
	//	{
	//		size += 5;
	//		ip = (int*)realloc(ip, size * sizeof(int));	// cnt가 0~4까지 차면 else 실행 -> 추가로 5개 정수 입력가능
	//		ip[cnt++] = num;
	//	}
	//}
	//for (i = 0; i < cnt; i++)
	//{
	//	printf("%5d", ip[i]);
	//}
	//free(ip);


	// 13-1
	//int* pi = 0;

	//if ((pi = (int*)malloc(sizeof(int))) == NULL)
	//{
	//	printf("메모리 할당에 문제 발생");
	//	exit(1);
	//}
	//*pi = 3;
	//printf("*pi = %d\n", *pi);
	//printf("pi = %d\n", pi);


	// 13-2
	//int* ary = NULL;
	//int i = 0, n = 0, sum = 0;

	//printf("입력할 점수의 개수를 입력 : ");
	//scanf_s("%d", &n);

	//if ((ary = (int*)malloc(sizeof(int) * n)) == NULL)
	//{
	//	printf("메모리 할당에 문제 발생");
	//	exit(1);
	//}

	//printf("%d개의 정수 입력 : ", n);
	//for (i = 0; i < n; i++)
	//{
	//	scanf_s("%d", (ary + i));
	//	sum += ary[i];		// == *(ary + i)
	//}
	//printf("합: %d  평균: %.1f\n", sum, (double)sum / n);
	//free(ary);


	// 13-3
	//int* ary = NULL;
	//int i;

	//if ((ary = (int*)calloc(3, sizeof(int))) == NULL)
	//{
	//	printf("메모리 할당에 문제 발생");
	//	exit(1);
	//}
	//
	//for (i = 0; i < 3; i++)
	//{
	//	printf("ary[%d] = %d\n", i, *(ary + i));
	//}
	//free(ary);


	// 13-4
	//int* reary, * cary;
	//int i;

	//if ((cary = (int*)calloc(3, sizeof(int))) == NULL)
	//{
	//	printf("메모리 할당에 문제 발생");
	//	exit(1);
	//}
	//if ((reary = (int*)realloc(cary, 4 * sizeof(int))) == NULL)		// 0~2까지, 총 3개는 NULL 값으로 초기화 되지만 3번째 값은 쓰레기값으로 출력됨
	//{
	//	printf("메모리 할당에 문제 발생");
	//	exit(EXIT_FAILURE);
	//}
	//for (i = 0; i < 4; i++)
	//{
	//	printf("reary[%d] = %d\n", i, *(reary + i));
	//}
	//free(reary);


	// 13-5
	list* first = NULL, * second = NULL;
	first = (list*)malloc(sizeof(list));		// 구조체 크기만큼
	second = (list*)malloc(sizeof(list));
	first->n = 100;
	first->next = NULL;
	second->n = 200;
	second->next = NULL;
	first->next = second;		// first->next에 second 주소

	printf("구조체 크기 = %d\n\n", sizeof(list));
	printf("첫 번째 구조체 : ");
	printf("\t자료의 주소값(first) = %u\n", first);
	printf("\t자료값(first->n) = %d\n", first->n);
	printf("\t자료값(first->next) = %d\n", first->next);
	printf("\t자료값(first->next->n) = %d\n\n", first->next->n);

	printf("두 번째 구조체 : ");
	printf("\t자료의 주소값(second) = %u\n", second);
	printf("\t자료값(second->n) = %d\n", second->n);
	printf("\t자료값(second->next) = %d\n", second->next);
	printf("\t자료값(second->next->n) = %d\n\n", second->next->n);

	free(first);
	free(second);
}
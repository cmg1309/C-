// 성적관리 프로그램
//
//#include<stdio.h>
//
//void input(int score[5][2]);										// 입력값 함수원형
//int sum(int score[5][2], int tot[2]);								// 총합을 구하는 함수원형
//void output(int score[5][2], int tot[2]);							// 출력값 함수원형
//
//int main(void)
//{
//	int i = 0, j = 0;
//	int score[5][2] = { 0 };
//	int tot[2] = { 0 };
//
//	//printf("각 학생의 영어 점수와 수학 점수를 입력하세요.\n");	// 입력하는 부분의 for문
//	//for (i = 0; i < 5; i++)
//	//{
//	//	for (j = 0; j < 2; j++)
//	//	{
//	//		if(j==0)
//	//		{
//	//			printf("%d번 학생의 영어 점수 : ", i + 1);			// j(열)이 0열이면 입력됨 출력되는 값 시작이 1이기때문에 i에 +1 을 해줌
//	//			scanf_s("%d", &score[i][j]);
//	//		}
//	//		else
//	//		{
//	//			printf("%d번 학생의 수학 점수 : ", i + 1);			// j(열)이 0열이 아니면 입력됨
//	//			scanf_s("%d", &score[i][j]);
//	//		}
//	//	}
//	//}
//	input(score);													// 입력값 함수호출
//
//	//for (i = 0; i < 5; i++)										// 총합을 구하는 부분의 for문
//	//{
//	//	for (j = 0; j < 2; j++)
//	//	{
//	//		if (j == 0)												// j(열)이 0열이면 0열에 입력된 값 합을 구함
//	//		{
//	//			tot[j] = tot[j] + score[i][j];
//	//		}
//	//		else													// j(열)이 0열이 아니면 1열에 입력된 값 합을 구함
//	//		{
//	//			tot[j] = tot[j] + score[i][j];
//	//		}
//	//	}
//	//}
//	sum(score, tot);												// 총합을 구하는 함수호출
//
//	//printf("==============================\n");
//	//printf("학생번호   영어점수   수학점수\n");
//	//printf("==============================\n");
//
//	//for (i = 0; i < 5; i++)										// 출력값 구하는 부분의 for문
//	//{
//	//	printf("   %d", i + 1);
//	//	for (j = 0; j < 2; j++)
//	//	{
//	//		printf("%12d", score[i][j]);							// 5행 2열에 맞게 입력된 값을 출력해줌
//	//	}
//	//	puts("");
//	//}
//
//	//printf("==============================\n");
//	//printf("총점 %11d %11d\n", tot[0], tot[1]);					// 0열과 1열에 입력된 값을 열에 따라 합을 구함
//	//printf("평균 %11.2lf %11.2lf\n", tot[0] / 5.0, tot[1] / 5.0);	// 0열과 1열에 입력된 값을 열에 따라 평균을 구함
//	output(score, tot);												// 출력값 함수호출
//
//	return 0;
//}
//
//void input(int score[5][2])											// 입력값 함수정의
//{
//	int i = 0, j = 0;
//	printf("각 학생의 영어 점수와 수학 점수를 입력하세요.\n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			if (j == 0)
//			{
//				printf("%d번 학생의 영어 점수 : ", i + 1);
//				scanf_s("%d", &score[i][j]);
//			}
//			else
//			{
//				printf("%d번 학생의 수학 점수 : ", i + 1);
//				scanf_s("%d", &score[i][j]);
//			}
//		}
//	}
//}
//
//int sum(int score[5][2], int tot[2])								// 총합을 구하는 함수정의
//{
//	int i = 0, j = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			if (j == 0)
//			{
//				tot[j] = tot[j] + score[i][j];
//			}
//			else
//			{
//				tot[j] = tot[j] + score[i][j];
//			}
//		}
//	}
//}
//
//void output(int score[5][2], int tot[2])							// 출력값을 구하는 함수정의
//{
//	int i = 0, j = 0;
//	printf("==============================\n");
//	printf("학생번호   영어점수   수학점수\n");
//	printf("==============================\n");
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("   %d", i + 1);
//		for (j = 0; j < 2; j++)
//		{
//			printf("%12d", score[i][j]);
//		}
//		puts("");
//	}
//
//	printf("==============================\n");
//	printf("총점 %11d %11d\n", tot[0], tot[1]);
//	printf("평균 %11.2lf %11.2lf\n", tot[0] / 5.0, tot[1] / 5.0);
//}

// 난수 입력하여 최대 최소 구하기

//#include<stdio.h>
//#include<stdlib.h>
//
//void output(int score[10][3]);							// 출력값 함수원형
//
//int main(void)
//{
//	int i = 0, j = 0;
//	int max = 0, min = 0, sum = 0;
//	int score[10][3] = { 0 };							// 10행 3열 배열
//
//	printf("학번   시험1   시험2   시험3\n");
//	printf("==============================\n");
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			score[i][j] = rand() % 100 + 1;				// 랜덤함수를 이용해 입력값을 랜덤으로 받음
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%3d", i + 1);							// 학번 입력값
//		for (j = 0; j < 3; j++)
//		{
//			printf("%8d", score[i][j]);					// 랜덤으로 입력되는 성적값
//		}
//		puts("");
//	}
//	printf("==============================\n");
//
//	//for (j = 0 ; j < 3; j++)
//	//{
//	//	min = max = score[0][j];
//	//	for (i = 0; i < 10; i++)
//	//	{
//	//		if (score[i][j] < min)
//	//			min = score[i][j];
//	//		if (score[i][j] > max)
//	//			max = score[i][j];
//	//		sum = sum + score[i][j];
//	//	}
//	//	printf("시험 %d: 최대점수 = %d\n", j + 1, max);
//	//	printf("시험 %d: 최소점수 = %d\n", j + 1, min);
//	//}
//	output(score);
//
//	return 0;
//}
//
//void output(int score[10][3])
//{
//	int i = 0, j = 0;
//	int min = 0, max = 0, sum = 0;
//	for (j = 0; j < 3; j++)
//	{
//		min = max = score[0][j];
//		for (i = 0; i < 10; i++)
//		{
//			if (score[i][j] < min)
//				min = score[i][j];
//			if (score[i][j] > max)
//				max = score[i][j];
//			sum = sum + score[i][j];
//		}
//		printf("시험 %d: 최대점수 = %d\n", j + 1, max);
//		printf("시험 %d: 최소점수 = %d\n", j + 1, min);
//	}
//}

// 빈도수 계산 프로그램

#include<stdio.h>

int main(void)
{
	int i = 0, score = 0;
	int freq[101] = { 0 };							// 크기가 101인 배열

	while (1)
	{
		printf("숫자를 입력하시오(종료-1) : ");
		scanf_s("%d", &score);						// 숫자 입력
		if (score < 0)								// 입력된 숫자가 0보다 작으면 종료 break
			break;
		freq[score]++;								// 입력된 값 빈도를 증가시킴
	}

	printf("값   빈도\n");

	for (i = 0; i < 101; i++)
		printf("%3d     %3d\n", i, freq[i]);

	return 0;
}
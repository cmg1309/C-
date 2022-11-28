//file: ifelseif.c

#include<stdio.h>

int main(void)
{
	double grade = 0;

	printf("평균학점 입력:");
	scanf_s("%lf", &grade);

	if (grade > 4.3)
		printf("성적이 최고 우수한 학생입니다.\n");
	else if (grade >= 3.8)
		printf("성적이 매우 우수한 학생입니다.\n");
	else if (grade >= 3.0)
		printf("성적이 우수한 학생입니다.\n");
	else
		printf("성적이 3.0 미만인 학생입니다.\n");

	return 0;
}
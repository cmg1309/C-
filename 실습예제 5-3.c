//file: ifelseif.c

#include<stdio.h>

int main(void)
{
	double grade = 0;

	printf("������� �Է�:");
	scanf_s("%lf", &grade);

	if (grade > 4.3)
		printf("������ �ְ� ����� �л��Դϴ�.\n");
	else if (grade >= 3.8)
		printf("������ �ſ� ����� �л��Դϴ�.\n");
	else if (grade >= 3.0)
		printf("������ ����� �л��Դϴ�.\n");
	else
		printf("������ 3.0 �̸��� �л��Դϴ�.\n");

	return 0;
}
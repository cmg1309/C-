#include<stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0;

	printf("���� �Է�1:");
	scanf_s("%d", &a);
	printf("���� �Է�2:");
	scanf_s("%d", &b);
	printf("���� �Է�3:");
	scanf_s("%d", &c);

	printf("�Է¹��� ���� �߿� ���� ū ���� %d�Դϴ�.", (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));    
	// a�� b���� ũ�� a>c�� �����ؼ� ���̸� a, �����̸� c�� ������.
	// a�� b���� ������ b>c�� �����ؼ� ���̸� b, �����̸� c�� ������.
	return 0;
}
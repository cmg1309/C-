// 6-5
#include<stdio.h>

int square(int n);							// ���� ���ϴ� �Լ�����
int cube(int n);							// ������ ���ϴ� �Լ�����

int main(void)
{
	int n = 0, result = 0;

	printf("���� �Է� : ");
	scanf_s("%d", &n);

	result = square(n) * cube(n);			// �ټ����� ���ϴ� �Լ�ȣ��
	printf("�ټ������� �� : %d", result);
}

int square(int n)							// ���� ���ϴ� �Լ�����
{
	int result = n * n;

	return result;							// ���ϰ����� n * n �� ����
}

int cube(int n)								// ���������� ���ϴ� �Լ�����
{
	int result = n * n * n;

	return result;							// ���ϰ����� n * n * n �� ����
}
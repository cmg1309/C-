//�� ������ �Է¹޾� ū ������ ���� ���� ������ ��� ������ ����ϱ�

//#include<stdio.h>
//
//int main(void)
//{
//	int a = 0, b = 0;
//	int max = 0, min = 0;
//
//	printf("������ ���� �Է�1:");
//	scanf_s("%d", &a);
//	printf("������ ���� �Է�2:");
//	scanf_s("%d", &b);
//
//	((a > b) ? (max = a, min = b) : (max = b, min = a));
//
//	printf("���� %d�̰� �������� %d�Դϴ�.\n", a / b, a % b);
//
//	return 0;
//}

#include<stdio.h>

int main(void)
{
	int a = 0, b = 0;

	printf("������ ���� �Է�1:");
	scanf_s("%d", &a);
	printf("������ ���� �Է�2: ");
	scanf_s("%d", &b);

	(a > b) ? printf("���� %d�̰� �������� %d�Դϴ�.\n", a / b, a % b) : printf("���� %d�̰� �������� %d�Դϴ�.\n", b / a, b % a);

	return 0;
}
//������ ���� �Է��ؼ� ��ݱ����� �Ϲݱ����� ����ϱ�

#include<stdio.h>

int main(void)
{
	int a = 0;

	printf("������ ���� �Է� :");
	scanf_s("%d", &a);

	((a < 7) ? printf("%d���� ��ݱ��Դϴ�.\n", a) : printf("%d���� �Ϲݱ��Դϴ�.\n", a));

	return 0;
}
#include<stdio.h>

int main(void)
{
	int point1 = 95, point2 = 84;
	int total = point1 + point2;
	int D = total / 2;                   // D��� ������ ���� �� ������� ����
	double F = total / 2.0;              // F��� ������ �Ǽ� �� ������� ����
	
	printf("�߰���� ����:%d\n", point1);
	printf("�⸻��� ����:%d\n", point2);
	printf("���� ��:%d\n", total);

	printf("��հ�:%d\n", D);      // ���� ��հ��̶� d�� ���
	printf("��հ�:%f\n", F);      // �Ǽ� ��հ��̶� f�� ���

	return 0;
}
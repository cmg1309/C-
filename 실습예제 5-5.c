// file: switch.c

#include<stdio.h>

int main(void)
{
	double x = 0, y = 0, result = 0;
	int op = 0;

	printf("�� �Ǽ��� �Է�:");
	scanf_s("%lf %lf", &x, &y);                                     // double ����ؼ� lf�� ���
	printf("���� ���� ��ȣ ���� 1(+), 2(-), 3(*), 4(/): ");
	scanf_s("%d", &op);                                             // ���� ����ؼ� d�� ���

	switch (op)                                                     // switch �� if �� �ٸ��� ������ ����
	{
	case 1:                                                         // case �ڿ��� ���� ���� ����, ������ ���� �Ǵ� �������� ��밡��(�Ǽ�, ���ڿ� ���ȵ�)
		printf("%.2f - %.2f = %.2f\n", x, y, x + y);                // case 1�� �ش���� ������ case 2�� �Ѿ �׷��� ��� 2 3 4 �Ѿ�ٰ� ������ defauit ���� ����
		break;                                                      // break �� ���Ḧ �ǹ���

	case 2:
		printf("%.2f - %.2f = %.2f\n", x, y, x - y);                 
		break;
		
	case 3:
		printf("%.2f * %.2f = %.2f\n", x, y, x * y);
		break;

	case 4:
		printf("%.2f / %.2f = %.2f\n", x, y, x / y);
		break;

	default:                                                         // �� case ���� �����ϰ� ��𿡵� �ش���� ������ default ������ �Ѿ��
		printf("��ȣ�� �߸� �����߽��ϴ�.\n");
	}                                                                // default �� �������̶� break �� ������� ����

	return 0;
}
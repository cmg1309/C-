// file: season.c

#include<stdio.h>

int main(void)
{
	int month = 0;
	printf("�⵵�� ��(month)�� �Է�:");
	scanf_s("%d", &month);

	switch (month)                                        // switch �� ������ ���� ������ ����, �������� ��� ����(�Ǽ�, ���ڿ� ���ȵ�)
	{
	case 4: case 5:                                       // case �� ���޾� ����� ��� ���̿� ,(�޸�)�� ������� �ʰ� ������⸦ �ؾ��Ѵ�.
		printf("%d���� ���Դϴ�.\n", month);
		break;                                            // break �� ���Ḧ �ǹ���

	case 6: case 7: case 8:
		printf("%d���� �����Դϴ�.\n", month);
		break;

	case 9: case 10: case 11:
		printf("%d���� �����Դϴ�.\n", month);
		break;

	case 12: case 1: case 2: case 3:
		printf("%d���� �ܿ��Դϴ�.\n", month);
		break;

	default:                                               // case �� ���Ե��� �ʴ� ������ �͵��� ó����
		printf("��(month)�� �߸� �Է��ϼ̽��ϴ�.\n");
	}                                                      // default �� �������̶� break �� ������� ����
	return 0;
}
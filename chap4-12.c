#include<stdio.h>

int main(void)
{
	double T = 0, K = 0;

	printf("Ű �Է� : ");
	scanf_s("%lf", &T);
	printf("������ �Է� : ");
	scanf_s("%lf", &K);

	printf((K <= (T - 100) * 0.9) ? printf("�����Դϴ�.") : printf("���Դϴ�."));     // ��Ȯ�� ��� Ǫ���� ���� ����ϴ� �κп� ���ǽ��� �־ ����ϰ� ����.

	return 0;
}
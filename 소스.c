//// type char  1,2 �� �ƴ� ���ڴ� �߸��� ����
//
//#define _CRT_SECURE_NO_WARNINGS                      // ù�࿡ �;���
//#include<stdio.h>
//
//int main(void)
//{
//	int point = 0;
//	char type = 0;
//	// ������ �Ǽ�, ���ڸ� �Է� ���� �Ŀ� �ι�° scanf_s ���� ���������� �����͸� �Է¹����� �������� ���ϰ� �Ѿ.
//	printf("�ʱ�������� �Է�:");
//	scanf_s("%d", &point);                           // enterŰ = '\n'  
//	//getchar();  -> ù��° �ذ��
//	printf("��ȣ�� ����: 1(1������ ),2(2������):");
//	scanf("\n%c", &type, 1);                         // �ι�° �ذ�� : %c �տ� \n�� ����
//
//	if (type == '1')
//	{
//		if (point >= 70)
//			printf("1�� ���� �հ�");
//		else
//			printf("1�� ���� ���հ�");
//	}
//	else if (type == '2')                           // type 1 2 �� �ƴѰ� �־ else�� �����°� ����
//	{
//		if (point >= 60)
//			printf("2�� ���� �հ�");
//		else
//			printf("2�� ���� ���հ�");
//	}
//	else
//	{
//		printf("�߸��� ���� �Դϴ�.\n");
//	}
//
//	return 0;
//}


//#include<stdio.h>
//
//int main(void)
//{
//	double n1 = 0, n2 = 0, n3 = 0;
//	double result = 0;
//
//	printf("�����Է�:");
//	scanf_s("%lf %lf %lf", &n1, &n2, &n3);
//
//	if ((a < 0 || a > 0) || (b < 0 || b > 100) || (c < 0 || c > 100))
//	{
//		printf("������ 0~100�������� �Է°����մϴ�.\n\n");
//		return 0;
//	}
//
//	result = (n1 + n2 + n3) / 3;
//
//	if (result > 90) 
//	{
//		printf("���: %7.2f\n ���� A�� �������б��� ���޵˴ϴ�.\n\n", result);
//	}
//	else if (result > 80) 
//	{
//		printf("���: %7.2f\n ���� B�� �������б��� ���޵˴ϴ�.\n\n", result);
//	}
//	else 
//	{
//		printf("���: %7.2f�� ���б��� ���� �� �����ϴ�.\n\n", result);
//	}
//}


//#include<stdio.h>
//
//int main(void)
//{
//	double n1 = 0, n2 = 0, n3 = 0, result = 0;
//	int con = 0;
//
//	printf("�����Է�:");
//	scanf_s("%f %f %f", &n1, &n2, &n3);
//	if ((a < 0 || a > 0) || (b < 0 || b > 100) || (c < 0 || c > 100))
//	{
//		printf("������ 0~100�������� �Է°����մϴ�.\n\n");
//		return 0;
//	}
//	con = (int)result / 10;
//
//	switch (con)
//	{
//	case 9:, case 10:
//		printf("���: %7.2f\n ���� A�� �������б��� ���޵˴ϴ�.\n\n", result);
//		break;
//	case 8:
//		printf("���: %7.2f\n ���� B�� �������б��� ���޵˴ϴ�.\n\n", result);
//		break;
//	default:
//		printf("���: %7.2f�� ���б��� ���� �� �����ϴ�.\n\n", result);
//	}
//}


// �� ������ �Է� �޾� ���� ������ ũ�� �� ���� ���ϰ�, ���� ������ ũ�ų� ������ �� ���� ���Ͽ� ����� ����ϴ� ���α׷��� �ۼ�

#include<stdio.h>

int main(void)
{
	signed int x = 0, y = 0;

	printf("�� ���� �Է�:");
	scanf_s("%d %d", &x, &y);

	if (x > y)
		printf("���� ��� ��:%d + %d = %d\n", x, y, x + y);
	else
		printf("���� ��� ��:%d * %d = %d\n", x, y, x * y);
	return 0;
}
//9-4
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main(void)
//{
//	srand(time(NULL));			// �Ź� ������ �ٲ�(�ð�����)
//	int system = 0;
//	int user;
//	system = rand() % 3 + 1;	// 1~3���� ����
//	while (1)
//	{
//		printf("\n����(0) ����(1) ��(2) �߿��� �ϳ� �Է� -> ");
//		scanf_s("%d", &user);
//
//		if (user == 0 & system == 0)
//		{
//			printf("����� �����̰�, �ý����� �����Դϴ�.\n");
//			printf("\n�����ϴ�.\n");
//		}
//		else if (user == 0 & system == 1)
//		{
//			printf("����� �����̰�, �ý����� �����Դϴ�.\n");
//			printf("\n�ý����� �¸��Դϴ�.\n");
//		}
//		else if (user == 0 & system == 2)
//		{
//			printf("����� �����̰�, �ý����� ���Դϴ�.\n");
//			printf("\n����� �¸��Դϴ�.\n");
//			break;
//		}
//		else if (user == 1 & system == 0)
//		{
//			printf("����� �����̰�, �ý����� �����Դϴ�.\n");
//			printf("\n����� �¸��Դϴ�.\n");
//			break;
//		}
//		else if (user == 1 & system == 1)
//		{
//			printf("����� �����̰�, �ý����� �����Դϴ�.\n");
//			printf("\n�����ϴ�.\n");
//		}
//		else if (user == 1 & system == 2)
//		{
//			printf("����� �����̰�, �ý����� ���Դϴ�.\n");
//			printf("\n�ý����� �¸��Դϴ�.\n");
//		}
//		else if (user == 2 & system == 0)
//		{
//			printf("����� ���̰�, �ý����� �����Դϴ�.\n");
//			printf("\n�ý����� �¸��Դϴ�.\n");
//		}
//		else if (user == 2 & system == 1)
//		{
//			printf("����� ���̰�, �ý����� �����Դϴ�.\n");
//			printf("\n����� �¸��Դϴ�.\n");
//			break;
//		}
//		else if (user == 2 & system == 2)
//		{
//			printf("����� ���̰�, �ý����� ���Դϴ�.\n");
//			printf("\n�����ϴ�.\n");
//		}
//		else
//			printf("�ٽ� �Է����ּ���.\n");
//	}
//}
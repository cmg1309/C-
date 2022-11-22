//9-4
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main(void)
//{
//	srand(time(NULL));			// 매번 난수값 바뀌(시간기준)
//	int system = 0;
//	int user;
//	system = rand() % 3 + 1;	// 1~3까지 랜덤
//	while (1)
//	{
//		printf("\n가위(0) 바위(1) 보(2) 중에서 하나 입력 -> ");
//		scanf_s("%d", &user);
//
//		if (user == 0 & system == 0)
//		{
//			printf("당신은 가위이고, 시스템은 가위입니다.\n");
//			printf("\n비겼습니다.\n");
//		}
//		else if (user == 0 & system == 1)
//		{
//			printf("당신은 가위이고, 시스템은 바위입니다.\n");
//			printf("\n시스템의 승리입니다.\n");
//		}
//		else if (user == 0 & system == 2)
//		{
//			printf("당신은 가위이고, 시스템은 보입니다.\n");
//			printf("\n당신의 승리입니다.\n");
//			break;
//		}
//		else if (user == 1 & system == 0)
//		{
//			printf("당신은 바위이고, 시스템은 가위입니다.\n");
//			printf("\n당신의 승리입니다.\n");
//			break;
//		}
//		else if (user == 1 & system == 1)
//		{
//			printf("당신은 바위이고, 시스템은 바위입니다.\n");
//			printf("\n비겼습니다.\n");
//		}
//		else if (user == 1 & system == 2)
//		{
//			printf("당신은 바위이고, 시스템은 보입니다.\n");
//			printf("\n시스템의 승리입니다.\n");
//		}
//		else if (user == 2 & system == 0)
//		{
//			printf("당신은 보이고, 시스템은 가위입니다.\n");
//			printf("\n시스템의 승리입니다.\n");
//		}
//		else if (user == 2 & system == 1)
//		{
//			printf("당신은 보이고, 시스템은 바위입니다.\n");
//			printf("\n당신의 승리입니다.\n");
//			break;
//		}
//		else if (user == 2 & system == 2)
//		{
//			printf("당신은 보이고, 시스템은 보입니다.\n");
//			printf("\n비겼습니다.\n");
//		}
//		else
//			printf("다시 입력해주세요.\n");
//	}
//}
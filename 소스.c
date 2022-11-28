//// type char  1,2 가 아닌 숫자는 잘못된 숫자
//
//#define _CRT_SECURE_NO_WARNINGS                      // 첫행에 와야함
//#include<stdio.h>
//
//int main(void)
//{
//	int point = 0;
//	char type = 0;
//	// 정수나 실수, 문자를 입력 받은 후에 두번째 scanf_s 에서 문자형태의 데이터를 입력받으면 저장하지 못하고 넘어감.
//	printf("필기시험점수 입력:");
//	scanf_s("%d", &point);                           // enter키 = '\n'  
//	//getchar();  -> 첫번째 해결법
//	printf("번호를 선택: 1(1종먼허 ),2(2종먼허):");
//	scanf("\n%c", &type, 1);                         // 두번째 해결법 : %c 앞에 \n을 넣음
//
//	if (type == '1')
//	{
//		if (point >= 70)
//			printf("1종 면허 합격");
//		else
//			printf("1종 면허 불합격");
//	}
//	else if (type == '2')                           // type 1 2 가 아닌게 있어서 else를 붙히는게 좋음
//	{
//		if (point >= 60)
//			printf("2종 면허 합격");
//		else
//			printf("2종 면허 불합격");
//	}
//	else
//	{
//		printf("잘못된 숫자 입니다.\n");
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
//	printf("성적입력:");
//	scanf_s("%lf %lf %lf", &n1, &n2, &n3);
//
//	if ((a < 0 || a > 0) || (b < 0 || b > 100) || (c < 0 || c > 100))
//	{
//		printf("성적은 0~100점까지만 입력가능합니다.\n\n");
//		return 0;
//	}
//
//	result = (n1 + n2 + n3) / 3;
//
//	if (result > 90) 
//	{
//		printf("평균: %7.2f\n 평점 A는 전액장학금이 지급됩니다.\n\n", result);
//	}
//	else if (result > 80) 
//	{
//		printf("평균: %7.2f\n 평점 B는 전액장학금이 지급됩니다.\n\n", result);
//	}
//	else 
//	{
//		printf("평균: %7.2f는 장학금을 받을 수 없습니다.\n\n", result);
//	}
//}


//#include<stdio.h>
//
//int main(void)
//{
//	double n1 = 0, n2 = 0, n3 = 0, result = 0;
//	int con = 0;
//
//	printf("성적입력:");
//	scanf_s("%f %f %f", &n1, &n2, &n3);
//	if ((a < 0 || a > 0) || (b < 0 || b > 100) || (c < 0 || c > 100))
//	{
//		printf("성적은 0~100점까지만 입력가능합니다.\n\n");
//		return 0;
//	}
//	con = (int)result / 10;
//
//	switch (con)
//	{
//	case 9:, case 10:
//		printf("평균: %7.2f\n 평점 A는 전액장학금이 지급됩니다.\n\n", result);
//		break;
//	case 8:
//		printf("평균: %7.2f\n 평점 B는 전액장학금이 지급됩니다.\n\n", result);
//		break;
//	default:
//		printf("평균: %7.2f는 장학금을 받을 수 없습니다.\n\n", result);
//	}
//}


// 두 정수를 입력 받아 앞의 정수가 크면 두 수를 더하고, 뒤의 정수가 크거나 같으면 두 수를 곱하여 결과를 출력하는 프로그램을 작성

#include<stdio.h>

int main(void)
{
	signed int x = 0, y = 0;

	printf("두 정수 입력:");
	scanf_s("%d %d", &x, &y);

	if (x > y)
		printf("더한 결과 값:%d + %d = %d\n", x, y, x + y);
	else
		printf("곱한 결과 값:%d * %d = %d\n", x, y, x * y);
	return 0;
}
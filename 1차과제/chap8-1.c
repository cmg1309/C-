//8-1
//#include<stdio.h>
//
//void increment(int* p, int size, int n);
//
//int main(void)
//{
//	int data[7] = { 3,21,35,57,24,82,8 };
//	int size = 7, sum = 0, n = 0, i;
//
//	printf("===== 현재 배열 =====\n");
//	for (i = 0; i < size; i++)
//	{
//		printf(" %d", data[i]);
//	}
//	printf("\n=====================\n");
//	
//	printf("증가값을 입력하세요. : ");
//	scanf_s("%d", &n);
//	increment(data, size, n);
//	
//}
//void increment(int* p, int size, int n)		// 증가값 계산 함수, *p는 data배열이 참조됨
//{
//	int i;
//	printf("\n==== 증가후 배열 ====\n");
//	for (i = 0; i < size; i++)
//	{
//		p[i] = p[i] + n;		// 입력받은 n값 만큼 배열에 값을 더함
//		printf(" %d", p[i]);
//	}
//	printf("\n");
//}
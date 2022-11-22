//7-4
//#include<stdio.h>
//
//void freq(int data[]);
//
//int main(void)
//{
//	int i;
//	int data[20];
//
//	printf("0~9까지의 정수를 20개를 입력하세요. : ");
//	for (i = 0; i < 20; i++)
//	{
//		scanf_s("%d", &data[i]);
//	}
//	freq(data);
//}
//
//void freq(int data[])
//{
//	int freqdata[10] = { 0 }; // 배열 data에 입력된 빈도수를 저장할 배열
//	int i, result, max = 0;
//
//	for (i = 0; i < 20; i++) // 배열 data의 빈도수를 카운터시킴
//		++freqdata[data[i]];
//
//	for (i = 0; i < 10; i++)
//		if (freqdata[i] > max)
//		{
//			max = freqdata[i]; // 가장 빈도수가 높은것을 배열에 저장
//			result = i;     // 가장 많이 나온수를 max에 저장
//		}
//
//	printf("\n0 ~ 9 중가장 많이 나온수는 %d이고, %d번나왔습니다.\n", result, freqdata[result]);
//}
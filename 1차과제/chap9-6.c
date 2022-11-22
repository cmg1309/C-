//9-6
//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	int i, j, count = 0;
//	int readnum, same;		
//	int input[6];			// 입력 값
//	int output[6] = { 0 };	// 난수 값
//	int than[46] = { 0 };	// 입력된 값과 난수값 비교
//	srand(time(NULL));		// 시간기준 랜덤 난수
//
//	printf("본인이 원하는 로또 번호(1에서 45의 숫자 6개) 입력 -> ");
//	for (i = 0; i < 6; i++)
//	{
//		scanf_s("%d", &input[i]);
//		printf(" %d ", input[i]);
//	}
//	for (i = 0; i < 6; i++)			// 중복값을 빼고 6개의 수를 than 배열에 저장함
//	{
//		readnum = rand() % 45 + 1;	
//		if (than[readnum])
//		{
//			i--;
//			continue;
//		}
//		output[i] = readnum;
//		than[readnum]++;
//	}
//	for (i = 0; i < 6; i++)				// 같은 수가 있으면 카운트
//	{
//		same = 0;
//		for (j = 0; j < 6; j++)
//		{
//			if (input[i] == output[j])		// 같은게 있는지 비교 반복
//				same++;						// 같으면 수 증가
//		}
//		if (same)							// 같은 수 만큼 카운트 증가
//			count++;
//	}
//	printf("\n");
//	printf("\n로또를 추첨합니다. -> \n");
//	for (i = 0; i < 6; i++)
//		printf(" %d ", output[i]);
//	printf("\n");
//	if (count == 7)
//		printf("\n%d개 맞았고, 당첨입니다!\n", count);
//	else
//		printf("\n%d개 맞았고, 꽝입니다.", count);
//}
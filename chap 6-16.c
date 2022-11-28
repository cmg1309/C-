// 6-16
#include<stdio.h>
#include<stdlib.h>		// rand함수
#include<time.h>		// time함수

#define max 45			// 1~45까지 범위

int number(int n);		// 출력값 함수원형

int main(void)
{
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0;

	srand(time(NULL));		// 시간에 따른 랜덤값 출력

	n1 = number(max);		// 출력값 함수호출

	do
	{
		n2 = number(max);		// n2값을 출력값 함수로 돌림 
	} while (n2 == n1);			// n1와 같다면 다시 돌림

	do
	{
		n3 = number(max);
	} while (n3 == n1 || n3 == n2);		// n1과 같거나 n2와 같으면 다시 돌림

	do
	{
		n4 = number(max);
	} while (n4 == n1 || n4 == n2 || n4 == n3);

	do
	{
		n5 = number(max);
	} while (n5 == n1 || n5 == n2 || n5 == n3 || n5 == n4);

	do
	{
		n6 = number(max);
	} while (n6 == n1 || n6 == n2 || n6 == n3 || n6 == n4 || n6 == n5);

	printf("로또 당첨 번호 : %d, %d, %d, %d, %d, %d", n1, n2, n3, n4, n5, n6);

}

int number(int n)
{
	return rand() % n + 1;		
}
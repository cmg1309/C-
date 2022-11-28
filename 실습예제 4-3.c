//file: compassign.c

#include<stdio.h>

int main(void)
{
	int x = 5, y = 10;

	x += y;                                          // x = x + (y) -> x = 5 + (10) = 15
	printf("The addition is: %d\n", x);
	x -= y;                                          // x = x - (y) -> x = 15 - (10) = 5
	printf("The subtraction is: %d\n", x);
	x *= y;                                          // x = x * (y) -> x = 5 * (10) = 50
	printf("The multiplication is: %d\n", x);
	x /= y;                                          // x = x / (y) -> x = 50 / (10) = 5
	printf("The division is: %d\n", x);
	x %= y;                                          // x = x % (y) -> x = 5 % (10) = 5
	printf("The remainder is: %d\n", x);
	x *= x + y;                                      // x = x * (x + y) -> x = 5 * (5 + 10) = 75
	printf("x *= x + y is: %d\n", x);

	return 0;
}
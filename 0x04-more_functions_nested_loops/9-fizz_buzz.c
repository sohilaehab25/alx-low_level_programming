#include "main.h"
/**
  * main - print numbers 1 - 100 followed by a new line
  * numbers that are multiples of 3 print fizz
  * numbers that are multiples of 5 print bazz
  * numbers that are multiples of 3 and 5 print fizzbazz
  * each number and word to be separted by space
  * Return: Alwayes 0 (Success)
  */
int main(void)
{
	int num;
for (num = 1; num <= 100; num++)
{
	if (num % 3 == 0 && !(num % 5 == 0))
		printf("fizz");
	else if (num % 5 == 0 && !(num % 3 == 0))
		printf("bizz");
	else if (num % 3 == 0 && num % 5 == 0)
		printf("fizzbazz");
	else
		printf("%d", num);
	if (num != 100)
		printf(" ");
	else
		print("\n");
}
return (0);
}

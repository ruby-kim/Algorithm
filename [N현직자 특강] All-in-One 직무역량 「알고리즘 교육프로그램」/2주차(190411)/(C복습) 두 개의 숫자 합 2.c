#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int plus(int i)
{
	if (i == 1) return 1;
	else return i + plus(i - 1);
}

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int sum = num1 + num2;
	printf("Sum of %d and %d is %d.", num1, num2, sum);
	return 0;
}

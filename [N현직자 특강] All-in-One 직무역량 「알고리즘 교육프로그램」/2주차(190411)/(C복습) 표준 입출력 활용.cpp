#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
argc: 운영체제가 이 프로그램을 실행했을 때 전달되는 인수의 개수
argv: 프로그램으로 전달된 실제 인수의 값. 무조건 문자열로 넘겨진다
*/

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int sum = num1 + num2;
	printf("Sum of %d and %d is %d", num1, num2, sum);
	return 0;
}
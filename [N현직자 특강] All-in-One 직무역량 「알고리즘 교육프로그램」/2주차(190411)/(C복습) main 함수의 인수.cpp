#include<stdio.h>

/*
argc: 운영체제가 이 프로그램을 실행했을 때 전달되는 인수의 개수
argv: 프로그램으로 전달된 실제 인수의 값. 무조건 문자열로 넘겨진다
*/

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++) //옵션의 개수만큼 반복
	{
		printf("arg(%d) = %s\n", i, argv[i]);
	}
	printf("argc = %d\n", argc); //argc 값 출력

	return 0;
}
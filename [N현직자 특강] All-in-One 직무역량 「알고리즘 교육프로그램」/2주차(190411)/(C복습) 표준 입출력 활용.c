#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	char array[100];
	
	fgets(array, 100, stdin);
	printf("array value is %s\n", array);
	
	return 0;
}

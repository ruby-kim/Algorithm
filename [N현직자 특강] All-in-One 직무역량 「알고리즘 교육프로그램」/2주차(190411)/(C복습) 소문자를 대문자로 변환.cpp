#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char array[100];
	int len;
	//scanf("%s\n", data);

	fgets(array, 100, stdin);

	len = strlen(array);

	for (int i = 0; i < len; i++)
		array[i] = array[i] - 'a' + 'A';

	printf("%s\n", array);
	return 0;
}

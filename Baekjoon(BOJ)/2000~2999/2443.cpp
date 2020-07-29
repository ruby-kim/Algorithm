#include<stdio.h>

int main(void)
{
	int n,i,j,k;

	scanf("%d", &n);

	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i-1; j++)
			printf(" ");

		for(k=1; k<=2*(n-i)+1; k++)
			printf("*");

		printf("\n");
	}

	return 0;
}

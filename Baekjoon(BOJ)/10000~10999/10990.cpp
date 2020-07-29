#include<stdio.h>


int main(void)
{
	int n,i,j;
	scanf("%d", &n);

	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n-i; j++)
			printf(" ");
		printf("*");
		for(j=1; j<=2*(i-1)-1; j++)
			printf(" ");
		if(j!=1)
			printf("*");
		printf("\n");
	}
	return 0;
}

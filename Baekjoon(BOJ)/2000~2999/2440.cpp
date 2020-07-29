# include<stdio.h>

int main(void)
{
	int i,j,k, n;

	scanf("%d", &n);

	for(i=1; i<=n; i++)
	{
		for(j=0; j<=n-i; j++)
			printf("*");

		printf("\n");
	}
	return 0;
}

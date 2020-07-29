# include<stdio.h>

int main(void)
{
	int i,j,k, n;

	scanf("%d", &n);

	for(i=1; i<=n; i++)
	{
		for(k=1; k<=i-1; k++)
			printf(" ");
		
		for(j=1; j<=n-i+1; j++)
			printf("*");
	
		printf("\n");
	}
	return 0;
}

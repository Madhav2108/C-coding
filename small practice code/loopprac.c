#include<stdio.h>
int main()
{
	printf("ENTER THE NUMBER ->");
	int n,m;
	scanf("%d",&n);
	m=n;
	int i;
	for(i=0;i<(n*2-1);i++)
	{
		printf("%d",n);
	}
	printf("\n");
	for(i=0;i<1;i++)
	{
		printf("%d",n);
		int j;
		for(j=0;j<(n*2-3);j++)
		{
			printf("%d",n-1);
		}
		printf("%d",n);
	}
	printf("\n");
	for(i=0;i<1;i++)
	{
		printf("%d",n);
		int j;
		for(j=0;j<(n*2-3);j++)
		{
			printf("%d",n-1);
		}
		printf("%d",n);
	}
	printf("\n");
	for(i=0;i<(n*2-1);i++)
	{
		printf("%d",n);
	}
	return 0;
}

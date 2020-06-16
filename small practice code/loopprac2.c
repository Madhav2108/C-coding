#include<stdio.h>
int main()
{
	printf("ENTER THE NUMBER ->");
	int n,m;
	scanf("%d",&n);
	m=n;
	int i,j;
	for(i=0;i<(2*n-1);i++)
	if(i==0||i==(2*n-2))
	{
		for(j=0;j<(2*n-1);j++)
		{
			printf("%d",n);
		}
		printf("\n");
	}
	else
	{
		printf("%d",n);
		for(j=1;j<=(2*n-3);j++)
		{
			printf("%d",n-i);
		}
		printf("%d",n);
		printf("\n");
	}
	return 0;
}

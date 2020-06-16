#include<stdio.h>
int main()
{
int row,i,j;
scanf("%d",&row);
for(i=1;i<=row;i++)
{
	for(j=1;j<=(2*row-1);j++)
	{
		if((j>=6-i)&&(j<=4+i))
	printf(" ");
	else
	printf("* ");	
	}
	printf("\n");
	}
	return 0;	
}

#include<stdio.h>
int main()
{
	int turn,i;
	int high,low,norhigh,norlow,difhigh,diflow;
	float avg;
	scanf("%d\n",&turn);
	for(i=1;i<=turn;i++)
	{
	 scanf("%d\t%d\t%d\t%d",&high,&low,&norhigh,&norlow);
	 difhigh=high-norhigh;
	 diflow=low-norlow;
	 avg=(float)(difhigh+diflow)/2;
	 if(avg==0)
	 printf("\n%.1f DEGREE(S)",avg);
	 if(avg>0)
	 printf("\n%.1f DEGREE(S) ABOVE NORMAL",avg);
	 else
	 printf("\n%.1f DEGREE(S) BELOW NORMAL",-avg);
	}
	return 0;
	}

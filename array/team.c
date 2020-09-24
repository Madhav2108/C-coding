#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number of elements->");
	scanf("%d",&num);
	int a[num];
	int i,neg=0,pos=0,zero=0,sum=0;
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<0)
		neg++;
		else if(a[i]>0)
		pos++;
		else
		zero++;
		sum=sum+a[i];
	}
	printf("sum=%d\nNumber of positive digits=%d\nNumber of negative digits=%d\nnumber zero degits=%d",sum,pos,neg,zero);
	int j,small=32767,large=-32767,guh,luh;
	for(j=0;j<num;j++)
	{
		if(a[j]<small)
		{
		small=a[j];
	luh=j;
	}
		if(a[j]>large)
		{
		large=a[j];
	    guh=j;
	}
	}
	printf("\nSmallest digit=%d\nLargest digit=%d",small,large);
	int k,a1[num];
	for(k=0;k<num;k++)
	{
		a1[num-1-k]=a[k];
	}
	int l;
	for(l=0;l<num;l++)
	{
	printf("\n%d",a1[l]);
}
printf("\nInterchanging");
int temp;
temp=a[luh];
a[luh]=a[guh];
a[guh]=temp;
	for(l=0;l<num;l++)
	{
	printf("\n%d",a[l]);
}
}

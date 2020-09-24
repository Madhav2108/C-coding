#include<stdio.h>
#include<math.h>
void main()
{
	int num;
	printf("Enter the number of elements -> ");
	scanf("%d",&num);
	int i;
	int a[num];
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
		printf("ele @ %d position=%d\n",i,a[i]);
	}
	long int j,sum=0,count=0;
	for(j=num-1;j>=0;j--)
	{
		count=ceil((int)log10(a[j])+1);
		sum=sum*pow(10,count)+a[j];
	}
	printf("\nlo ji ans aa raha hai-> -------- %ld",sum);
}

#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number of elemenets");
	scanf("%d",&num);
	int a1[num];
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&a1[i]);
	}
	int num1;
	printf("Enter the number of elemenets");
	scanf("%d",&num1);
	int a2[num1];
	int h;
	for(h=0;h<num1;h++)
	{
		scanf("%d",&a2[h]);
	}
	long long int a3[num+num1];
	int t;
	for(t=0;t<num;t++)
	{
		a3[t]=a1[t];
	}
	int r;
	for(r=num;r<num+num1;r++)
	{
		a3[r]=a2[r-num];
	}
	int s;
	for(s=0;s<num+num1;s++)
	{
		printf("%lld ",a3[s]);
	}
	printf("\n");
	int j,k,temp;
	for(j=num+num1;j>1;j--)
	{
		for(k=0;k<j-1;k++)
		{
			if(a3[k]>a3[k+1])
			{
				temp=a3[k];
				a3[k]=a3[k+1];
				a3[k+1]=temp;
			}
		}
	}
	int o;
	for(o=0;o<num+num1;o++)
	printf(" %lld ",a3[o]);
}

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
int p,q,temp;
	for(p=num;p>1;p--)
	{
		for(q=0;q<p-1;q++)
		{
			if(a[q]>a[q+1])
			{
				temp=a[q];
				a[q]=a[q+1];
				a[q+1]=temp;
			}
		}
	}
	int m,rep=0;
	for(m=0;m<num;m++)
	{
		int n;
		for(n=0;n<num;n++)
		{
		if(a[m]==a[n])
		{
		rep++;
		}
		}
if(a[m]==a[m-1])
{
	rep=0;
	continue;
}
	if(rep>1)
	{
	printf("\nYes duplicate digits exists\n%d is the duplicate digit\nWhich appeared %d times",a[m],rep);
	}
	rep=0;
	}
}

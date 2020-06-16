#include<stdio.h>
int main()
{
	int n,a,b,c,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	a=n%10;
	if(a%2!=0)
	{
		sum=sum+a;
	}	
	n=n/10;
	b=n%10;
	if (b%2!=0)
	{
		sum=sum+b;
	}
	n=n/10;
	if(n%2!=0)
	{
	sum=sum+n;
	}
	if(sum>=10)
	{
		c=sum%10;
		sum=sum/10;
		sum=sum+c;
	}
	printf("the sum of all the digit is %d",sum);
	return 0;
}

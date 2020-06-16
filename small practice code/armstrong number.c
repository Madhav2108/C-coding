#include<stdio.h>
int main()
{
	int n,a,b,c,d,e,f,sum=0;
	printf("Enter the number you want to check");
	scanf("%d",&n);
	f=n;
	a=n%10;
	b=a*a*a;
	n=n/10;
	c=n%10;
	d=c*c*c;
	n=n/10;
	e=n*n*n;
	sum=b+d+e;
	if(sum==f)
	{
		printf("the number is armstrong no.");
	}
	else
	{
		printf(" the number is not a armstrong no.");
	}
	printf("sum= %d",sum);
	printf(",number is %d",f);
	return 0;
}

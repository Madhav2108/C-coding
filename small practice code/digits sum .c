#include<stdio.h>
int main()
{
	int n,a,b,c;
	printf("enter the number");
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=a+b+n;
	printf(" the sum of  all the digets is %d",c);
	return 0;
}

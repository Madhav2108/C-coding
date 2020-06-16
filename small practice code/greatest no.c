#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	if(a>b)
	{
		printf(" the greatest no is %d",a);
	}
	else
	{
		printf(" the greatest number is %d",b);
	}
	return 0;
}

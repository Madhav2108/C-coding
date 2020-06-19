#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the 3 values");
	scanf("%d\t%d\t%d",&a,&b,&c);
	if(((a+b)>c)&&((a+c)>b)&&((b+c)>a))
	printf("the triangle is valid");
	else
	printf("the triangle is not valid");
	return 0;
}

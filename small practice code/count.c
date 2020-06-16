#include<stdio.h>
int main()
{
	printf("ENTER THE NUMBER(schould not start with 0)->");
    long num,b;
	scanf("\n%d",&num);
	long count=0;
	if(num==0)
	printf("count=1");
	else
{	while(num>0)
	{
	count+=1;
	num=num/10;
}
printf("count=%d",count);
}
return 0;
}

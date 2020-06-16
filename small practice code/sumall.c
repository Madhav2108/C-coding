#include<stdio.h>
int main()
{
	printf("ENTER THE NUMBER->");
    long num,b;
	scanf("\n%d",&num);
	b=num;
	long count=0;
	while(num>0)
	{
	count+=1;
	num=num/10;
}
	int i=0,c,sum=0;
	while(i<=count)
	{
		c=b%10;
		b=b/10;
		sum=sum+c;
		i++;
	}
	printf("\nsum=%d",sum);
	return 0;
}

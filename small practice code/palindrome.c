#include<stdio.h>
int main()
{

	int a,b,c,count=0,i;
	printf("ENTER TH ENUMBER->");
	scanf("%d",&a);
	b=a;
	printf("\nREVERCE NO->");
	while(a>0)
	{
	count+=1;
	a=a/10;
}
	for(i=1;i<=count;i++)
	{
		printf("%d",b%10);
	b=b/10;	
}
c=	for(i=1;i<=count;i++)
	{
		printf("%d",b%10);
	b=b/10;	

if(a==c)
{
printf("%d is palindrome no.",a);
}
else
{
printf("%d is not palindrome no.",a);
}
return o;
}

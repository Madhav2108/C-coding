#include<stdio.h>
int logic(int*);
void main()
{
	int num,ans;
	scanf("%d",&num);
	ans=logic(&num);
	if(ans==1)
	printf("Equal");
	else
	printf("NOT EQUAL");
}
int logic(int*a)
{
	int sum=0,sum1=0,cp1,cp2,last;
	cp1=*a;
	cp2=*a;
	while(cp1>0)
	{
		last=cp1%10;
	sum=sum+last;
	cp1=cp1/100;	
	}
	cp2=cp2/10;
		while(cp2>0)
	{
		last=cp2%10;
	sum1=sum1+last;
	cp2=cp2/100;	
	}
	if(sum==sum1)
	return 1;
	else
	return 0;
}

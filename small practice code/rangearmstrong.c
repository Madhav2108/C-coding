#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,temp,c;
	printf("ENTER THE RANG ->");
	scanf("%d\t%d",&m,&n);
	if(m>n)
	{
	printf("enter the range in ascending order");
	temp=n;
	n=m;
	m=temp;
}
int i,j,k;
for(i=m;i<=n;i++)
{
int sum=0, count=0;
	k=i;
	j=i;
		while(k>0)
	{
	count+=1;
	k=k/10;
}
	while(j>0)
	{	c=j%10;
		c=pow(c,count);
		sum=sum+c;
		j=j/10;
	}
	if(sum==i)
	printf("\n%d",i);
}
return 0;
}

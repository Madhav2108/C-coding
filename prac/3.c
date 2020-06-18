#include<stdio.h>
#include<math.h>
int claculate(int a,int n);
int main()
{
int n,a,c;
scanf("%d %d",&a,&n);
c=calculate(a,n);
printf("%d",c);
}
 int calculate(int a,int n)
{
int i,j,s=0,b;
for(i=2;i<=n;i++)
{
	b=a;
	for(j=2;j<=i;j++)
	{
		b=b*a;
	}
	s=s+b;
}
s=s+a;
return s;
}



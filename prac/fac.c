#include<stdio.h>
int fibo(int);
int main()
{
int n,k,i=0;
scanf("%d",&n);
for(k=1;k<=n;k++)
{
printf("%d\n",fibo(i));
i++;
}
}
int fibo(int n)
{
if(n==0||n==1)
return n;
else
return (fibo(n-1) + fibo(n-2));
}


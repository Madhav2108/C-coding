#include<stdio.h>
int main()
{
int i,n,a[1000],s,e,p;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("1.INSERT AN ELEMENT\n");
printf("2.DELETE AN ELEMENT\n");
printf("3.MERGE TWO ARRAYS\n");
printf("CHOICE:-\n");
scanf("%d",&s);
switch(s)
    {
    case 1:
        {
        printf("ELEMENT?\n");
        scanf("%d",&e);
        printf("POSITION?\n");
        scanf("%d",&p);
        for(i=n;i>=p;i--)
        a[i]=a[i-1];
        a[p]=e;
        for(i=0;i<=n;i++)
        printf("%d ",a[i]);
        }
    case 2:
        {
        printf("POSITION?\n");
        scanf("%d",&p);
        for(i=p;i<n;i++)
        {
        a[i]=a[i+1];
        }
        for(i=0;i<n-1;i++)
        {
        printf("%d ",a[i]);
        }
        }
    case 3:
        {
        int a[100],b[100],c[100],n1,n2,i;
        scanf("%d",&n1);
        for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
        scanf("%d",&n2);
        for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
        for(i=0;i<n1;i++)
        c[i]=a[i];
        for(i=n1;i<n1+n2;i++)
        c[i]=b[i-n1];
        for(i=0;i<n1+n2;i++)
        {
        printf("%d ",c[i]);
        }
        }
    }
}

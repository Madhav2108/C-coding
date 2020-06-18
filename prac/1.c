#include<stdio.h>
int main()
{
	int a[5]={5, 65, 45, 2, 25};
    int i;
    for(i = 1; i < 4; i++)
        {
		a[i]=a[i-1]-a[i]+a[i+1];
        }
        
        
        
		for(i=0;i<5;i++)
        printf("%d\n",a[i]);
}

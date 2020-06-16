#include<stdio.h>
int main()
{
	int number,i,j,count=0;
	scanf("%d",&number);
	for(i=2;i<=number/2;i++)
	{
		if(number%i==0)
		{
			count=0;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				count++;
			}
			if(count==0)
			printf("%d\n",i);
		}
	}
	return 0;
}

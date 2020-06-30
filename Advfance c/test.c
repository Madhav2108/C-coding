#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int arr[a];
	int i;
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	int se,cpy,count=0;
	scanf("%d",&se);
	for(i=0;i<a;i++)
	{
		cpy=arr[i];
		while(cpy>10)
		{
			cpy=cpy/10;
		}
		if(cpy==se)
		{
			count++;
			printf("%d\n",arr[i]);
		}
	}
	printf("%d",count);
}

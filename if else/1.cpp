#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the two numbers:");
	scanf("%d\n%d",&num1,&num2);
	if(num1>num2)
	printf("THE max number is %d",num1);
	else
	printf("THE max number is %d",num2);
	return 0;
}

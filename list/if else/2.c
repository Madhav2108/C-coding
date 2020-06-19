#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter the three numbers:");
	scanf("%d\n%d\n%d",&num1,&num2,&num3);
	if((num1>num2)&&(num1>num3))
	printf("THE max number is %d",num1);
	else if((num2>num1)&&(num2>num3))
	printf("THE max number is %d",num2);
	else
	printf("THE max number is %d",num3);
	return 0;
}

#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number u want to check");
	scanf("%d",&number);
	if(number%5==0)
	{
	printf("the number is divisibel by 5\n");
	if(number%11==0)
	printf("the number is divisible by 11\n");
}
	else
	printf("the number not divisible to 5 & 11");
	return 0;
}

#include<stdio.h>
int main()
{
	char number;
	printf("Enter the value u want to check\n");
	scanf(" %c",&number);
	if(((number>64)&&(number<91)||((number>96)&&(number<123))))
	printf("the value is alphabet");
	else
	{
		printf("The value is not alphabet");
	}
	return 0;
}

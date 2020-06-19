#include<stdio.h>
int main()
{
	char number;
	printf("Enter the value u want to check\n");
	scanf(" %c",&number);
	if(((number>64)&&(number<91)||((number>96)&&(number<123))))
	printf("the value is alphabet");
	else if((number>47)&&(number<58))
		printf("The value is number");
	else
	printf("the value is special character");	
	return 0;
}

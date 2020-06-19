#include<stdio.h>
int main()
{
	char number;
	printf("Enter the value u want to check\n");
	scanf(" %c",&number);
	if((number=='a')||(number=='e')||(number=='i')||(number=='o')||(number=='u')||(number=='A')||(number=='E')||(number=='I')||(number=='O')||(number=='U'))
	printf("the value is vowel");
	else
	{
		printf("The value is consonant.");
	}
	return 0;
}

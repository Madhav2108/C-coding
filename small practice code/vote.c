#include<stdio.h>
int main()
{
	int age;
	printf("ENTER YOUR AGE->");
	scanf("\n%d",&age);
	if(age<0)
	{
		printf("\nENTER AGE IN POSITIVE NUMBER");
	}
	else if(age<18)
	printf("\nyou arew not eligible to vote");
	else
	printf("\nyou are aligible to vote");
return 0;
}

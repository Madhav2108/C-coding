#include<stdio.h>
int main()
{
	int weeknum;
	printf("enter the week number(1-7)->\n");
	scanf("%d",&weeknum);
	if(weeknum>7)
	weeknum=weeknum%7;
	switch(weeknum)
	{
		case 1:
			printf("Monday");
		break;
		case 2:
			printf("Tuesday");
		break;
		case 3:
			printf("Wednesday");
		break;
		case 4:
			printf("Thursday");
		break;
		case 5:
			printf("Friday");
		break;
		case 6:
			printf("Saturday");
		break;
		case 7:
		case 0:
			printf("Sunday");
		break;
	}
	return 0;
}

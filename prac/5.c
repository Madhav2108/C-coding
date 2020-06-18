#include<stdio.h>
#include<string.h>
int main()
{
	int length;
	char name[20];
	printf("ENTER YOUR NAME HERE -> ");
	scanf("%[^\n]",name);
	char rollno[10];
	printf("ENTER YOUR ROLLNUMBER HERE -> ");
	scanf(" %s",rollno);
	char corse[10];
	printf("ENTER YOUR COURSE HERE -> ");
	scanf(" %[^\n]",corse);
	char cname[100];
	length=strlen(name)+strlen(rollno)+strlen(corse)+strlen(cname);
	printf("ENTER YOUR COLLEGE NAME HERE -> ");
	scanf(" %[^\n]",cname);
	printf("\n \n \n \n");
	printf("**************ID CARD*******************\n");
	printf("NAME-> %s\nROLLNO.->%s\nCOURSE-> %s\nCOLLEGE NAME->%s\n",name,rollno,corse,cname);
	printf("****************************************");
		printf("\n \n \n \n");
		printf("TOTAL CHARACTER GIVEN BY U -> %d ",length);
	
}

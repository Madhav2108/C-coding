#include<stdio.h>
#include<stdlib.h>
int main()
{
printf("***********************************************");
printf("\nWELCOME TO ATM BANKING");
int pin,opt,givamt,intbal=15287,updamt=0,actnum;
printf("\nENTER THE ACCOUNT NUMBER");
scanf("\n%d",&actnum);
if(actnum==12890071)
{
printf("\nYOU HAVE THE FOLLING OPTIONS: \n 1.CHECK ACCOUNT BALANCE \n 2. WITHDRAW AMOUNT \n 3. DEPOSITE AMOUNT \n 4. EXIT \n ENTER THE OPTION NUMBER->");
scanf("\n%d",&opt);
if(opt==4)
{
printf("\n*******THANK YOU FOR CHOSING R BANK**********");
printf("\nHAVE A NICE DAY");
exit(0);	
}
else
{
printf("\nENTER THE 4 DIGIT PIN (****)");
scanf("%d",&pin);
if(pin==1748)
{
switch(opt)
{
case 1:
printf("\nyour balance is %d",intbal);
break;
case 2:
printf(" \nENTER THE AMOUNT YOU WANT TO WITHDRAW->");
scanf("%d",&givamt);
if(givamt<0)
printf("Enter the correct amount");
else
{
updamt=intbal-givamt;
if(intbal<givamt)
printf(" \nREQUIRED BALANCE NOT AVALIBE");
else
{
printf("\nYOUR REMANING BALANCE IS %d",updamt);
	int a,b,r,c,d,e,f,g,h;
	printf("\n **********notes provided through the atm is******************** :");
	a=givamt;
	b=a/500;
	if(b>=0)
	printf("\n500=%d",b);
	r=a%500;
	c=r/100;
	if(c>=0)
	printf("\n100=%d",c);
	r=r%100;
	d=r/50;
	if(d>=0)
	printf("\n50=%d",d);
	r=r%50;
	e=r/20;
	if(e>=0)
	printf("\n20=%d",e);
	r=r%20;
	f=r/10;
	if(f>=0)
	printf("\n10=%d",f);
	r=r%10;
	g=r/5;
	if(g>=0)
	printf("\n5=%d",g);
	r=r%5;
	h=r/2;
	if(h>=0)
	printf("\n2=%d",h);
	r=r%2;
	printf("\n1=%d",r);
	}
}
break;
case 3:
printf(" \nENTER THE AMOUNT YOU WANT TO DEPOSITE->");
scanf("%d",&givamt);
if(givamt<0)
printf("Enter the correct amount");
else
{
updamt=intbal+givamt;
printf(" \nYOUR UPDATED BALANCE IS %d",updamt);
}
break;
default:
printf("\nINVALIDEN OPTION NUMBER");
}
}
else
{
printf("\nENTER THE CORRECT PIN(****)");
}
}
}
else
printf("\n************ENTER CORRECT ACCOUNT NUMBER**************");
return 0;
}

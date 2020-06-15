#include<stdio.h>
int main()
{
	int a,b,r,c,d,e,f,g,h;
	printf("Enter the ammount->\n");
	scanf("%d",&a);
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
	return 0;	
}

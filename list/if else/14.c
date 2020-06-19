#include<stdio.h>
int main()
{
	float ang1,ang2,ang3;
	printf("Enter the three angles->\n");
	scanf("%f\t%f\t%f",&ang1,&ang2,&ang3);
	if((ang1+ang2+ang3)==180)
	printf("the triangle is valid");
	else
	printf("the triangle is not valid");
	return 0;
}

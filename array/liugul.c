#include<stdio.h>
void junk(int,int*);
int main()
{
float a=7.999999;
float *b,*c;
b=&a;
c=b;
printf("%d %d %d\n",&a,b,c);
printf("%d %d %d %d\n",a,*(&a),*b,*c);
return 0;
}


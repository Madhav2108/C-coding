#include<stdio.h>
#include<math.h>
int main()
{
	int number,copynum,copy2num,count=0;
	printf("ENTER TH ENUMBER:\n");
	scanf("%d",&number);
	copynum=number;
	copy2num=number;
	count=(int)log10(number)+1;
	int testnum=0,limit;
	number=number*number;
	limit=pow(10,count);
		testnum=number%limit;
	if(testnum==copy2num)
	printf("automorphic");
	else
	printf("not automorphic");
	return 0;
}

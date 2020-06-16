#include<stdio.h>
#include<math.h>
int main()
{
	int number,copy2num,count=0,low,high,i;
	scanf("%d\t%d",&low,&high);
	for(i=low;i<=high;i++)
	{
		number=i;
		if(number==0)
		printf("%d",number);
		else
		{
	copy2num=number;
	count=(int)log10(number)+1;
	int testnum=0,limit;
	number=number*number;
	limit=pow(10,count);
		testnum=number%limit;
	if(testnum==copy2num)
	printf("%d\n",i);
}
}
	return 0;
}

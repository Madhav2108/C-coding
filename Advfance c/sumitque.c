#include<stdio.h>
void gamestart();
int *br(int*,int,int);
int main()
{
	int no;
	printf("**********************ENTER THE NUMBER OF GAMES YOU WANT TO PLAY->***************************\n");
	scanf("%d",&no);
	while(no>0)
	{
		gamestart();
		no--;
	}
}
gamestart()
{
	int ele;
		printf("\n****************ENTER THE NUMBER OF ELEMENTS YOU WANT TO ADD->****************************\n");
		scanf("%d",&ele);
			printf("\n****************ENTER THE ELEMENTS YOU WANT TO ADD->****************************\n");
			int i,box[1000];
			for(i=0;i<ele;i++)
			{
				scanf("%d",&box[i]);
			}
			for(i=0;i<ele;i++)
			{
			 if(box[i]!=1)
			 {
			 	ele=ele+box[i]-1;
			 }
			}
			if((ele)%2==1)
			{
				printf("PLAYER 1 WINS");
			}
			else
			{
			printf("PLAYER 2 WINS");	
			}
}
int* br(int *s,int p,int k)
{
	int val=s[k];
	int i;
	for(i=k;i<p;i++)
	{
		s[i+val]=s[i+1];
	}
	for(i=0;i<val;i++)
	{
		s[k+i]=1;
	}
	return s;
}

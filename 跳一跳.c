#include<stdio.h>

int main()
{
	int i=0,a=1,s=0,n=2,score=0,step[1000];
	while(a!=0)
	{
		scanf("%d",&a);
		step[i]=a;
		i++;
		s++;
	}
	for(i=0;i<s;i++)
	{
		if(step[i]==1||step[i]==0)
			score+=step[i];
		else if(step[i]==2&&step[i-1]!=2)
		{
			score+=2;
			n=2;
		}
		else if(step[i-1]==2&&step[i] == 2)
		{
			score+=n*2;
			n++;
		}
		else
		{
			printf("error");
			break;	
		}
		
	}
	printf("%d",score);
	return 0;
}






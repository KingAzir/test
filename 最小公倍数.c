#include<stdio.h>

int max1(int a,int b)
{
	int c=a;
	c = a>b ? a:b;
	return c;
	
}


int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int c = max1(a,b);
	int i=0,d=0;
	for(i=c;i<=a*b;i++)
	{
		if(i%a==0&&i%b==0)
		{
			break;
		}
	}
	printf("%d",i);
	return 0;
}

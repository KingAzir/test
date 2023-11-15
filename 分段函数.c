#include<stdio.h>

int main()
{
	int x=0,f;
	scanf("%d",&x);
	if(x<1)
	{
		f = x;
	}
	else if(x>=1&&x<10)
	{
		f = 2*x-1;
	}
	else if (x>=10)
	{
		f = 3*x-11;
	}
	printf("%d",f);
	return 0;
}

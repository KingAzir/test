#include<stdio.h>
int main()
{
	int i=0;
	scanf("%d",&i);
	double w=0;
	if(i<=100000&&i>=0)
	{
		w = i*0.1;
	}
	else if(i>=100000&&i<=200000)
	{
		 w = 10000+(i-100000)*0.075;
	}
	else if (i>=200000&&i<=400000)
	{
		w = 17500+(i-200000)*0.05;
	}
	else if (i>=400000&&i<=600000)
	{
		w = 27500+(i-400000)*0.03;
	}
	else if(i>=600000&&i<=1000000)
	{
		w = 33500+(i-600000)*0.015;
	}
	else if (i>1000000)
	{
		w = 39500+(i-1000000)*0.01;
	}
	else
	return 0;
	printf("%.2lf",w);
	return 0;
}

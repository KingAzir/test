#include<stdio.h>

int main()
{
	double elc;
	scanf("%lf",&elc);
	double rmb;
	if(elc>=0&&elc<=110)
	{
		rmb = elc*0.5;
	}
	else if(elc>110&&elc<=210)
	{
		rmb = (elc-110)*0.55+55;
	}
	else if (elc>210)
	{
		rmb = 110+(elc-210)*0.70;
	}
	else
	{
		printf("err");
	}
	printf("%.2lf",rmb);
	return 0;
}

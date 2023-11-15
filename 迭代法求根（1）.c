#include<stdio.h>
#include<stdlib.h>
double gen(double a)
{
	double b ,x = 1.0;
	while(1)
	{
		b = x ;
		x = (x + a / x) / 2;
		if(fabs(x-b)<0.00001)
		{
			break;
		}
	}
	return x;
}


int main()
{
	double a,x;
	scanf("%lf",&a);
	x = gen(a);
	printf("%.5lf",x);
	return 0;
}



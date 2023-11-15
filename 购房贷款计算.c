#include<stdio.h>
#include <math.h>
int main()
{
	double m,d,P,r;
	scanf("%lf %lf %lf",&d,&P,&r);
	m = (log(P)-log(P-d*r))/log(1+r);
	printf("%.2f",m);
	
	
	return 0; 
}

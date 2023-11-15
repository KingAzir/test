#include<stdio.h>

int main()
{
	double t,A,B ;
	scanf("%lf",&t);
	A=0.6*t;
	B=50+0.4*t;
	printf("%.2lf\n%.2lf\n",A,B);
	if(A<B)
	{
		printf("A");
	}
	else{
		printf("B");
	}
	
	
	
	
	return 0;
}

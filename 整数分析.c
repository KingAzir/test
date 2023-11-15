#include<stdio.h>

int main()
{
	long a=0,max=0,min=0,b=0,n=0;
	scanf("%ld",&n);
	b = n%10;
	max = b;
	min = b;
	if(n>=0&&n<=100000000)
	{
		while(n!=0)
		{
			a++;
			b = n%10;
			max = max<b ? b:max;
			min = min>b ? b:min;	
			n/=10;
		}
		printf("%d %d %d",a,max,min);
	}
	else
	printf("err");
	return 0 ;
}





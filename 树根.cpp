#include<stdio.h>
int shugen(int n)
{
	int sum=0,a,b,c;
	while(n>0)
	{
		sum += n%10;
		n /=10;
	}
	return sum;
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n/10!=0)
	{
		n = shugen(n);
	}
	printf("%d",n);
	return 0;
}

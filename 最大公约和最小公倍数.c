#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int max=0,i=0;
	int a,b;
	max = m>n ? m:n;
	for(i=max;i>1;i--)
	{
		if(m%i==0&&n%i==0)
		{
			a = i;
			break;
		}
	}
	for(i=max;i<=m*n;i++)
	{
		if(i%m==0&&i%n==0)
		{
			b = i;
			break;
		}
	}
	printf("%d %d",a,b);
	return 0;
}

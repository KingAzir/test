#include<stdio.h>

int main()
{
	int n,a,i;
	scanf("%d",&n);
	if(n>0&&n<30)
	{
		a = n*n-n+1;
		for(i=0;i<n;i++)
		{
			printf("%d ",a);
			a+=2;
		}
	}
	else 
	printf("error");
	return 0;
}

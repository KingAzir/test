#include<stdio.h>

int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	if(n<=1||k>10000)
	{
		printf("err");
		return 0;
	}
	int temp=n,count=0;
	while(temp>k)
	{
		temp-=k;
		count++;
		temp++;
	}
	int sum = n+count;
	printf("%d",sum);
	return 0;
}

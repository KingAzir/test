#include<stdio.h>

int shuwei(int n)
{
	int i=1;
	while(n!=0)
	{
		n /=10;
		i *=10;
	}
	return i;
}

int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if((arr[i]*arr[i])%shuwei(arr[i])==arr[i])
			printf("%d\n",arr[i]);
		else
			printf("No\n");
	}
	return 0;
}

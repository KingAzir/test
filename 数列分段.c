#include<stdio.h>

int main()
{
	int i,a,b=1,n=0;
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&a);
		arr[i]=a;
	}
	for (i=1;i<n;i++)
	{
		if(arr[i-1]!=arr[i])
		{
			b++;
		}
	}
	printf("%d",b);
	return 0;
}

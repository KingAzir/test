#include<stdio.h>
#include<math.h>
int main()
{
	int a,n,max,i;
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&a);
		arr[i]=a;
	}
	for (i=1;i<n;i++)
	{
		max = abs(arr[i]-arr[i-1])>abs(arr[i+1]-arr[i]) ? abs(arr[i]-arr[i-1]) : abs(arr[i+1]-arr[i]);
	}
	printf("%d",max);
	return 0;
}

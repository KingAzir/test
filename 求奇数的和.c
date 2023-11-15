#include<stdio.h>
int main()
{
	int i=0,a=1,c=0,sum=0,step[1000];
	while(a!=0)
	{
		scanf("%d",&a);
		step[i]=a;
		c++;
		i++;
	}
	
	for(i=0;i<c;i++)
	{
		if(step[i]%2==1)
		{
			sum+=step[i];
		}
	}
	printf("%d",sum);
	return 0;
}

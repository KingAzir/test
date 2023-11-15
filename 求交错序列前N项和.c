#include<stdio.h>
#include<stdlib.h>
int main()
{
	double up=1.0,down=1.0,ans;
	int i,n=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		ans += up*(i+1)/down;
		up = -up;
		down +=2; 
	}
	printf("%.3lf",ans);
	return 0;
}




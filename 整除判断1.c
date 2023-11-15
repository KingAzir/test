#include <stdio.h>


int main() {
	int m,n,q,r,a,b;
	scanf("%d %d %d %d",&m,&n,&q,&r);
	a = m/n;
	b = m%n;
	if(q == a,r==b)
	{
		printf("yes");
	}
	else
	{
		printf("%d %d",a,b);
	}
	return 0;
}

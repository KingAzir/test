#include<stdio.h>
 int main()
 {
	int a,b,c,d,sum;
	scanf("%d",&a);
	b = a/100;
	c = a/10-b*10;
	d = a-b*100-c*10;
	sum = d+b+c;
	printf("%d",sum);
 	return 0;
 }

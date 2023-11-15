#include<stdio.h>

int main()
{
	int y,d,i,m=1,mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d",&y,&d);
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
	{
		mon[1]=29;
	}
	for(i=0;i<12;i++)
	{
		if(mon[i]<d)
		{
			d=d-mon[i];
			m++;
		}
		else
			break;
	}
	printf("%d %d",m,d);
	return 0;
}

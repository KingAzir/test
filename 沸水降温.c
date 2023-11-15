#include<stdio.h>

int main()
{
	int m,s;
	double c,t;
	scanf("%d %d",&m,&s);
	if(m>=0 && m<=100 && s>=0 && s<=59)
	{
		t = m + s/60.0;
		if(t>=0&&t<=10)
		{
			c = 100-t*5;
			printf("%.1lf",c);
		 } 
		if(t>10&&t<=30)
		{
			c = 60-t;
			printf("%.1lf",c);
		}
		if(t>30&&t<=50)
		{
			c= 45-t/2;
			printf("%.1lf",c);
		}
		if(t>50)
		{
			c=20;
			printf("%.1lf",c);
		}
		
		
		
		
		
		
	}
	else
	{
		printf("Error");
	}
	return 0 ;
	
}

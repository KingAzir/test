#include<stdio.h>

int main()
{	
	char c1,c2,c3,c4,c5,num=0,i;
	scanf("%c %c %c %c %c",&c1,&c2,&c3,&c4,&c5);
	int arr[5] = {c1,c2,c3,c4,c5};
	for(i=0;i<=5;i++)
	{
		if(arr[i]==97 || arr[i]==65)
		{
			num++;
		}
		
		
	}
	printf("%d",num);
	return 0;
}

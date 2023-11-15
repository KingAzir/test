#include<stdio.h>
#include <string.h>
int main()
{
	char str[100];
	gets(str);
	int sz,i,sum=0;
	sz = strlen(str);
	for (i=0;i<sz;i++)
	{
		sum += str[i];
		
	}
	printf("%d",sum%256);
	return 0;
}


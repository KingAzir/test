#include<stdio.h>
int main()
{
	int i=0, a=1, s=0, n=0, score=0, step[1000];
    while(a != 0)
    {
        scanf("%d", &a);
        step[i] = a;
        i++;
        s++;
    }
    for(i=0;i<s;i++)
    {
    	printf("%d ",step[i]);
	}
	return 0;
}

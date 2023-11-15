#include<stdio.h>

int max1(int a,int b)
{
	int c=a;
	c = a>b ? a:b;
	return c;
	
}
int min1(int a,int b)
{
	int c=a;
	c = a<b ? a:b;
	return c;
	
}


int is_prime(int n)   // 判断n是否是质数
{
	if (n < 2)
		{
			return 0; // 小于2的数不是质数
		}
	int i=0;
	for (i = 2; i * i <= n; i++)   // 从2到sqrt(n)遍历，判断n是否能被整除
		{
			if (n % i == 0)
				{
					return 0; // 能被整除，不是质数
				}
		}
	return 1; // 否则是质数
}



int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>200||b>200||a==b||a<0||b<0)
	{
		printf("err");
		return 0;
	}
		
	int i=0,j=2,arr[200],count=1;
	arr[0] = 2;
	for(i=3;i<200;i++)
	{
		if(is_prime(i)==1)
		{
			arr[count] = i;
			count++;
			
		}
		
	
	}
	int max = max1(a,b),min = min1(a,b);
	int sum = 0;
	for(i=min;i<=max;i++)
	{
		sum += arr[i-1];
	}
	printf("%d",sum);
	return 0;
}






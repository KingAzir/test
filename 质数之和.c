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


int is_prime(int n)   // �ж�n�Ƿ�������
{
	if (n < 2)
		{
			return 0; // С��2������������
		}
	int i=0;
	for (i = 2; i * i <= n; i++)   // ��2��sqrt(n)�������ж�n�Ƿ��ܱ�����
		{
			if (n % i == 0)
				{
					return 0; // �ܱ���������������
				}
		}
	return 1; // ����������
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






#include<stdio.h>

int miu(int n)
{
	if((n-1)%2==0)
	{
		return 1;
	}
	else
	return -1;
	
}

//double pi_1(int n)
//{
//	double pi;
//	if(n-1>0)
//	{
//		pi = miu(n-1)/(2*n-1);
//		pi += pi_1(n-1) ;
//	}
//	
//	return pi;
//}

double pi_1(long n)
{
	double pi = 0.0;
	int i;
	for (i = 1; i <= n; i++) {
		pi += miu(i) * 1.0 / (2 * i - 1); // ע�⣺1.0��ʾǿ��ת��Ϊ���������м���
	}
	return pi*4;
}

int main()
{
	int n;
	scanf("%d",&n);
//	double pi=pi_1(100000000);
	double pi=3.14159265358979323846;
	printf("%.*lf",n,pi);
	return 0;
}

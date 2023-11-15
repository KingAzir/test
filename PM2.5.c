#include <stdio.h>


int main() {
    int n,a,i,b1=0,b2=0,b3=0,b4=0,b5=0,b6=0;
    double sum=0,avg=0.0;
    scanf("%d",&n);
    int arr[n];
	for (i=0;i<n;i++)
	{
		
		scanf("%d",&a);
		if(a>0)
			arr[i]=a;
		if(a>=0&&a<=50)
			b1++;
		if(a>=51&&a<=100)
			b2++;
		if(a>=101&&a<=150)
			b3++;
		if(a>=151&&a<=200)
			b4++;
		if(a>=201&&a<=300)
			b5++;
		if(a>300)
			b6++;
		sum += a;
	}
	avg = sum/n;
	printf("%.2lf\n",avg);
    printf("%d %d %d %d %d %d",b1,b2,b3,b4,b5,b6);
    
    return 0;
}

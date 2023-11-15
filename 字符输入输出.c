#include <stdio.h>
int main(){
   int a,a1,a2,a3,a4,a5;
   scanf("%d",&a);
   a1=a/10000;
   a2=a/1000-10*a1;
   a5=a%10;
   a4=(a%100-a5)/10;
   a3=(a%1000-a4*10-a5)/100;
   printf("%d %d %d %d %d",a1,a2,a3,a4,a5);
   return 0;
}

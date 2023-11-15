#include <stdio.h>

int main() {
    int day, a, car;
    scanf("%d %d %d", &day, &a, &car);
    car = car % 10;
    if(day>0&&day<8&&a>=0&&a<=600){
		if (day <= 5 && day >= 1 && a >= 200 && a <= 600) {
        	if (a < 400) {
            if (car == day || car == (day + 5)%10)
                printf("%d yes\n", car);
            else
                printf("%d no\n", car);
        	}
        	if (a >= 400) {
            	if ((day % 2 == 1 && car % 2 == 1) || (day % 2 == 0 && car % 2 == 0))
                	printf("%d yes\n", car);
           		else
                	printf("%d no\n", car);
        	}
    	}
		else if ((day >= 5 && day <= 7) || a < 200) {
        	printf("%d no\n", car);
    	}
	 	else {
        	printf("error\n");
    	}
	}
	else
		printf("error");
    return 0;
}





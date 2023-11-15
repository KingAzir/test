#include <stdio.h>

double sqrtIter(double a, double x0, double precision) {
    double xn = x0;
    while (1) {
        double xn1 = 0.5 * (xn + a / xn);
        if (xn1 - xn < precision && xn - xn1 < precision) {
            return xn1;
        }
        xn = xn1;
    }
}

double sqrt(double a) {
    double x0 = a;
    double precision = 0.00000001;  // 精度保留小数点后8位
    return sqrtIter(a, x0, precision);
}

int main() {
    double a = 3.0;
    double result = sqrt(a);
    printf("The square root of %.8f is %.8f\n", a, result);
    return 0;
}


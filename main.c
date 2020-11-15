#include <stdio.h>
#include "myMath.h"
#include "power.c"
#include "basicMath.c"

int main(int argc, char const *argv[]) 
{
    double kelet;
    printf("please insert a real number \n");
    scanf("%lf",&kelet);
    double result1, result2, result3;
    result1 = sub( add(Exponent(kelet), Power (kelet,3) ),2.0);
    printf("The value of f(x)=e^x+x^3−2 at the point %.4f is: %.4f \n", kelet, result1);
    result2 = add(mul(kelet, 3), mul(Power(kelet,2), 2));
    printf("The value of f(x)=3x+2x^2 at the point %.4f is: %.4f \n", kelet, result2);
    result3 = (mul(Power(kelet,3), 4));
    result3 = sub(div(result3, 5), mul(kelet,2));
    printf("The value of f(x)=(4x^3)/5-2x at the point %.4f is: %.4f \n", kelet, result3);
    return 0;
}
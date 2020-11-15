#include <stdio.h>
#include "myMath.h"

int main(int argc, char const *argv[]) 
{
    double kelet;
    printf("please insert a real number" /n);
    scanf("%lf.4",&kelet);
    double result1, result2, result3;
    if (kelet = 0)
        result1 = -1;
    result1 = sub( add(Exponent(kelet), power (kelet,3) ),2);
    printf("first function %f.4 /n",result1 );
    result2 = add(mul(3,kelet), mul(2,power(kelet,2));
    printf("second function %f.4 /n",result2);
    result3 = (mul(4, power(kelet,3));
    result3 = sub(div(result3, 5), mul(kelet,2));
    printf("third function %f.4 /n",result3);
    return 0;
}
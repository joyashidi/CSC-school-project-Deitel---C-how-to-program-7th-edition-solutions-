#include <stdio.h>
#include <stdlib.h>
#include <math.h>



//5.11 Rounding numbers
int roundToInteger(double x){
    int integer = floor(x + .5);
    return integer;
}
double roundToTenths(double x){
    double tenths = floor(x * 10 + .5) / 10;
    return tenths;
}
double roundToHundredths(double x){
    double hundreths = floor(x * 100 + .5) / 100;
    return hundreths;
}
double roundToThousandths(double x){
    double thousandths = floor(x * 1000 + .5) / 1000;
    return thousandths;
}

int main()
{

    //5.11 rounding numbers
    double x, tenths, hundreths, thousandths;
    int integer;


    printf("Enter a number in decimals: ");
    scanf("%lf", &x);

    printf("Integer: %d\tTenths: %.1f\tHundredths: %.2f\tThousandths: %.3f\n", roundToInteger(x), roundToTenths(x), roundToHundredths(x), roundToThousandths(x));
  // printf("Integer: %d\n", roundToInteger(x));
   //printf("Tenths: %f\n", roundToTenths(x));
   //printf("Hundredths: %f\n",roundToHundredths(x));
  // printf("Thousandths: %f\n", roundToThousandths(x));

    return 0;
}

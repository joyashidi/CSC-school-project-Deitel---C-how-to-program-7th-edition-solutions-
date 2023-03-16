#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// 5.10 Rounding Numbers

int main()
{
   float a = fabs(10.85);//absolute value 10.85
    printf("%f\n", a);

    float b = floor(10.85);//round down to 10
    printf("%f\n", b);

    float c = fabs(-0.678);//absolute value 0.678
    printf("%f\n", c);

    float d = ceil(9.234);//round up to 10
    printf("%f\n", d);

    float e = fabs(0.0);// 0
    printf("%f\n", e);

    float f = ceil(-34.87);//round up to -34.00
    printf("%f\n", f);

    float g = ceil(-fabs(-12 - floor(-9.5)));
    printf("%f\n", g);

    //5.10 Rounding Numbers
   roundNumbers();

    return 0;
}


void roundNumbers(){
     double x, y, round;


    for(int i = 1; i<=3; i++){
      printf("Enter a value: ");
      scanf("%lf", &x);

      round = x + .5;
      y = ceil(x + .5);

    printf("Original value: %f\t Rounded value: %.1f\n", round, y);
    }


}

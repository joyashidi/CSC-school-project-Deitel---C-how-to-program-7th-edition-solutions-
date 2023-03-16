#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//5.16
double triangle(double a, double b, double c){

    double area;

     if((a != 0) && (b != 0) && (c != 0)){
        if((a + b > c) && (b + c > a) && (c + a > b)){
              double s = (a + b + c) / 2;
              area = sqrt(s * (s - a) * (s - b) * (s - c));
              return area;
        }
    }
}

int main()
{
    //5.16 Sides of a triangle

    double a, b, c, s, area;

    for(int i = 1; i <= 3; i++){

    printf("Enter 3 values: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    //Making use of Heron's formula

    if((a != 0) && (b != 0) && (c != 0)){
            // to check for non-zero numbers
        if((a + b > c) && (b + c > a) && (c + a > b)){
            // to check for numbers that represents sides of a triangle
            //Make use of 5, 9, 6 / 15, 14 , 2/ 10, 12, 8 as examples
                s = (a + b + c) / 2;
                area = sqrt(s * (s - a) * (s - b) * (s - c));

                printf("The area of the sides is: %.2f\n", triangle(a, b, c));
    }else{
        printf("Make use of VALID numbers\n");
    }
    }else{
        printf("Make use of NON-ZERO numbers\n");
    }
    }

    return 0;
}

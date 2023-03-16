#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//5.15
double hypotenuse(double opposite, double adjacent){
     double hypo = sqrt( pow(opposite,2) + pow(adjacent,2));
     // i named it hypo to avoid the clashing names with the function
    return hypo;
}
int main()
{

    //5.15 Hypotenuse Calculations

    double opposite, adjacent;

    printf("This program calculates the hypotenuse side of a right angled triangle\n\n");

    for(int i = 1; i <= 3; i++){
          printf("Enter the value for the opposite side: ");
          scanf("%lf", &opposite);
          printf("Enter the value for the adjacent side: ");
          scanf("%lf", &adjacent);

       printf("%.2f\n", hypotenuse(opposite, adjacent));
    }

    return 0;
}

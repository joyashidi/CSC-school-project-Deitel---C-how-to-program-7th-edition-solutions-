#include <stdio.h>
#include <stdlib.h>

int main()
{

     // Salary calculator 3.20

    float rate, salary;
     int hours;


     printf("Enter number of hours worked(-1 to end): ");
     scanf("%d", &hours);

     while(hours != -1){

        printf("Enter hourly rate of the worker: ");
        scanf("%f", &rate);

        if(hours <= 40){
          salary = (hours * rate);
          printf("Salary is $%.2f\n", salary);
        }

        else if(hours > 40){
          salary = (hours * rate) + ((hours-40)*rate)/2;
          printf("Salary is $%.2f\n", salary);
        }
        printf("Enter number of hours worked(-1 to end): ");
        scanf("%d", &hours);
     }
    return 0;
}

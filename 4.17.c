#include <stdio.h>
#include <stdlib.h>

int main()
{
     //4.17

    int accNo;
    double limit, balance, newLimit;

    for(int i = 1; i <= 3; i++){

    printf("\nCustomer's account number: ");
    scanf("%d", &accNo);
    printf("Customer's credit limit before recession: $");
    scanf("%lf", &limit);
    printf("Enter customer's current balance: $");
    scanf("%lf", &balance);

    newLimit = limit/2.0;
    printf("Customer with account number %d new credit limit is $%.2f\n",accNo, newLimit);

    if(balance > newLimit){
        printf("Customer %d has exceeded limit by $%.2f\n",accNo, balance-newLimit);
    }
    }
    return 0;
}

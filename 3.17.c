#include <stdio.h>
#include <stdlib.h>

int main()
{
     // 3.17 Mortgage Calculator

    int accountNumber;

    float mortgageAmount, interestRate, mortgageTerm, totalAmount, monthlyPayable;
    printf("Enter account number (-1 to end) : ");
    scanf("%d", &accountNumber);

    // keeps running until -1 is used to end the loop
    while (accountNumber != -1)
    {
        printf("Enter mortgage amount (in dollars): ");
        scanf("%f", &mortgageAmount);

        printf("Enter mortgage term (in years): ");
        scanf("%f", &mortgageTerm);

        printf("Enter interest rate (as a decimal): ");
        scanf("%f", &interestRate);
        totalAmount = mortgageAmount + (mortgageAmount * interestRate * mortgageTerm);
        monthlyPayable = (totalAmount / (12 * mortgageTerm));
        printf("The monthly payable interest $ %d \n", (int)monthlyPayable);

        printf("\nEnter account number (-1 to end) : ");
        scanf("%d", &accountNumber);
    }

    return 0;
}

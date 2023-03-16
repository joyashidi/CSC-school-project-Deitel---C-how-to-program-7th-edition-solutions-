#include <stdio.h>
#include <stdlib.h>

int main()
{
   //4.19 Calculating sales
    int productNumber, i, j, quantity;
    double totalPrice = 0.00;
    int totalQuantity = 0;
    double price = 0.00;

    for(i = 1; i <= 3; i++){
   //We assume this online retail store opens thrice weekly
      printf("3 - Day Online Store");
      printf("\nEntry for Day %i\n\n", i);

     for(j = 1; j <= 5; j++){

      printf("Enter the 'product number'(between 1-5) alongside the 'quantity purchased':");
      scanf("%i %d", &productNumber, &quantity);
      //printf("Enter the quantity purchased:");
      //scanf("%d", &quantity);

      switch(productNumber){
        case 1:
          price += quantity * 2.98;
          break;
        case 2:
          price += quantity * 4.50;
          break;
        case 3:
          price += quantity * 9.98;
          break;
        case 4:
          price += quantity * 4.49;
          break;
        case 5:
          price += quantity * 6.87;
          break;
        default:
          printf("Invalid product number: %d\n", productNumber);
          break;
    }
  }
 }
    totalPrice += price;
    printf("\nThe total retail value for all products sold for the week is: $%.2f\n", totalPrice);


    return 0;
}

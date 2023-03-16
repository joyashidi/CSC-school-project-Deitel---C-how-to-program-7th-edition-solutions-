#include <stdio.h>
#include <stdlib.h>

int main()
{

    //5.19 Rectangle of Asterisks

    int side1, side2;

    printf("This program gives a shape according to the numbers inputed(Rows, Columns)\n\n");
    printf("Enter the two numbers of sides desired: ");
    scanf("%d%d", &side1, &side2);

    ast(side1, side2);
    return 0;
}
//5.19 function

int ast(int side1, int side2){
    for(int i = 1; i<=side1; i++){
            //for the number of rows
            for(int j=1; j<=side2; j++){
                //for the number of columns
                printf("*");
            }
        printf("\n");
    }
}

#include <stdio.h>
#include <stdlib.h>

int main()
{

    //5.20 Displaying a Rectangle of Any Character

    int side1, side2;
    char shape;

    printf("Enter the two numbers of sides and shape desired: ");
    scanf("%d%d%c", &side1, &side2, &shape);

    recAst(side1, side2);

    return 0;
}

//5.20
int recAst(int side1, int side2){
    for(int i = 1; i <= side1; i++){
        for(int j = 1; j <= side2; j++){
            printf("@");
        }
        printf("\n");
    }
}

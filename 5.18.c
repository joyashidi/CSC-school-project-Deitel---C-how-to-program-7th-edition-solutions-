#include <stdio.h>
#include <stdlib.h>


//5.18
int isEven(int num){
    int result, res2;

     if(num % 2 == 0){
         result = 1;
         return result;
    }else{
        res2 = 0;
        return res2;
    }

}
int main()
{

     //5.18 Even or Odd

    int num, result, res2;

    printf("This program determines whether an integer is even or odd\n\n");
    printf("0 for ODD\t 1 for EVEN\n\n");

    for(int i=1; i<=5; i++){
        printf("Enter an integer: ");
        scanf("%d", &num);

    if(num % 2 == 0){
        //printf("%d is an even number\n", num);
        printf("Ans: %d\n", isEven(num));
    }else{
        //printf("%d is an odd number\n", num);
        printf("Ans: %d\n", isEven(num));
    }
    }
    return 0;
}

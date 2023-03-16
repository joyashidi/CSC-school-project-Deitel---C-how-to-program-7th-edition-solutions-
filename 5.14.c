#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    //5.14
    //a) 3,6,9,12,15,18,21,24,27,30

    srand(time(NULL));

    for(int i = 0; i < 10; i++){
    int randomNumber = ((rand() % 10) * 3) + 3;
    printf("%d\n", randomNumber);
    }
    //b) 3,5,7,9,11,13,15,17,19

     for(int i = 0; i < 10; i++){
       //int result = (((rand() % 10) + 2) * 2) -1;
       int result = ((rand() % 9) * 2) + 3;
       printf("%d\n", result);
     }

    //c) 3,8,13,18,23,28,33
    for(int i = 0; i < 10; i++){
    int third = ((rand() % 7) * 5)+ 3  ;
    printf("%d\n", third);
    }
    return 0;
}

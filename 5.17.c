#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//5.17
int rightTriangle(int a, int b, int c){
    if((a != 0) && (b != 0) && (c != 0)){
    if((pow(a,2) + pow(b,2) == (pow(c,2)))){
            int result = 1;
            return result;

    }else{
        int result2 = 0;
        return result2;
    }
  }
}


int main()
{

    //5.17 Sides of a right angle

    int a, b, c;

    printf("This program determines whether a set of 3 numbers are sides of a right angled triangle\n\n");
    printf("0 for FALSE\t 1 for TRUE\n\n");

    for(int i = 1; i<=4; i++){
        printf("Enter 3 values: ");
        scanf("%d%d%d", &a, &b, &c);

    if((a != 0) && (b != 0) && (c != 0)){

    if((pow(a,2) + pow(b,2) == (pow(c,2)))){
        //printf("This include sides of a right-angled triangle\n");
        printf("Ans: %d\n", rightTriangle(a, b, c));
    }else{
        //printf("This does not include sides of a right-angled triangle\n");
        printf("Ans: %d\n", rightTriangle(a, b, c));
    }
    }else{
        printf("Make use of NON ZERO numbers!\n");
    }
    }
    return 0;
}

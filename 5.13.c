#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int n;
    //a) 1<= n <= 6
    n = 1 + rand() % 6;
    //b) 100 <= n <= 1000
    n = 100 + rand() % 900;
    //c) 0 <= n <= 19
    n = rand() % 20;
    //d) 1000 <= n <= 2222
    n = 1000 + rand() % 1222;
    //e) -1 <= n <= 1
    n = -1 + rand() % 3;
    //f) -3 <= n <= 11
    n = -3 + rand() % 15;

    return 0;
}

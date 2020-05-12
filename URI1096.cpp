#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main() {
    int j = 7, i = 1;

    printf("I=%d J=%d\n", i, j);

    while (i < 9) {
            j-=1;
            printf("I=%d J=%d\n", i, j);
            if(j == 5){
                i +=2;
                j = 7;
                printf("I=%d J=%d\n", i, j);
            }
    }
    printf("I=%d J=%d\n", i, (j-1));
    printf("I=%d J=%d\n", i, (j-2));


    return 0;
}

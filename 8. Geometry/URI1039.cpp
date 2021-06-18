#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <cstring>

using namespace std;

int main() {
    int R1=0, X1=0, Y1=0, R2=0, X2=0,Y2=0;

    while(scanf("%d %d %d %d %d %d", &R1, &X1, &Y1, &R2,&X2 ,&Y2) != EOF){

        double dist = sqrt((pow((X1 - X2), 2)) +
                           (pow((Y1 - Y2), 2)));

        if(R1 >=dist+R2){
            printf("RICO\n");
        } else{
            printf("MORTO\n");
        }

    }

    return 0;
}

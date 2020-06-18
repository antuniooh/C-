#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    int L=0, C=0,R1=0,R2=0;
    double dist=0;

    while (cin >> L >> C >> R1 >> R2) {

        //calcular a distancia entre os dois centros
        dist = sqrt((pow((R1 -(L-R2)),2)) + (pow((R1 -(C-R2)),2)));

        if (L == 0 && C == 0 && R1 == 0 && R2 == 0)
        {
            break;
        }
        else
        {
            if(L >= R1*2 && L >=R2*2 && C >=R1*2 && C >= R2*2)
            {
                if (dist >= (R1+R2))
                {
                    printf("S\n");
                }
                else
                {
                    printf("N\n");
                }
            }
            else
            {
                printf("N\n");
            }
        }
    }
    return 0;
}

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int i,j,a=7;

    for(i=1; i<= 9; i+=2)
    {
        for(int b=1, j=a; b<=3; j--,b++) {
            printf("I=%d J=%d\n", i, j);
        }
        a=a+2;
    }
    return 0;
}

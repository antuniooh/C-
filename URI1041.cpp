#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double x, y;

    cin >> x >> y;

    if (x > 0.00 && y > 0.00){
        printf("Q1\n");
    } else if ( x > 0.00 && y < 0.00){
        printf("Q4\n");
    } else if ( x < 0.00 && y > 0.00) {
        printf("Q2\n");
    } else if ( x < 0.00 && y < 0.00){
            printf("Q3\n");
    } else if (x == 0.00 && y ==0.00){
        printf("Origem\n");
    } else if (x == 0.00 && y > 0.00) {
        printf("Eixo Y\n");
    } else if (x == 0.00 && y < 0.00) {
        printf("Eixo Y\n");
    }else if (x > 0.00 && y == 0.00) {
        printf("Eixo X\n");
    } else if (x < 0.00 && y == 0.00) {
        printf("Eixo X\n");
    }

    return 0;
}

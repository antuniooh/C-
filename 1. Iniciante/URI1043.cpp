#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main() {
    double A, B, C, perimetro, area;

    cin >> A >> B >> C;

    // não é triguanulo
    if ((A>=B+C || B>=C+A || C>=A+B)) {
        area = (((A + B) * C) / 2);
        printf("Area = %.1f\n", area);
    } else{
        perimetro = ((A) + (B) + (C));
        printf("Perimetro = %.1f\n", perimetro);
    }
    return 0;
}

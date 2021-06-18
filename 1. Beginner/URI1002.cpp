#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double R = 0, n =  3.14159, area;

    scanf("%lf", &R);
    area =  n*(R*R);

    printf("A=%.4lf\n", area);

    return 0;
}

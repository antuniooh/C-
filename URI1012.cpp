#include <iostream>
#include <cstdio>
#include <math.h>


using namespace std;

int main() {
    double R, pi = 3.14159 , VOLUME;

    cin >> R;

    VOLUME = (4.0/3)*(pi* pow(R,3));

    printf("VOLUME = %.3lf\n", VOLUME);

    return 0;
}

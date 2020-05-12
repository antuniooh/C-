#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main() {
    double A, B, C, delta , R1, R2;

    cin >> A >> B >> C;

    delta = ((B*B) - 4*(A)*(C));
    
    if (A == 0.00 || delta < 0.00){
        printf("Impossivel calcular\n");
    }
    else {
        if (delta > 0) {
            R1 = (-B + (sqrt(delta))) / (2 * A);
            R2 = (-B - (sqrt(delta))) / (2 * A);

            printf("R1 = %.5f\n", R1);
            printf("R2 = %.5f\n", R2);
        }
    }

    return 0;
}

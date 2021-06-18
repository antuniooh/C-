#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    double A[100];

    //entrada e criação do vetor
    for (int i = 0; i < 100; i++) {
        cin >> A[i];
    }

    //saida
    for (int i = 0; i < 100; i++) {
        if(A[i] <= 10.0) {
            printf("A[%d] = %.1f\n", i, A[i]);
        }
    }

    return 0;
}

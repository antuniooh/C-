#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int N[20], x=0, A[20];

    //entrada e criação do vetor
    for (int i = 0; i < 20; i++) {
        cin >> x;
        N[i] = x;
    }
    //criar o novo vetor
    for (int j = 19, i=0; j >= 0, i < 20; j--, i++) {
        A[i] = N[j];
    }

    //printando a respotsa
    for (int k = 0; k < 20; k++) {
        printf("N[%d] = %d\n", k, A[k]);

    }

    return 0;
}

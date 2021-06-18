#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    long long int T=0, x=0,vetor[61];

    //atribui os dois primeiros valores
    vetor[0] = 0;
    vetor[1] = 1;

    //entrada do tamanho de casos
    cin >> T;

    //looping
    for (int j = 0; j < T; j++) {
        cin >> x;

        for (int i = 2; i <= 60; i++)
        {
            vetor[i] = ((vetor[i-1]) + (vetor[i-2]));
        }
        //saida
        printf("Fib(%lld) = %lld\n", x, vetor[x]);
    }


    return 0;
}

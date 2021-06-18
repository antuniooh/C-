#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int N=0, menor=10000000, position=0;

    //entrada do tamanho do vetor
    cin >> N;
    int X[N];

    //looping para adicionar os valores
    for (int j = 0; j < N; j++) {
        cin >> X[j];
        //confere cada vez q adiciona se ele é o menor e armazena sua posição
        if (X[j] <= menor) {
            menor = X[j];
            position = j;
        }
    }

    //saida
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", position);

    return 0;
}

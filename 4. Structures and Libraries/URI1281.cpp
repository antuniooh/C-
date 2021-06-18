#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

int main() {
    int N = 0,n=0,a=0,qtd;
    string nome, frutas;
    double valor=0, total=0;

        cin >> N;
        for (int i = 0; i < N; i++) {
            //quantidade de produtos q há
            cin >> n;
            //cria duas matrizes

            string fruta[n];
            double valores[n];

            //pergunta o nome e o valor e adiciona no vetor
            for (int l = 0; l < n; l++) {
                cin >> nome >> valor;

                fruta[l] = nome;
                valores[l] = valor;
            }

           //pergunta a quantidade do q comprou
            cin >> a;
            for (int l = 0; l < a; l++) {
                cin >> frutas >> qtd;

                for (int j = 0; j < n; j++) {
                    if (frutas == fruta[j]) {
                        total += (valores[j]) * qtd;
                    }
                }
            }
            printf("R$ %.2f\n", total);
            total =0.0;
    }
    return 0;
}

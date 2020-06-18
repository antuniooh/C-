#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    double M[12][12],a =0.0, soma= 0.0;
    int x;
    char s;
    
    //pergunta a coluna
    cin >> x;

    //pergunta se é soma ou média
    cin >> s;

    //cria a matriz
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> a;
            M[i][j] = a;
        }
    }

    //gera a soma
    for (int i = 0; i < 12; i++) {
        soma += M[i][x];
    }

    //caso seja soma
    if(s == 'S'){
        printf("%.1f\n", soma);
    }
    else if(s == 'M') {
        printf("%.1f\n", (soma / 12.0));
    }
    return 0;
}

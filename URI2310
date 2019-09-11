#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int num = 0, M[2][3], Tps=0, Tpb=0, Tpa=0, Aps=0, Apb=0, Apa=0;
    double PS = 0.0, PB = 0.0, PA = 0.0;

    //pergunta a qtd de jogadores
    cin >> num;

    for (int k = 0; k < num; k++) {
        string nome;
        cin >> nome;

        //cria a matriz
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                int x;
                cin >> x;
                M[i][j] = x;
            }
        }

        Tps += M[0][0];
        Tpb += M[0][1];
        Tpa += M[0][2];
  
        Aps += M[1][0];
        Apb += M[1][1];
        Apa += M[1][2];
        
        
        /*//printa a matriz
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%.d ", M[i][j]);
            }
            printf("\n");
        }*/

        //zera a matriz
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                M[i][j] = 0;
            }
        }

    }
        
    PS = (Aps * 100.0)/Tps;
    PB = (Apb * 100.0)/Tpb;
    PA = (Apa * 100.0)/Tpa;


        //saída do resultado

        printf("Pontos de Saque: %.2f", PS);
        cout << " %." << endl;
        printf("Pontos de Bloqueio: %.2f", PB);
        cout << " %." << endl;
        printf("Pontos de Ataque: %.2f", PA);
        cout << " %." << endl;

        return 0;
}

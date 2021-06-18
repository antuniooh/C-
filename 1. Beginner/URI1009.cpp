#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    string nome;
    double salario , vendas , TOTAL;

    /*scanf("%s", &nome);
    scanf("%f", &salario);
    scanf("%f", &vendas);*/
     
    cin >> nome;
    cin >> salario;
    cin >> vendas;

    TOTAL = salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2f\n", TOTAL);


    return 0;
}

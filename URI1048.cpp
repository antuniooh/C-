#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double salario=0.0, novosal=0.0, reajuste=0.0;
    int porcentagem =0;

    cin >> salario;

    // entre 0 - 400.00
    if (salario >= 0.00 && salario <= 400.00){
        reajuste = salario * 0.15;
        porcentagem = 15;

        //entre 400.01 - 800.00
    } else if (salario > 400.00 && salario <= 800.00){
        reajuste = salario * 0.12;
        porcentagem = 12;

        //entre 800.01 - 1200.00
    } else if (salario > 800.00 && salario <= 1200.00){
        reajuste = salario * 0.10;
        porcentagem = 10;

        //entre 1200.01 - 2000.00
    } else if (salario > 1200.00 && salario <= 2000.00){
        reajuste = salario * 0.07;
        porcentagem = 7;

        //acima 2000.00
    } else {
        reajuste = salario * 0.04;
        porcentagem = 4;

    }
    novosal = (salario + reajuste)*1.00;

    printf("Novo salario: %.2f\n", novosal);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d", porcentagem);
    cout << " %" << endl;


    return 0;
}

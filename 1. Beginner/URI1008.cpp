#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int num = 0, horas = 0;
    double valor = 0.0, SALARIO;

    scanf("%d", &num);
    scanf("%d", &horas);
    scanf("%lf", &valor);

    SALARIO = horas * valor;

    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", SALARIO);


    return 0;
}

#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main() {
    int tempo, velocidade;
    double litros;
    //faz doze km/l

    cin >> tempo;
    cin >> velocidade;

    litros = (velocidade * tempo) / 12.0;

    printf("%.3lf\n", litros);

    return 0;
}

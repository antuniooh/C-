#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main() {
    int distancia, tempo;

    cin >> distancia;

    tempo = distancia *  60/(90-60);

    printf("%d minutos\n", tempo);

    return 0;
}

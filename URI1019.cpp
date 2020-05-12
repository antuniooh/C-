#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main() {
    int segundos, horas, minutos;

    cin >> segundos;

    horas = segundos/3600;
    minutos = (segundos%3600)/60;
    segundos = (segundos%60);

    printf("%d:%d:%d\n", horas,minutos,segundos);

    return 0;
}

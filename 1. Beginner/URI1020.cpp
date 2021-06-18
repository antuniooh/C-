#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main() {
    int dias,anos ,meses;

    cin >> dias;

    anos = dias/365;
    meses = (dias%365)/30;
    dias = (dias%365)%30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}

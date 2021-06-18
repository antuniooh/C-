#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int X;
    double Y, consumo;

    cin >> X;
    cin >> Y;

    consumo = X / Y;

    printf("%.3f km/l\n", consumo);

    return 0;
}

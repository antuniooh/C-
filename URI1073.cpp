#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int N=0, quadrado;

    cin >> N;

    for(int x = 2; x <= N; x++){
        if (x%2 == 0) {
            quadrado = x * x;
            printf("%d^2 = %d\n", x, quadrado);
        }
    }

    return 0;
}

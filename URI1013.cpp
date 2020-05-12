#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int A, B, C, MAIORAB, MAIOR;

    cin >> A, cin >> B, cin >> C;

    MAIORAB = (A + B + abs(A-B))/2;
    MAIOR = (MAIORAB + C + abs(MAIORAB - C))/2;

    printf("%d eh o maior\n", MAIOR);

    return 0;
}

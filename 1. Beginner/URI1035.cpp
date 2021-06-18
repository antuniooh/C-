#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main() {
    int A, B ,C, D;

    cin >> A, cin >> B, cin >> C, cin >> D;

    if (B > C && D > A && C + D > A +B && C > 0 && D >0 && A % 2 ==0){
        printf("Valores aceitos\n");
    } else{
        printf("Valores nao aceitos\n");
    }
    return 0;
}

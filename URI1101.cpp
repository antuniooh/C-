#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a=0, b=0, soma=0, maior=0, menor=0;

    while (cin >> a >> b) {


        if (a == 0 || b == 0 || a < 0 || b < 0) {
            break;
        }
        else if (a > b) {
            maior = a;
            menor = b;

        } else if (a < b) {
            maior = b;
            menor = a;
        } else {
            printf("%d ", a);
            printf("Sum=%d\n", a);
            soma = 0;
        }
        for (int x = menor; x <= maior; x++) {
            printf("%d ", x);
            soma += x;
        }
        printf("Sum=%d\n", soma);
        soma = 0;

    }

    return 0;
}

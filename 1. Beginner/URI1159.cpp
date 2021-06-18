#include <stdio.h>
int main() {
    int x, soma = 0;

    while (1) {
        scanf("%d", &x);
        soma = 0;
        if (x == 0)
            break;
        else if (x % 2 == 0) {
            for (int a = x; a <= x + 8; a += 2) {
                soma += a;
            }
        } else {
            for (int a = x + 1; a <= x + 9; a += 2) {
                soma += a;
            }
        }
        printf("%d\n", soma);
    }
    return 0;
}

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int x=0, y=0, soma=0;

    cin >> x;
    cin >> y;

    if(x > y) {
        for (int a = x - 1; a > y; a--) {
            if (a % 2 != 0) {
                soma += a;
            }
        }
    } else if (x < y){
        for (int a = x + 1; a < y; a++) {
            if (a % 2 != 0) {
                soma += a;
            }
        }
    } else{
        soma = 0;
    }

        printf("%d\n", soma);

    return 0;
}

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a=0,n=0,soma=0;

    cin >>a >>n;

    while(n <= 0) {
        cin >> n;
    }

            for (int i = 0; i <= (n - 1); i++) {
                soma += (a + i);
            }

            printf("%d\n", soma);
            soma = 0;


    return 0;
}

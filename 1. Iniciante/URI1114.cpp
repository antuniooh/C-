#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int senha;

    do{
        cin >> senha;
        if(senha != 2002) {
            printf("Senha Invalida\n");
        }
    } while(senha != 2002);
        printf("Acesso Permitido\n");

    return 0;
}

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int x = 0, z=0, soma=0, i=1;

    cin >> x;

    while (1) {
        cin >> z ;
        if(z > x){

            //soma de valores
            for(int a = x, soma = a; soma < z; a++){
                soma += a;
                i++;
            }
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}

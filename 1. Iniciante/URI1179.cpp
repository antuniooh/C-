#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int par[5], impar[5], x=0, i=0, p=0;

    //entrada
    for (int a = 0; a < 15; a++) {
        cin >> x;
        //caso o valor digitado seja par
        if (x % 2 == 0) {
            par[p] = x;
            p++;
        }
        // caso seja impar
        else {
            impar[i] = x;
            i++;
        }

        // conferir o tamanhuo do vetor
        if (p == 5) {
            for (int j = 0; j < 5; j++) {
                printf("par[%d] = %d\n", j, par[j]);
                p = 0;
            }
        }
        if (i == 5) {
            for (int j = 0; j < 5; j++)
            {
                printf("impar[%d] = %d\n", j, impar[j]);
                i = 0;
            }
        }
    }
    for (int j = 0; j < i; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    for (int j = 0; j < p; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}

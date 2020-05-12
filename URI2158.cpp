#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    long long int FP=0, FH=0, A=0, L=0,i=1;

    while ((scanf("%lld %lld", &FP, &FH) != EOF)){
        //calcular a quantidade de ligações
        L=(FH*6+FP*5)/2;

        //calcular a qtd de atomos, a partir da formula de euler
        A =L+2 -(FP+FH);

        //saída
        printf("Molecula #%lld.:.\n",i);
        printf("Possui %lld atomos e %lld ligacoes\n\n",A,L);
        i++;

    }
    return 0;
}

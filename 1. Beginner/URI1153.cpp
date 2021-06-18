#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <cstring>

using namespace std;

int main() {
    int N=0, soma=1;

    scanf("%d" ,&N);

    for (int i = 0; i < (N-1); ++i) {
        soma *= (N-i);
    }
    printf("%d\n",soma);

    return 0;
}

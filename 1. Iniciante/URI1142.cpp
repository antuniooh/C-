#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main() {
    int N = 0, x = 1;

    cin >> N;

    for(int a = 0; a < N; a++){
        printf("%d %d %d PUM\n", x, (x+1) ,(x+2));
        x+=4;
    }

    return 0;
}

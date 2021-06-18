#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main() {
    int N;

    cin >> N;

    for (int x = 0; x < 10000; x++){
        if(x % N == 2){
            printf("%d\n", x);
        }
    }

    return 0;
}

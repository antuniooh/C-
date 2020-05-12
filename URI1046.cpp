#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int HI =0, HF=0, total = 0;

    cin >> HI >> HF;

    if (HI > HF) {
        for(int x = HI + 1; x <= 24; x++) {
            total += 1;
            if (x == 24){
                for (int x = 1; x <= HF; x++) {
                    total += 1;
                }
            }
        }
    } else if( HI < HF){
        total = HF - HI;
    } else {
        total = 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", total);

    return 0;
}

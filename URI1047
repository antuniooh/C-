#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int HI = 0, HF = 0, MI = 0, MF = 0, totalH = 0, totalM = 0;

    cin >> HI >> MI >> HF >> MF;

    totalH = HF - HI;

    if (totalH < 0) {
        totalH = 24 + (HF - HI);
    }

    totalM = MF - MI;
    if (totalM < 0) {
        totalM = 60 + (MF - MI);
        totalH--;
    }

    if (HI == HF && MI == MF) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalH, totalM);
    }
    return 0;
}

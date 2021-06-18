#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int DI = 0, HI = 0, MI =0, SI=0,DF =0, HF = 0, MF = 0,SF=0, totalD=0,totalH = 0, totalM = 0, totalS;

    scanf("Dia %d",&DI);
    scanf("%d : %d : %d\n",&HI,&MI,&SI);
    scanf("Dia %d",&DF);
    scanf("%d : %d : %d",&HF,&MF,&SF);


    //dias
    totalD = DF - DI;

    //horas
    totalH = HF - HI;
    if (totalH < 0) {
        totalH = 24 + (HF - HI);
        totalD --;
    }

    //minutos
    totalM = MF - MI;
    if (totalM < 0) {
        totalM = 60 + (MF - MI);
        totalH--;
    }

    //segundos
    totalS = SF - SI;
    if (totalS < 0) {
        totalS = 60 + (SF - SI);
        totalM--;
    }

    printf("%d dia(s)\n", totalD);
    printf("%d hora(s)\n", totalH);
    printf("%d minuto(s)\n", totalM);
    printf("%d segundo(s)\n", totalS);

    return 0;
}

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int i=0 ;
    double matriz[12][12], x =0.0, total=0.0;
    char option;

    //soma ou média
    cin >> option;

    //cria a matriz
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> x;
            matriz[i][j] = x;
        }
    }
    //caso seja soma
    if(option == 'S'){
        for (int i = 1; i < 12; i++) {
            for (int j = i-1; j >=0 ; j--) {
                        total += matriz[i][j];
                    }
            }
            printf("%.1f\n", total);
            
    //caso a opção seja media
    } else if(option == 'M'){
       for (int i = 1; i < 12; i++) {
            for (int j = i-1; j >=0 ; j--) {
                        total += matriz[i][j];
                    }
            }
            total /=(66.0);
            printf("%.1f\n",total);
    } else{
        cout << "Valor invalido\n";
    }
        return 0;
}

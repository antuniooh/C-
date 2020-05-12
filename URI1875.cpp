#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int a=0, b=0, GMGreen=0, GMBlue=0, GMRed=0;
    string MG, GS;

    //primeiro caso de teste
    cin >> a;

    for (int i = 0; i < a; i++) {
        cin >> b;
        for (int i = 0; i < b; i++) {
            //entrada dos valores dos timesx que sofreram gol
            cin >> MG >> GS;

            //contabiliza gols marcados
            if (MG == "G" and GS == "R") { GMGreen += 1; }
            if (MG == "G" and GS == "B") { GMGreen += 2; }
            else if (MG == "R" and GS == "G") { GMRed += 2; }
            else if (MG == "R" and GS == "B") { GMRed += 1; }
            else if (MG == "B" and GS == "R") { GMBlue += 2; }
            else if (MG == "B" and GS == "G") { GMBlue += 1; }
        }

            //comparação de gols para trempate
            if (GMBlue == GMRed && GMRed == GMGreen) { cout << "trempate" << endl; }
                //comparação de gols para vitoria
            else if (GMBlue > GMGreen && GMBlue > GMRed) { cout << "blue" << endl; }
            else if (GMGreen > GMBlue && GMGreen > GMRed) { cout << "green" << endl; }
            else if (GMRed > GMGreen && GMRed > GMBlue) { cout << "red" << endl;}
            //comparação para empate
            else if (GMBlue == GMRed || GMRed == GMGreen || GMGreen == GMBlue) { cout << "empate" << endl; }



            GMBlue = 0, GMRed = 0, GMGreen = 0;
    }
    return 0;
}

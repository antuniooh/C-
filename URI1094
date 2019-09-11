#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int N =0, C=0, R=0, S=0, num=0;
    double pC =0.00, pR =0.00, pS =0.00;
    string txt;

    cin >> N;
    for(int x =0; x < N;x++) {
        cin >> num >> txt;

        //contabilizar
        if (txt == "C") {
            C += num;
        } else if (txt == "R") {
            R += num;
        } else if (txt == "S") {
            S += num;
        }
    }

    //percentual
    pC= (C*100.00)/(C + R + S);
    pR= (R*100.00)/(C + R + S);
    pS= (S*100.00)/(C + R + S);

        //retorno
        printf("Total: %d cobaias\n", (C + R + S));
        printf("Total de coelhos: %d\n", C);
        printf("Total de ratos: %d\n", R);
        printf("Total de sapos: %d\n", S);
        printf("Percentual de coelhos: %.2f", pC);
        cout << " %" << endl;
        printf("Percentual de ratos: %.2f", pR);
        cout << " %" << endl;
        printf("Percentual de sapos: %.2f", pS);
        cout << " %" << endl;

    return 0;
}

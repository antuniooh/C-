#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int main() {

    int N=0, X=0, Y=0 ;//número de jogadores, probabilidade de vencer

    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> X >> Y;

        double C=0, R=0, B=0;

        //calculo das funbções
        C = -100*X + pow(Y,3);
        B = 2*(pow(X,2)) + pow((5*Y),2);
        R = pow((3*X),2) + pow(Y,2);

        if(C > R && C > B)
            cout << "Carlos ganhou" <<endl;
        else if(R > C && R > B)
            cout << "Rafael ganhou" <<endl;
        else
            cout << "Beto ganhou" <<endl;

    }



    return 0;

}

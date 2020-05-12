#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int main() {

    signed int N=0, A=0, B=0, C=0;

    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> A >> B >> C;

        //vertice = delta/-4.a
        double delta = (B*B) +(-4*A*C);
       // cout << delta<<" "<< -delta  << endl;
        double resultado = - (delta)/(4*A);

       printf("%.2f\n", resultado);
    }

    return 0;

}

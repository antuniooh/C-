#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

int main() {
    double X1=0,Y1=0, X2=0, Y2=0, N=0, distancia=0;
    vector<pair<double,double>> pares;
    vector<double> habitantes;
    int oeste = 0, leste=0, lesteH=0, oesteH=0, casualidade=0;
    double x = 0, y = 0, n = 0;

    cin >>X1 >> Y1 >> X2 >> Y2;
    cin >> N;

    distancia = sqrt((pow((X1- X2), 2)) + (pow((Y1 - Y2), 2)));

    for (int i = 0; i < N; i++) {
        cin >> x >> y >> n;
        pares.emplace_back(x, y);
        habitantes.emplace_back(n);

        int a = (((X1*Y2)+(Y1*x)+(X2*y))-((Y2*x)+(y*X1)+(Y1*X2)));

        if(a==0)
        {
          casualidade++;
        }
        else if(a < 0)
        {
          leste++;
          lesteH+=n;
        }
        else if(a > 0)
        {
          oeste++;
          oesteH+=n;
        }
    }

        printf("Relatorio Vogon #35987-2\n");
        printf("Distancia entre referencias: %.2f anos-luz\n", distancia);
        printf("Setor Oeste:\n");
        printf("- %d planeta(s)\n",oeste);
        printf("- %d bilhao(oes) de habitante(s)\n",oesteH);

        printf("Setor Leste:\n");
        printf("- %d planeta(s)\n",leste);
        printf("- %d bilhao(oes) de habitante(s)\n",lesteH);

        printf("Casualidades: %d planeta(s)\n", casualidade);

    return 0;
}

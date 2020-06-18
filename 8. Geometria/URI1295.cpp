#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int N = 0;
    double dist=0.00, menor=40000, x=0.0, y=0.0;
    vector<pair<double, double>> pares;

    while(cin >> N && N !=0) {
        if (N == 1)
        {
            cin >> x >> y;
            printf("INFINITY\n");
        }
        else {
            for (int i = 0; i < N; i++) {
                //ja adiciona nos veotres
                cin >> x >> y;
                pares.emplace_back(x, y);
            }

            for (int i = 0; i < (N - 1); i++) {
                for (int j = (N - 1); j > i; j--) {

                    //calcular as distancias
                    dist = sqrt((pow((pares[i].first - pares[j].first), 2)) +
                                (pow((pares[i].second - pares[j].second), 2)));

                    if (dist < menor)
                        menor = dist;

                }
            }
            if (menor > 10000)
                printf("INFINITY\n");
            else
                printf("%.4lf\n", menor);

            //zera o vetor
            pares.clear();
            dist = 0.0;
            menor = 40000;
        }
    }
    return 0;
}

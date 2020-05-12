#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int N = 0, B=0, position=0;
    double dist=0.00, xB=0, yB=0, x=0, y=0;
    double menor=pow(1420,2) + pow(2840,2);
    vector<pair<double, double>> pares;


    while(cin >> N) {

        for (int i = 0; i < N; i++)
        {
            cin >> B;
            cin >> xB >> yB;

            for (int i = 0; i < B; i++)
            {
                //ja adiciona nos veotres
                cin >> x >> y;
                pares.emplace_back(x,y);
            }

           /* for (int j = 0; j < B; ++j) {
                cout <<"Valores: "<<  pares[j].first << " " << pares[j].second <<endl;

            }*/

            //cria um for para armazenar as distancias num vetor
            for (int i = (B-1); i >= 0; i--)
            {
                    //calcular as distancias
                    dist = sqrt((pow((pares[i].first - xB), 2)) + (pow((pares[i].second - yB), 2)));
                    //cout <<"postion: "<< i << " "<< dist << endl;
                   // cout << menor << endl;

                    if(dist <= menor)
                    {
                        position = i;
                        menor = dist;

                        //cout <<"postion: "<< i << " " <<"valor; "<< menor << endl;
                    }
            }

           printf("%.d\n", (position + 1));
            //zera o vetor
            pares.clear();
            position=0;
            dist = 0.0;
            menor=pow(1420,2) + pow(2840,2);
        }
    }
    return 0;
}

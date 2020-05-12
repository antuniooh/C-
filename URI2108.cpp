#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <cstring>

using namespace std;

int main() {
    string a, maior;
    int cont =0, contmaior=0;
    vector<int> resultado;

    //scanf("%s", &a);
    //cin>>a;
    while(getline(cin, a) && a[0] != '0') {
        for (int i = 0; i <= a.size(); i++, cont++) {
            if (a[i] == ' ' || i == a.size()) {

                if (cont >= contmaior)
                {
                    maior = "";
                    contmaior = cont;
                    maior = a.substr(i-cont, cont);
                }

                resultado.push_back(cont);
                cont = -1;
            }
        }

        if (resultado.size() >= 2) {
            for (int j = 0; j <= resultado.size() - 2; ++j) {
                printf("%d-", resultado[j]);
            }
            printf("%d\n", resultado[resultado.size() - 1]);
            resultado.clear();
            a.clear();
        } else {
            printf("%d\n", resultado[0]);
            resultado.clear();
            a.clear();
        }
    }
        cout << endl;
        cout << "The biggest word: " << maior << endl;

    return 0;
}

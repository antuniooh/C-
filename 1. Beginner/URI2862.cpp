#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int main() {

    int N=0;
    long long int C=0;

    cin >> N;

    for (int i = 0; i < N; ++i) {

        cin >> C;

        if(C <= 8000)
            cout << "Inseto!" << endl;
        else
            cout << "Mais de 8000!" << endl;

    }

    return 0;

}

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int main() {

    int N=0, x=0;
    string nome;

    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> nome >> x;

        if(nome == "Thor")
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;

}

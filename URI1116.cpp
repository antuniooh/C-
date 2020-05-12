#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int N = 0,a=0, b=0;

    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> a>> b;

        double x  =(double)a;
        double y  =(double)b;

        if(b == 0){
            printf("divisao impossivel\n");
        } else {
            double total = (x * 1.0 / y * 1.0);
            printf("%.1f\n", total);
        }
    }
    return 0;
}

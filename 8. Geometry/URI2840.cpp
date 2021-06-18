#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int R = 0,L=0;

    cin >> R >> L;

    double V = (4/3.0) * (3.1415 * pow(R, 3));
    int total = (L/V);
    cout << total <<endl;
    return 0;
}

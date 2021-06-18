#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main() {
    int N;
    double p1, p2, p3, media;

    cin >> N;

    for (int x = 0; x < N; x++){

        cin >> p1 >> p2 >> p3;
        media = (((p1 * 2) + (p2 * 3) + (p3 * 5)))/(10.0);
        printf("%.1f\n",media);
    }

    return 0;
}

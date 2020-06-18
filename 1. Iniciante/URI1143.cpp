#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int N = 0;

    cin >> N;

    for (int i = 1; i <= N; ++i) {
        int q = i*i;
        int c = i*i*i;
        printf("%d %d %d\n", i, q,c);

    }
    return 0;
}

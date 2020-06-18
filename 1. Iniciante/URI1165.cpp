#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int main() {

    int N=0, x=0, t=0;

    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> x;

        for (int i = 2; i <= sqrt(x); i++) {
            if(i != x && (x%i) == 0)
            {
                t = 1;
                break;
            }
        }

        if(t > 0){
            printf("%d nao eh primo\n", x);
        } else{
            printf("%d eh primo\n", x);
        }
        t =0;
    }

    return 0;

}

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    unsigned long long int N=0, x=0, t=0;

    cin >> N;

    for (int j = 0; j < N; ++j) {
        cin >> x;

        for (int i = 2; i <= sqrt(x); i++) {
            if(i != x && (x%i) == 0)
            {
                t = 1;
                break;
            }
        }

        if(t > 0){
            printf("Not Prime\n");
        } else{
            printf("Prime\n");
        }
        t =0;
    }

    return 0;
}

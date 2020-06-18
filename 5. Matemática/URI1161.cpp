#include <iostream>

using namespace std;

int main() {
    long long int M=0, N=0, T1=1, T2=1;

    while(scanf("%lld %lld", &N, &M) != EOF) {

        for (int i = 0; i < N; ++i) {
            T1*=(N-i);
        }
        for (int i = 0; i < M; ++i) {
            T2*=(M-i);
        }

        cout << T1 + T2 << endl;

        T1 = 1; T2 = 1;
    }

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

long long int fatorial(long long N){
    long long int T=1;
    for (int j = 0; j < N; ++j) {
        T*=(N-j);
    }
    return T;
}

int main() {
    long long int S=0, count=0;

    cin >> S;
    for (int i = 1; S > 0; ++i) {
        long long int T = fatorial(i);
        if (T > S) {
            long long int T1 = fatorial(i-1);
            S -= T1;
            count++;
            i = 1;
        }
    }
    cout << count << endl;




    return 0;
}

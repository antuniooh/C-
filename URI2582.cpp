#include <iostream>

using namespace std;

int main() {
    int N=0, X=0, Y=0;

    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> X >> Y;

        if(X+Y == 0)
            cout << "PROXYCITY" <<endl;
        else if(X+Y == 1)
            cout << "P.Y.N.G." <<endl;
        else if(X+Y == 2)
            cout << "DNSUEY!" <<endl;
        else if(X+Y == 3)
            cout << "SERVERS" <<endl;
        else if(X+Y == 4)
            cout << "HOST!" <<endl;
        else if(X+Y == 5)
            cout << "CRIPTONIZE" <<endl;
        else if(X+Y == 6)
            cout << "OFFLINE DAY" <<endl;
        else if(X+Y == 7)
            cout << "SALT" <<endl;
        else if(X+Y == 8)
            cout << "ANSWER!" <<endl;
        else if(X+Y == 9)
            cout << "RAR?" <<endl;
        else if(X+Y == 10)
            cout << "WIFI ANTENNAS" <<endl;
    }
    return 0;
}

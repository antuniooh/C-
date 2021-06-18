#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N=0 ,M=0,num=0;

    cin >> N;
    cin >> num;

    int a = num;
    M = num;

    for (int i = 1; i < N; ++i) {
        cin >> num;
        if(M < num) M = num;
    }
    if(a >= M)cout << "S" << endl;
    else cout <<"N" << endl;

    return 0;
}

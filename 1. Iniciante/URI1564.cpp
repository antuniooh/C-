#include <iostream>

using namespace std;

int main() {
    int N=0;

    while(scanf("%d", &N) != EOF) {

        if (N == 0)
            cout << "vai ter copa!" << endl;
        else if (N > 0)
            cout << "vai ter duas!" << endl;
    }

        return 0;
}

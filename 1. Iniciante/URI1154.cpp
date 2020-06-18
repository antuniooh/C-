#include <iostream>

using namespace std;

int main() {
    int N=0,t=0, i=0;

    while(scanf("%d", &N))
    {
        if(N < 0){
            break;
        } else {
            t += N;
            i++;
        }
    }

    double div = t*1.0/i*1.0;

    printf("%.2f\n",div);

    return 0;
}

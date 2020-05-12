#include <iostream>

using namespace std;

int main() {
    int N=0, X=0, Y=0;

    cin >> N >> X >> Y;

    double ICM;
    ICM = (N*1.0)/((X+Y)*1.0);

    printf("%.2f\n",ICM);
    return 0;
}

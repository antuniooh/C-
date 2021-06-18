#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main() {
    int num = 0;
    cin >> num;
    if (num % 2 == 0) {
        printf("%d\n", num += 1);
        for (int x = 0; x <= 4; x++) {
            printf("%d\n", num += 2);
        }
    } else {
        for (int x = 0; x <= 5; x++) {
            printf("%d\n", num += 2);

        }
    }
}

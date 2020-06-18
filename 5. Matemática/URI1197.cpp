#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <cstring>

using namespace std;

int main() {
    int V=0, T=0;

    while(scanf("%d %d ", &V ,&T) != EOF){
        printf("%d\n",((V*T)*2));

    }

    return 0;
}

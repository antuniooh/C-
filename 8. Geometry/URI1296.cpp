#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

int main() {
    double M1=0,M2=0, M3=0;

    while(cin >> M1 >> M2 >> M3)
    {
        double MM=(M1 + M2 +M3)/2.0;
        double area = 4.0/3.0*sqrt(MM*((MM-M1)*(MM-M2)*(MM-M3)));


        if(area > 0){
            printf("%.3f\n",area);
            MM= 0;
            area=0;
            continue;

        }
        if(!isdigit(area))
        {
            printf("-1.000\n");
            MM= 0;
            area=0;
            continue;
        }
    }
    return 0;
}

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double i=0, j =1;

    for(i=0; i <= 2; i+= 0.2)
    {
        for(double b=1; b<=3; b++, j++) {
            cout << "I=" << i << " " << "J=" << j << "\n";
        }
        j+= 0.2;
        j-=3;
    }

    /*float i = 0, j = 1;
    while(i <= 2.1){
        cout << "I=" << i << " " << "J=" << (j+i) << "\n";
        cout << "I=" << i << " " << "J=" << (j+1+i) << "\n";
        cout << "I=" << i << " " << "J=" << (j+2+i) << "\n";
        i+= 0.2;
    }*/

    return 0;
}

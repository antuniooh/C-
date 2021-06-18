#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int positivo=0;
    double  num=0;

    for(int x =0; x < 6; x++) {
        cin >> num;

       if (num > 0){
          positivo +=1;
       } else {
           positivo +=0;
       }


    }
    printf("%d valores positivos\n", positivo);

    return 0;
}

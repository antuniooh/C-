#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int par=0, num=0;

    for(int x =0; x < 5; x++) {
        cin >> num;

       if (num % 2 == 0){
          par +=1;
       } else {
           par +=0;
       }
    }
    printf("%d valores pares\n", par);

    return 0;
}

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int positivo=0;
    double media =0.0 , num=0;

    for(int x =0; x < 6; x++) {
        cin >> num;

       if (num > 0){
          positivo +=1;
          media += num;
       } else {
           positivo +=0;
       }


    }
    printf("%d valores positivos\n", positivo);
    printf("%.1f\n", media/positivo);


    return 0;
}

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int par=0, impar=0, negativo=0, positivo=0, num=0;

    for(int x =0; x < 5; x++) {
        cin >> num;

       if (num > 0){
           positivo +=1;
           if(num % 2 == 0){
               par +=1;
           } else{
               impar +=1;
           }
       } else if (num < 0){
           negativo +=1;
           if(num % 2 == 0){
               par +=1;
           } else{
               impar +=1;
           }
       } else{
           if(num % 2 == 0){
               par +=1;
           } else{
               impar +=1;
           }
       }
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);


    return 0;
}

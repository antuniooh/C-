#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main() {
    double a =0.0, b=0.0, c=0.0, A=0.0, B=0.0, C=0.0, temp=0.0;

    cin >> A >> B >> C;

    a = A;
    b = B;
    c = C;

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c){
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    //tipos de triangulos
    if (c >= (b+a) ){
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if ((c*c) == (b*b) + (a*a)){
            printf("TRIANGULO RETANGULO\n");
        }
        else if ((c*c) > (b*b) + (a*a)){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if ((c*c) < (b*b) + (a*a)){
            printf("TRIANGULO ACUTANGULO\n");
        }
    }

    // em relação aos lados
    if((a == b && b == c) ||(a == c && c == b )){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if ((a == b) || (b == c) || (c == a)){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}

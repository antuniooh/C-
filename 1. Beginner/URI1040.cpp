#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double n1, n2, n3,n4, media, exame, nova;

    cin >> n1 >> n2 >> n3 >> n4;

    media = (((n1 * 2) + (n2 *3) + (n3 *4) + (n4 * 1))/10);

    if (media >= 7.0){
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    } else if (media < 5.0){
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
    } else if(media >= 5.0 && media < 7.0){
        cin >> exame;
        nova = ((exame + media)/2);

        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", exame);

        if(nova >= 5.0){
            printf("Aluno aprovado.\n");
        } else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", nova);

    }
    return 0;
}

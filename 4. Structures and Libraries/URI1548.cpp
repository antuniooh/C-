#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int N = 0, alunos = 0, total = 0;

    //numero de casos a seguir
    cin >> N;

    for (int i = 0; i < N; i++) {
        //numero de alunos da classe
        cin >> alunos;
        int vetora[alunos], vetorb[alunos];

        for (int j = 0; j < alunos; j++) {
            int x;
            total = 0;
            cin >> x;

            //dois vetores diferentes
            vetora[j] = x;
            vetorb[j] = vetora[j];
        }

            // ordem em sort
            sort(vetora, vetora+alunos,greater <int>());

            for (int k = 0; k < alunos; k++) {
                if(vetora[k]==vetorb[k]){
                    total++;
                }
            }
        cout <<  total << endl;
    }



        return 0;
}

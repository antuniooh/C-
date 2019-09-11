#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    long long int N=0, vetor[61];

    //atribui os dois primeiros valores
    vetor[0] = 0;
    vetor[1] = 1;

    //cria o vetor base
    for (int i = 2; i <= 60; i++)
    {
        vetor[i] = ((vetor[i-1]) + (vetor[i-2]));
    }
        
    //entrada do N
    cin >> N;
   
    //saida
    for(int a = 0; a < N-1; a++)
	{
    	cout << vetor[a] << " ";
	}
	cout << vetor[N-1];
	cout << endl;
    return 0;
}

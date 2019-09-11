#include <iostream>
#include <algorithm>
 
using namespace std;

int main()
{
	int NA, CM, CL;
	
 	//numero de atributos
	while(cin>>NA){
		
		//numero de cartas
		cin >> CM >> CL;
		
 		//cria duas matrizes
 		int L[CL][NA];
 		int M[CM][NA];
 		int CardL=0, CardM=0, A=0;
 		
 		//gera o marcos
		for (int i = 0; i < CM; i++)
		{
			for(int j =0; j < NA; j++)
			{
				cin>>M[i][j];
			}
		}
		
		//gera o leonardo
		for (int i = 0; i < CL; i++)
		{
			for(int j =0; j < NA; j++)
			{
				cin>>L[i][j];
			}
		}
		
		//qual a carta de cada um?
		cin >> CardM >> CardL;
		//qual o atributo comparado?
		cin >> A;
			
		if(M[CardM-1][A-1] > L[CardL-1][A-1]){
			cout << "Marcos" << endl;
		} else if(M[CardM-1][A-1] < L[CardL-1][A-1]){
			cout << "Leonardo" <<endl;
		} else{
			cout << "Empate" << endl;
		}
	}
	
	return 0;
}

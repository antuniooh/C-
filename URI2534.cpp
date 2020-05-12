#include <iostream>
#include <algorithm>
 
using namespace std;

int main()
{
	int n,q,p;
	
 	//numero de habitantes do país de e de consultas
	while(cin>>n>>q){
		
 		//nota do cidadão
		int vet[n];
 
		for (int i = 0; i < n; i++)
		{
			//gera o vetor
			cin>>vet[i];
		}
		
		//colocar em ordem crescente
		sort(vet, vet+n, greater<int>());
		
		for(int i=0; i < q ;i++)
		{
			cin>>p;
			cout<<vet[p-1]<<endl;
		}
 
	}
	
	return 0;
}

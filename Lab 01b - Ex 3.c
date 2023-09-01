// Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9). Este número deve ser sempre ímpar.

#include <iostream>
using namespace std;

int main(){
	int n, i, j, l, k;
  cout << "Insira o número máximo da pirâmide invertida: (Apenas ímpares)" << endl;
	do{
	cin >> n;
	} while(n%2==0);
    l=0;
  cout << endl;
  
	for(i=1;i<=n;i++){
    for(k=0;k<l;k++){cout << " ";}
		cout << i << " ";
		for(j=i+1;j<=n;j++)
			cout << j << " ";
			n-=1;
			cout << endl;
      l+=2;
    }

    return 0;
}

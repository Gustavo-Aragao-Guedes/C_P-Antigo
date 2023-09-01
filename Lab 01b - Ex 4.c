// Crie um progama capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética. Faça isto com string de C e de C++

#include <iostream>
#include <string.h>
using namespace std;

int main () {
  char nome1[100], nome2[100];
  cout << "Primeiro nome: ";
  cin >> nome1;
  cout << "Segundo nome: ";
  cin >> nome2;
  
  if(strcmp(nome1, nome2) < 0)
    cout << endl << "A ordem alfabética dos nomes é:" << endl << nome1 << endl << nome2;
    else
      cout << endl << "A ordem alfabética dos nomes é:" << endl << nome2 << endl << nome1;
  return 0; 
}

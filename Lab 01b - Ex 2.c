//  Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){

  float n1, n2, n3, media, ma;

  cout << "Primeira nota: ";
  cin >> n1;

  cout << "Segunda nota: ";
  cin >> n2;

  cout << "Terceira nota: ";
  cin >> n3;

  media = (n1 + n2 + n3) / 3;  
  cout << "Média: " << media << endl;

  ma = (n1+(n2*2)+(n3*3) + media)/7;

  cout << "Aproveitamento: ";

  if(ma >= 9)
      cout << "A";
  else if(ma >= 7.5)
      cout << "B";
  else if(ma >= 6)
      cout << "C";
  else if(ma >=4)
      cout << "D";
  else
      cout << "E";

      return 0;
}

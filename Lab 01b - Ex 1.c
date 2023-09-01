// Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. Ao final da leitura o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos

#include <iostream>
#include <cstdlib>
#include <time.h>
#define L 5
#define C 5
using namespace std;

int main(){
  int Matriz[L][C], i, j, menorN, menorL;
  srand(time(NULL));
  cout << "Matriz quadrada: " << endl;
  for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            Matriz[i][j] = rand()%100;
            cout << " | " <<  Matriz[i][j];
        }
      cout << endl;
  }
  
  for (i=0; i< L; i++){
    for (j=0; j< C; j++){
      if (Matriz[i][j] < menorN) {
        menorN = Matriz[i][j];
        menorL = i+1;
    }
  }
}

cout << endl << "A linha que contem o menor valor é: " << menorL;
  
}

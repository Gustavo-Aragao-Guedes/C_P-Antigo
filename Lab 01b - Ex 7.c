// Faça um programa que crie um vetor de pessoas. Os dados de uma pessoa devem ser armazenados em um variavel do tipo struct. O programa deve permitir que o usuário digite o nome de 3 pessoas e a seguir imprimi os dados de todas as pessoas. A struct deve armazenar os dados de idade, peso e altura.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

typedef struct 
{
    int idade;
    float peso, altura;
} TPESSOA;


void ImprimeDados(TPESSOA P)
{
    cout << "--------------------------" << endl;
    cout << "UMA PESSOA" << endl;
    cout << "Idade: " << P.idade << endl;
    cout << "Peso: " << P.peso << endl;
    cout << "Altura: " << P.altura << endl;
}

void EntraDados(TPESSOA &P)
{
    cout << "Digite a Idade: ";
    cin >> P.idade;
    cout << "Digite o Peso: "; 
    cin >> P.peso;
    cout << "Digite a Altura: ";
    cin >> P.altura;
}

int main()
{
    TPESSOA Povo[3];
    cout << "Entrada de Dados" << endl;
    for (int i=0; i<3; i++)
        EntraDados(Povo[i]);
    cout << endl << "Impressao dos Dados" << endl;
    for (int i=0; i<3; i++)
        ImprimeDados(Povo[i]);
        
    return 0;
}

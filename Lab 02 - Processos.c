#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <chrono> // A biblioteca chrono será usada para calcular o tempo

using namespace std;
using namespace std::chrono;

// Função para calcular o fatorial
unsigned long long calcularFatorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n;
    cout << "Digite um número inteiro para calcular o fatorial: ";
    cin >> n;

    if (n < 0) {
        cout << "Número negativo não é permitido." << endl;
        return 1;
    }

    // Medir o tempo de execução
    auto start = high_resolution_clock::now();

    pid_t pid = fork();

    if (pid == 0) { // Processo filho
        unsigned long long resultado = calcularFatorial(n);
        cout << "Fatorial de " << n << " é " << resultado << endl;
    } else if (pid > 0) { // Processo pai
        wait(NULL); 
    } else {
        cerr << "Falha ao criar o processo filho." << endl;
        return 1;
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Tempo de execução: " << duration.count() << " microssegundos" << endl;

    return 0;
}

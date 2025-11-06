#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    // Criação da fila
    queue<string> fila;

    // Inserção de 6 personagens
    fila.push("Superman");
    fila.push("Batman");
    fila.push("Mulher-Maravilha");
    fila.push("Flash");
    fila.push("Aquaman");
    fila.push("Cyborg");

    cout << "=== Verificacao Inicial ===" << endl;
    cout << "Primeiro item da fila: " << fila.front() << endl;
    cout << "Ultimo item da fila: " << fila.back() << endl;
    cout << "Tamanho total da fila: " << fila.size() << endl;

    // Processamento FIFO: remover 2 itens
    cout << "\nRemovendo dois itens (FIFO)..." << endl;
    fila.pop();
    fila.pop();

    cout << "\n=== Verificacao Final ===" << endl;
    cout << "Novo primeiro item da fila: " << fila.front() << endl;
    cout << "Novo ultimo item da fila: " << fila.back() << endl;
    cout << "Novo tamanho da fila: " << fila.size() << endl;

    // Verificação se a fila está vazia
    cout << "\nA fila esta vazia? " << (fila.empty() ? "Sim" : "Nao") << endl;

    return 0;
}

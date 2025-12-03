#include <iostream>
#include <stack>
#include <string>

using namespace std;

struct Carga {
    int id_caixa;
    float peso_kg;
    string destino;
};

int main() {
    
    stack<Carga> pilha;
    Carga c1 = {501, 12.5, "São Paulo"};
    Carga c2 = {502, 9.8, "Minas Gerais"};
    Carga c3 = {503, 7.3, "Rio de Janeiro"};
    
    pilha.push(c1);
    pilha.push(c2);
    pilha.push(c3);

    cout << "Caixa no topo: ID " 
         << pilha.top().id_caixa 
         << " -> Destino: " 
         << pilha.top().destino << endl;

    for (int i = 0; i < 2; i++) {
        cout << "Caixa " << pilha.top().id_caixa 
             << " removida para processamento." << endl;
        pilha.pop();
    }

    cout << "\nNova caixa no topo: ID " 
         << pilha.top().id_caixa
         << " -> Destino: " 
         << pilha.top().destino << endl;

    cout << "Tamanho final da pilha: " << pilha.size() << endl;

    return 0;
}

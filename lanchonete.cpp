#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Pedido{
    int id;
    string descricao;
    double valor;
};


void mostrarPedido(const Pedido& p){
    cout << "id: " << p.id 
    << "|Descrição: " << p.descricao
    << "|Valor: " << p.valor << endl;
}

int main(){
    queue<Pedido> filaPedidos;
    
    filaPedidos.push({100063, "Sanduiche de Frango", 22.50});
    filaPedidos.push({100064, "Batata frita G", 12.00});
    filaPedidos.push({100065, "Combo familia", 45.90});
    
    cout << "📌 Proximo pedido a ser preparado:\n";
    mostrarPedido(filaPedidos.front());

    cout << "\n✅ Pedido " << filaPedidos.front().id << " entregue!\n";
    filaPedidos.pop();
    
    cout << "\n📌 Novo proximo pedido:\n";
    mostrarPedido(filaPedidos.front());    

    return 0;
}

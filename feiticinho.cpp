#include <iostream>
#include <string>
using namespace std;

struct Feitico {
    string nome;
    int dificuldade;
    int dano_base;
    float custo_mana_final;
};

int main() {
    Feitico f1;
    f1.nome = "Relâmpago em Cadeia";
    f1.dificuldade = 4;
    f1.dano_base = 75;

    float multiplicador;

    if (f1.dificuldade == 1 || f1.dificuldade == 2) {
        multiplicador = 1.0;
    } else if (f1.dificuldade == 3 || f1.dificuldade == 4) {
        multiplicador = 1.5;
    } else if (f1.dificuldade == 5) {
        multiplicador = 2.0;
    } else {
        multiplicador = 1.0;
        cout << "Dificuldade inválida! Usando multiplicador padrão 1.0.\n";
    }

    f1.custo_mana_final = f1.dano_base * multiplicador;

    cout << "MAGUINHO POTENTE" << endl;
    cout << "Nome: " << f1.nome << endl;
    cout << "Dificuldade: " << f1.dificuldade << endl;
    cout << "Dano Base: " << f1.dano_base << endl;
    cout << "Custo de Mana Final: " << f1.custo_mana_final << endl;

    return 0;
}


#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

    stack<string> foguetes;
    
    foguetes.push("Foguete Alpha");
    foguetes.push("Foguete Beta");
    foguetes.push("Foguete Gama");
    foguetes.push("Foguete Delta");

    cout << "Sequência de Lançamento:" << endl;

    cout << foguetes.top() << endl;
    foguetes.pop();

    cout << foguetes.top() << endl;
    foguetes.pop();

    cout << foguetes.top() << endl;
    foguetes.pop();

    cout << foguetes.top() << endl;
    foguetes.pop();

    return 0;
}

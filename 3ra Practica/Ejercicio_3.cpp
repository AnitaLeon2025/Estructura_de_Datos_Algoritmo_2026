#include <iostream>
#include <stack>
using namespace std;

int main() {
    string palabra, invertida = "";
    stack<char> pila;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    for(char c : palabra)
        pila.push(c);

    while(!pila.empty()) {
        invertida += pila.top();
        pila.pop();
    }

    if(palabra == invertida)
        cout << "Es palindromo";
    else
        cout << "No es palindromo";

    return 0;
}

#include <iostream>
#include <stack>
using namespace std;

int main() {
    string palabra;
    stack<char> pila;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    for(char c : palabra)
        pila.push(c);

    cout << "Invertida: ";

    while(!pila.empty()) {
        cout << pila.top();
        pila.pop();
    }

    return 0;
}

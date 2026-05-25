#include <iostream>
#include <stack>
using namespace std;

class Evaluador {
    public:
    int evaluar(string exp) {
        stack<int> pila;

        for(char c : exp){
            if(isdigit(c)){
                pila.push(c - '0');
            } else {
                int b = pila.top(); pila.pop();
                int a = pila.top(); pila.pop();

                if(c == '+') pila.push(a + b);
                else if(c == '-') pila.push(a - b);
                else if(c == '*') pila.push(a * b);
                else if(c == '/') pila.push(a / b);
            }
        }

        return pila.top();
    }
};

int main() {
    Evaluador e;
    string exp;

    cout << "Expresion postfija: ";
    cin >> exp;

    cout << "Resultado: " << e.evaluar(exp);

    return 0;
}
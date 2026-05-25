#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Cola {
    private:
    queue<int> cola;

    public:
    void ingresar() {
        int n, x;
        cout << "Cantidad: ";
        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> x;
            cola.push(x);
        }
    }

    void invertir() {
        stack<int> pila;

        while(!cola.empty()){
            pila.push(cola.front());
            cola.pop();
        }

        while(!pila.empty()){
            cola.push(pila.top());
            pila.pop();
        }

        cout << "Cola invertida: ";
        while(!cola.empty()){
            cout << cola.front() << " ";
            cola.pop();
        }
    }
};

int main() {
    Cola c;
    c.ingresar();
    c.invertir();
    return 0;
}
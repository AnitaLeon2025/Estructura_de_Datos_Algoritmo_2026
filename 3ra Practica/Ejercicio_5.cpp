#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> personas;
    string nombre;

    for(int i=1; i<=10; i++) {
        cout << "Nombre " << i << ": ";
        cin >> nombre;
        personas.push(nombre);
    }

    cout << "\nOrden FIFO:\n";

    while(!personas.empty()) {
        cout << personas.front() << endl;
        personas.pop();
    }

    return 0;
}

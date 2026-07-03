#include <iostream>
#include <queue>
using namespace std;

class Ticket {
public:
    int codigo;
    string cliente;
    int prioridad;

    Ticket(int c, string cl, int p) {
        codigo = c;
        cliente = cl;
        prioridad = p;
    }
};

// Comparador
struct CompararPrioridad {
    bool operator()(const Ticket& a, const Ticket& b) {
        return a.prioridad < b.prioridad;
    }
};

int main() {

    priority_queue<Ticket,
                   vector<Ticket>,
                   CompararPrioridad> tickets;

    tickets.push(Ticket(003, "Miguel", 3));
    tickets.push(Ticket(004, "Ana", 4));
    tickets.push(Ticket(002, "Jhon", 2));
    tickets.push(Ticket(001, "Alice", 5));

    cout << "Orden de atencion:\n\n";

    while (!tickets.empty()) {

        cout << "Codigo: " << tickets.top().codigo
             << " | Cliente: " << tickets.top().cliente
             << " | Prioridad: " << tickets.top().prioridad
             << endl;

        tickets.pop();
    }

    return 0;
}
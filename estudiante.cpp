#include <iostream>
using namespace std;

class Estudiante {
    private:
    int id;
    string nombre;
    string escuela;
    float promedio;

    public:
    void ingresar() {
        cout << "ID: ";
        cin >> id;

        cout << "Nombre: ";
        cin >> nombre;

        cout << "Escuela: ";
        cin >> escuela;

        cout << "Promedio: ";
        cin >> promedio;
    }

    void mostrar() {
        cout << "\nDatos del estudiante:\n";
        cout << "ID: " << id << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Escuela: " << escuela << endl;
        cout << "Promedio: " << promedio << endl;
    }
};

int main() {
    Estudiante e;
    e.ingresar();
    e.mostrar();
    return 0;
}
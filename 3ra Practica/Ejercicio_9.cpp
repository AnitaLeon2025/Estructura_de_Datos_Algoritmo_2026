#include <iostream>
#include <list>

using namespace std;

class Estudiante {
public:
    string codigo;
    string nombre;
    int edad;
    string carrera;
};

int main() {

    list<Estudiante> estudiantes;
    int opcion;

    do {
        cout << "\n=== MENU ESTUDIANTES ===";
        cout << "\n1. Registrar estudiante";
        cout << "\n2. Mostrar estudiantes";
        cout << "\n3. Buscar por codigo";
        cout << "\n4. Salir";
        cout << "\nOpcion: ";
        cin >> opcion;

        switch(opcion) {

        case 1: {
            Estudiante e;

            cout << "Codigo: ";
            cin >> e.codigo;

            cout << "Nombre: ";
            cin >> e.nombre;

            cout << "Edad: ";
            cin >> e.edad;

            cout << "Carrera: ";
            cin >> e.carrera;

            estudiantes.push_back(e);

            cout << "Estudiante registrado.\n";
            break;
        }

        case 2:

            if(estudiantes.empty()) {
                cout << "No hay estudiantes registrados.\n";
            }
            else {

                cout << "\nLISTA DE ESTUDIANTES\n";

                for(auto e : estudiantes) {
                    cout << "\nCodigo : " << e.codigo;
                    cout << "\nNombre : " << e.nombre;
                    cout << "\nEdad   : " << e.edad;
                    cout << "\nCarrera: " << e.carrera;
                    cout << "\n--------------------";
                }
            }
            break;

        case 3: {

            string codigoBuscado;
            bool encontrado = false;

            cout << "Ingrese codigo: ";
            cin >> codigoBuscado;

            for(auto e : estudiantes) {

                if(e.codigo == codigoBuscado) {

                    cout << "\nEstudiante encontrado:\n";
                    cout << "Nombre : " << e.nombre << endl;
                    cout << "Edad   : " << e.edad << endl;
                    cout << "Carrera: " << e.carrera << endl;

                    encontrado = true;
                    break;
                }
            }

            if(!encontrado) {
                cout << "Estudiante no encontrado.\n";
            }
            break;
        }
        }

    } while(opcion != 4);

    return 0;
}

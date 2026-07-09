#include <iostream>
#include <list>

using namespace std;

class Contacto {
public:
    string nombre;
    string telefono;
    string correo;
};

int main() {

    list<Contacto> contactos;
    int opcion;

    do {

        cout << "\n=== MENU CONTACTOS ===";
        cout << "\n1. Agregar contacto";
        cout << "\n2. Buscar contacto";
        cout << "\n3. Eliminar contacto";
        cout << "\n4. Mostrar contactos";
        cout << "\n5. Salir";
        cout << "\nOpcion: ";
        cin >> opcion;

        if(cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Opcion invalida.\n";
            continue;
        }

        cin.ignore();

        switch(opcion) {

        case 1: {
            Contacto c;

            cout << "Nombre: ";
            getline(cin, c.nombre);

            cout << "Telefono: ";
            getline(cin, c.telefono);

            cout << "Correo: ";
            getline(cin, c.correo);

            contactos.push_back(c);

            cout << "Contacto agregado correctamente.\n";
            break;
        }

        case 2: {
            string nombreBuscar;
            bool encontrado = false;

            cout << "Nombre a buscar: ";
            getline(cin, nombreBuscar);

            for(auto c : contactos) {

                if(c.nombre == nombreBuscar) {

                    cout << "\nContacto encontrado:\n";
                    cout << "Nombre: " << c.nombre << endl;
                    cout << "Telefono: " << c.telefono << endl;
                    cout << "Correo: " << c.correo << endl;

                    encontrado = true;
                    break;
                }
            }

            if(!encontrado)
                cout << "Contacto no encontrado.\n";

            break;
        }

        case 3: {
            string nombreEliminar;
            bool eliminado = false;

            cout << "Nombre a eliminar: ";
            getline(cin, nombreEliminar);

            for(auto it = contactos.begin(); it != contactos.end();) {

                if(it->nombre == nombreEliminar) {
                    it = contactos.erase(it);
                    eliminado = true;
                }
                else {
                    ++it;
                }
            }

            if(eliminado)
                cout << "Contacto eliminado.\n";
            else
                cout << "Contacto no encontrado.\n";

            break;
        }

        case 4:

            if(contactos.empty()) {
                cout << "No hay contactos registrados.\n";
            }
            else {

                cout << "\n=== LISTA DE CONTACTOS ===\n";

                for(auto c : contactos) {

                    cout << "\nNombre: " << c.nombre;
                    cout << "\nTelefono: " << c.telefono;
                    cout << "\nCorreo: " << c.correo;
                    cout << "\n------------------------";
                }
            }
            break;

        case 5:
            cout << "Saliendo...\n";
            break;

        default:
            cout << "Opcion no valida.\n";
        }

    } while(opcion != 5);

    return 0;
}

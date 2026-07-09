#include <iostream>
#include <string>

using namespace std;

struct Libro {
    string codigo;
    string titulo;
    string autor;
    int stock;
};

struct Usuario {
    string codigo;
    string nombre;
};

string reservas[100];
int totalReservas = 0;

Libro libros[100];
Usuario usuarios[100];

int totalLibros = 0;
int totalUsuarios = 0;

void registrarLibro() {
    cout << "\n=== REGISTRAR LIBRO ===\n";

    cout << "Codigo: ";
    cin >> libros[totalLibros].codigo;

    cin.ignore();

    cout << "Titulo: ";
    getline(cin, libros[totalLibros].titulo);

    cout << "Autor: ";
    getline(cin, libros[totalLibros].autor);

    cout << "Stock: ";
    cin >> libros[totalLibros].stock;

    totalLibros++;

    cout << "\nLibro registrado correctamente.\n";
}

void mostrarLibros() {

    if(totalLibros == 0){
        cout << "\nNo existen libros registrados.\n";
        return;
    }

    cout << "\n=== LISTA DE LIBROS ===\n";

    for(int i = 0; i < totalLibros; i++) {

        cout << "\nCodigo: " << libros[i].codigo;
        cout << "\nTitulo: " << libros[i].titulo;
        cout << "\nAutor: " << libros[i].autor;
        cout << "\nStock: " << libros[i].stock;
        cout << "\n------------------------";
    }
}

void buscarLibro() {

    string codigo;
    bool encontrado = false;

    cout << "\nIngrese codigo: ";
    cin >> codigo;

    for(int i = 0; i < totalLibros; i++) {

        if(libros[i].codigo == codigo) {

            cout << "\nLibro encontrado";
            cout << "\nTitulo: " << libros[i].titulo;
            cout << "\nAutor: " << libros[i].autor;
            cout << "\nStock: " << libros[i].stock;

            encontrado = true;
            break;
        }
    }

    if(!encontrado)
        cout << "\nLibro no encontrado.\n";
}

void ordenarLibros() {

    for(int i = 0; i < totalLibros - 1; i++) {

        for(int j = 0; j < totalLibros - i - 1; j++) {

            if(libros[j].titulo > libros[j+1].titulo) {

                Libro aux = libros[j];
                libros[j] = libros[j+1];
                libros[j+1] = aux;
            }
        }
    }

    cout << "\nLibros ordenados correctamente.\n";
}

void registrarUsuario() {

    cout << "\n=== REGISTRAR USUARIO ===\n";

    cout << "Codigo: ";
    cin >> usuarios[totalUsuarios].codigo;

    cin.ignore();

    cout << "Nombre: ";
    getline(cin, usuarios[totalUsuarios].nombre);

    totalUsuarios++;

    cout << "\nUsuario registrado correctamente.\n";
}

void prestarLibro() {

    string codigo;

    cout << "\nCodigo del libro: ";
    cin >> codigo;

    for(int i = 0; i < totalLibros; i++) {

        if(libros[i].codigo == codigo) {

            if(libros[i].stock > 0) {

                libros[i].stock--;

                cout << "\nPrestamo realizado correctamente.\n";
            }
            else {

                cout << "\nNo hay stock disponible.\n";
            }

            return;
        }
    }

    cout << "\nLibro no encontrado.\n";
}

void devolverLibro() {

    string codigo;

    cout << "\nCodigo del libro: ";
    cin >> codigo;

    for(int i = 0; i < totalLibros; i++) {

        if(libros[i].codigo == codigo) {

            libros[i].stock++;

            cout << "\nDevolucion registrada.\n";
            return;
        }
    }

    cout << "\nLibro no encontrado.\n";
}

void reservarLibro() {

    string nombre;

    cin.ignore();

    cout << "\nNombre del usuario: ";
    getline(cin,nombre);

    reservas[totalReservas] = nombre;

    totalReservas++;

    cout << "\nReserva registrada.\n";
}

void mostrarReservas() {

    cout << "\n=== RESERVAS ===\n";

    if(totalReservas == 0) {

        cout << "No existen reservas.\n";
        return;
    }

    for(int i = 0; i < totalReservas; i++) {

        cout << i + 1 << ". "
             << reservas[i] << endl;
    }
}

int main() {

    int opcion;

    do {

        cout << "\n\n===== SISTEMA DE BIBLIOTECA =====";
        cout << "\n1. Registrar Libro";
        cout << "\n2. Mostrar Libros";
        cout << "\n3. Buscar Libro";
        cout << "\n4. Ordenar Libros";
        cout << "\n5. Registrar Usuario";
        cout << "\n6. Prestar Libro";
        cout << "\n7. Devolver Libro";
        cout << "\n8. Reservar Libro";
        cout << "\n9. Mostrar Reservas";
        cout << "\n10. Salir";

        cout << "\n\nSeleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {

            case 1:
                registrarLibro();
                break;

            case 2:
                mostrarLibros();
                break;

            case 3:
                buscarLibro();
                break;

            case 4:
                ordenarLibros();
                break;

            case 5:
                registrarUsuario();
                break;

            case 6:
                prestarLibro();
                break;

            case 7:
                devolverLibro();
                break;

            case 8:
                reservarLibro();
                break;

            case 9:
                mostrarReservas();
                break;

            case 10:
                cout << "\nPrograma finalizado.\n";
                break;

            default:
                cout << "\nOpcion incorrecta.\n";
        }

    } while(opcion != 10);

    return 0;
}
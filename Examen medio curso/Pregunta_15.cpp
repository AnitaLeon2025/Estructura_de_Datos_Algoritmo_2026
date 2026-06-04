#include <iostream>
using namespace std;

int main(){

    // Estas son las variables principales
    string nombre;
    int opcion;
    int horas = 0;
    double salario = 0;

    // Estos son los Descuentos
    double salud = 0;   // 120
    double afp = 0;     // 150

    // Estos son los Beneficios
    double transporte = 0; // 500
    double alimentos = 0;  // 1000

    double pagoHora = 120; // pago por hora fijo

    // Con esto se ingresa el nombre
    cout << "Ingrese nombre del empleado: ";
    cin >> nombre;

    // ESte es el Menú principal
    do{
        cout << "\n--- MENU ---\n";
        cout << "1. Ingresar horas\n";
        cout << "2. Mostrar salario\n";
        cout << "3. Ingresar descuentos\n";
        cout << "4. Ingresar beneficios\n";
        cout << "5. Imprimir boleta\n";
        cout << "6. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

      switch(opcion){

        // 1. Ingresar horas trabajadas
        case 1:
            cout << "Ingrese horas trabajadas: ";
            cin >> horas;

            // Con esto se calcula el salario base
            salario = horas * pagoHora;
            break;

        // 2. Mostrar salario
        case 2:
            salario = horas * pagoHora;
            cout << "Salario actual: $" << salario << endl;
            break;

        // 3. Ingresar descuentos
        case 3: {
            cout << "Ingreso de descuentos:\n";

            cout << "Aplicar descuento salud (120)? (1=si,0=no): ";
            int op1;
            cin >> op1;
            if(op1 == 1) salud = 120;

            cout << "Aplicar descuento AFP (150)? (1=si,0=no): ";
            int op2;
            cin >> op2;
            if(op2 == 1) afp = 150;

            break;
        }    
        // 4. Ingresar beneficios
        case 4: {
            cout << "Ingreso de beneficios:\n";

            cout << "Agregar transporte (500)? (1=si,0=no): ";
            int op3;
            cin >> op3;
            if(op3 == 1) transporte = 500;

            cout << "Agregar alimentos (1000)? (1=si,0=no): ";
            int op4;
            cin >> op4;
            if(op4 == 1) alimentos = 1000;

            break;
        }
        // 5. Imprimir boleta
        case 5: {
            cout << "\n----- BOLETA -----\n";

            cout << "Nombre: " << nombre << endl;
            cout << "Horas: " << horas << endl;

            cout << "\nDescuentos:\n";
            cout << "Salud - $" << salud << endl;
            cout << "AFP - $" << afp << endl;

            cout << "\nBeneficios:\n";
            cout << "Transporte + $" << transporte << endl;
            cout << "Alimentos + $" << alimentos << endl;

            // Con esto se calcula el total final
            double total = salario - salud - afp + transporte + alimentos;

            cout << "\nTOTAL: $" << total << endl;
            break;
        }
      }

    }while(opcion != 6); // Esta es una opcion para salir del programa

    return 0;
}
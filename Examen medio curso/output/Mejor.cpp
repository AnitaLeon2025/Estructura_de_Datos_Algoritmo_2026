#include <iostream>
using namespace std;

int main(){

    // =========================
    // DECLARACIÓN DE VARIABLES
    // =========================

    // Datos del empleado
    string nombre;
    int opcion;

    // Horas trabajadas y cálculo de salario
    int horas = 0;
    double salario = 0;
    double pagoHora = 120; // Pago fijo por hora

    // =========================
    // VARIABLES DE DESCUENTOS
    // =========================
    double salud = 0;   // Descuento por seguro de salud (120)
    double afp = 0;     // Descuento por AFP (150)

    // =========================
    // VARIABLES DE BENEFICIOS
    // =========================
    double transporte = 0; // Bono de transporte (500)
    double alimentos = 0;  // Bono de alimentos (1000)

    // =========================
    // INGRESO DE DATOS INICIALES
    // =========================

    cout << "Ingrese nombre del empleado: ";
    cin >> nombre;

    // =========================
    // MENÚ PRINCIPAL (estructura repetitiva)
    // =========================
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

        // =========================
        // ESTRUCTURA DE CONTROL (SWITCH)
        // =========================
        switch(opcion){

        // ---------------------------------
        // OPCIÓN 1: INGRESAR HORAS
        // ---------------------------------
        case 1:
            cout << "Ingrese horas trabajadas: ";
            cin >> horas;

            // Cálculo del salario base (horas * pago por hora)
            salario = horas * pagoHora;
            break;

        // ---------------------------------
        // OPCIÓN 2: MOSTRAR SALARIO
        // ---------------------------------
        case 2:
            salario = horas * pagoHora;
            cout << "Salario actual: $" << salario << endl;
            break;

        // ---------------------------------
        // OPCIÓN 3: INGRESAR DESCUENTOS
        // ---------------------------------
        case 3: {
            cout << "Ingreso de descuentos:\n";

            int op1, op2;

            cout << "Aplicar descuento salud (120)? (1=si,0=no): ";
            cin >> op1;
            if(op1 == 1)
                salud = 120;

            cout << "Aplicar descuento AFP (150)? (1=si,0=no): ";
            cin >> op2;
            if(op2 == 1)
                afp = 150;

            break;
        }

        // ---------------------------------
        // OPCIÓN 4: INGRESAR BENEFICIOS
        // ---------------------------------
        case 4: {
            cout << "Ingreso de beneficios:\n";

            int op3, op4;

            cout << "Agregar transporte (500)? (1=si,0=no): ";
            cin >> op3;
            if(op3 == 1)
                transporte = 500;

            cout << "Agregar alimentos (1000)? (1=si,0=no): ";
            cin >> op4;
            if(op4 == 1)
                alimentos = 1000;

            break;
        }

        // ---------------------------------
        // OPCIÓN 5: IMPRIMIR BOLETA
        // ---------------------------------
        case 5: {
            cout << "\n----- BOLETA DE PAGO -----\n";

            cout << "Nombre: " << nombre << endl;
            cout << "Horas trabajadas: " << horas << endl;

            // Mostrar descuentos
            cout << "\nDescuentos:\n";
            cout << "Salud - $" << salud << endl;
            cout << "AFP - $" << afp << endl;

            // Mostrar beneficios
            cout << "\nBeneficios:\n";
            cout << "Transporte + $" << transporte << endl;
            cout << "Alimentos + $" << alimentos << endl;

            // Cálculo final del salario total
            double total = salario - salud - afp + transporte + alimentos;

            cout << "\nTOTAL A PAGAR: $" << total << endl;
            break;
        }

        } // Fin del switch

    } while(opcion != 6); // El programa termina cuando se elige la opción 6

    return 0;
}

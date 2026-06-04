#include <iostream>
#include <vector>
using namespace std;

class Empleado {
    public:
    string nombre;
    string cargo;
    string tipo;
    int horas = 40;
    int anios;

    void crear (string n, string c, string t, int a){
        nombre = n;
        cargo = c;
        tipo = t;
        anios = a;
    }

    int salario(){
        if(cargo == "Gerente") return 100 * horas;
        if(cargo == "Supervisor") return 80 * horas;
        if(cargo == "Operario") return 50 * horas;
    }

    void mostrar(){
        cout << nombre << " - " << cargo << " - " << tipo << " - $" << salario() << endl;
    }
};

int main(){
    vector<Empleado> e(5);

    e[0].crear("Ana","Gerente","planta",5);
    e[1].crear("Paula","Supervisor","hora",4);
    e[2].crear("Miguel","Operario","planta",3);
    e[3].crear("Jhon","Supervisor","hora",6);
    e[4].crear("Maria","Operario","planta",2);

    cout << "SALARIOS:\n"; 
    for(int i = 0; i < 5; i++)
        e[i].mostrar();
    
    int posMayor = 0;
    for(int i = 1; i < 5; i++)
        if(e[i].salario() > e[posMayor].salario())
            posMayor = i;

    cout << "\nMayor salario:\n";
    e[posMayor].mostrar();

    int posViejo = 0;
    for(int i = 1; i < 5; i++)
        if(e[i].anios > e[posViejo].anios)
            posViejo = i;

    cout << "\nMayor antiguedad:\n";
    e[posViejo].mostrar();

    
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(e[i].cargo > e[j].cargo){
                swap(e[i], e[j]);

            }
        }
    }
    
    cout << "\nOrdenados por cargo:\n";
    for(int i=0; i<5; i++)
        e[i].mostrar();

    return 0;

}

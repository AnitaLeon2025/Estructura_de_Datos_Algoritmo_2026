#include <iostream>
using namespace std;

class Lista {
    private:
    int n;
    int arr[100];

    public:
    void ingresar() {
        cout << "Cantidad: ";
        cin >> n;

        cout << "Elementos: ";
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
    }

    void eliminarDuplicados() {
        cout << "Sin duplicados: ";
        for(int i = 0; i < n; i++){
            bool repetido = false;

            for(int j = 0; j < i; j++){
                if(arr[i] == arr[j]){
                    repetido = true;
                    break;
                }
            }

            if(!repetido){
                cout << arr[i] << " ";
            }
        }
    }
};

int main() {
    Lista l;
    l.ingresar();
    l.eliminarDuplicados();
    return 0;
}

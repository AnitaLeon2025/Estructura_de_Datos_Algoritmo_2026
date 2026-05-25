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

    void invertir() {
        cout << "Lista invertida: ";
        for(int i = n-1; i >= 0; i--){
            cout << arr[i] << " ";
        }
    }
};

int main() {
    Lista l;
    l.ingresar();
    l.invertir();
    return 0;
}

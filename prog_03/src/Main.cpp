#include "../include/Client.h"

int main() {
    cout << " --------- " << endl;

    int nClients;

    cout << "Ingrese el número de clientes: ";
    cin >> nClients;

    Client arr[nClients];

    for (int i = 0; i < nClients; i++) {
        string name;
        string phone;
        int balance;

        cout << "Ingrese nombre: ";
        cin.get();
        getline(std::cin, name);

        cout << "Ingrese teléfono: ";
        cin.get();
        getline(std::cin, phone);

        cout << "Ingrese balance: ";
        cin >> balance;

        arr[i].setName(name);
        arr[i].setPhone(phone);
        arr[i].setBalance(balance);
    }

    cout << " --------- " << endl;

    cout << "Datos de los clientes:";

    for (int i = 0; i < nClients; i++) {
        cout << "Nombre: " << arr[i].getName() << endl;
        cout << "¿Deudor?";
        if (arr[i].getDefaulterStatus()) {
            cout << "Sí" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    cout << " --------- " << endl;

    return 0;
}

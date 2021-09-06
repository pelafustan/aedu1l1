#include <random>
#include "../include/StrArray.h"
using namespace std;

int main() {
    srand(time(NULL));

    int size;
    int entries;
    cout << "Ingrese el máximo de cadenas a almacenar: ";
    cin >> size;

    cout << "¿Cuántas vas a agregar ahora? ";
    cin >> entries;

    StrArray arr = StrArray(size);

    for (int i = 0; i < entries; i++){
        cout << "Ingresa la frase " << i+1 << ": ";
        string phrase;
        cin.get(); // avoid fill first entry with {\0}
        std::getline(std::cin, phrase);
        arr.add(phrase);
    }

    cout << "Capacidad: " << arr.getSize() << endl;
    cout << "Número de entradas: " << arr.getNrOfEntries() << endl;
    cout << "Entradas: " << endl;

    for (int i = 0; i < arr.getNrOfEntries(); i++) {
        cout << arr[i] << endl;
    }

    cout << "Total mayúsculas: " << arr.howUppers() << endl;
    cout << "Total minúsculas: " << arr.howLowers() << endl;

    cout << " ---------- " << endl;

    int rindex = rand() % (arr.getNrOfEntries()); // random index between 0 and array number of entries

    cout << "Elemento en la posición " << rindex + 1 << "th: " << arr[rindex] << endl;

    cout << "Mayúsculas en " << rindex + 1 << "th frase: " << arr.howUppers(rindex) << endl;

    cout << "Minúsculas en " << rindex + 1 << "th frase: " << arr.howLowers(rindex) << endl;

    return 0;
}

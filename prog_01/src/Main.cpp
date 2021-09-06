#include "../include/IntArray.h"
#include <random>
#include <unistd.h>
#include <iostream>

void print_array(IntArray arr) {
    for (int i = 0; i < arr.getNrOfEntries(); i++) {
        std::cout << arr[i] << std::endl;
    }
}

int main() {
    srand(time(NULL));

    int size; // init for array length
    std::cout << "Ingrese el largo máximo del arreglo: ";
    std::cin >> size;

    IntArray arr = IntArray(size); // init object of class IntArray

    int nrEntries; // init for number of entries. Number of entries are the number of elements that actually 'live' in the array

    std::cout << "Ingrese el número de elementos que desea ingresar: ";
    std::cin >> nrEntries;

    while (nrEntries < 0 || nrEntries > arr.getSize()){
        std::cout << "Fuera de los límites. Debe ser menor o igual a " << arr.getSize() << ": ";
        std::cin >> nrEntries;
    }

    int value;

    for (int i = 0; i < nrEntries; i++){
        std::cout << "Ingrese el elemento para la posición " << i+1 << ": ";
        std::cin >> value;
        arr.add(value);
    }

    std::cout << " ---------- " << std::endl;

    std::cout << "Capacidad del arreglo: " << arr.getSize() << std::endl;
    std::cout << "Cantidad de elementos en el arreglo: " << arr.getNrOfEntries() << std::endl;

    std::cout << "Elementos del arreglo:" << std::endl;

    print_array(arr);

    std::cout << " ---------- " << std::endl;

    int sqsum = arr.squares();

    std::cout << "La suma de los elementos del arreglo al cuadrado es: " << sqsum << std::endl;

    std::cout << " ---------- " << std::endl;


    int rsize = rand() % 41 + 10; // rand between 10 and 50, bounds included

    IntArray arr2 = IntArray(rsize);

    int rNrEntries = rand() % (rsize - 4) + 5; // rand between 5 and rsize

    for (int i = 0; i < rNrEntries; i++) {
        int rvalue = rand() % 15; // rand between 0 and 15
        arr2.add(rvalue);
    }

    std::cout << "Arreglo aleatorio..." << std::endl;
    std::cout << "Capacidad: " << arr2.getSize() << std::endl;
    std::cout << "Número de entradas: " << arr2.getNrOfEntries() << std::endl;
    std::cout << "Elementos: ";
    for (int i = 0; i < arr2.getNrOfEntries(); i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    int sum2 = arr2.squares();
    std::cout << "La suma de los elementos al cuadrado es: " << sum2 << std::endl;

    return 0;
}

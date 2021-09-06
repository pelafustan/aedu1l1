#include "../include/IntArray.h"
#include <iostream>

/**
 * default constructor
 */
IntArray::IntArray() {
    size = 1;
    nrEntries = 0;
    arr = new int[size];
    arr[0] = 0;
}

/**
 * specific constructor
 */
IntArray::IntArray(int size) {
    this->size = size;
    this->arr = new int[size];
    this->nrEntries = 0;
}

/**
 * indexing
 */
int& IntArray::operator[] (int index) {
    if (index > this->size) {
        throw("Out of bounds!");
    }
    return this->arr[index];
}

/**
 * size accessor
 */
int IntArray::getSize() {
    return this->size;
}

/**
 * get number of elements inside array
 */
int IntArray::getNrOfEntries() {
    return this->nrEntries;
}

/**
 * method to compute the summation of squared array elements.
 */
int IntArray::squares() {
    int sum = 0;
    for (int i = 0; i < this->nrEntries; i++) {
        sum += this->arr[i] * this->arr[i];
    }
    return sum;
}

/**
 * method that allows add a new entry to array
 */
void IntArray::add(int value) {
    if (this->nrEntries == 0) {
        this->arr[0] = value;
        this->nrEntries++;
    }
    else if (this->nrEntries < this->size) {
        this->arr[this->nrEntries++] = value;
    }
    else throw("Array at max capacity!");
}

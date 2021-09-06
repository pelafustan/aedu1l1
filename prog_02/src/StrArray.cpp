#include <cctype>
#include "../include/StrArray.h"

/* Constructors */
StrArray::StrArray() {
    size = 1;
    nrEntries = 0;
    arr = new string[size];
    arr[0] = "\0";
}

StrArray::StrArray(int size) {
    this->size = size;
    this->arr = new string[size];
    this->nrEntries = 0;
}

/* Indexing */
string& StrArray::operator[] (int index) {
    if (index > this->size) {
        throw("Out of bounds!");
    }
    return this->arr[index];
}

/* Size accessor */
int StrArray::getSize() {
    return this->size;
}

/* Number of elements in array accessor */
int StrArray::getNrOfEntries() {
    return this->nrEntries;
}

/* Methods that obtain the number of lower and upper in strings */
int StrArray::howLowers(){ // for all array
    int low = 0;
    for (int i = 0; i < this->nrEntries; i++) {
        string temp = this->arr[i];
        int length = temp.length();
        for(int j = 0; j < length; j++){
            int c = temp[j];
            if (islower(c)) {
                low++;
            }
        }
    }
    return low;
}

int StrArray::howLowers(int index){ // for specific array entry
    int low = 0;
    string temp = this->arr[index];
    int length = temp.length();
    for(int i = 0; i < length; i++){
        int c = temp[i];
        if (islower(c)) {
            low++;
        }
    }
    return low;
}

int StrArray::howUppers(){ // for all array
    int upp = 0;
    for (int i = 0; i < this->nrEntries; i++) {
        string temp = this->arr[i];
        int length = temp.length();
        for(int j = 0; j < length; j++){
            int c = temp[j];
            if (isupper(c)) {
                upp++;
            }
        }
    }
    return upp;
}

int StrArray::howUppers(int index){ // for specific array entry
    int upp = 0;
    string temp = this->arr[index];
    int length = temp.length();
    for(int i = 0; i < length; i++){
        int c = temp[i];
        if (isupper(c)) {
            upp++;
        }
    }
    return upp;
}

void StrArray::add(string value) { // method to add string
    if (this->nrEntries == 0) {
        this->arr[0] = value;
        this->nrEntries++;
    }
    else if (this->nrEntries < this->size) {
        this->arr[this->nrEntries++] = value;
    }
    else{
        throw("Array at max capacity!");
    }
}

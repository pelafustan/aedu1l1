#ifndef STRARRAY_H
#define STRARRAY_H

#include <iostream>
using namespace std;

class StrArray {
    public:
        /* Constructors */
        StrArray();
        StrArray(int n);

        /* Indexing */
        string& operator[] (int index);

        /* Mutators */
        void add(string value);

        /* Accessors */
        int getSize();
        int getNrOfEntries();

        /* Get nr of upper and lower */
        int howUppers(); // all uppers in array
        int howUppers(int index); // uppers in some index
        int howLowers(); // all lowers in array
        int howLowers(int index); // lowers in some index

    private:
        int size;
        int nrEntries;
        string *arr;
};

#endif

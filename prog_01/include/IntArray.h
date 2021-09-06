#ifndef INTARRAY_H
#define INTARRAY_H

class IntArray {
    public:
        /**
         * default constructor for this class
         */
        IntArray();

        /**
         * specific constructor
         */
        IntArray(int);

        /**
         * index operator
         */
        int& operator[] (int index);

        /**
         * mutator to add a number
         */
        void add(int);

        /**
         * accessor for size
         */
        int getSize();

        /**
         * accessor for used space in array
         */
        int getNrOfEntries();

        /**
         * method used to compute squared roots
         */

        int squares();

    private:
        int size;
        int nrEntries;
        int *arr;
};
#endif

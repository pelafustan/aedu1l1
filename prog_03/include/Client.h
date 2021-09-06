#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
using namespace std;

class Client {
    public:
        /* Constructors */
        Client();
        Client(string name, string phone, int balance);

        /* Accessors */
        string getName();
        string getPhone();
        int getBalance();
        bool getDefaulterStatus();

        /* Mutators */
        void setName(string name);
        void setPhone(string phone);
        void setBalance(int balance);

        void payment(int value);
        void loan(int value);

    private:
        string name;
        string phone;
        int balance;
        bool defaulterStatus;
};
#endif

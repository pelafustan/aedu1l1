#include "../include/Client.h"

/* Constructors */
Client::Client() {
    name = "\0";
    phone = "\0";
    balance = 0;
    defaulterStatus = false;
}

Client::Client(string name, string phone, int balance) {
    this->name = name;
    this->phone = phone;
    this->balance = balance;
    if (balance >= 0)
        this->defaulterStatus = false;
    else
        this->defaulterStatus = true;
}

/* Accessors */
string Client::getName() {
    return this->name;
}

string Client::getPhone() {
    return this->phone;
}

int Client::getBalance() {
    return this->balance;
}

bool Client::getDefaulterStatus() {
    return this->defaulterStatus;
}

/* Mutators */
void Client::setName(string name) {
    this->name = name;
}

void Client::setPhone(string phone) {
    this->phone = phone;
}

void Client::setBalance(int balance) {
    this->balance = balance;
}

void Client::payment(int value) {
    this->balance += value;
    if (defaulterStatus && balance >= 0) {
        this->defaulterStatus = false;
    }
}

void Client::loan(int value) {
    this->balance -= value;
    if(!defaulterStatus && balance < 0) {
        this->defaulterStatus = true;
    }
}

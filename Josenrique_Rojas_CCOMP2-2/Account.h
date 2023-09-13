// Account.h
#pragma once // Directiva de inclusión única para evitar problemas de inclusión múltiple

#include <string>

class Account {
public:
    // Declaraciones de funciones públicas
    Account(std::string accountName, int initialBalance);
    void setName(std::string accountName);
    std::string getName() const;
    void deposit(int depositAmount);
    void withdraw(int withdrawalAmount);
    int getBalance() const;

private:
    // Miembros de datos privados
    std::string name;
    int balance{0};
};

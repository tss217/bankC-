#include "Conta.hpp"
#include <iostream>

void Account::withdraw(float valueWithdraw){
    if(valueWithdraw < 0){
        std::cout << "Valor Negativo" << std::endl;
        return;
    }

    if(valueWithdraw > balance){
        std::cout << "saldo insuficiente" << std::endl;
    }

    balance -= valueWithdraw;
}

void Account::deposit(float valueDepopsit){
    if(valueDepopsit < 0){
        std::cout << "nao pode depositar valor negativo" << std::endl;
        return;
    }

    balance += valueDepopsit;
}


float Account::getBalance(){
    return balance;
}


void Account::setHoldersName(std::string nome){
    holdersName = nome;
}

std::string Account::getHoldersName(){
    return holdersName;
}


void Account::setNumber(std::string AccountNumber){
    number = AccountNumber;
}

std::string Account::getNumber(){
    return number;
}


void Account::setIndetification(std::string acocountIndetification){
    indentification = acocountIndetification;
}

std::string Account:: getIndetification(){
    return indentification;
}
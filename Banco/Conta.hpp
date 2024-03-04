#pragma once
#include <string>

class Account{
    std::string number;
    std::string indentification;
    std::string holdersName;
    float balance = 0; 


public:
    void withdraw(float valueWithdraw);
    void deposit(float valueDepopsit);

    float getBalance();

    void setHoldersName(std::string nome);
    std::string getHoldersName();

    void setNumber(std::string AccountNumber);
    std::string getNumber();

    void setIndetification(std::string accountIndetifiction);
    std::string getIndetification();

};
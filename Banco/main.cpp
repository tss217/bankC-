#include <iostream>
#include <string>
#include "Conta.hpp"
    
using namespace std;

int main(){
    Account umaConta;
    umaConta.setHoldersName("ts217");
    umaConta.setNumber("217");
    umaConta.setIndetification("a217217");

    umaConta.deposit(500);
    umaConta.withdraw(200);


    cout<<"nome: " << umaConta.getHoldersName() << " saldo: " << umaConta.getBalance() <<" indentificação: "<< umaConta.getIndetification() <<" numero da conta: "<< umaConta.getNumber() << endl;

    return 0;
}
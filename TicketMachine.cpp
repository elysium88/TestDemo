//
// Created by user on 2021/5/11.
//

#include "TicketMachine.h"
#include "iostream"

using namespace std;

TicketMachine::TicketMachine() : PRICE(0),balance(0),total(0) {
    this->balance = 0;
}

void TicketMachine::showPrompt() {
    cout << "showPrompt" << endl;
}

void TicketMachine::insertMoney(int money) {
    this->balance += money;
}

void TicketMachine::showBalance() {
    cout << "showBalance" << this->balance << endl;
}

void TicketMachine::set(int money) {
    this->balance = money;
}

//
// Created by user on 2021/5/11.
//

#ifndef C___TICKETMACHINE_H
#define C___TICKETMACHINE_H


class TicketMachine {
public:
    TicketMachine();
    void showPrompt();
    void insertMoney(int money);
    void showBalance();

    void showTotal();

protected://子类里可以用
    void set(int money);

private:
    const int PRICE;
    int balance;
    int total;
};


#endif //C___TICKETMACHINE_H

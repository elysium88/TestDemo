#include <iostream>
#include "TicketMachine.h"
#include "Employee.h"
#include "Manager.h"

class SubTicketMachine : public TicketMachine {
public:

    void subPrint() {
        std::cout << "subPrintStart" << std::endl;
        //set(100);
        showBalance();

        std::cout << "subPrintEnd" << std::endl;
    }

};

int main() {
    std::cout << "helloWord" << std::endl;


    TicketMachine ticketMachine;
    ticketMachine.insertMoney(10);
    ticketMachine.showBalance();
    SubTicketMachine subTicketMachine;
    //subTicketMachine.set(100);
    subTicketMachine.subPrint();

    cout << "--------------" << endl;

    Employee bob("Bob Jones", "555-44-1234");
    Manager bill("bill smith", "666-55-1234", "Important Person");

    const std::string &name = bill.get_name();
    //std::string title = bob.getTitle();//error
    std::cout << bill.title_name() << '\n' << std::endl;
    bill.print(std::cout);
    bob.print(std::cout);
    bob.print(std::cout, "Employee");

    cout << "--------------" << endl;

    Manager pete("Pete", "12321", "peteManager");
    Employee *ep = &pete;//upcast向上造型
    Employee &er = pete;//upcast向上造型
    ep->print(cout);
    er.print(cout);

    cout << "--------------" << endl;

    Manager *manager = new Manager("1111", "2222", "newManage");
    manager->print(cout);
    cout  << manager << endl;

    clog << "123123" << endl;
    delete manager;

    return 0;
}

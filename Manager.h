//
// Created by user on 2021/5/12.
//

#ifndef C___MANAGER_H
#define C___MANAGER_H

#include "Employee.h"

class Manager : public Employee {
public:
    Manager(const std::string &name, const std::string &ssn,const std::string& title);

    const std::string title_name() const;

    const std::string &get_title() const;

    void print(std::ostream &out) const;

private:
    std::string m_title;

};

inline void Manager::print(std::ostream &out) const {
    Employee::print(out);
    out << m_title << std::endl;

}

inline const std::string &Manager::get_title() const {
    return m_title;
}

inline const std::string Manager::title_name() const {
    return std::string(m_title + ":" + m_name);
}
#endif //C___MANAGER_H

//
// Created by user on 2021/5/12.
//
#include "iostream"

#ifndef C___EMPLOYEE_H
#define C___EMPLOYEE_H

using namespace std;

class Employee {
public:
    Employee(const std::string &name, const std::string &ssn);

    //函数后面的const 表示不会修改成员变量
    const std::string &get_name() const;

    void print(std::ostream &out) const;

    void print(std::ostream &out, const std::string &msg) const;


protected:
    std::string m_name;
    std::string m_ssn;
};

inline const std::string &Employee::get_name() const {
    return m_name;
}

inline void Employee::print(std::ostream &out) const {
    out << m_name << endl;
    out << m_ssn << endl;
}

inline void Employee::print(std::ostream &out, const std::string &msg) const {
    out << msg << endl;
    print(out);
}

#endif //C___EMPLOYEE_H

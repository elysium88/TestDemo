//
// Created by user on 2021/5/12.
//

#include "Manager.h"
#include "iostream"

Manager::Manager(const std::string &name, const std::string &ssn, const std::string &title) : Employee(name, ssn),
                                                                                              m_title(title) {

}


cmake_minimum_required(VERSION 3.19)
project(TestDemo)

set(CMAKE_CXX_STANDARD 14)

add_executable(c__ main.cpp TicketMachine.cpp TicketMachine.h Employee.cpp Employee.h Manager.cpp Manager.h)
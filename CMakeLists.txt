cmake_minimum_required(VERSION 3.3)
project(cppDesignPatterns)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp creational/builder/Pizza.cpp creational/builder/Pizza.h creational/builder/PizzaBuilder.cpp creational/builder/PizzaBuilder.h creational/builder/HawaiianPizzaBuilder.cpp creational/builder/HawaiianPizzaBuilder.h creational/builder/SpicyPizzaBuilder.cpp creational/builder/SpicyPizzaBuilder.h creational/builder/Cook.cpp creational/builder/Cook.h DesignPatterns.cpp DesignPatterns.h creational/factory/Computer.h creational/factory/Laptop.cpp creational/factory/Laptop.h creational/factory/Desktop.cpp creational/factory/Desktop.h creational/factory/ComputerFactory.cpp creational/factory/ComputerFactory.h creational/prototype/Record.h creational/prototype/CarRecord.cpp creational/prototype/CarRecord.h creational/prototype/BikeRecord.cpp creational/prototype/BikeRecord.h creational/prototype/RecordFactory.cpp creational/prototype/RecordFactory.h)
add_executable(cppDesignPatterns ${SOURCE_FILES})
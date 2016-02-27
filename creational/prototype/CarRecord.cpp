//
// Created by mariocaster on 2/27/16.
//

#include "CarRecord.h"

namespace PrototypeRecord {
    CarRecord::CarRecord(std::string carName, int ID) : m_carName(carName), m_ID(ID){}

    void CarRecord::print() {
        std::cout << "Car Record" << std::endl
        << "Name  : "   << m_carName << std::endl
        << "Number: "   << m_ID << std::endl << std::endl;
    }

    std::unique_ptr<Record> CarRecord::clone() {
        return std::unique_ptr<Record>(new CarRecord(m_carName, m_ID));
    }
}
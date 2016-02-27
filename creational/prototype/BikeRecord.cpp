//
// Created by mariocaster on 2/27/16.
//

#include "BikeRecord.h"

namespace PrototypeRecord {

//    BikeRecord::BikeRecord(std::string bikeName, int ID): m_bikeName(bikeName), m_ID(ID) {}

    void BikeRecord::print() {
        std::cout << "Bike Record" << std::endl
        << "Name  : " << m_bikeName << std::endl
        << "Number: " << m_ID << std::endl << std::endl;
    }

    std::unique_ptr <Record> BikeRecord::clone() {
        return std::unique_ptr<Record>(new BikeRecord(m_bikeName, m_ID));
    }
}
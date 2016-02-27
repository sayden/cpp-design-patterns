//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_BIKERECORD_H
#define CPPDESIGNPATTERNS_BIKERECORD_H

#include "Record.h"

namespace PrototypeRecord {

class BikeRecord: public Record {
private:
    std::string m_bikeName;
    int m_ID;

public:
    BikeRecord(std::string bikeName, int ID): m_bikeName(bikeName), m_ID(ID) {}
    void print() override;
    std::unique_ptr<Record> clone() override;
};

}

#endif //CPPDESIGNPATTERNS_BIKERECORD_H

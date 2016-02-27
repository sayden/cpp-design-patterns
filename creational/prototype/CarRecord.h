//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_CARRECORD_H
#define CPPDESIGNPATTERNS_CARRECORD_H

#include "Record.h"

namespace PrototypeRecord {

class CarRecord: public Record {
private:
    std::string m_carName;
    int m_ID;

public:
    CarRecord(std::string carName, int ID);
    void print() override;
    std::unique_ptr<Record> clone() override;
};

}

#endif //CPPDESIGNPATTERNS_CARRECORD_H

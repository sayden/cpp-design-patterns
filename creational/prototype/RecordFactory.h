//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_RECORDFACTORY_H
#define CPPDESIGNPATTERNS_RECORDFACTORY_H

#include "Record.h"
#include "CarRecord.h"
#include "BikeRecord.h"
#include <string>
#include <iostream>
#include <memory>
#include <map>

namespace PrototypeRecord {
enum RecordType {
    CAR,
    BIKE
};
class RecordFactory {

private:
    std::map<RecordType, std::unique_ptr<Record>> m_records;

public:
    RecordFactory();
    std::unique_ptr<Record> createRecord(RecordType recordType);
};

}

#endif //CPPDESIGNPATTERNS_RECORDFACTORY_H

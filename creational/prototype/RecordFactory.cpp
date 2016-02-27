//
// Created by mariocaster on 2/27/16.
//

#include "RecordFactory.h"

namespace PrototypeRecord {

    RecordFactory::RecordFactory(){
        m_records[CAR] = std::unique_ptr<CarRecord>(new CarRecord("Ferrari", 5050));
        m_records[BIKE] = std::unique_ptr<BikeRecord>(new BikeRecord("Yamaha", 2525));
    }
    std::unique_ptr<PrototypeRecord::Record> RecordFactory::createRecord(RecordType recordType){
        return m_records[recordType]->clone();
    }

}
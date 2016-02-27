//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_RECORD_H
#define CPPDESIGNPATTERNS_RECORD_H

#include <string>
#include <iostream>
#include <memory>

namespace PrototypeRecord {

class Record {
public:
    virtual ~Record(){};
    virtual void print() = 0;
    virtual std::unique_ptr<Record> clone() = 0;
};

}

#endif //CPPDESIGNPATTERNS_RECORD_H

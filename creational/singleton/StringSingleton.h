//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_STRINGSINGLETON_H
#define CPPDESIGNPATTERNS_STRINGSINGLETON_H

#include <string>

namespace Singleton{

class StringSingleton {

public:
    std::string GetString();
    void SetString(std::string &newStr);
    static StringSingleton* instance();

private:
    std::string mString;
};

}

#endif //CPPDESIGNPATTERNS_STRINGSINGLETON_H

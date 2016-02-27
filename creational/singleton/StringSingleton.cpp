//
// Created by mariocaster on 2/27/16.
//

#include "StringSingleton.h"

namespace Singleton {
    std::string StringSingleton::GetString() {
        return mString;
    }

    void StringSingleton::SetString(std::string &newStr) {
        mString = newStr;
    }


    static StringSingleton *s_instance;
    StringSingleton* StringSingleton::instance(){
        if(!s_instance){
            s_instance = new StringSingleton;
        }

        return s_instance;
    }
}
//
// Created by pobi on 16.01.19.
//

#ifndef OOPPROJECT_RENTEXEPCTION_H
#define OOPPROJECT_RENTEXEPCTION_H

#include <stdexcept>

using namespace std;

class RentException: public logic_error{
public:
    RentException(const string __arg) : logic_error(__arg) {}
};



#endif //OOPPROJECT_RENTEXEPCTION_H

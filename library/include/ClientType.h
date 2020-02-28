//
// Created by pobi on 02.12.18.
//

#ifndef OOPPROJECT_CLIENTTYPE_H
#define OOPPROJECT_CLIENTTYPE_H

#include "memory"
using namespace std;

class ClientType{


public:
    virtual float clientDiscout()=0;
};

typedef shared_ptr<ClientType> ClientTypePtr;

#endif //OOPPROJECT_CLIENTTYPE_H
 
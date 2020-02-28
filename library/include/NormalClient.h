//
// Created by pobi on 02.12.18.
//

#ifndef OOPPROJECT_DEFOULTCLIENTTYPE_H
#define OOPPROJECT_DEFOULTCLIENTTYPE_H

#include "ClientType.h"
#include "memory"

using namespace std;

class NormalClient: public ClientType{



public:
    virtual ~NormalClient();

    NormalClient();
    float clientDiscout();
};

typedef shared_ptr<NormalClient> normalClientPtr;

#endif //OOPPROJECT_DEFOULTCLIENTTYPE_H

//
// Created by pobi on 02.12.18.
//

#ifndef OOPPROJECT_VIPCLIENT_H
#define OOPPROJECT_VIPCLIENT_H

#include <memory>
#include "ClientType.h"

using namespace std;

class VipClient: public ClientType{



public:
    VipClient();

    float clientDiscout();
};

typedef shared_ptr<VipClient> vipClientPtr;

#endif //OOPPROJECT_VIPCLIENT_H

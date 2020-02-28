//
// Created by pobi on 16.01.19.
//

#ifndef OOPPROJECT_STADIUMREALGRASS_H
#define OOPPROJECT_STADIUMREALGRASS_H

#include "Stadium.h"

class StadiumRealGrass:public Stadium {

public:

    StadiumRealGrass(int capacity, const std::string &surface);

    float stadiumPrice();

    virtual ~StadiumRealGrass();
};
typedef std::shared_ptr<StadiumRealGrass> StadiumRealGrassPtr;


#endif //OOPPROJECT_STADIUMREALGRASS_H

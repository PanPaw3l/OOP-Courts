//
// Created by pobi on 16.01.19.
//

#ifndef OOPPROJECT_STADIUMASPHALT_H
#define OOPPROJECT_STADIUMASPHALT_H

#include <string>
#include "Stadium.h"

using namespace std;

class StadiumAsphalt: public Stadium{
public:
    StadiumAsphalt(int Capacity, string Surface, string asphaltQuality);
    float stadiumPrice();

    virtual ~StadiumAsphalt();

private:
    string asphaltQuality;

};
typedef std::shared_ptr<StadiumAsphalt> StadiumAsphaltPtr;


#endif //OOPPROJECT_STADIUMASPHALT_H

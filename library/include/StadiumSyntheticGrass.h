//
// Created by pobi on 16.01.19.
//

#ifndef OOPPROJECT_STADIUMSYNTHETICGRASS_H
#define OOPPROJECT_STADIUMSYNTHETICGRASS_H

#include <string>
#include "Stadium.h"

using namespace std;

class StadiumSyntheticGrass: public Stadium {
public:
    StadiumSyntheticGrass(int Capacity, string Surface, string syntheticGrassColor);
    float stadiumPrice();

    const string &getSyntheticGrassColor() const;

private:
    string syntheticGrassColor;

};
typedef std::shared_ptr<StadiumSyntheticGrass> StadiumSyntheticGrassPtr;


#endif //OOPPROJECT_STADIUMSYNTHETICGRASS_H

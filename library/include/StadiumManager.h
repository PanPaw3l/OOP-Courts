//
// Created by pobi on 15.01.19.
//

#ifndef OOPPROJECT_STADIUMMANAGER_H
#define OOPPROJECT_STADIUMMANAGER_H

#include "StadiumRepository.h"
#include "Stadium.h"
#include "string"
#include "memory"

class StadiumManager{

public:
    StadiumManager();

    virtual ~StadiumManager();

    void newStadium(StadiumPtr stadium);

    void deleteStadium(StadiumPtr stadium);

    int getNumberOfStadiums();

    StadiumPtr getStadiumByIndex(int index);

private:
    StadiumRepository stadiums;
};

typedef std::shared_ptr<StadiumManager> StadiumManagerPtr;


#endif //OOPPROJECT_STADIUMMANAGER_H

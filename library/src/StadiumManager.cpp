//
// Created by pobi on 15.01.19.
//

#include <StadiumManager.h>
#include "StadiumRepository.h"

StadiumManager::StadiumManager() {

}

StadiumManager::~StadiumManager() {

}

void StadiumManager::newStadium(StadiumPtr stadium) {
    stadiums.addStadium(stadium);
}

void StadiumManager::deleteStadium(StadiumPtr stadium) {
    stadiums.removeStadium(stadium);
}


int StadiumManager::getNumberOfStadiums() {
    return stadiums.getStadiums().size();
}

StadiumPtr StadiumManager::getStadiumByIndex(int index) {
    return stadiums.getStadiums()[index];
}


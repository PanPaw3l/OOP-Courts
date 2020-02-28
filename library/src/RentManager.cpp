//
// Created by pobi on 17.01.19.
//

#include <RentManager.h>
#include "RentRepository.h"

RentManager::RentManager() {

}

RentManager::~RentManager() {

}

void RentManager::newRent(StadiumPtr &stadium, ClientPtr &clientPtr) {
    RentPtr rent(new Rent(stadium,clientPtr));
    rents.addRent(rent);
}

void RentManager::deleteRent(RentPtr rent) {
    rents.removeRent(rent);
}


int RentManager::getNumberOfRents() {
    return rents.getRents().size();
}

RentPtr RentManager::getRentByIndex(int index) {
    return rents.getRents()[index];
}

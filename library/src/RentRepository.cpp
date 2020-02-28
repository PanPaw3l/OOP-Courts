//
// Created by pobi on 16.01.19.
//

#include <RentRepository.h>


RentRepository::RentRepository() {

}

RentRepository::~RentRepository() {

}

void RentRepository::addRent(RentPtr rent) {
    rents.push_back(rent);
}

void RentRepository::removeRent(RentPtr rent) {
    for (int i = 0; i < rents.size(); ++i) {
        if(rents[i]==rent){
            rents.erase(rents.begin() + i);
            return;
        }
    }
}

const vector<RentPtr> &RentRepository::getRents() const {
    return rents;
}

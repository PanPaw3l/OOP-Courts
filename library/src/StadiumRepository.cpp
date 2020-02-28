//
// Created by pobi on 15.01.19.
//

#include <StadiumRepository.h>


StadiumRepository::StadiumRepository() {

}

void StadiumRepository::addStadium(StadiumPtr stadium) {
    stadiums.push_back(stadium);
}

void StadiumRepository::removeStadium(StadiumPtr stadium) {
    for (int i = 0; i < stadiums.size(); ++i) {
        if(stadiums[i]==stadium){
            stadiums.erase(stadiums.begin() + i);
            return;
        }
    }
}

const vector<StadiumPtr> &StadiumRepository::getStadiums() const {
    return stadiums;
}

StadiumRepository::~StadiumRepository() {

}

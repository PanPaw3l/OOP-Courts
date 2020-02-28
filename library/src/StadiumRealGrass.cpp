//
// Created by pobi on 16.01.19.
//

#include <StadiumRealGrass.h>

using namespace std;


StadiumRealGrass::StadiumRealGrass(int capacity, const string &surface) : Stadium(capacity, surface) {}

float StadiumRealGrass::stadiumPrice() {
    return Stadium::stadiumPrice()*0.5;
}

StadiumRealGrass::~StadiumRealGrass() {

}

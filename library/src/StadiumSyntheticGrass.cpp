//
// Created by pobi on 16.01.19.
//

#include <StadiumSyntheticGrass.h>

using namespace std;

StadiumSyntheticGrass::StadiumSyntheticGrass(int Capacity, string Surface, string syntheticGrassColor)
:Stadium(Capacity, Surface), syntheticGrassColor(syntheticGrassColor) {
    this->syntheticGrassColor=syntheticGrassColor;
}
float StadiumSyntheticGrass::stadiumPrice() {
    return Stadium::stadiumPrice() * 0.7;
}

const string &StadiumSyntheticGrass::getSyntheticGrassColor() const {
    return syntheticGrassColor;
}

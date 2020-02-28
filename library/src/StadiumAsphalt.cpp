//
// Created by pobi on 16.01.19.
//

#include <StadiumAsphalt.h>
#include <map>
#include <string>
#include <stdexcept>
#include <iostream>

std::map<std::string,float> qualityPrices = {{"Good",1.2},{"Medium",0.9},{"Bad",0.65}};



StadiumAsphalt::StadiumAsphalt(int Capacity, string Surface, string asphaltQuality)
        :Stadium(Capacity, Surface), asphaltQuality(asphaltQuality){


    if(asphaltQuality != "Good" && asphaltQuality != "Medium" && asphaltQuality != "Bad"){
        throw std::runtime_error("Bad argument, asphalt quality must be either [Good, Medium, Bad]");
    }

    this->asphaltQuality=(asphaltQuality);

}

float StadiumAsphalt::stadiumPrice() {
    return Stadium::stadiumPrice() * qualityPrices[asphaltQuality];
}

StadiumAsphalt::~StadiumAsphalt() {

}

//
// Created by pobi on 11.01.19.
//

#include <Stadium.h>
#include <string>

Stadium::Stadium(int capacity, const std::string &surface) : capacity(capacity), surface(surface) {}

int Stadium::getCapacity() const {
    return capacity;
}

const std::string &Stadium::getSurface() const {
    return surface;
}

float Stadium::stadiumPrice() {
    return 100.00;
}

Stadium::~Stadium() {

}

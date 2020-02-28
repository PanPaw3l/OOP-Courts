//
// Created by pobi on 11.01.19.
//
#include <Rent.h>
#include <Stadium.h>
#include <memory>
#include "iostream"
#include <boost/uuid/uuid_generators.hpp> // generators
#include "boost/date_time/local_time/local_time.hpp"
#include <RentExepction.h>

Rent::Rent(const StadiumPtr &stadium, const ClientPtr &clientPtr) : stadium(stadium), clientPtr(clientPtr){
    this->id = boost::uuids::random_generator()();
    this->rentStartTime = boost::posix_time::second_clock::local_time();
}

const boost::posix_time::ptime &Rent::getRentStartTime() const {
    return rentStartTime;
}

const boost::posix_time::ptime &Rent::getRentEndTime() const {
    return rentEndTime;
}

const StadiumPtr &Rent::getStadium() const {
    return stadium;
}

void Rent::setRentEndTime(boost::posix_time::ptime endTime) {
    Rent::rentEndTime =  endTime;
}

Rent::~Rent() {

}

boost::posix_time::time_duration Rent::getRentDuration() {
    return rentEndTime - rentStartTime;
}

void Rent::endRent(boost::posix_time::ptime endTime) {
    if(endTime < rentStartTime){
        throw RentException("End time must be after start time");
    }else{
        setRentEndTime(endTime);
    }
}

float Rent::getPrice() {
  std::cout<<getRentDuration();
  boost::posix_time::time_duration duration = getRentDuration();

  long int houres = duration.hours();
  return stadium->stadiumPrice() * houres * clientPtr->getClientType()->clientDiscout();
}

const ClientPtr &Rent::getClientPtr() const {
    return clientPtr;
}


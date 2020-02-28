//
// Created by pobi on 11.01.19.
//

#ifndef OOPPROJECT_RENT_H
#define OOPPROJECT_RENT_H

#include <boost/uuid/uuid.hpp>            // uuid class
#include <boost/uuid/uuid_generators.hpp> // generators
#include "boost/date_time/local_time/local_time.hpp"
#include "Stadium.h"
#include "Client.h"
#include <memory>


class Rent{
public:

    Rent(const StadiumPtr &stadium, const ClientPtr &clientPtr);

    virtual ~Rent();

    const boost::posix_time::ptime &getRentStartTime() const;

    const boost::posix_time::ptime &getRentEndTime() const;

    boost::posix_time::time_duration getRentDuration();

    const StadiumPtr &getStadium() const;

    float getPrice();

    const ClientPtr &getClientPtr() const;

    void endRent(boost::posix_time::ptime endTime);


private:
    boost::uuids::uuid id;
    boost::posix_time::ptime rentStartTime;
    boost::posix_time::ptime rentEndTime;
    StadiumPtr stadium;
    void setRentEndTime(boost::posix_time::ptime endTime);
    ClientPtr clientPtr;
};
typedef std::shared_ptr<Rent> RentPtr;

#endif //OOPPROJECT_RENT_H

//
// Created by pobi on 11.01.19.
//

#include <boost/test/unit_test.hpp>

#include "Rent.h"
#include "Stadium.h"
#include "Client.h"
#include "boost/date_time/local_time/local_time.hpp"
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/date_time/date.hpp>
#include <RentExepction.h>

BOOST_AUTO_TEST_SUITE(ClientSuiteCorrect)

    BOOST_AUTO_TEST_CASE(CreateRentTest) {

        StadiumPtr stadium(new Stadium(500,"Grass"));
        ClientPtr client1 (new Client("KAcper","Zielona 4/20"));

        RentPtr rent(new Rent(stadium,client1));

        BOOST_CHECK_EQUAL(rent->getRentStartTime(), boost::posix_time::second_clock::local_time());
        BOOST_CHECK_EQUAL(rent->getStadium(),stadium);

    }


    BOOST_AUTO_TEST_CASE(EndRentTest){
        StadiumPtr stadium(new Stadium(500,"Grass"));
        ClientPtr client1 (new Client("KAcper","Zielona 4/20"));

        RentPtr rent(new Rent(stadium,client1));

        boost::posix_time::ptime p;

        p = boost::posix_time::second_clock::local_time();

        p += boost::posix_time::hours(5);

        rent->endRent(p);

        BOOST_CHECK_EQUAL(rent->getPrice(), 500);

    }

    BOOST_AUTO_TEST_CASE(EndRentTestExepction){
        StadiumPtr stadium(new Stadium(500,"Grass"));
        ClientPtr client1 (new Client("KAcper","Zielona 4/20"));

        RentPtr rent(new Rent(stadium,client1));

        boost::posix_time::ptime p;

        p = boost::posix_time::second_clock::local_time();

        p -= boost::posix_time::hours(5);

        BOOST_CHECK_THROW(rent->endRent(p),RentException);

    }




BOOST_AUTO_TEST_SUITE_END()


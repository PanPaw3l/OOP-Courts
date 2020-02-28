//
// Created by pobi on 16.01.19.
//


#include <boost/test/unit_test.hpp>

#include "Stadium.h"
#include <StadiumRealGrass.h>
#include <StadiumAsphalt.h>
#include <StadiumSyntheticGrass.h>
#include <stdexcept>

BOOST_AUTO_TEST_SUITE(StadiumSuiteCorrect)

    BOOST_AUTO_TEST_CASE(StadiumCreateRealGrassTest) {
        StadiumRealGrassPtr realGrassPtr(new StadiumRealGrass(1400,"Grass"));
        BOOST_CHECK_EQUAL(realGrassPtr->getCapacity(),1400);
        BOOST_CHECK_EQUAL(realGrassPtr->getSurface(),"Grass");
        BOOST_CHECK_EQUAL(realGrassPtr->stadiumPrice(),50);
    }

    BOOST_AUTO_TEST_CASE(StadiumCreateSyntheticGrassTest) {
        StadiumSyntheticGrassPtr syntheticGrassPtr(new StadiumSyntheticGrass(1600,"Plastic","Orange"));
        BOOST_CHECK_EQUAL(syntheticGrassPtr->getCapacity(),1600);
        BOOST_CHECK_EQUAL(syntheticGrassPtr->getSurface(),"Plastic");
        BOOST_CHECK_EQUAL(syntheticGrassPtr->getSyntheticGrassColor(),"Orange");
        BOOST_CHECK_EQUAL(syntheticGrassPtr->stadiumPrice(),70);
    }

    BOOST_AUTO_TEST_CASE(StadiumCreateAsphaltsPositiveTest) {
        StadiumAsphaltPtr asphaltPtr(new StadiumAsphalt(600,"Asphalt","Good"));
        BOOST_CHECK_EQUAL(asphaltPtr->getCapacity(),600);
        BOOST_CHECK_EQUAL(asphaltPtr->getSurface(),"Asphalt");
        BOOST_CHECK_EQUAL((int)asphaltPtr->stadiumPrice(),120);
    }

    BOOST_AUTO_TEST_CASE(StadiumCreateAsphaltsNegativeTest) {
    //    StadiumAsphaltPtr asphaltPtr(new StadiumAsphalt(600,"Asphalt","LOLnotWorking"));
        BOOST_CHECK_THROW(new StadiumAsphalt(600,"Asphalt","LOLnotWorking"), std::runtime_error);
    }


BOOST_AUTO_TEST_SUITE_END()


//
// Created by pobi on 17.01.19.
//

//
// Created by pobi on 15.01.19.
//

#include <boost/test/unit_test.hpp>

#include "Stadium.h"
#include "StadiumManager.h"
#include "StadiumRepository.h"
#include "StadiumAsphalt.h"
#include "StadiumRealGrass.h"
#include "StadiumSyntheticGrass.h"


BOOST_AUTO_TEST_SUITE(StadiumsManagerTest)

    BOOST_AUTO_TEST_CASE(addStadiumCase) {


        StadiumManagerPtr stadiumsManager(new StadiumManager());

        StadiumRealGrassPtr realGrassPtr(new StadiumRealGrass(1400,"Grass"));
        StadiumSyntheticGrassPtr syntheticGrassPtr(new StadiumSyntheticGrass(1600,"Plastic","Orange"));
        StadiumAsphaltPtr asphaltPtr(new StadiumAsphalt(600,"Asphalt","Good"));


        BOOST_CHECK_EQUAL(stadiumsManager->getNumberOfStadiums(),0);

        stadiumsManager->newStadium(realGrassPtr);
        BOOST_CHECK_EQUAL(stadiumsManager->getNumberOfStadiums(),1);


    }

    BOOST_AUTO_TEST_CASE(removeStadiumCase) {


        StadiumManagerPtr stadiumsManager(new StadiumManager());

        StadiumRealGrassPtr realGrassPtr(new StadiumRealGrass(1400,"Grass"));
        StadiumSyntheticGrassPtr syntheticGrassPtr(new StadiumSyntheticGrass(1600,"Plastic","Orange"));
        StadiumAsphaltPtr asphaltPtr(new StadiumAsphalt(600,"Asphalt","Good"));



        stadiumsManager->newStadium(realGrassPtr);
        stadiumsManager->newStadium(syntheticGrassPtr);
        stadiumsManager->newStadium(asphaltPtr);


        BOOST_CHECK_EQUAL(stadiumsManager->getNumberOfStadiums(),3);

        stadiumsManager->deleteStadium(asphaltPtr);

        BOOST_CHECK_EQUAL(stadiumsManager->getNumberOfStadiums(),2);

    }

BOOST_AUTO_TEST_SUITE_END()


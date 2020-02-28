//
// Created by pobi on 17.01.19.
//


#include <boost/test/unit_test.hpp>
#include <StadiumManager.h>

#include "Rent.h"
#include "RentManager.h"
#include "RentRepository.h"

#include "StadiumAsphalt.h"
#include "StadiumRealGrass.h"
#include "StadiumSyntheticGrass.h"

#include "ClientsManager.h"


BOOST_AUTO_TEST_SUITE(RentManagerTest)



    BOOST_AUTO_TEST_CASE(addRentTest) {

        RentManagerPtr rentManagerPtr(new RentManager());
        ClientsManagerPtr clientsManager(new ClientsManager());

        StadiumManagerPtr stadiumsManager( new StadiumManager());

        StadiumPtr realGrassPtr(new StadiumRealGrass(1400,"Grass"));
        StadiumSyntheticGrassPtr syntheticGrassPtr(new StadiumSyntheticGrass(1600,"Plastic","Orange"));
        StadiumAsphaltPtr asphaltPtr(new StadiumAsphalt(600,"Asphalt","Good"));

        ClientPtr client1 (new Client("KAcper","Zielona 4/20"));

        rentManagerPtr->newRent(realGrassPtr,client1);

        BOOST_CHECK_EQUAL(rentManagerPtr->getNumberOfRents(),1);


        }

        BOOST_AUTO_TEST_CASE(removeStadiumCase) {

        RentManagerPtr rentManagerPtr(new RentManager());
        ClientsManagerPtr clientsManager(new ClientsManager());

        StadiumManagerPtr stadiumsManager( new StadiumManager());

        StadiumPtr realGrassPtr(new StadiumRealGrass(1400,"Grass"));
        StadiumPtr syntheticGrassPtr(new StadiumSyntheticGrass(1600,"Plastic","Orange"));
        StadiumPtr asphaltPtr(new StadiumAsphalt(600,"Asphalt","Good"));

        ClientPtr client1 (new Client("KAcper","Zielona 4/20"));

        rentManagerPtr->newRent(realGrassPtr,client1);
        rentManagerPtr->newRent(syntheticGrassPtr,client1);
        rentManagerPtr->newRent(asphaltPtr,client1);

        BOOST_CHECK_EQUAL(rentManagerPtr->getNumberOfRents(),3);

        rentManagerPtr->deleteRent(rentManagerPtr->getRentByIndex(2));

        BOOST_CHECK_EQUAL(rentManagerPtr->getNumberOfRents(),2);


    }

BOOST_AUTO_TEST_SUITE_END()


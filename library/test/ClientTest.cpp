//
// Created by pobi on 02.11.18.
//

#include <boost/test/unit_test.hpp>

#include "Client.h"
#include "NormalClient.h"
#include "VipClient.h"

BOOST_AUTO_TEST_SUITE(ClientSuiteCorrect)

    BOOST_AUTO_TEST_CASE(ClientFirstNameCase) {

    ClientPtr client1 (new Client("KAcper","Zielona 4/20"));
        BOOST_REQUIRE_EQUAL(client1->getName(), "KAcper");
    }

    BOOST_AUTO_TEST_CASE(ClientTypeTest) {

        ClientPtr client1 (new Client("KAcper","Zielona 4/20"));
        BOOST_REQUIRE_EQUAL(client1->getClientType()->clientDiscout(), 1.0);

        vipClientPtr vipClient( new VipClient() );


        client1->changeClientType(vipClient);

        BOOST_REQUIRE_EQUAL((float)client1->getClientType()->clientDiscout(), (float)0.420);
    }

BOOST_AUTO_TEST_SUITE_END()


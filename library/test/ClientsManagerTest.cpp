//
// Created by pobi on 15.01.19.
//

#include <boost/test/unit_test.hpp>

#include "Client.h"
#include "ClientsManager.h"
#include "ClientsRepository.h"


BOOST_AUTO_TEST_SUITE(ClientsManagerCorrect)

    BOOST_AUTO_TEST_CASE(AddingClientsCase) {

        ClientsManagerPtr clientsManager(new ClientsManager());
        BOOST_CHECK_EQUAL(clientsManager->getNumberOfClients(),0);

        clientsManager->newClient("Kacper","Zielona 420");
        BOOST_CHECK_EQUAL(clientsManager->getNumberOfClients(),1);

        clientsManager->newClient("Kacper","Zielona 421");
        clientsManager->newClient("Kacper","Zielona 422");
        clientsManager->newClient("Kacper","Zielona 423");
        BOOST_CHECK_EQUAL(clientsManager->getNumberOfClients(),4);

    }
    BOOST_AUTO_TEST_CASE(RemovingClientsCase) {

        ClientsManagerPtr clientsManager(new ClientsManager());

        BOOST_CHECK_EQUAL(clientsManager->getNumberOfClients(),0);

        clientsManager->newClient("Kacper","Zielona 420");
        BOOST_CHECK_EQUAL(clientsManager->getNumberOfClients(),1);

        clientsManager->newClient("Kacper","Zielona 421");
        clientsManager->newClient("Kacper","Zielona 422");
        clientsManager->newClient("Kacper","Zielona 423");
        BOOST_CHECK_EQUAL(clientsManager->getNumberOfClients(),4);

        ClientPtr clientToRemove = clientsManager->getClientByIndex(2);
        clientsManager->deleteClient(clientToRemove);
        BOOST_CHECK_EQUAL(clientsManager->getNumberOfClients(),3);

    }

BOOST_AUTO_TEST_SUITE_END()


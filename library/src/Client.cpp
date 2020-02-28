//
// Created by pobi on 02.11.18.
//

#include <iostream>
#include "Client.h"
#include "NormalClient.h"
#include "VipClient.h"
#include <boost/uuid/uuid.hpp>            // uuid class
#include <boost/uuid/uuid_generators.hpp> // generators
#include <boost/uuid/uuid_io.hpp>         // streaming operators etc.

using namespace std;


Client::Client(string name, string adress) {

    this->name = name;
    this->adress = adress;
    this->id = boost::uuids::random_generator()();
    normalClientPtr clientTypePtr( new NormalClient());
    this->clientType = clientTypePtr;
}

Client::~Client() {
}

string Client::getName(){
    return name;
}

void Client::changeClientType(ClientTypePtr clientTypePtr1) {
    this->clientType = clientTypePtr1;
}

string Client::getAdress() {
    return adress;
}

boost::uuids::uuid Client::getId() {
    return id;
}


ClientTypePtr Client::getClientType() {
    return clientType;
}



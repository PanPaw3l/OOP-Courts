//
// Created by pobi on 02.11.18.
//

#ifndef OOPPROJECT_CLIENT_H
#define OOPPROJECT_CLIENT_H

#include <string>
#include <vector>
#include <boost/uuid/uuid.hpp>            // uuid class
#include <boost/uuid/uuid_generators.hpp> // generators
#include "ClientType.h"
#include <memory>


class Client{
public:
    Client(string name, string adress);
    virtual ~Client();

    std::string getName();

    std::string getAdress();

    boost::uuids::uuid getId();

    void changeClientType(ClientTypePtr clientTypePtr1);

    ClientTypePtr getClientType();

private:
    std::string name;
    std::string adress;
    boost::uuids::uuid id;
    ClientTypePtr clientType;

};


typedef std::shared_ptr<Client> ClientPtr;

#endif //OOPPROJECT_CLIENT_H

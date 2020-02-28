//
// Created by pobi on 15.01.19.
//

#ifndef OOPPROJECT_CLIENTSMANAGER_H
#define OOPPROJECT_CLIENTSMANAGER_H

#include "ClientsRepository.h"
#include "Client.h"
#include "string"
#include "memory"

class ClientsManager{

public:
    ClientsManager();

    const ClientsRepository &getClients() const;

    virtual ~ClientsManager();

    void newClient(std::string name, std::string adress);
    void deleteClient(ClientPtr client);

    int getNumberOfClients();

    ClientPtr getClientByIndex(int index);

private:
    ClientsRepository clients;
};

typedef std::shared_ptr<ClientsManager> ClientsManagerPtr;


#endif //OOPPROJECT_CLIENTSMANAGER_H

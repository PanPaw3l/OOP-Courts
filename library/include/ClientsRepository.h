//
// Created by pobi on 15.01.19.
//

#ifndef OOPPROJECT_CLIENTSREPOSITORY_H
#define OOPPROJECT_CLIENTSREPOSITORY_H


#include "Client.h"
#include <vector>

using namespace std;

class ClientsRepository{
public:

    ClientsRepository();

    virtual ~ClientsRepository();

    const vector<ClientPtr> &getClients() const;

    void addClient(ClientPtr client);
    void removeClient(ClientPtr client);

private:
    vector <ClientPtr> clients;
};



#endif //OOPPROJECT_CLIENTSREPOSITORY_H

//
// Created by pobi on 15.01.19.
//

#include "ClientsRepository.h"

ClientsRepository::ClientsRepository() {}

const vector<ClientPtr> &ClientsRepository::getClients() const {
    return clients;
}

void ClientsRepository::addClient(ClientPtr client) {
    clients.push_back(client);
}

void ClientsRepository::removeClient(ClientPtr client) {
    for (int i = 0; i < clients.size(); ++i) {
        if(clients[i]==client){
            clients.erase(clients.begin() + i);
            return;
        }
    }
}

ClientsRepository::~ClientsRepository() {

}

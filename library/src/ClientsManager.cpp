//
// Created by pobi on 15.01.19.
//
#include "ClientsManager.h"
#include <ClientsRepository.h>
#include "algorithm"

using namespace std;

ClientsManager::ClientsManager() {}

const ClientsRepository &ClientsManager::getClients() const {
    return clients;
}

ClientsManager::~ClientsManager() {

}

void ClientsManager::newClient(std::string name, std::string adress) {
    ClientPtr client(new Client(name,adress));
    clients.addClient(client);
}

void ClientsManager::deleteClient(ClientPtr client) {
    find(clients.getClients().begin(), clients.getClients().end(), client) != clients.getClients().end();
    clients.removeClient(client);

}

int ClientsManager::getNumberOfClients() {
    return clients.getClients().size();
}

ClientPtr ClientsManager::getClientByIndex(int index) {
    return clients.getClients()[index];
}

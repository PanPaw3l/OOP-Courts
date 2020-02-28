//
// Created by pobi on 17.01.19.
//

#ifndef OOPPROJECT_RENTMANAGER_H
#define OOPPROJECT_RENTMANAGER_H

#include "RentRepository.h"
#include "Rent.h"
#include "string"
#include "memory"

using namespace std;

class RentManager {
public:
    RentManager();
    virtual ~RentManager();

    void newRent(StadiumPtr &stadium,ClientPtr &clientPtr);
    void deleteRent(RentPtr rent);

    int getNumberOfRents();

    RentPtr getRentByIndex(int index);
private:
    RentRepository rents;
};

typedef shared_ptr<RentManager> RentManagerPtr;

#endif //OOPPROJECT_RENTMANAGER_H

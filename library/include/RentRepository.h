//
// Created by pobi on 16.01.19.
//

#ifndef OOPPROJECT_RENTREPO_H
#define OOPPROJECT_RENTREPO_H

#include "Rent.h"

class RentRepository {
    public:
        RentRepository();
        virtual ~RentRepository();

        void addRent(RentPtr rent);
        void removeRent(RentPtr rent);

    const vector<RentPtr> &getRents() const;

private:
        vector <RentPtr> rents;
};


#endif //OOPPROJECT_RENTREPO_H

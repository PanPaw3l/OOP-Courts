//
// Created by pobi on 15.01.19.
//

#ifndef OOPPROJECT_STADIUMREPO_H
#define OOPPROJECT_STADIUMREPO_H

#include "Stadium.h"
#include <vector>

using namespace std;

class StadiumRepository {
public:

    StadiumRepository();
    virtual ~StadiumRepository();

    void addStadium(StadiumPtr stadium);
    void removeStadium(StadiumPtr stadium);

    const vector<StadiumPtr> &getStadiums() const;

private:
    vector <StadiumPtr> stadiums;
};


#endif //OOPPROJECT_STADIUMREPO_H

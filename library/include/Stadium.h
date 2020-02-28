//
// Created by pobi on 11.01.19.
//

#ifndef OOPPROJECT_STADIUM_H
#define OOPPROJECT_STADIUM_H

#include <string>
#include <memory>

class Stadium{
public:
    Stadium(int capacity, const std::string &surface);

    virtual ~Stadium();

    int getCapacity() const;

    const std::string &getSurface() const;
    virtual float stadiumPrice();
private:
    int capacity;
    std::string surface;
};

typedef std::shared_ptr<Stadium> StadiumPtr;

#endif //OOPPROJECT_STADIUM_H

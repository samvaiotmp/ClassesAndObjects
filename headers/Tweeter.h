#pragma once

#include <string>
#include "Person.h"
class Tweeter:
    public Person
{
private:
    std::string twitterhandle;
public:
    Tweeter(std::string first,std::string last,int arbitrary, std::string handle);
    ~Tweeter(void);
    std::string GetName() const;
};
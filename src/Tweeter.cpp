#include "Tweeter.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

//limited use of namespace instead of the entire std

Tweeter::Tweeter(string first, string last, int arbitrary, string handle): Person(first,last,arbitrary),
                                                                           twitterhandle(handle)
{

}

Tweeter::~Tweeter()
{
}

std::string Tweeter::GetName() const
{
    return Person::GetName() + " " + twitterhandle;
}
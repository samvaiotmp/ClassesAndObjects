#include "Tweeter.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

//limited use of namespace instead of the entire std

Tweeter::Tweeter(string first, string last, int arbitrary, string handle): Person(first,last,arbitrary),twitterhandle(handle)
{
    cout << "constructing twitter" << twitterhandle << endl;

}

Tweeter::~Tweeter()
{
    cout << "destructing twitter" << twitterhandle << endl;
}
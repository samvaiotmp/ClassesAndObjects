//
// Created by warne on 6/6/2017.
//
#include "Person.h"
#include "Tweeter.h"
#include <iostream>
#include "Status.h"

using namespace std;

int main()
{
    Person p1("Kate","Gregory",123);
    //braces are to test scope and not needed for normal operations
    {
        Tweeter t1("Someone", "else", 456, "@whoever");
    }
    cout << "after innermost block" << endl;
    Status s = Pending;
    cout << s << endl;
    s = Approved;
    cout << s << endl;
    return 0;
}

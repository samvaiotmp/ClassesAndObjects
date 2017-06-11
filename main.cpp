//
// Created by warne on 6/6/2017.
//
#include "Person.h"
#include "Tweeter.h"
#include <iostream>
#include "Status.h"

using namespace std;

int main2()
{
    Person p1("Kate","Gregory",123);
    Person p2("Someone", "Else", 456);
    cout << "p1 is ";
    if (!(p1 < p2))
        cout << "not ";
    cout << "less than p2" << endl;

    cout << "p1  is ";
    if (!(p1 < 300))
        cout << "not ";
    cout << "less than 300" << endl;

    cout << "300 is ";
    if (!(300 < p1))
        cout << "not ";
    cout << "less than p1" << endl;
    //braces are to test scope and not needed for normal operations
    {
        Tweeter t1("Someone", "else", 456, "@whoever");
    }
    cout << "after innermost block" << endl;
    cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;
    p1.SetNumber(124);
    cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;
    Status s = Pending;
    cout << s << endl;
    s = Approved;
    cout << s << endl;
    return 0;
}

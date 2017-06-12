#include <iostream>
#include "Person.h"
#include "Tweeter.h"
using namespace std;
#include "Resource.h"


int main()
{
    Tweeter t("Kate", "Gregory", 123, "@gregcons");
    Person *p = &t;
    Tweeter* pt = static_cast<Tweeter*>(p);
    cout << pt->GetName() << endl;

    Resource f("local");
    Tweeter* pi = dynamic_cast<Tweeter*>(&f);
    if(pi)
    {
        cout << pi->GetName() << endl;
    } else {
        cout << "Resource can't be cast to tweeter" << endl;
    }
    return 0;
}


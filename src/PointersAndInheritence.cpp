#include "Person.h"
#include "Tweeter.h"
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    Person* Kate = new Person("Kate", "Gregory", 456);
    Tweeter* KateGregcons = new Tweeter("Kate","Gregory",567,"@Gregor");

    Person* pKateGregcons = KateGregcons;

    cout << Kate->GetName() << endl;
    cout << KateGregcons->GetName() << endl;
    cout << pKateGregcons->GetName() << endl;

    delete KateGregcons;

    auto spKate=make_shared<Person>("Skate","pGregory", 458);
    cout << spKate->GetName() << endl;

    Person localP("Local", "Person", 333);
    //Tweeter localT = localP;

    Tweeter localT2("Local", "Tweeter", 444, "@local");
    Person& localP2 = localT2;
    cout << localP2.GetName() << endl;

    return 0;
}
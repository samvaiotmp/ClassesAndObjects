#include <string>
#ifndef _Person_H
#define _Person_H
class Person
{
private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;
public:
    Person(std::string first,std::string last,int arbitrary);
    virtual ~Person();
    virtual std::string GetName() const;
    int GetNumber() {return arbitrarynumber;}
    void SetNumber(int number) {arbitrarynumber = number;}
    bool operator<(Person& p);
    bool operator<(int i);
    friend bool operator<(int i, Person& p); //friend allows function to access private variable inside it
};
#endif
//
// Created by johne on 16/8/2020.
//

#ifndef BASIC_00_EXAMPLE_PERSON_H
#define BASIC_00_EXAMPLE_PERSON_H
#include <string>
#include <ostream>
#include <sstream>
using namespace std;

class Person {
protected:
    string firstname;
    string lastname;
    int documentid;
    int age;
public:
    Person();
    Person(string, string, int, int);
    void setFirstname(string);
    void setLastname(string);
    void setDocumentid(int);
    void setAge(int);
    string getFirstname();
    string getLastname();
    int getDocumentid();
    int getAge();
    virtual double salary();
    virtual string toString();
    virtual ~Person();
};


#endif //BASIC_00_EXAMPLE_PERSON_H

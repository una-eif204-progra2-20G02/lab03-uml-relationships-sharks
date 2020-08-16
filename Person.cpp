//
// Created by johne on 16/8/2020.
//

#include "Person.h"

Person::Person()
{
  string firstname = "Sin Definir";
  string lastname = "Sin Definir";
  int documentid = 0;
  int age = 0;
}

Person::Person(string firstname, string lastname, int documentid, int age)
{
  firstname = firstname;
  lastname = lastname;
  documentid = documentid;
  age = age;
}
void Person::setFirstname(string firstname) {this->firstname = firstname;}
void Person::setLastname(string lastname) {this ->lastname = lastname;}
void Person::setDocumentid(int documentid) {this->documentid = documentid;}
void Person::setAge(int age) {this->age = age;}

string Person::getFirstname() {return firstname; }
string Person::getLastname() {return lastname;  }
int Person::getDocumentid() {return documentid;}
int Person::getAge() {return age;}

Person::~Person(){

}

double Person::salary(){
  return 0;
}

string Person::toString()
{
  stringstream x;

  x <<"Persona: "<<firstname<<","<<lastname<<endl;
  x <<"Doc Id: "<<documentid<<endl;
  x<<"Age: "<<age<<endl;

  return x.str();
}
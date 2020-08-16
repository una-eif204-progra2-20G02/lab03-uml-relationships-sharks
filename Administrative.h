//
// Created by Adrian Cortes on 16-ago.-20.
//

#ifndef LAB03_UML_ADMINISTRATIVE_H
#define LAB03_UML_ADMINISTRATIVE_H
#include "Person.h"

class Administrative: public Person {

public:
  Administrative();
  Administrative(double);
  Administrative(string,string,int, int,double);
  void setMonthlySalary(double);
  double getMonthlySalary();
  double salary();
  string toString();


private:
  double monthlySalary;
#endif //LAB03_UML_EXAMPLE_ADMINISTRATIVE_H

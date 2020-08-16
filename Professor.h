//
// Created by johne on 16/8/2020.
//

#ifndef BASIC_00_EXAMPLE_PROFESSOR_H
#define BASIC_00_EXAMPLE_PROFESSOR_H
#include "Person.h"
#include<iostream>
#include<sstream>
using namespace std;

class Professor: public Person{
private:
    double monthlySalary;
    double commissionRate;
public:
    Professor();
    Professor(string , string, int, int, double, double);
    virtual double getMonthySalary();
    virtual double getCommissionRate();
    virtual void setMonthySalary(double);
    virtual void setCommissionRate(double);
    double salary() override;
    string toString()override;
    double commission();


};


#endif //BASIC_00_EXAMPLE_PROFESSOR_H

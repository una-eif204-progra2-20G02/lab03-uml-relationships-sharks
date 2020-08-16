//
// Created by johne on 16/8/2020.
//

#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"

Professor::Professor():Person(), monthlySalary(0),commissionRate(0){

}

Professor::Professor(string firstname,string lastname, int documentid, int age, double _monthlySalary, double _commissionRate): Person(firstname, lastname, documentid, age), monthlySalary(_monthlySalary), commissionRate(_commissionRate){

}

void Professor::setCommissionRate(double commissionRate){
    this->commissionRate=commissionRate;
}

void Professor::setMonthySalary(double monthlySalary){
    this->monthlySalary=monthlySalary;
}

double Professor::getMonthySalary(){
    return monthlySalary;
}

double Professor::getCommissionRate(){
    return commissionRate;
}

double Professor::salary()
{
    return monthlySalary;
}

double Professor::commission()
{
    commissionRate = monthlySalary * 0.05;
    return commissionRate;
}

string Professor::toString()
{
    stringstream s;
    s<<"Professor Information: "<<firstname<<" "<<lastname<<endl;
    s<<"Doc Id: "<< documentid <<endl;
    s<<"Age: "<< age <<endl;
    s<<"Monthly Salary: " <<fixed<<setprecision(2)<< monthlySalary << endl;
    s<<"Commission Rate: "<<commission()<<endl;

    return s.str();
}
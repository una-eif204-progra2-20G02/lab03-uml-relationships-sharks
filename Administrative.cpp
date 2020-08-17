//
// Created by Adrian Cortes on 16-ago.-20.
//


#include <sstream>
#include <iomanip>
#include "Administrative.h"

Administrative::Administrative():Person(){
  monthlySalary = 0.0;
}

Administrative::Administrative(double monthlySalary){
  this->monthlySalary = monthlySalary;
}

Administrative::Administrative(string firstName, string lastName, int documentId, int age, double monthlySalary) :Person(firstName, lastName,documentId, age){
  this->monthlySalary = monthlySalary;
}

void Administrative::setMonthlySalary(double monthlySalary){
  this->monthlySalary = monthlySalary;
}

double Administrative::getMonthlySalary(){
  return monthlySalary;
}

double Administrative::salary(){
  return monthlySalary;
}

string Administrative::toString() {
  stringstream t;
  t<<"Administrative Information:"<<getFirstname()<<" "<<getLastname()<<endl;
  t<<"Doc Id: "<<getDocumentid()<<endl; 
  t<<getAge()<<"age"<<endl;
  t<<"Monthly Salary: "<< setprecision(2) << fixed <<salary()<<endl;
  return t.str();
} 
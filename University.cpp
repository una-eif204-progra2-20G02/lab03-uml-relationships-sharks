//
// Created by Adrian Cortes on 8/2/20.
//
#include <sstream>
#include "University.h"

University::University(){
  name = " ";
}

University::University(string name){
  this->name = name;
}

University::University(string name, Professor *professor,Administrative *administrative,Student *student){
  this->name = name;
  this->professor = professor;
  this->administrative = administrative;
  this->student = student;
}

string University::getName(){
  return name;
}

void University::setName(string name){
  this->name = name;
}

Professor* University::getProfessor(){
  return professor;
}

Student* University::getStudent(){
  return student;
}

void University::setProfessor(Professor *professor){
  this->professor = professor;
}

Administrative* University::getAdministrative(){
  return administrative;
}

void University::setAdministrative(Administrative *administrative){
  this->administrative = administrative;
}

void University::setStudent(Student *student){
  this->student = student;
}

void University::addProfessor(Professor* professor){
    professorList.push_back(professor);
}

string University::getListProfessor(){
  stringstream u;
  for(int i = 0 ; i < professorList.size();i++){
    u<<professorList[i]->toString();
  }
  return u.str();
}

void University::addAdministrative(Administrative* administrative){
    administrativeList.push_back(administrative);
}

void University::addStudent(Student* student){
    studentList.push_back(student);
}

string University::getListAdministrative(){
  stringstream u;
  for(int i = 0 ; i < administrativeList.size();i++){
    u<<administrativeList[i]->toString();
  }
  return u.str();
}

string University::getListStudent(){
  stringstream u;
  for(int i = 0 ; i < studentList.size();i++){
    u<<studentList[i]->toString();
  }
  return u.str();
}
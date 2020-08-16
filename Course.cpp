//
// Created by Karina Hernandez on 16-ago.-20.
//

#include "Course.h"

Course::Course(){
  amountOfCredits = 0;
  topic = " ";
}

Course::Course(int amount,string topic){
  amountOfCredits = amount;
  this->topic = topic;
}

int Course::getAmountOfCredits(){
  return amountOfCredits;
}

string Course::getTopic(){
  return topic;
}

void Course::setAmountOfCredits(int credits){
  amountOfCredits = credits;

}

void Course::setTopic(string topic){
  this->topic = topic;
}

void Course::addStudent(Student s){
  studentList.push_back(s);
}

vector<Student> Course::getStudentList(){
  return studentList;
}
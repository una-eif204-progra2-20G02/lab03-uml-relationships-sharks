//
// Created by Karina Hernández on 16-ago.-20.
//

#include "Student.h"

Student::Student():Person(){

}

Student::Student(string first, string last, int id, int age):Person(first,last,id,age){

}

void Student::addCourses(Course c){
  courses.push_back(c);
}

vector<Course> Student::getCourseList(){
  return courses;
}

string Student::Person::toString(){
  stringstream s;
  s<<"Student Name: "<<getFirstname()<<" "<<getLastname()<<endl;
  s<<"Document ID: "<<getDocumentid()<<endl;
  s<<"Age: "<<getAge()<<endl;
  return s.str();
}
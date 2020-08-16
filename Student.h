//
// Created by Karina Hernandez on 16-ago.-20.
//

#ifndef BASIC_00_EXAMPLE_STUDENT_H
#define BASIC_00_EXAMPLE_STUDENT_H

#include "Course.h"
#include <vector>
#include "Person.h"

class Student: public Person {
public:
  Student();
  Student(string,string,int,int);
  void addCourses(Course);
  vector<Course> getCourseList();
  string toString();

private:
  vector<Course> courses;
};


#endif //BASIC_00_EXAMPLE_STUDENT_H

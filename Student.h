//
// Created by Karina Hernandez on 16-ago.-20.
//

#ifndef BASIC_00_EXAMPLE_STUDENT_H
#define BASIC_00_EXAMPLE_STUDENT_H

#include "Course.h"
#include "Person.h"

class Student: public Person {
  Student();
  Student();
private:
  vector<Course> Courses;
};


#endif //BASIC_00_EXAMPLE_STUDENT_H

//
// Created by Karina Hernandez on 16-ago.-20.
//

#ifndef BASIC_00_EXAMPLE_COURSE_H
#define BASIC_00_EXAMPLE_COURSE_H

#include "Student.h"
#include <vector>

class Course {

public:

  Course();
  Course(int,string);
  int getAmountOfCredits();
  string getTopic();
  void setAmountOfCredits(int);
  void setTopic(string);
  void addStudent(student);
  vector<Student> getStudentList();

private:

  string topic;
  int amountOfCredits;
  vector<Student> studentList;
};


#endif //BASIC_00_EXAMPLE_COURSE_H

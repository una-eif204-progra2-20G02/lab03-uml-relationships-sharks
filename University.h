//
// Created by Adrian Cortes on 16/8/20.
//

#ifndef BASIC_00_EXAMPLE_UNIVERSITY_H
#define BASIC_00_EXAMPLE_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"
#include "Student.h"

class University {
  public:
    University();
    University(string);
    University(string,Professor*,Administrative*);
    string getName();
    void setName(string);
    Professor* getProfessor();
    void setProfessor(Professor *professor);
    Administrative* getAdministrative();
    void setAdministrative(Administrative *administrative);
    void addProfessor(Professor *professor);
    string getListProfessor();
    void addAdministrative(Administrative *administrative);
    string getListAdministrative();

  private:
    string name;
    Professor* professor;
    Administrative* administrative;
    Student* student;
    vector<Professor*> professorList;
    vector<Administrative*> administrativeList;
    vector<Student*> studentList;
};


#endif //BASIC_00_EXAMPLE_UNIVERSITY_H

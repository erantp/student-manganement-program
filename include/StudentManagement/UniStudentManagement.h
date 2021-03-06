#ifndef UNISTUDENTMANAGEMENT_H
#define UNISTUDENTMANAGEMENT_H

#include "StudentManagement.h"
#include "../Student/Student.h"
#include "../Student/UniStudent.h"
#include <iostream>
class UniStudentManagment : public StudentManagement
{
public:
    UniStudentManagment();
    ~UniStudentManagment();
    void addStudent(
        std::string name,
        std::string day_of_birth,
        std::string school_name,
        std::string course_name);
};

#endif // !UNISTUDENT_MANAGEMENT_H
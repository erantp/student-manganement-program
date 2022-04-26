#ifndef UNI_STUDENT_H
#define UNI_STUDENT_H
#include "Student.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
class UniStudent : public Student
{
private:
    int n_semester_;
    int n_assignment_;
    int n_test_;
    int n_exam_;

public:
    UniStudent();
    UniStudent(
        std::string name,
        std::string day_of_birth,
        std::string school_name,
        std::string course_name_);
    int getNumberOfSemesters();
    int getNumberOfAssignments();
    int getNumberOfTests();
    int getNumberOfExams();
    void printStudentInfo();
};





#endif // !UNI_STUDENT_H
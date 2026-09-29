#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

// Derived class: Student "is a" Person
class Student : public Person {
private:
    int rollNo;
    std::string course;
    double cgpa;

public:
    Student();
    Student(const std::string& name, int age, int rollNo,
            const std::string& course, double cgpa);

    int getRollNo() const;
    double getCgpa() const;
    void setCgpa(double newCgpa);                // validates 0-10

    void display() const override;
};

#endif

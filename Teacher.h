#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"

// Derived class: Teacher "is a" Person
class Teacher : public Person {
private:
    std::string subject;
    int experienceYears;

public:
    Teacher();
    Teacher(const std::string& name, int age,
            const std::string& subject, int experienceYears);

    std::string getSubject() const;
    int getExperienceYears() const;

    void display() const override;
};

#endif

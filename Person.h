#ifndef PERSON_H
#define PERSON_H

#include <string>

// Base class: demonstrates encapsulation (private data, public accessors)
class Person {
private:
    std::string name;
    int age;

public:
    Person();                                    // default constructor
    Person(const std::string& name, int age);    // parameterized constructor
    virtual ~Person() = default;

    std::string getName() const;
    int getAge() const;
    void setName(const std::string& newName);
    void setAge(int newAge);                     // validates input

    virtual void display() const;
};

#endif

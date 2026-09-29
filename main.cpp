#include <iostream>
#include <memory>
#include <vector>
#include "Student.h"
#include "Teacher.h"

int main() {
    std::cout << "=== Constructors ===\n";
    Student s1;                                              // default
    Student s2("Sangeeta", 20, 101, "B.Tech IT", 8.5);       // parameterized
    Teacher t1("Mrs. Sharma", 38, "C++ Programming", 12);
    s1.display();
    s2.display();
    t1.display();

    std::cout << "\n=== Encapsulation (getters/setters + validation) ===\n";
    s2.setCgpa(9.1);
    s2.setCgpa(15.0);      // rejected
    s2.setAge(-5);         // rejected
    std::cout << "Updated CGPA: " << s2.getCgpa() << "\n";

    std::cout << "\n=== Inheritance + polymorphism ===\n";
    std::vector<std::unique_ptr<Person>> people;
    people.push_back(std::make_unique<Student>("Amit", 21, 102, "B.Tech CSE", 7.8));
    people.push_back(std::make_unique<Teacher>("Dr. Verma", 45, "Data Structures", 20));
    people.push_back(std::make_unique<Person>("Guest", 30));
    for (const auto& p : people) p->display();

    return 0;
}

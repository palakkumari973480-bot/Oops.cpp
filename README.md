# C++ OOP Demo: Classes, Constructors, Encapsulation & Inheritance

A small C++ project demonstrating core object-oriented concepts.

## Concepts Demonstrated
- **Classes & objects**: `Person`, `Student`, `Teacher`
- **Constructors**: default and parameterized (with initializer lists)
- **Encapsulation**: private data members, public getters/setters with validation
- **Inheritance**: `Student` and `Teacher` inherit from `Person`
- **Polymorphism**: `virtual display()` overridden in derived classes

## Project Structure
```
cpp-oop-project/
├── include/    Person.h  Student.h  Teacher.h
├── src/        Person.cpp  Student.cpp  Teacher.cpp  main.cpp
├── Makefile
└── README.md
```

## Requirements
- A C++17 compiler (g++ 7+ / clang / MSVC)

## Build & Run

**Using make (Linux / macOS / MinGW):**
```bash
make
./oop_demo
```

**Without make:**
```bash
g++ -std=c++17 -Iinclude src/*.cpp -o oop_demo
./oop_demo        # on Windows: oop_demo.exe
```

**Clean:** `make clean`

## Sample Output
```
=== Constructors ===
[Student] Name: Unknown, Age: 0
          Roll No: 0, Course: N/A, CGPA: 0
...
```

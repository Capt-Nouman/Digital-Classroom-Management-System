# Digital Classroom Management System

A C++ Object-Oriented Programming project developed as a 2nd Semester University Project.

The project demonstrates fundamental Object-Oriented Programming concepts through a simple Digital Classroom Management System with Student and Teacher roles and course management.

---

## 📌 Project Overview

The **Digital Classroom Management System** is a console-based C++ application designed to demonstrate the practical use of Object-Oriented Programming concepts.

The system contains a base `User` class with two derived classes:

- `Student`
- `Teacher`

It also includes a separate `Course` class for representing academic courses.

The project demonstrates inheritance, encapsulation, polymorphism, constructors, virtual functions, function overriding, dynamic memory, and object collections using `vector`.

---

## 🎯 Objectives

- Demonstrate the fundamentals of C++ Object-Oriented Programming.
- Implement classes and objects.
- Demonstrate inheritance using Student and Teacher roles.
- Implement runtime polymorphism.
- Demonstrate encapsulation using access specifiers.
- Use constructors for object initialization.
- Demonstrate function overriding and virtual functions.
- Manage multiple Course objects using `vector`.
- Implement a simple username and password based authentication system.

---

## ✨ Features

- Student Login
- Teacher Login
- Role Selection
- Student Dashboard
- Teacher Dashboard
- Course Display
- Runtime Polymorphism
- Role-Based Dashboard Behavior
- Multiple Course Objects using `vector`

---

## 🧠 Object-Oriented Programming Concepts

### 1. Classes and Objects

The project contains the following classes:

- `User`
- `Student`
- `Teacher`
- `Course`

Objects are created from these classes to represent users and courses.

---

### 2. Encapsulation

Encapsulation is demonstrated by controlling access to class data members.

The `Course` class keeps its data members private:

```cpp
class Course
{
private:
    string code;
    string title;
    string teacher;
};

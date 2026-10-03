
# 🎓 Digital Classroom Management System

<p align="center">
  <strong>A C++ Object-Oriented Programming Project</strong><br>
  2nd Semester — BS Computer Science
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus" alt="C++">
  <img src="https://img.shields.io/badge/Paradigm-OOP-orange?style=for-the-badge" alt="OOP">
  <img src="https://img.shields.io/badge/Semester-2nd%20Semester-green?style=for-the-badge" alt="Semester">
  <img src="https://img.shields.io/badge/Project-Academic-purple?style=for-the-badge" alt="Academic Project">
</p>

---

## 📌 Overview

**Digital Classroom Management System** is a C++ Object-Oriented Programming project developed as a **2nd Semester University Project**.

The project represents a simple academic environment containing different types of users and academic courses. It demonstrates the practical implementation of fundamental **C++ Object-Oriented Programming concepts** through a structured class hierarchy.

The system contains a base `User` class with two derived classes:

- `Student`
- `Teacher`

It also contains a separate `Course` class for representing academic courses.

---

## 🎯 Objectives

- Demonstrate fundamental C++ Object-Oriented Programming concepts.
- Implement classes and objects.
- Demonstrate inheritance.
- Implement runtime polymorphism.
- Demonstrate encapsulation.
- Use constructors for object initialization.
- Demonstrate function overriding.
- Use virtual functions.
- Apply access specifiers.
- Manage multiple objects using `vector`.
- Implement simple role-based authentication.

---

## ✨ Features

| Feature | Description |
|---|---|
| 🔐 Student Login | Authentication for Student role |
| 🔐 Teacher Login | Authentication for Teacher role |
| 👨‍🎓 Student Dashboard | Student-specific dashboard |
| 👨‍🏫 Teacher Dashboard | Teacher-specific dashboard |
| 📚 Course Display | Displays available academic courses |
| 🔄 Runtime Polymorphism | Role-specific behavior through virtual functions |
| 🧩 Object-Oriented Design | Uses classes, inheritance and polymorphism |
| 📦 Vector of Objects | Stores multiple `Course` objects |

---

# 🧠 Object-Oriented Programming Concepts

## 1. 📦 Classes and Objects

The project contains the following classes:

- `User`
- `Student`
- `Teacher`
- `Course`

These classes are used to create objects representing users and academic courses.

---

## 2. 🔒 Encapsulation

Encapsulation is demonstrated by controlling access to class data members.

The `Course` class contains private data members:

```cpp
class Course
{
private:
    string code;
    string title;
    string teacher;
};
````

This keeps the internal data of the `Course` class protected from direct external access.

---

## 3. 🧬 Inheritance

`Student` and `Teacher` inherit from the `User` base class.

```cpp
class Student : public User
```

```cpp
class Teacher : public User
```

This allows both derived classes to reuse the common properties and behavior of the `User` class.

---

## 4. 🔄 Polymorphism

Runtime polymorphism is implemented through the virtual `showDashboard()` function.

The base class contains:

```cpp
virtual void showDashboard()
```

The derived classes override this function:

```cpp
void showDashboard() override
```

A base-class pointer is used:

```cpp
User* currentUser = nullptr;
```

The appropriate dashboard is selected at runtime according to the actual object.

---

## 5. 🎭 Abstraction

The `User` class provides a common structure for different types of users.

`Student` and `Teacher` use the common functionality provided by the base class while providing their own dashboard behavior.

---

## 6. 🏗️ Constructors

Constructors are used to initialize objects.

### User Constructor

```cpp
User(string n, string r)
{
    name = n;
    role = r;
}
```

### Student Constructor

```cpp
Student(string n) : User(n, "Student") {}
```

### Teacher Constructor

```cpp
Teacher(string n) : User(n, "Teacher") {}
```

---

## 7. 🔁 Function Overriding

Both `Student` and `Teacher` override the `showDashboard()` function of the `User` class.

```cpp
void showDashboard() override
```

Each derived class provides its own implementation of the dashboard.

---

## 8. ⚡ Virtual Functions

The `showDashboard()` function is declared as virtual in the `User` class:

```cpp
virtual void showDashboard()
```

This allows the appropriate derived-class implementation to be called through a base-class pointer.

The `User` destructor is also virtual:

```cpp
virtual ~User() {}
```

---

## 9. 🔐 Access Specifiers

The project uses the following C++ access specifiers:

* `public`
* `protected`
* `private`

The `User` class uses protected members:

```cpp
protected:
    string name;
    string role;
```

The `Course` class uses private members:

```cpp
private:
    string code;
    string title;
    string teacher;
```

---

## 10. 💾 Dynamic Memory

Student and Teacher objects are dynamically created using `new`.

### Student

```cpp
currentUser = new Student("Student");
```

### Teacher

```cpp
currentUser = new Teacher("Teacher");
```

The allocated object is released using:

```cpp
delete currentUser;
```

---

## 11. 📚 Vector of Objects

The project uses:

```cpp
vector<Course> courses;
```

to store multiple `Course` objects.

The courses are then processed using a range-based `for` loop:

```cpp
for (Course &course : courses)
{
    course.display();
}
```

---

# 🏗️ Class Structure

```text
                    ┌───────────────┐
                    │     User      │
                    │  Base Class   │
                    └───────┬───────┘
                            │
                 ┌──────────┴──────────┐
                 │                     │
          ┌──────▼──────┐       ┌──────▼──────┐
          │   Student   │       │   Teacher   │
          │ Derived     │       │ Derived     │
          │ Class       │       │ Class       │
          └─────────────┘       └─────────────┘


                    ┌───────────────┐
                    │    Course     │
                    │     Class     │
                    └───────────────┘
```

### 👤 User

Base class containing:

* `name`
* `role`
* `showDashboard()`

### 👨‍🎓 Student

Derived from `User` and provides the Student Dashboard.

### 👨‍🏫 Teacher

Derived from `User` and provides the Teacher Dashboard.

### 📚 Course

Represents academic course information:

* Course Code
* Course Title
* Teacher

---

# 🔐 Authentication

The program asks the user for:

1. Username
2. Password
3. Role

### 👨‍🎓 Student Account

```text
Username: student
Password: student123
Role: Student
```

### 👨‍🏫 Teacher Account

```text
Username: teacher
Password: teacher123
Role: Teacher
```

If the credentials or selected role are incorrect, the program displays:

```text
Invalid username, password or role!
```

> **Note:** The credentials are hard-coded in the source code for educational demonstration purposes.

---

# 👨‍🎓 Student Dashboard

After successful Student authentication:

```text
===== STUDENT DASHBOARD =====
Student: Student
Role: Student

1. View Courses
2. View Attendance
3. View Assignments
4. View Results
```

---

# 👨‍🏫 Teacher Dashboard

After successful Teacher authentication:

```text
===== TEACHER DASHBOARD =====
Teacher: Teacher
Role: Teacher

1. Manage Courses
2. Manage Attendance
3. Manage Assignments
4. Manage Results
```

---

# 📚 Available Courses

The program creates five `Course` objects:

| Course Code | Course                         | Teacher   |
| ----------- | ------------------------------ | --------- |
| `CS-201`    | Object Oriented Programming    | Dr. Ahmed |
| `CS-202`    | Data Structures and Algorithms | Dr. Ali   |
| `CS-203`    | Database Systems               | Dr. Hamza |
| `CS-204`    | Digital Logic Design           | Dr. Usman |
| `CS-205`    | Computer Organization          | Dr. Bilal |

---

# 🔄 Runtime Polymorphism

A major OOP implementation in the project is runtime polymorphism.

A base-class pointer is declared:

```cpp
User* currentUser = nullptr;
```

For a Student:

```cpp
currentUser = new Student("Student");
```

For a Teacher:

```cpp
currentUser = new Teacher("Teacher");
```

The dashboard is then called through the base-class pointer:

```cpp
currentUser->showDashboard();
```

Because `showDashboard()` is virtual, the corresponding `Student` or `Teacher` implementation is executed at runtime.

---

# 🛠️ Technologies Used

<p>
  <img src="https://img.shields.io/badge/C%2B%2B-blue?style=flat-square&logo=cplusplus" alt="C++">
  <img src="https://img.shields.io/badge/OOP-Object--Oriented%20Programming-orange?style=flat-square" alt="OOP">
  <img src="https://img.shields.io/badge/STL-Vector-green?style=flat-square" alt="STL Vector">
  <img src="https://img.shields.io/badge/Standard%20Library-C%2B%2B-lightgrey?style=flat-square" alt="C++ Standard Library">
</p>

* **C++**
* **Object-Oriented Programming**
* **C++ Standard Library**
* **STL `vector`**
* **Console Input/Output**

---

# 📂 Project Structure

```text
Digital-Classroom-Management-System/
│
├── Digital_Classroom_Management_System.cpp
├── Digital_Classroom_Management_System_OOP_Project_Report.pdf
├── README.md
└── LICENSE
```

---

# 📄 Project Documentation

A complete project report is included in this repository.

The documentation covers:

* Project Overview
* Problem Statement
* Objectives
* System Design
* Classes and Objects
* Encapsulation
* Inheritance
* Polymorphism
* Abstraction
* Constructors
* Function Overriding
* Virtual Functions
* Access Specifiers
* Dynamic Memory
* Authentication
* Course Management
* Program Flow
* Testing
* Advantages

---

# 🎓 Academic Information

| Detail         | Information                         |
| -------------- | ----------------------------------- |
| **Project**    | Digital Classroom Management System |
| **Course**     | Object-Oriented Programming         |
| **Semester**   | 2nd Semester                        |
| **Program**    | BS Computer Science                 |
| **University** | University of Azad Jammu & Kashmir  |

---

# 👨‍💻 Author

### Nouman Majeed

**BS Computer Science**
**University of Azad Jammu & Kashmir**

---

# 📜 License

This project is developed for educational and academic purposes.

---

<p align="center">
  <strong>Digital Classroom Management System</strong><br>
  C++ • Object-Oriented Programming • 2nd Semester
</p>
```
